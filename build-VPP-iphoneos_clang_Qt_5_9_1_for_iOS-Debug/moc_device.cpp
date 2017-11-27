/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../VPP/device.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Device_t {
    QByteArrayData data[45];
    char stringdata0[700];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Device_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Device_t qt_meta_stringdata_Device = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Device"
QT_MOC_LITERAL(1, 7, 14), // "devicesUpdated"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "servicesUpdated"
QT_MOC_LITERAL(4, 39, 22), // "characteristicsUpdated"
QT_MOC_LITERAL(5, 62, 13), // "updateChanged"
QT_MOC_LITERAL(6, 76, 12), // "stateChanged"
QT_MOC_LITERAL(7, 89, 12), // "disconnected"
QT_MOC_LITERAL(8, 102, 20), // "randomAddressChanged"
QT_MOC_LITERAL(9, 123, 6), // "status"
QT_MOC_LITERAL(10, 130, 11), // "data_status"
QT_MOC_LITERAL(11, 142, 11), // "opened_door"
QT_MOC_LITERAL(12, 154, 20), // "startDeviceDiscovery"
QT_MOC_LITERAL(13, 175, 7), // "address"
QT_MOC_LITERAL(14, 183, 12), // "scanServices"
QT_MOC_LITERAL(15, 196, 15), // "connectToDevice"
QT_MOC_LITERAL(16, 212, 16), // "connectToService"
QT_MOC_LITERAL(17, 229, 4), // "uuid"
QT_MOC_LITERAL(18, 234, 20), // "disconnectFromDevice"
QT_MOC_LITERAL(19, 255, 9), // "addDevice"
QT_MOC_LITERAL(20, 265, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(21, 286, 18), // "deviceScanFinished"
QT_MOC_LITERAL(22, 305, 15), // "deviceScanError"
QT_MOC_LITERAL(23, 321, 37), // "QBluetoothDeviceDiscoveryAgen..."
QT_MOC_LITERAL(24, 359, 19), // "addLowEnergyService"
QT_MOC_LITERAL(25, 379, 14), // "QBluetoothUuid"
QT_MOC_LITERAL(26, 394, 15), // "deviceConnected"
QT_MOC_LITERAL(27, 410, 13), // "errorReceived"
QT_MOC_LITERAL(28, 424, 27), // "QLowEnergyController::Error"
QT_MOC_LITERAL(29, 452, 15), // "serviceScanDone"
QT_MOC_LITERAL(30, 468, 18), // "deviceDisconnected"
QT_MOC_LITERAL(31, 487, 24), // "serviceDetailsDiscovered"
QT_MOC_LITERAL(32, 512, 31), // "QLowEnergyService::ServiceState"
QT_MOC_LITERAL(33, 544, 8), // "newState"
QT_MOC_LITERAL(34, 553, 23), // "onCharacteristicChanged"
QT_MOC_LITERAL(35, 577, 24), // "QLowEnergyCharacteristic"
QT_MOC_LITERAL(36, 602, 1), // "c"
QT_MOC_LITERAL(37, 604, 5), // "value"
QT_MOC_LITERAL(38, 610, 11), // "devicesList"
QT_MOC_LITERAL(39, 622, 12), // "servicesList"
QT_MOC_LITERAL(40, 635, 18), // "characteristicList"
QT_MOC_LITERAL(41, 654, 6), // "update"
QT_MOC_LITERAL(42, 661, 16), // "useRandomAddress"
QT_MOC_LITERAL(43, 678, 5), // "state"
QT_MOC_LITERAL(44, 684, 15) // "controllerError"

    },
    "Device\0devicesUpdated\0\0servicesUpdated\0"
    "characteristicsUpdated\0updateChanged\0"
    "stateChanged\0disconnected\0"
    "randomAddressChanged\0status\0data_status\0"
    "opened_door\0startDeviceDiscovery\0"
    "address\0scanServices\0connectToDevice\0"
    "connectToService\0uuid\0disconnectFromDevice\0"
    "addDevice\0QBluetoothDeviceInfo\0"
    "deviceScanFinished\0deviceScanError\0"
    "QBluetoothDeviceDiscoveryAgent::Error\0"
    "addLowEnergyService\0QBluetoothUuid\0"
    "deviceConnected\0errorReceived\0"
    "QLowEnergyController::Error\0serviceScanDone\0"
    "deviceDisconnected\0serviceDetailsDiscovered\0"
    "QLowEnergyService::ServiceState\0"
    "newState\0onCharacteristicChanged\0"
    "QLowEnergyCharacteristic\0c\0value\0"
    "devicesList\0servicesList\0characteristicList\0"
    "update\0useRandomAddress\0state\0"
    "controllerError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Device[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       7,  182, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  134,    2, 0x06 /* Public */,
       3,    0,  135,    2, 0x06 /* Public */,
       4,    0,  136,    2, 0x06 /* Public */,
       5,    0,  137,    2, 0x06 /* Public */,
       6,    0,  138,    2, 0x06 /* Public */,
       7,    0,  139,    2, 0x06 /* Public */,
       8,    0,  140,    2, 0x06 /* Public */,
       9,    1,  141,    2, 0x06 /* Public */,
      11,    0,  144,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  145,    2, 0x0a /* Public */,
      14,    1,  148,    2, 0x0a /* Public */,
      15,    1,  151,    2, 0x0a /* Public */,
      16,    1,  154,    2, 0x0a /* Public */,
      18,    0,  157,    2, 0x0a /* Public */,
      19,    1,  158,    2, 0x08 /* Private */,
      21,    0,  161,    2, 0x08 /* Private */,
      22,    1,  162,    2, 0x08 /* Private */,
      24,    1,  165,    2, 0x08 /* Private */,
      26,    0,  168,    2, 0x08 /* Private */,
      27,    1,  169,    2, 0x08 /* Private */,
      29,    0,  172,    2, 0x08 /* Private */,
      30,    0,  173,    2, 0x08 /* Private */,
      31,    1,  174,    2, 0x08 /* Private */,
      34,    2,  177,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void, 0x80000000 | 25,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 35, QMetaType::QByteArray,   36,   37,

 // properties: name, type, flags
      38, QMetaType::QVariant, 0x00495001,
      39, QMetaType::QVariant, 0x00495001,
      40, QMetaType::QVariant, 0x00495001,
      41, QMetaType::QString, 0x00495103,
      42, QMetaType::Bool, 0x00495003,
      43, QMetaType::Bool, 0x00495001,
      44, QMetaType::Bool, 0x00095001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       6,
       4,
       0,

       0        // eod
};

void Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Device *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->devicesUpdated(); break;
        case 1: _t->servicesUpdated(); break;
        case 2: _t->characteristicsUpdated(); break;
        case 3: _t->updateChanged(); break;
        case 4: _t->stateChanged(); break;
        case 5: _t->disconnected(); break;
        case 6: _t->randomAddressChanged(); break;
        case 7: _t->status((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->opened_door(); break;
        case 9: _t->startDeviceDiscovery((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->scanServices((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->connectToDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->connectToService((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->disconnectFromDevice(); break;
        case 14: _t->addDevice((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 15: _t->deviceScanFinished(); break;
        case 16: _t->deviceScanError((*reinterpret_cast< QBluetoothDeviceDiscoveryAgent::Error(*)>(_a[1]))); break;
        case 17: _t->addLowEnergyService((*reinterpret_cast< const QBluetoothUuid(*)>(_a[1]))); break;
        case 18: _t->deviceConnected(); break;
        case 19: _t->errorReceived((*reinterpret_cast< QLowEnergyController::Error(*)>(_a[1]))); break;
        case 20: _t->serviceScanDone(); break;
        case 21: _t->deviceDisconnected(); break;
        case 22: _t->serviceDetailsDiscovered((*reinterpret_cast< QLowEnergyService::ServiceState(*)>(_a[1]))); break;
        case 23: _t->onCharacteristicChanged((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothUuid >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyController::Error >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyService::ServiceState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::devicesUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::servicesUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::characteristicsUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::updateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::stateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::disconnected)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::randomAddressChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Device::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::status)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::opened_door)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Device *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->getDevices(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->getServices(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->getCharacteristics(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getUpdate(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isRandomAddress(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->state(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasControllerError(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Device *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setUpdate(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setRandomAddress(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Device::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Device.data,
      qt_meta_data_Device,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Device::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Device.stringdata0))
        return static_cast<void*>(const_cast< Device*>(this));
    return QObject::qt_metacast(_clname);
}

int Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Device::devicesUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Device::servicesUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Device::characteristicsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Device::updateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Device::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Device::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Device::randomAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Device::status(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Device::opened_door()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
