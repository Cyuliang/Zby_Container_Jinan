/****************************************************************************
** Meta object code from reading C++ file 'datainterchange.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DataInterchange/datainterchange.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datainterchange.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataInterchange_t {
    QByteArrayData data[13];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataInterchange_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataInterchange_t qt_meta_stringdata_DataInterchange = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DataInterchange"
QT_MOC_LITERAL(1, 16, 13), // "startLinkSlot"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "startListenSlot"
QT_MOC_LITERAL(4, 47, 13), // "heartbeatSlot"
QT_MOC_LITERAL(5, 61, 13), // "connectedSlot"
QT_MOC_LITERAL(6, 75, 15), // "receiveDataSlot"
QT_MOC_LITERAL(7, 91, 16), // "disconnectedSlot"
QT_MOC_LITERAL(8, 108, 16), // "displayErrorSlot"
QT_MOC_LITERAL(9, 125, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(10, 154, 11), // "socketError"
QT_MOC_LITERAL(11, 166, 23), // "setHeartPacketStateSlot"
QT_MOC_LITERAL(12, 190, 5) // "state"

    },
    "DataInterchange\0startLinkSlot\0\0"
    "startListenSlot\0heartbeatSlot\0"
    "connectedSlot\0receiveDataSlot\0"
    "disconnectedSlot\0displayErrorSlot\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "setHeartPacketStateSlot\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataInterchange[] = {

 // content:
       8,       // revision
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
       8,    1,   60,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void DataInterchange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataInterchange *_t = static_cast<DataInterchange *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startLinkSlot(); break;
        case 1: _t->startListenSlot(); break;
        case 2: _t->heartbeatSlot(); break;
        case 3: _t->connectedSlot(); break;
        case 4: _t->receiveDataSlot(); break;
        case 5: _t->disconnectedSlot(); break;
        case 6: _t->displayErrorSlot((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->setHeartPacketStateSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataInterchange::staticMetaObject = { {
    &DataInterchange_Interface::staticMetaObject,
    qt_meta_stringdata_DataInterchange.data,
    qt_meta_data_DataInterchange,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataInterchange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataInterchange::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataInterchange.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ZBY.ContainerServer.DataInterchange_Interface/1.0"))
        return static_cast< DataInterchange_Interface*>(this);
    return DataInterchange_Interface::qt_metacast(_clname);
}

int DataInterchange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DataInterchange_Interface::qt_metacall(_c, _id, _a);
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

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x31,  'Z',  'B',  'Y',  '.',  'C', 
    'o',  'n',  't',  'a',  'i',  'n',  'e',  'r', 
    'S',  'e',  'r',  'v',  'e',  'r',  '.',  'D', 
    'a',  't',  'a',  'I',  'n',  't',  'e',  'r', 
    'c',  'h',  'a',  'n',  'g',  'e',  '_',  'I', 
    'n',  't',  'e',  'r',  'f',  'a',  'c',  'e', 
    '/',  '1',  '.',  '0', 
    // "className"
    0x03,  0x6f,  'D',  'a',  't',  'a',  'I',  'n', 
    't',  'e',  'r',  'c',  'h',  'a',  'n',  'g', 
    'e', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(DataInterchange, DataInterchange)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
