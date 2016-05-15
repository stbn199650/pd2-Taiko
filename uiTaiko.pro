#-------------------------------------------------
#
# Project created by QtCreator 2016-05-14T22:13:13
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = uiTaiko
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    game.cpp

HEADERS  += mainwindow.h \
    game.h

FORMS    += mainwindow.ui \
    game.ui

RESOURCES += \
    resource.qrc
