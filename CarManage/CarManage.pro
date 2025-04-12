#-------------------------------------------------
#
# Project created by QtCreator 2025-04-06T10:17:15
#
#-------------------------------------------------

QT       += core gui sql xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CarManage
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    docxml.cpp \
    histogram.cpp \
    pie.cpp

HEADERS  += mainwindow.h \
    docxml.h \
    histogram.h \
    pie.h


FORMS    += mainwindow.ui
CONFIG +=C++11
