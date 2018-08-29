#-------------------------------------------------
#
# Project created by QtCreator 2018-06-25T15:15:14
#
#-------------------------------------------------

QT       += core gui
QT       += core gui network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GateWayToolV1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    changeip.cpp \
    updataorvpn.cpp \
    udpsender.cpp \
    setparameter.cpp \
    change485.cpp \
    Zigbee/addeui.cpp \
    Zigbee/AlarmClock.cpp \
    Zigbee/dealdata.cpp \
    Zigbee/DebugGateWay.cpp \
    Zigbee/dialogdelete.cpp \
    Zigbee/SetType.cpp \
    Zigbee/RemoteUpgrade.cpp

HEADERS  += mainwindow.h \
    changeip.h \
    updataorvpn.h \
    udpsender.h \
    setparameter.h \
    change485.h \
    Zigbee/addeui.h \
    Zigbee/AlarmClock.h \
    Zigbee/dealdata.h \
    Zigbee/DebugGateWay.h \
    Zigbee/dialogdelete.h \
    Zigbee/SetType.h \
    Zigbee/RemoteUpgrade.h

FORMS    += mainwindow.ui \
    changeip.ui \
    updataorvpn.ui \
    udpsender.ui \
    setparameter.ui \
    change485.ui \
    Zigbee/addeui.ui \
    Zigbee/AlarmClock.ui \
    Zigbee/DebugGateWay.ui \
    Zigbee/dialogdelete.ui \
    Zigbee/SetType.ui \
    Zigbee/RemoteUpgrade.ui
