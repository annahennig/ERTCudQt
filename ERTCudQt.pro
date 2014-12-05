#-------------------------------------------------
#
# Project created by QtCreator 2014-11-13T17:13:36
#
#-------------------------------------------------

QT       += core gui serialport opengl
#include(QMapControl.pri)
include(QM.pri)

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ERTCudQt
TEMPLATE = app

CONFIG += c++11 \



SOURCES += main.cpp\
        mainwindow.cpp \
    bateriabar.cpp \
    loggingdevice.cpp \
    portmonitor.cpp \
    portsettingswindow.cpp \
    mapwindow.cpp

HEADERS  += mainwindow.h \
    bateriabar.h \
    loggingdevice.h \
    portmonitor.h \
    portsettingswindow.h \
#    src/QMapControl/qmapcontrol.h\
    mapwindow.h


FORMS    += mainwindow.ui \
    PortSettingsWindow.ui \
    mapwindow.ui

OTHER_FILES += \
    QM.pri \
    QMapControl.pri \
