#-------------------------------------------------
#
# Project created by QtCreator 2014-11-13T17:13:36
#
#-------------------------------------------------

QT       += core gui serialport opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ERTCudQt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    bateriabar.cpp \
    loggingdevice.cpp \
    portmonitor.cpp \
    portsettingswindow.cpp

HEADERS  += mainwindow.h \
    bateriabar.h \
    loggingdevice.h \
    portmonitor.h \
    portsettingswindow.h

FORMS    += mainwindow.ui \
    PortSettingsWindow.ui
