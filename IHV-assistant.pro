#-------------------------------------------------
#
# Project created by QtCreator 2018-09-25T13:45:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IHV-assistant
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    sensor/sensorconfig.cpp \
    sensor/slaveinfoconfig.cpp \
    sensor/regaddrinfoconfig.cpp \
    sensor/resolutioninfoconfig.cpp \
    sensor/exposurecontrolinfoconfig.cpp \
    sensor/streamsettingconfig.cpp \
    sensor/groupholdconfig.cpp \
    sensor/testpatterninfoconfig.cpp \
    eeprom/eepromconfig.cpp \
    eeprom/eepromslaveinfoconfig.cpp \
    eeprom/memorymap.cpp \
    eeprom/eepromaf.cpp \
    eeprom/eepromwb.cpp \
    eeprom/eepromlsc.cpp \
    eeprom/eeprompdafdcc.cpp \
    eeprom/eeprompdaf2d.cpp \
    actuator/actuatorconfig.cpp

HEADERS += \
        mainwindow.h \
    sensor/sensorconfig.h \
    sensor/slaveinfoconfig.h \
    sensor/regaddrinfoconfig.h \
    sensor/resolutioninfoconfig.h \
    sensor/exposurecontrolinfoconfig.h \
    sensor/streamsettingconfig.h \
    sensor/groupholdconfig.h \
    sensor/testpatterninfoconfig.h \
    eeprom/eepromconfig.h \
    eeprom/eepromslaveinfoconfig.h \
    eeprom/memorymap.h \
    eeprom/eepromaf.h \
    eeprom/eepromwb.h \
    eeprom/eepromlsc.h \
    eeprom/eeprompdafdcc.h \
    eeprom/eeprompdaf2d.h \
    actuator/actuatorconfig.h

FORMS += \
        mainwindow.ui \
    sensor/sensorconfig.ui \
    sensor/slaveinfoconfig.ui \
    sensor/regaddrinfoconfig.ui \
    sensor/resolutioninfoconfig.ui \
    sensor/exposurecontrolinfoconfig.ui \
    sensor/streamsettingconfig.ui \
    sensor/groupholdconfig.ui \
    sensor/testpatterninfoconfig.ui \
    eeprom/eepromconfig.ui \
    eeprom/eepromslaveinfoconfig.ui \
    eeprom/memorymap.ui \
    eeprom/eepromaf.ui \
    eeprom/eepromwb.ui \
    eeprom/eepromlsc.ui \
    eeprom/eeprompdafdcc.ui \
    eeprom/eeprompdaf2d.ui \
    actuator/actuatorconfig.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
