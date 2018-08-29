/****************************************************************************
** Meta object code from reading C++ file 'change485.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../change485.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'change485.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Change485_t {
    QByteArrayData data[10];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Change485_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Change485_t qt_meta_stringdata_Change485 = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Change485"
QT_MOC_LITERAL(1, 10, 25), // "on_ConnectFuntion_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 28), // "on_DisConnectFuntion_clicked"
QT_MOC_LITERAL(4, 66, 7), // "revData"
QT_MOC_LITERAL(5, 74, 17), // "TcpReceiveFuntion"
QT_MOC_LITERAL(6, 92, 22), // "on_SendFuntion_clicked"
QT_MOC_LITERAL(7, 115, 18), // "on_SetBaud_clicked"
QT_MOC_LITERAL(8, 134, 19), // "on_GainBuad_clicked"
QT_MOC_LITERAL(9, 154, 24) // "on_CllearFuntion_clicked"

    },
    "Change485\0on_ConnectFuntion_clicked\0"
    "\0on_DisConnectFuntion_clicked\0revData\0"
    "TcpReceiveFuntion\0on_SendFuntion_clicked\0"
    "on_SetBaud_clicked\0on_GainBuad_clicked\0"
    "on_CllearFuntion_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Change485[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Change485::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Change485 *_t = static_cast<Change485 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ConnectFuntion_clicked(); break;
        case 1: _t->on_DisConnectFuntion_clicked(); break;
        case 2: _t->revData(); break;
        case 3: _t->TcpReceiveFuntion(); break;
        case 4: _t->on_SendFuntion_clicked(); break;
        case 5: _t->on_SetBaud_clicked(); break;
        case 6: _t->on_GainBuad_clicked(); break;
        case 7: _t->on_CllearFuntion_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Change485::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Change485.data,
      qt_meta_data_Change485,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Change485::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Change485::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Change485.stringdata0))
        return static_cast<void*>(const_cast< Change485*>(this));
    return QDialog::qt_metacast(_clname);
}

int Change485::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
