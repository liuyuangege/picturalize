#-------------------------------------------------
#
# Project created by QtCreator 2021-12-29T14:24:58
#
#-------------------------------------------------

QT       += core gui
CONFIG+=C++11
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BallGame
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    leftwidget.cpp \
    rightwidget.cpp \
    ball.cpp \
    paintlabel.cpp

HEADERS  += mainwindow.h \
    leftwidget.h \
    rightwidget.h \
    ball.h \
    paintlabel.h
