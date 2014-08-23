#-------------------------------------------------
#
# Project created by QtCreator 2014-08-23T15:47:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZZX
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    edgedetection.cpp

HEADERS  += mainwindow.h \
    edgedetection.h

FORMS    += mainwindow.ui

INCLUDEPATH += $$PWD/../../OpenCV/cxcore/include
INCLUDEPATH += $$PWD/../../OpenCV/cv/include
INCLUDEPATH += $$PWD/../../OpenCV/otherlibs/highgui
DEPENDPATH += $$PWD/../../OpenCV/cxcore/include
DEPENDPATH += $$PWD/../../OpenCV/cv/include
DEPENDPATH += $$PWD/../../OpenCV/otherlibs/highgui

win32:
LIBS += $$PWD/../../OpenCV/lib/cv.lib
LIBS += $$PWD/../../OpenCV/lib/cxcore.lib
LIBS += $$PWD/../../OpenCV/lib/highgui.lib
