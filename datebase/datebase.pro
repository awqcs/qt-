#-------------------------------------------------
#
# Project created by QtCreator 2016-06-24T12:26:11
#
#-------------------------------------------------

QT       += core gui sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = datebase
TEMPLATE = app


SOURCES += main.cpp\
    logindialog.cpp \
    manage.cpp \
    insert.cpp \
    del.cpp \
    updatebase.cpp \
    cx.cpp \
    storage.cpp

HEADERS  += \
    logindialog.h \
    manage.h \
    insert.h \
    del.h \
    updatebase.h \
    cx.h \
    storage.h

FORMS    += \
    logindialog.ui \
    manage.ui \
    insert.ui \
    del.ui \
    updatebase.ui \
    cx.ui \
    storage.ui

RESOURCES += \
    carimg.qrc
