#include "visualodometrythread.h"

using namespace std;

VisualOdometryThread::VisualOdometryThread(CalibIO *calib,QObject *parent) :
    QThread(parent),
    calib(calib) {

  Matcher::parameters param;//={3,50,50,300,2,5,5,1,1,2};
  param.nms_n                  = 3;
  param.nms_tau                = 50;
  param.match_binsize          = 50;
  param.match_radius           = 300;
  param.match_disp_tolerance   = 2;
  param.outlier_disp_tolerance = 5;
  param.outlier_flow_tolerance = 5;
  param.multi_stage            = 1;
  param.half_resolution        = 1;
  param.refinement             = 2;

 // matcher = new Matcher(3,50,50,300,2,5,5,1,1,2);
  matcher = new Matcher(param);

  VisualOdometryStereo::parameters param_stereo;
  vo      = new VisualOdometryStereo(param_stereo);
  simg              = 0;
  time_prev.tv_sec  = 0;
  time_prev.tv_usec = 0;
  time_curr.tv_sec  = 0;
  time_curr.tv_usec = 0;
  record_raw_odometry = false;
  H_total = Matrix(4,4);
  H_total.eye();
}

VisualOdometryThread::~VisualOdometryThread() {
  delete matcher;
  delete vo;
  if (simg!=0) {
    delete simg;
    simg = 0;
  }
}

void VisualOdometryThread::pushBack(StereoImage::simage &s,bool record_raw_odometry_) {
  if (simg!=0) {
    delete simg;
    simg = 0;
  }
  simg = new StereoImage::simage(s);
  record_raw_odometry = record_raw_odometry_;
}

void VisualOdometryThread::run() {
// while(1);
  //  cout<<"aaaa"<<endl;
  if (simg!=0 && simg->width>0 && simg->height>0) {

    // get time
    time_prev = time_curr;
    time_curr = simg->time;

    // read calibration
    float f  = 1;
    float cu = 0;
    float cv = 0;
    float b  = 1;
    if (calib->calibrated()) {
      f  =  cvmGet(calib->P1_roi,0,0);
      cu =  cvmGet(calib->P1_roi,0,2);
      cv =  cvmGet(calib->P1_roi,1,2);
//      b  = -cvmGet(calib->P2_roi,0,3)/cvmGet(calib->P2_roi,0,0);
      b=0.15;
    }

    Timer t;
    t.start("push");
    int32_t dims_vo[3] = {simg->width,simg->height,simg->step};
  //  matcher->pushBack(simg->I1,simg->I2,simg->width,simg->height,simg->step,false);
    matcher->pushBack(simg->I1,simg->I2,dims_vo,false);
    t.start("match");
    matcher->matchFeatures(2);
    matcher->bucketFeatures(5,50,50);

    // grab matches
    matches = matcher->getMatches();

//    cout<<"f:"<<f<<",cu:"<<cu<<",cv:"<<cv<<",b:"<<b<<endl;
    t.start("vo");
//cout<<"matches size:"<<matches.size()<<endl;
    // update: H_total = H_total * H^-1
    if (matches.size()>0) {

      // visual odometry
      vo->setCalibration(f,cu,cv,b);
//      cout<<"aaaaaaaaaaaaa"<<endl;
      // vo->update(matches,timeDiff(time_curr,time_prev),true,record_raw_odometry);
      vo->updateMotion(matches);
      Matrix H_inv = Matrix::eye(4);
      // Matrix H = vo->getTransformation();
      Matrix H = vo->getMotion();
      cout<<"motion:"<<endl;
      cout<<H<<endl;
//      cout<<"bbbbbbbbbbbbb"<<endl;

      // get inliers
//        cout<<vo->tr[0]<<","<<vo->tr[1]<<","<<vo->tr[2]<<","<<vo->tr[3]<<","<<vo->tr[4]<<","<<vo->tr[5]<<endl;
//        cout<<matches.size()<<endl;
//      vector<int32_t> inliers_ = vo->getInlier(matches,vo->tr);
        vector<int32_t> inliers_ =vo->getInlierIndices();
      // vector<int32_t> inliers_ = vo->getInliers();
      inliers.clear();
      for (int32_t i=0; i<(int32_t)matches.size(); i++)
        inliers.push_back(false);
      for (std::vector<int32_t>::iterator it=inliers_.begin(); it!=inliers_.end(); it++)
        inliers[*it] = true;

      // compute gain
      gain = matcher->getGain(inliers_);
   // cout<<"cccccccccccc"<<endl;
      if (H_inv.solve(H)) {
        H_total = H_total*H_inv;
        picked = false;
        emit newHomographyArrived();
        while (!picked) usleep(1000);
      }
    }
  }
}
