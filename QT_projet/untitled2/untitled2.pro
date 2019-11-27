#-------------------------------------------------
#
# Project created by QtCreator 2019-11-24T17:54:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled2
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
        application.cpp \
    set_window_file/set_window.cpp \
    spec_window_file/spec_window.cpp \
    info_window_file/info_window.cpp \
    info_window_file/info_window_button_func.cpp \
    spec_window_file/spec_window_button_func.cpp \
    application_button_func.cpp \
    info_window_file/info_window_func.cpp

HEADERS  += application.h \
    set_window_file/set_window.h \
    spec_window_file/spec_window.h \
    info_window_file/info_window.h

FORMS    += application.ui \
    set_window_file/set_window.ui \
    spec_window_file/spec_window.ui \
    info_window_file/info_window.ui

DISTFILES +=
