TEMPLATE = app
TARGET = name_of_the_app

QT = core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

HEADERS += \
    window.h \
    form_format/main_form.h \
    form_format/basic_form.h

SOURCES += \
    window.cpp \
    main.cpp \
    form_format/main_form.cpp \
    form_format/basic_form.cpp
