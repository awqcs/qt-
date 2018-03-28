/****************************************************************************
** Meta object code from reading C++ file 'del.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "I:/datebase/del.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'del.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_del_t {
    QByteArrayData data[7];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_del_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_del_t qt_meta_stringdata_del = {
    {
QT_MOC_LITERAL(0, 0, 3), // "del"
QT_MOC_LITERAL(1, 4, 8), // "backSlot"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 4), // "sell"
QT_MOC_LITERAL(4, 19, 3), // "car"
QT_MOC_LITERAL(5, 23, 4), // "dele"
QT_MOC_LITERAL(6, 28, 4) // "need"

    },
    "del\0backSlot\0\0sell\0car\0dele\0need"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_del[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void del::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        del *_t = static_cast<del *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backSlot(); break;
        case 1: _t->sell(); break;
        case 2: _t->car(); break;
        case 3: _t->dele(); break;
        case 4: _t->need(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject del::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_del.data,
      qt_meta_data_del,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *del::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *del::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_del.stringdata0))
        return static_cast<void*>(const_cast< del*>(this));
    return QDialog::qt_metacast(_clname);
}

int del::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
