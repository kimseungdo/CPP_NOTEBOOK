/****************************************************************************
** Meta object code from reading C++ file 'application.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../untitled2/application.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'application.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_application_t {
    QByteArrayData data[9];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_application_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_application_t qt_meta_stringdata_application = {
    {
QT_MOC_LITERAL(0, 0, 11), // "application"
QT_MOC_LITERAL(1, 12, 19), // "on_info_btn_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "on_spec_btn_clicked"
QT_MOC_LITERAL(4, 53, 12), // "move_to_home"
QT_MOC_LITERAL(5, 66, 10), // "main_title"
QT_MOC_LITERAL(6, 77, 10), // "text_label"
QT_MOC_LITERAL(7, 88, 7), // "onTimer"
QT_MOC_LITERAL(8, 96, 24) // "read_all_system_per_3tic"

    },
    "application\0on_info_btn_clicked\0\0"
    "on_spec_btn_clicked\0move_to_home\0"
    "main_title\0text_label\0onTimer\0"
    "read_all_system_per_3tic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_application[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void application::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        application *_t = static_cast<application *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_info_btn_clicked(); break;
        case 1: _t->on_spec_btn_clicked(); break;
        case 2: _t->move_to_home(); break;
        case 3: _t->main_title((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onTimer(); break;
        case 5: _t->read_all_system_per_3tic(); break;
        default: ;
        }
    }
}

const QMetaObject application::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_application.data,
      qt_meta_data_application,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *application::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *application::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_application.stringdata0))
        return static_cast<void*>(const_cast< application*>(this));
    return QWidget::qt_metacast(_clname);
}

int application::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
