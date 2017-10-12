/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "view2d.h"
#include "view3d.h"

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *shutterSpinBox;
    QCheckBox *recordRawOdometryCheckBox;
    QCheckBox *readFromFilesCheckBox;
    QCheckBox *saveToFilesCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *captureFromFirewireButton;
    QPushButton *stopCapturingButton;
    QTabWidget *tabWidget;
    QWidget *tabReconstruction;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_4;
    View2D *disparityView;
    View2D *leftImageView;
    View2D *rightImageView;
    QGridLayout *gridLayout;
    View3D *modelView;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *resizePushButton;
    QPushButton *addPosePushButton;
    QPushButton *deletePosePushButton;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *resizeSmallPushButton;
    QPushButton *playPosesPushButton;
    QPushButton *recordPosesPushButton;
    QHBoxLayout *horizontalLayout_6;
    QSlider *backgroundWallSlider;
    QCheckBox *backgroundWallCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *showCamerasCheckBox;
    QCheckBox *gridCheckBox;
    QCheckBox *whiteCheckBox;
    QWidget *tabStereo;
    QVBoxLayout *verticalLayout_3;
    View2D *elasImageView;
    View2D *elasDisparityView;
    QCheckBox *subsamplingCheckBox;
    QWidget *tabLeftImage;
    QHBoxLayout *horizontalLayout_8;
    View2D *leftFullImageView;
    QWidget *tabRightImage;
    QHBoxLayout *horizontalLayout_9;
    View2D *rightFullImageView;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *resetBusButton;
    QPushButton *stereoScanButton;
    QPushButton *exitButton;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QString::fromUtf8("MainDialog"));
        MainDialog->resize(1005, 798);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainDialog->sizePolicy().hasHeightForWidth());
        MainDialog->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainDialog->setPalette(palette);
        MainDialog->setMouseTracking(false);
        MainDialog->setSizeGripEnabled(false);
        MainDialog->setModal(false);
        gridLayout_2 = new QGridLayout(MainDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        shutterSpinBox = new QSpinBox(MainDialog);
        shutterSpinBox->setObjectName(QString::fromUtf8("shutterSpinBox"));
        shutterSpinBox->setMinimum(10);
        shutterSpinBox->setMaximum(1000);
        shutterSpinBox->setValue(100);

        horizontalLayout_2->addWidget(shutterSpinBox);

        recordRawOdometryCheckBox = new QCheckBox(MainDialog);
        recordRawOdometryCheckBox->setObjectName(QString::fromUtf8("recordRawOdometryCheckBox"));
        recordRawOdometryCheckBox->setChecked(false);

        horizontalLayout_2->addWidget(recordRawOdometryCheckBox);

        readFromFilesCheckBox = new QCheckBox(MainDialog);
        readFromFilesCheckBox->setObjectName(QString::fromUtf8("readFromFilesCheckBox"));
        readFromFilesCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(readFromFilesCheckBox);

        saveToFilesCheckBox = new QCheckBox(MainDialog);
        saveToFilesCheckBox->setObjectName(QString::fromUtf8("saveToFilesCheckBox"));

        horizontalLayout_2->addWidget(saveToFilesCheckBox);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        captureFromFirewireButton = new QPushButton(MainDialog);
        captureFromFirewireButton->setObjectName(QString::fromUtf8("captureFromFirewireButton"));
        captureFromFirewireButton->setCheckable(false);

        horizontalLayout->addWidget(captureFromFirewireButton);

        stopCapturingButton = new QPushButton(MainDialog);
        stopCapturingButton->setObjectName(QString::fromUtf8("stopCapturingButton"));
        stopCapturingButton->setEnabled(false);
        stopCapturingButton->setCheckable(false);
        stopCapturingButton->setDefault(false);
        stopCapturingButton->setFlat(false);

        horizontalLayout->addWidget(stopCapturingButton);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabWidget = new QTabWidget(MainDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabReconstruction = new QWidget();
        tabReconstruction->setObjectName(QString::fromUtf8("tabReconstruction"));
        horizontalLayout_10 = new QHBoxLayout(tabReconstruction);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        disparityView = new View2D(tabReconstruction);
        disparityView->setObjectName(QString::fromUtf8("disparityView"));

        verticalLayout_4->addWidget(disparityView);

        leftImageView = new View2D(tabReconstruction);
        leftImageView->setObjectName(QString::fromUtf8("leftImageView"));

        verticalLayout_4->addWidget(leftImageView);

        rightImageView = new View2D(tabReconstruction);
        rightImageView->setObjectName(QString::fromUtf8("rightImageView"));

        verticalLayout_4->addWidget(rightImageView);


        horizontalLayout_10->addLayout(verticalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        modelView = new View3D(tabReconstruction);
        modelView->setObjectName(QString::fromUtf8("modelView"));

        gridLayout->addWidget(modelView, 0, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        resizePushButton = new QPushButton(tabReconstruction);
        resizePushButton->setObjectName(QString::fromUtf8("resizePushButton"));

        horizontalLayout_5->addWidget(resizePushButton);

        addPosePushButton = new QPushButton(tabReconstruction);
        addPosePushButton->setObjectName(QString::fromUtf8("addPosePushButton"));

        horizontalLayout_5->addWidget(addPosePushButton);

        deletePosePushButton = new QPushButton(tabReconstruction);
        deletePosePushButton->setObjectName(QString::fromUtf8("deletePosePushButton"));

        horizontalLayout_5->addWidget(deletePosePushButton);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        resizeSmallPushButton = new QPushButton(tabReconstruction);
        resizeSmallPushButton->setObjectName(QString::fromUtf8("resizeSmallPushButton"));

        horizontalLayout_4->addWidget(resizeSmallPushButton);

        playPosesPushButton = new QPushButton(tabReconstruction);
        playPosesPushButton->setObjectName(QString::fromUtf8("playPosesPushButton"));

        horizontalLayout_4->addWidget(playPosesPushButton);

        recordPosesPushButton = new QPushButton(tabReconstruction);
        recordPosesPushButton->setObjectName(QString::fromUtf8("recordPosesPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(recordPosesPushButton->sizePolicy().hasHeightForWidth());
        recordPosesPushButton->setSizePolicy(sizePolicy2);
        recordPosesPushButton->setIconSize(QSize(0, 0));

        horizontalLayout_4->addWidget(recordPosesPushButton);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 0);
        backgroundWallSlider = new QSlider(tabReconstruction);
        backgroundWallSlider->setObjectName(QString::fromUtf8("backgroundWallSlider"));
        sizePolicy.setHeightForWidth(backgroundWallSlider->sizePolicy().hasHeightForWidth());
        backgroundWallSlider->setSizePolicy(sizePolicy);
        backgroundWallSlider->setMaximum(200);
        backgroundWallSlider->setSingleStep(1);
        backgroundWallSlider->setPageStep(10);
        backgroundWallSlider->setValue(100);
        backgroundWallSlider->setSliderPosition(100);
        backgroundWallSlider->setTracking(true);
        backgroundWallSlider->setOrientation(Qt::Horizontal);
        backgroundWallSlider->setInvertedAppearance(false);
        backgroundWallSlider->setInvertedControls(false);

        horizontalLayout_6->addWidget(backgroundWallSlider);

        backgroundWallCheckBox = new QCheckBox(tabReconstruction);
        backgroundWallCheckBox->setObjectName(QString::fromUtf8("backgroundWallCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(backgroundWallCheckBox->sizePolicy().hasHeightForWidth());
        backgroundWallCheckBox->setSizePolicy(sizePolicy3);
        backgroundWallCheckBox->setChecked(false);
        backgroundWallCheckBox->setTristate(false);

        horizontalLayout_6->addWidget(backgroundWallCheckBox);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        showCamerasCheckBox = new QCheckBox(tabReconstruction);
        showCamerasCheckBox->setObjectName(QString::fromUtf8("showCamerasCheckBox"));
        sizePolicy2.setHeightForWidth(showCamerasCheckBox->sizePolicy().hasHeightForWidth());
        showCamerasCheckBox->setSizePolicy(sizePolicy2);
        showCamerasCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(showCamerasCheckBox);

        gridCheckBox = new QCheckBox(tabReconstruction);
        gridCheckBox->setObjectName(QString::fromUtf8("gridCheckBox"));
        sizePolicy2.setHeightForWidth(gridCheckBox->sizePolicy().hasHeightForWidth());
        gridCheckBox->setSizePolicy(sizePolicy2);
        gridCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(gridCheckBox);

        whiteCheckBox = new QCheckBox(tabReconstruction);
        whiteCheckBox->setObjectName(QString::fromUtf8("whiteCheckBox"));
        sizePolicy2.setHeightForWidth(whiteCheckBox->sizePolicy().hasHeightForWidth());
        whiteCheckBox->setSizePolicy(sizePolicy2);
        whiteCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(whiteCheckBox);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);


        horizontalLayout_10->addLayout(gridLayout);

        tabWidget->addTab(tabReconstruction, QString());
        tabStereo = new QWidget();
        tabStereo->setObjectName(QString::fromUtf8("tabStereo"));
        verticalLayout_3 = new QVBoxLayout(tabStereo);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        elasImageView = new View2D(tabStereo);
        elasImageView->setObjectName(QString::fromUtf8("elasImageView"));

        verticalLayout_3->addWidget(elasImageView);

        elasDisparityView = new View2D(tabStereo);
        elasDisparityView->setObjectName(QString::fromUtf8("elasDisparityView"));

        verticalLayout_3->addWidget(elasDisparityView);

        subsamplingCheckBox = new QCheckBox(tabStereo);
        subsamplingCheckBox->setObjectName(QString::fromUtf8("subsamplingCheckBox"));

        verticalLayout_3->addWidget(subsamplingCheckBox);

        tabWidget->addTab(tabStereo, QString());
        tabLeftImage = new QWidget();
        tabLeftImage->setObjectName(QString::fromUtf8("tabLeftImage"));
        horizontalLayout_8 = new QHBoxLayout(tabLeftImage);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        leftFullImageView = new View2D(tabLeftImage);
        leftFullImageView->setObjectName(QString::fromUtf8("leftFullImageView"));

        horizontalLayout_8->addWidget(leftFullImageView);

        tabWidget->addTab(tabLeftImage, QString());
        tabRightImage = new QWidget();
        tabRightImage->setObjectName(QString::fromUtf8("tabRightImage"));
        horizontalLayout_9 = new QHBoxLayout(tabRightImage);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        rightFullImageView = new View2D(tabRightImage);
        rightFullImageView->setObjectName(QString::fromUtf8("rightFullImageView"));

        horizontalLayout_9->addWidget(rightFullImageView);

        tabWidget->addTab(tabRightImage, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 0);
        resetBusButton = new QPushButton(MainDialog);
        resetBusButton->setObjectName(QString::fromUtf8("resetBusButton"));

        horizontalLayout_7->addWidget(resetBusButton);

        stereoScanButton = new QPushButton(MainDialog);
        stereoScanButton->setObjectName(QString::fromUtf8("stereoScanButton"));

        horizontalLayout_7->addWidget(stereoScanButton);

        exitButton = new QPushButton(MainDialog);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setCheckable(false);

        horizontalLayout_7->addWidget(exitButton);


        gridLayout_2->addLayout(horizontalLayout_7, 2, 0, 1, 1);


        retranslateUi(MainDialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QApplication::translate("MainDialog", "MainDialog", 0, QApplication::UnicodeUTF8));
        recordRawOdometryCheckBox->setText(QApplication::translate("MainDialog", "Record VO", 0, QApplication::UnicodeUTF8));
        readFromFilesCheckBox->setText(QApplication::translate("MainDialog", "Read", 0, QApplication::UnicodeUTF8));
        saveToFilesCheckBox->setText(QApplication::translate("MainDialog", "Save", 0, QApplication::UnicodeUTF8));
        captureFromFirewireButton->setText(QApplication::translate("MainDialog", "Start Grabbing", 0, QApplication::UnicodeUTF8));
        stopCapturingButton->setText(QApplication::translate("MainDialog", "Stop Grabbing", 0, QApplication::UnicodeUTF8));
        resizePushButton->setText(QApplication::translate("MainDialog", "Resize", 0, QApplication::UnicodeUTF8));
        addPosePushButton->setText(QApplication::translate("MainDialog", "Add", 0, QApplication::UnicodeUTF8));
        deletePosePushButton->setText(QApplication::translate("MainDialog", "Delete", 0, QApplication::UnicodeUTF8));
        resizeSmallPushButton->setText(QApplication::translate("MainDialog", "320x480 Movie", 0, QApplication::UnicodeUTF8));
        playPosesPushButton->setText(QApplication::translate("MainDialog", "Play", 0, QApplication::UnicodeUTF8));
        recordPosesPushButton->setText(QApplication::translate("MainDialog", "Record", 0, QApplication::UnicodeUTF8));
        backgroundWallCheckBox->setText(QApplication::translate("MainDialog", "Wall", 0, QApplication::UnicodeUTF8));
        showCamerasCheckBox->setText(QApplication::translate("MainDialog", "Cams", 0, QApplication::UnicodeUTF8));
        gridCheckBox->setText(QApplication::translate("MainDialog", "Grid", 0, QApplication::UnicodeUTF8));
        whiteCheckBox->setText(QApplication::translate("MainDialog", "White", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabReconstruction), QApplication::translate("MainDialog", "3d reconstruction", 0, QApplication::UnicodeUTF8));
        subsamplingCheckBox->setText(QApplication::translate("MainDialog", "Subsampling", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabStereo), QApplication::translate("MainDialog", "Stereo matching", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabLeftImage), QApplication::translate("MainDialog", "Left Image", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabRightImage), QApplication::translate("MainDialog", "Right Image", 0, QApplication::UnicodeUTF8));
        resetBusButton->setText(QApplication::translate("MainDialog", "Reset Bus", 0, QApplication::UnicodeUTF8));
        stereoScanButton->setText(QApplication::translate("MainDialog", "Scan !", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("MainDialog", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
