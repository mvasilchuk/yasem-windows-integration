#-------------------------------------------------
#
# Project created by QtCreator 2014-03-11T12:58:06
#
#-------------------------------------------------

VERSION = 0.1.0
TARGET = yasem-windows-integration
TEMPLATE = lib

include($${top_srcdir}/common.pri)

QT       += core gui widgets

DEFINES += WINDOWSINTEGRATION_LIBRARY

SOURCES += \
    windowsintegrationobject.cpp \
    windowsintegrationplugin.cpp

HEADERS +=\
    windowsintegration_global.h \
    windowsintegrationplugin.h \
    windowsintegrationobject.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    metadata.json

RESOURCES +=
