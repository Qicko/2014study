TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    MusicalBand.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    MusicalBand.h \
    MainFunctions.h

