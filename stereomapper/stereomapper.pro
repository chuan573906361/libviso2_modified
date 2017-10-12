#-------------------------------------------------
#
# Project created by QtCreator 2010-11-24T14:01:01
#
#-------------------------------------------------

QT += core gui opengl

TARGET = stereomapper
TEMPLATE = app

SOURCES += main.cpp\
        maindialog.cpp \
    selectcamerasdialog.cpp \
    framecapturethread.cpp \
    stereoimage.cpp \
    view2d.cpp \
    calibio.cpp \
    view3d.cpp \
    visualodometrythread.cpp \
    stereothread.cpp \
    ../libelas/src/elas.cpp \
    ../libelas/src/descriptor.cpp \
    savestereoimagethread.cpp \
    readfromfilesthread.cpp \
    visualizethread.cpp \
    planeestimation.cpp \
    ../src/visualodometry.cpp \
    ../src/triangle.cpp \
    ../src/matrix.cpp \
    ../src/filter.cpp \
    ../src/matcher.cpp \
    ../src/viso.cpp

HEADERS  += maindialog.h \
    selectcamerasdialog.h \
    framecapturethread.h \
    stereoimage.h \
    view2d.h \
    calibio.h \
    view3d.h \
    visualodometrythread.h \
    stereothread.h \
    ../libelas/src/elas.h \
    ../libelas/src/descriptor.h \
    savestereoimagethread.h \
    readfromfilesthread.h \
    visualizethread.h\
    planeestimation.h \
    ../src/visualodometry.h \
    ../src/triangle.h \
    ../src/timer.h \
    ../src/matrix.h \
    ../src/matcher.h \
    ../src/filter.h \
    ../src/viso.h

FORMS    += maindialog.ui \
    selectcamerasdialog.ui

LIBS += -ldc1394 -lQtOpenGL -lQtGui -lQtCore -lGL -lpthread /usr/local/lib/libopencv_highgui.so /usr/local/lib/libopencv_core.so /usr/local/lib/libopencv_imgproc.so
LIBS += -lglut -lGLU
#LIBS += -lopencv_core300 -lopencv_highgui300 -lopencv_imgcodecs300
QMAKE_CXXFLAGS += -O3 -pipe -fomit-frame-pointer -msse3
