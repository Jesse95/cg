#-------------------------------------------------
#
# Project created by QtCreator 2018-04-16T00:02:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = exercise1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    oglwidget.cpp \
    vertex.cpp \
    quad.cpp

HEADERS  += mainwindow.h \
    oglwidget.h \
    vertex.h \
    quad.h

FORMS    += mainwindow.ui

LIBS += -lOpengl32
