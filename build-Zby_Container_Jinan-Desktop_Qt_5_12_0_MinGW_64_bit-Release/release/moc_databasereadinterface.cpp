/****************************************************************************
** Meta object code from reading C++ file 'databasereadinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Zby_Container_Jinan/databasereadinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'databasereadinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataBaseReadInterface_t {
    QByteArrayData data[20];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataBaseReadInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataBaseReadInterface_t qt_meta_stringdata_DataBaseReadInterface = {
    {
QT_MOC_LITERAL(0, 0, 21), // "DataBaseReadInterface"
QT_MOC_LITERAL(1, 22, 13), // "messageSignal"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "type"
QT_MOC_LITERAL(4, 42, 3), // "msg"
QT_MOC_LITERAL(5, 46, 17), // "returnModelSingal"
QT_MOC_LITERAL(6, 64, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(7, 80, 5), // "model"
QT_MOC_LITERAL(8, 86, 21), // "statisticalDataSignal"
QT_MOC_LITERAL(9, 108, 5), // "total"
QT_MOC_LITERAL(10, 114, 7), // "correct"
QT_MOC_LITERAL(11, 122, 5), // "error"
QT_MOC_LITERAL(12, 128, 11), // "statistical"
QT_MOC_LITERAL(13, 140, 16), // "initDataBaseSlot"
QT_MOC_LITERAL(14, 157, 11), // "connectName"
QT_MOC_LITERAL(15, 169, 4), // "user"
QT_MOC_LITERAL(16, 174, 4), // "pass"
QT_MOC_LITERAL(17, 179, 2), // "ip"
QT_MOC_LITERAL(18, 182, 21), // "setDataBaseFilterSlot"
QT_MOC_LITERAL(19, 204, 6) // "filter"

    },
    "DataBaseReadInterface\0messageSignal\0"
    "\0type\0msg\0returnModelSingal\0QSqlTableModel*\0"
    "model\0statisticalDataSignal\0total\0"
    "correct\0error\0statistical\0initDataBaseSlot\0"
    "connectName\0user\0pass\0ip\0setDataBaseFilterSlot\0"
    "filter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataBaseReadInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    1,   44,    2, 0x06 /* Public */,
       8,    4,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    4,   56,    2, 0x0a /* Public */,
      18,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    9,   10,   11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   15,   16,   17,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void DataBaseReadInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataBaseReadInterface *_t = static_cast<DataBaseReadInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->returnModelSingal((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 2: _t->statisticalDataSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 3: _t->initDataBaseSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 4: _t->setDataBaseFilterSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataBaseReadInterface::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataBaseReadInterface::messageSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataBaseReadInterface::*)(QSqlTableModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataBaseReadInterface::returnModelSingal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataBaseReadInterface::*)(int , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataBaseReadInterface::statisticalDataSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataBaseReadInterface::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DataBaseReadInterface.data,
    qt_meta_data_DataBaseReadInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataBaseReadInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataBaseReadInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataBaseReadInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataBaseReadInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DataBaseReadInterface::messageSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataBaseReadInterface::returnModelSingal(QSqlTableModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataBaseReadInterface::statisticalDataSignal(int _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
