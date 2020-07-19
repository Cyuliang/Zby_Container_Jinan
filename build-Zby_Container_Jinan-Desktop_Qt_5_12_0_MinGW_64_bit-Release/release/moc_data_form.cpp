/****************************************************************************
** Meta object code from reading C++ file 'data_form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Zby_Container_Jinan/data_form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'data_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_data_Form_t {
    QByteArrayData data[14];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_data_Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_data_Form_t qt_meta_stringdata_data_Form = {
    {
QT_MOC_LITERAL(0, 0, 9), // "data_Form"
QT_MOC_LITERAL(1, 10, 18), // "setImagePathSignal"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "format"
QT_MOC_LITERAL(4, 37, 7), // "channel"
QT_MOC_LITERAL(5, 45, 14), // "container_path"
QT_MOC_LITERAL(6, 60, 10), // "plate_path"
QT_MOC_LITERAL(7, 71, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 83, 5), // "index"
QT_MOC_LITERAL(9, 89, 15), // "returnModelSlot"
QT_MOC_LITERAL(10, 105, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(11, 121, 5), // "model"
QT_MOC_LITERAL(12, 127, 16), // "setImagePathSlot"
QT_MOC_LITERAL(13, 144, 20) // "on_tableView_clicked"

    },
    "data_Form\0setImagePathSignal\0\0format\0"
    "channel\0container_path\0plate_path\0"
    "QModelIndex\0index\0returnModelSlot\0"
    "QSqlTableModel*\0model\0setImagePathSlot\0"
    "on_tableView_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_data_Form[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   45,    2, 0x0a /* Public */,
      12,    4,   48,    2, 0x0a /* Public */,
      13,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, 0x80000000 | 7,    3,    4,    5,    6,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void data_Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        data_Form *_t = static_cast<data_Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setImagePathSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< const QModelIndex(*)>(_a[5]))); break;
        case 1: _t->returnModelSlot((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 2: _t->setImagePathSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
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
            using _t = void (data_Form::*)(int , int , QString , QString , const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&data_Form::setImagePathSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject data_Form::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_data_Form.data,
    qt_meta_data_data_Form,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *data_Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *data_Form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_data_Form.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int data_Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void data_Form::setImagePathSignal(int _t1, int _t2, QString _t3, QString _t4, const QModelIndex & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
