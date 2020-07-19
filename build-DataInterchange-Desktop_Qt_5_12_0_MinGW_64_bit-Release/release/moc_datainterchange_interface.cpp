/****************************************************************************
** Meta object code from reading C++ file 'datainterchange_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DataInterchange/datainterchange_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datainterchange_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataInterchange_Interface_t {
    QByteArrayData data[21];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataInterchange_Interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataInterchange_Interface_t qt_meta_stringdata_DataInterchange_Interface = {
    {
QT_MOC_LITERAL(0, 0, 25), // "DataInterchange_Interface"
QT_MOC_LITERAL(1, 26, 13), // "messageSignal"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "type"
QT_MOC_LITERAL(4, 46, 3), // "msg"
QT_MOC_LITERAL(5, 50, 15), // "linkStateSingal"
QT_MOC_LITERAL(6, 66, 7), // "address"
QT_MOC_LITERAL(7, 74, 5), // "state"
QT_MOC_LITERAL(8, 80, 18), // "connectCountSignal"
QT_MOC_LITERAL(9, 99, 5), // "count"
QT_MOC_LITERAL(10, 105, 16), // "toSendDataSignal"
QT_MOC_LITERAL(11, 122, 14), // "channel_number"
QT_MOC_LITERAL(12, 137, 6), // "result"
QT_MOC_LITERAL(13, 144, 27), // "setHeartbeatPackStateSignal"
QT_MOC_LITERAL(14, 172, 27), // "InitializationParameterSlot"
QT_MOC_LITERAL(15, 200, 4), // "port"
QT_MOC_LITERAL(16, 205, 11), // "serviceType"
QT_MOC_LITERAL(17, 217, 11), // "serviceMode"
QT_MOC_LITERAL(18, 229, 14), // "toSendDataSlot"
QT_MOC_LITERAL(19, 244, 4), // "data"
QT_MOC_LITERAL(20, 249, 20) // "releaseResourcesSlot"

    },
    "DataInterchange_Interface\0messageSignal\0"
    "\0type\0msg\0linkStateSingal\0address\0"
    "state\0connectCountSignal\0count\0"
    "toSendDataSignal\0channel_number\0result\0"
    "setHeartbeatPackStateSignal\0"
    "InitializationParameterSlot\0port\0"
    "serviceType\0serviceMode\0toSendDataSlot\0"
    "data\0releaseResourcesSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataInterchange_Interface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    2,   59,    2, 0x06 /* Public */,
       8,    1,   64,    2, 0x06 /* Public */,
      10,    2,   67,    2, 0x06 /* Public */,
      13,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    4,   75,    2, 0x0a /* Public */,
      18,    2,   84,    2, 0x0a /* Public */,
      20,    0,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::Int, QMetaType::Int,    6,   15,   16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   19,
    QMetaType::Void,

       0        // eod
};

void DataInterchange_Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataInterchange_Interface *_t = static_cast<DataInterchange_Interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->linkStateSingal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->connectCountSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->toSendDataSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->setHeartbeatPackStateSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->InitializationParameterSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 6: _t->toSendDataSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->releaseResourcesSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataInterchange_Interface::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataInterchange_Interface::messageSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataInterchange_Interface::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataInterchange_Interface::linkStateSingal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataInterchange_Interface::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataInterchange_Interface::connectCountSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataInterchange_Interface::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataInterchange_Interface::toSendDataSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataInterchange_Interface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataInterchange_Interface::setHeartbeatPackStateSignal)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataInterchange_Interface::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DataInterchange_Interface.data,
    qt_meta_data_DataInterchange_Interface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataInterchange_Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataInterchange_Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataInterchange_Interface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataInterchange_Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DataInterchange_Interface::messageSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataInterchange_Interface::linkStateSingal(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataInterchange_Interface::connectCountSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataInterchange_Interface::toSendDataSignal(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataInterchange_Interface::setHeartbeatPackStateSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
