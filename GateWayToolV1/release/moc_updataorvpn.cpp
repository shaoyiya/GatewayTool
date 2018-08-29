/****************************************************************************
** Meta object code from reading C++ file 'updataorvpn.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../updataorvpn.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updataorvpn.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UPdataOrVPN_t {
    QByteArrayData data[11];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UPdataOrVPN_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UPdataOrVPN_t qt_meta_stringdata_UPdataOrVPN = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UPdataOrVPN"
QT_MOC_LITERAL(1, 12, 21), // "on_openButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(4, 57, 13), // "startTransfer"
QT_MOC_LITERAL(5, 71, 20), // "updateClientProgress"
QT_MOC_LITERAL(6, 92, 12), // "displayError"
QT_MOC_LITERAL(7, 105, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(8, 134, 22), // "on_OpenVpnFile_clicked"
QT_MOC_LITERAL(9, 157, 21), // "TcpReceiveFuntionRoot"
QT_MOC_LITERAL(10, 179, 19) // "on_ClearVpn_clicked"

    },
    "UPdataOrVPN\0on_openButton_clicked\0\0"
    "on_sendButton_clicked\0startTransfer\0"
    "updateClientProgress\0displayError\0"
    "QAbstractSocket::SocketError\0"
    "on_OpenVpnFile_clicked\0TcpReceiveFuntionRoot\0"
    "on_ClearVpn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UPdataOrVPN[] = {

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
       5,    1,   57,    2, 0x08 /* Private */,
       6,    1,   60,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UPdataOrVPN::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UPdataOrVPN *_t = static_cast<UPdataOrVPN *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openButton_clicked(); break;
        case 1: _t->on_sendButton_clicked(); break;
        case 2: _t->startTransfer(); break;
        case 3: _t->updateClientProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->on_OpenVpnFile_clicked(); break;
        case 6: _t->TcpReceiveFuntionRoot(); break;
        case 7: _t->on_ClearVpn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject UPdataOrVPN::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UPdataOrVPN.data,
      qt_meta_data_UPdataOrVPN,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UPdataOrVPN::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UPdataOrVPN::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UPdataOrVPN.stringdata0))
        return static_cast<void*>(const_cast< UPdataOrVPN*>(this));
    return QDialog::qt_metacast(_clname);
}

int UPdataOrVPN::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
