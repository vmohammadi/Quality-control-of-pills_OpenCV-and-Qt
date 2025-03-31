QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
TARGET = opencvtest
TEMPLATE = app

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


INCLUDEPATH += C:\opencv_411\opencv\build\include

LIBS += C:\opencv_411\opencv-build\bin\libopencv_core4110.dll
LIBS += C:\opencv_411\opencv-build\bin\libopencv_highgui4110.dll
LIBS += C:\opencv_411\opencv-build\bin\libopencv_imgcodecs4110.dll
LIBS += C:\opencv_411\opencv-build\bin\libopencv_imgproc4110.dll
LIBS += C:\opencv_411\opencv-build\bin\libopencv_features2d4110.dll
LIBS += C:\opencv_411\opencv-build\bin\libopencv_calib3d4110.dll
