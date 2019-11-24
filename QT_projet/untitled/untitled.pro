TEMPLATE = app
TARGET = name_of_the_app

QT = core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

HEADERS += \
    form_format/main_form.h \
    form_format/basic_form.h \
    info_window.h \
    main_window.h

SOURCES += \
    main.cpp \
    form_format/main_form.cpp \
    form_format/basic_form.cpp \
    info_window.cpp \
    main_window.cpp

FORMS +=
