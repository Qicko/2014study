#-------------------------------------------------
#
# Project created by QtCreator 2014-11-03T15:21:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Kirillov
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    TempDetector.cpp \
    HumidityDetector.cpp \
    about.cpp

HEADERS  += mainwindow.h \
    TempDetector.h \
    HumidityDetector.h \
    about.h

FORMS    += mainwindow.ui \
    About.ui \
    about.ui
