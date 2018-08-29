/****************************************************************************
** Meta object code from reading C++ file 'udpsender.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../udpsender.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udpsender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UdpSender_t {
    QByteArrayData data[8];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UdpSender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UdpSender_t qt_meta_stringdata_UdpSender = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UdpSender"
QT_MOC_LITERAL(1, 10, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "messageReceived"
QT_MOC_LITERAL(4, 50, 12), // "SetUpFuntion"
QT_MOC_LITERAL(5, 63, 11), // "StateUpdate"
QT_MOC_LITERAL(6, 75, 25), // "on_UpgradeGateway_clicked"
QT_MOC_LITERAL(7, 101, 23) // "on_DebugGateway_clicked"

    },
    "UdpSender\0on_startButton_clicked\0\0"
    "messageReceived\0SetUpFuntion\0StateUpdate\0"
    "on_UpgradeGateway_clicked\0"
    "on_DebugGateway_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UdpSender[] = {

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
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UdpSender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UdpSender *_t = static_cast<UdpSender *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_startButton_clicked(); break;
        case 1: _t->messageReceived(); break;
        case 2: _t->SetUpFuntion(); break;
        case 3: _t->StateUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_UpgradeGateway_clicked(); break;
        case 5: _t->on_DebugGateway_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject UdpSender::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UdpSender.data,
      qt_meta_data_UdpSender,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UdpSender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UdpSender::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UdpSender.stringdata0))
        return static_cast<void*>(const_cast< UdpSender*>(this));
    return QDialog::qt_metacast(_clname);
}

int UdpSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
