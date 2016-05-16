#-------------------------------------------------
#
# Project created by QtCreator 2016-05-08T15:09:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Final
TEMPLATE = app

INCLUDEPATH +=C:\\OpenCV\\opencv\\build\\include

LIBS +=-LC:\\OpenCV\\mybuild\\lib\\Debug \
    -lopencv_calib3d2412d \
    -lopencv_contrib2412d \
    -lopencv_core2412d \
    -lopencv_features2d2412d \
    -lopencv_flann2412d \
    -lopencv_gpu2412d \
    -lopencv_haartraining_engined \
    -lopencv_highgui2412d \
    -lopencv_imgproc2412d \
    -lopencv_legacy2412d \
    -lopencv_ml2412d \
    -lopencv_nonfree2412d \
    -lopencv_objdetect2412d \
    -lopencv_ocl2412d \
    -lopencv_photo2412d \
    -lopencv_stitching2412d \
    -lopencv_superres2412d \
    -lopencv_ts2412d \
    -lopencv_video2412d \
    -lopencv_videostab2412d

SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    camera.cpp

HEADERS  += mainwindow.h \
    login.h \
    asmopencv.h \
    camera.h

FORMS    += mainwindow.ui \
    login.ui \
    camera.ui
