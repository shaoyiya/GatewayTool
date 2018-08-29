/****************************************************************************
** Meta object code from reading C++ file 'DebugGateWay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Zigbee/DebugGateWay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebugGateWay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DebugGateWay_t {
    QByteArrayData data[58];
    char stringdata0[1238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugGateWay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugGateWay_t qt_meta_stringdata_DebugGateWay = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DebugGateWay"
QT_MOC_LITERAL(1, 13, 16), // "SendPackDealData"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "on_connect_clicked"
QT_MOC_LITERAL(4, 50, 21), // "on_disconnect_clicked"
QT_MOC_LITERAL(5, 72, 12), // "displayError"
QT_MOC_LITERAL(6, 85, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(7, 114, 7), // "revData"
QT_MOC_LITERAL(8, 122, 10), // "restrtimer"
QT_MOC_LITERAL(9, 133, 24), // "on_point_funtion_clicked"
QT_MOC_LITERAL(10, 158, 29), // "on_database_1_funtion_clicked"
QT_MOC_LITERAL(11, 188, 26), // "on_Add_Eui_funtion_clicked"
QT_MOC_LITERAL(12, 215, 14), // "StateUpdateEui"
QT_MOC_LITERAL(13, 230, 3), // "str"
QT_MOC_LITERAL(14, 234, 21), // "on_btn_delete_clicked"
QT_MOC_LITERAL(15, 256, 14), // "StateDeleteEui"
QT_MOC_LITERAL(16, 271, 9), // "DeleteEui"
QT_MOC_LITERAL(17, 281, 24), // "on_query_all_EUI_clicked"
QT_MOC_LITERAL(18, 306, 27), // "on_query_all_online_clicked"
QT_MOC_LITERAL(19, 334, 23), // "on_single_query_clicked"
QT_MOC_LITERAL(20, 358, 26), // "on_query_equipment_clicked"
QT_MOC_LITERAL(21, 385, 28), // "on_equipment_restart_clicked"
QT_MOC_LITERAL(22, 414, 31), // "on_equipment_initialize_clicked"
QT_MOC_LITERAL(23, 446, 21), // "on_start_echo_clicked"
QT_MOC_LITERAL(24, 468, 19), // "on_off_echo_clicked"
QT_MOC_LITERAL(25, 488, 23), // "on_gateway_mode_clicked"
QT_MOC_LITERAL(26, 512, 19), // "on_mcu_mode_clicked"
QT_MOC_LITERAL(27, 532, 21), // "on_clear_data_clicked"
QT_MOC_LITERAL(28, 554, 20), // "on_mode_quit_clicked"
QT_MOC_LITERAL(29, 575, 23), // "on_mode_restart_clicked"
QT_MOC_LITERAL(30, 599, 26), // "on_mode_initialize_clicked"
QT_MOC_LITERAL(31, 626, 32), // "on_temperature_IntervalI_clicked"
QT_MOC_LITERAL(32, 659, 24), // "on_RemoteUpgrate_clicked"
QT_MOC_LITERAL(33, 684, 13), // "XmodemFuntion"
QT_MOC_LITERAL(34, 698, 28), // "on_SendDataToTermial_clicked"
QT_MOC_LITERAL(35, 727, 20), // "on_Baud_Rate_clicked"
QT_MOC_LITERAL(36, 748, 21), // "on_AlarmClock_clicked"
QT_MOC_LITERAL(37, 770, 25), // "AlarmClockTransmitFuntion"
QT_MOC_LITERAL(38, 796, 29), // "GainAlarmClockTransmitFuntion"
QT_MOC_LITERAL(39, 826, 18), // "on_QueryDb_clicked"
QT_MOC_LITERAL(40, 845, 18), // "on_SetType_clicked"
QT_MOC_LITERAL(41, 864, 15), // "TypeSendFuntion"
QT_MOC_LITERAL(42, 880, 18), // "SetTypeSendFuntion"
QT_MOC_LITERAL(43, 899, 27), // "on_GainTimeFFuntion_clicked"
QT_MOC_LITERAL(44, 927, 22), // "on_GainFuntion_clicked"
QT_MOC_LITERAL(45, 950, 16), // "PointimerFuntion"
QT_MOC_LITERAL(46, 967, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(47, 989, 23), // "on_AllowNetwork_clicked"
QT_MOC_LITERAL(48, 1013, 22), // "on_StopNetwork_clicked"
QT_MOC_LITERAL(49, 1036, 22), // "on_CollectTime_clicked"
QT_MOC_LITERAL(50, 1059, 19), // "on_SetRoute_clicked"
QT_MOC_LITERAL(51, 1079, 23), // "on_SetSleepTime_clicked"
QT_MOC_LITERAL(52, 1103, 19), // "on_Setbotel_clicked"
QT_MOC_LITERAL(53, 1123, 23), // "on_QueryNetwork_clicked"
QT_MOC_LITERAL(54, 1147, 10), // "DF_FUntion"
QT_MOC_LITERAL(55, 1158, 28), // "on_StartmodulFuntion_clicked"
QT_MOC_LITERAL(56, 1187, 24), // "on_StopmoFuntion_clicked"
QT_MOC_LITERAL(57, 1212, 25) // "on_VersionFuntion_clicked"

    },
    "DebugGateWay\0SendPackDealData\0\0"
    "on_connect_clicked\0on_disconnect_clicked\0"
    "displayError\0QAbstractSocket::SocketError\0"
    "revData\0restrtimer\0on_point_funtion_clicked\0"
    "on_database_1_funtion_clicked\0"
    "on_Add_Eui_funtion_clicked\0StateUpdateEui\0"
    "str\0on_btn_delete_clicked\0StateDeleteEui\0"
    "DeleteEui\0on_query_all_EUI_clicked\0"
    "on_query_all_online_clicked\0"
    "on_single_query_clicked\0"
    "on_query_equipment_clicked\0"
    "on_equipment_restart_clicked\0"
    "on_equipment_initialize_clicked\0"
    "on_start_echo_clicked\0on_off_echo_clicked\0"
    "on_gateway_mode_clicked\0on_mcu_mode_clicked\0"
    "on_clear_data_clicked\0on_mode_quit_clicked\0"
    "on_mode_restart_clicked\0"
    "on_mode_initialize_clicked\0"
    "on_temperature_IntervalI_clicked\0"
    "on_RemoteUpgrate_clicked\0XmodemFuntion\0"
    "on_SendDataToTermial_clicked\0"
    "on_Baud_Rate_clicked\0on_AlarmClock_clicked\0"
    "AlarmClockTransmitFuntion\0"
    "GainAlarmClockTransmitFuntion\0"
    "on_QueryDb_clicked\0on_SetType_clicked\0"
    "TypeSendFuntion\0SetTypeSendFuntion\0"
    "on_GainTimeFFuntion_clicked\0"
    "on_GainFuntion_clicked\0PointimerFuntion\0"
    "on_pushButton_clicked\0on_AllowNetwork_clicked\0"
    "on_StopNetwork_clicked\0on_CollectTime_clicked\0"
    "on_SetRoute_clicked\0on_SetSleepTime_clicked\0"
    "on_Setbotel_clicked\0on_QueryNetwork_clicked\0"
    "DF_FUntion\0on_StartmodulFuntion_clicked\0"
    "on_StopmoFuntion_clicked\0"
    "on_VersionFuntion_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugGateWay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  284,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  287,    2, 0x08 /* Private */,
       4,    0,  288,    2, 0x08 /* Private */,
       5,    1,  289,    2, 0x08 /* Private */,
       7,    0,  292,    2, 0x08 /* Private */,
       8,    0,  293,    2, 0x08 /* Private */,
       9,    0,  294,    2, 0x08 /* Private */,
      10,    0,  295,    2, 0x08 /* Private */,
      11,    0,  296,    2, 0x08 /* Private */,
      12,    1,  297,    2, 0x08 /* Private */,
      14,    0,  300,    2, 0x08 /* Private */,
      15,    0,  301,    2, 0x08 /* Private */,
      16,    1,  302,    2, 0x08 /* Private */,
      17,    0,  305,    2, 0x08 /* Private */,
      18,    0,  306,    2, 0x08 /* Private */,
      19,    0,  307,    2, 0x08 /* Private */,
      20,    0,  308,    2, 0x08 /* Private */,
      21,    0,  309,    2, 0x08 /* Private */,
      22,    0,  310,    2, 0x08 /* Private */,
      23,    0,  311,    2, 0x08 /* Private */,
      24,    0,  312,    2, 0x08 /* Private */,
      25,    0,  313,    2, 0x08 /* Private */,
      26,    0,  314,    2, 0x08 /* Private */,
      27,    0,  315,    2, 0x08 /* Private */,
      28,    0,  316,    2, 0x08 /* Private */,
      29,    0,  317,    2, 0x08 /* Private */,
      30,    0,  318,    2, 0x08 /* Private */,
      31,    0,  319,    2, 0x08 /* Private */,
      32,    0,  320,    2, 0x08 /* Private */,
      33,    0,  321,    2, 0x08 /* Private */,
      34,    0,  322,    2, 0x08 /* Private */,
      35,    0,  323,    2, 0x08 /* Private */,
      36,    0,  324,    2, 0x08 /* Private */,
      37,    1,  325,    2, 0x08 /* Private */,
      38,    0,  328,    2, 0x08 /* Private */,
      39,    0,  329,    2, 0x08 /* Private */,
      40,    0,  330,    2, 0x08 /* Private */,
      41,    1,  331,    2, 0x08 /* Private */,
      42,    0,  334,    2, 0x08 /* Private */,
      43,    0,  335,    2, 0x08 /* Private */,
      44,    0,  336,    2, 0x08 /* Private */,
      45,    0,  337,    2, 0x08 /* Private */,
      46,    0,  338,    2, 0x08 /* Private */,
      47,    0,  339,    2, 0x08 /* Private */,
      48,    0,  340,    2, 0x08 /* Private */,
      49,    0,  341,    2, 0x08 /* Private */,
      50,    0,  342,    2, 0x08 /* Private */,
      51,    0,  343,    2, 0x08 /* Private */,
      52,    0,  344,    2, 0x08 /* Private */,
      53,    0,  345,    2, 0x08 /* Private */,
      54,    0,  346,    2, 0x08 /* Private */,
      55,    0,  347,    2, 0x08 /* Private */,
      56,    0,  348,    2, 0x08 /* Private */,
      57,    0,  349,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void DebugGateWay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DebugGateWay *_t = static_cast<DebugGateWay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendPackDealData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_connect_clicked(); break;
        case 2: _t->on_disconnect_clicked(); break;
        case 3: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->revData(); break;
        case 5: _t->restrtimer(); break;
        case 6: _t->on_point_funtion_clicked(); break;
        case 7: _t->on_database_1_funtion_clicked(); break;
        case 8: _t->on_Add_Eui_funtion_clicked(); break;
        case 9: _t->StateUpdateEui((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->on_btn_delete_clicked(); break;
        case 11: _t->StateDeleteEui(); break;
        case 12: _t->DeleteEui((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->on_query_all_EUI_clicked(); break;
        case 14: _t->on_query_all_online_clicked(); break;
        case 15: _t->on_single_query_clicked(); break;
        case 16: _t->on_query_equipment_clicked(); break;
        case 17: _t->on_equipment_restart_clicked(); break;
        case 18: _t->on_equipment_initialize_clicked(); break;
        case 19: _t->on_start_echo_clicked(); break;
        case 20: _t->on_off_echo_clicked(); break;
        case 21: _t->on_gateway_mode_clicked(); break;
        case 22: _t->on_mcu_mode_clicked(); break;
        case 23: _t->on_clear_data_clicked(); break;
        case 24: _t->on_mode_quit_clicked(); break;
        case 25: _t->on_mode_restart_clicked(); break;
        case 26: _t->on_mode_initialize_clicked(); break;
        case 27: _t->on_temperature_IntervalI_clicked(); break;
        case 28: _t->on_RemoteUpgrate_clicked(); break;
        case 29: _t->XmodemFuntion(); break;
        case 30: _t->on_SendDataToTermial_clicked(); break;
        case 31: _t->on_Baud_Rate_clicked(); break;
        case 32: _t->on_AlarmClock_clicked(); break;
        case 33: _t->AlarmClockTransmitFuntion((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->GainAlarmClockTransmitFuntion(); break;
        case 35: _t->on_QueryDb_clicked(); break;
        case 36: _t->on_SetType_clicked(); break;
        case 37: _t->TypeSendFuntion((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 38: _t->SetTypeSendFuntion(); break;
        case 39: _t->on_GainTimeFFuntion_clicked(); break;
        case 40: _t->on_GainFuntion_clicked(); break;
        case 41: _t->PointimerFuntion(); break;
        case 42: _t->on_pushButton_clicked(); break;
        case 43: _t->on_AllowNetwork_clicked(); break;
        case 44: _t->on_StopNetwork_clicked(); break;
        case 45: _t->on_CollectTime_clicked(); break;
        case 46: _t->on_SetRoute_clicked(); break;
        case 47: _t->on_SetSleepTime_clicked(); break;
        case 48: _t->on_Setbotel_clicked(); break;
        case 49: _t->on_QueryNetwork_clicked(); break;
        case 50: _t->DF_FUntion(); break;
        case 51: _t->on_StartmodulFuntion_clicked(); break;
        case 52: _t->on_StopmoFuntion_clicked(); break;
        case 53: _t->on_VersionFuntion_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DebugGateWay::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DebugGateWay::SendPackDealData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DebugGateWay::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DebugGateWay.data,
      qt_meta_data_DebugGateWay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DebugGateWay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugGateWay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DebugGateWay.stringdata0))
        return static_cast<void*>(const_cast< DebugGateWay*>(this));
    return QDialog::qt_metacast(_clname);
}

int DebugGateWay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void DebugGateWay::SendPackDealData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
