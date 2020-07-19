/****************************************************************************
** Meta object code from reading C++ file 'thelicenseplate_wty.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TheLicensePlate_WTY/thelicenseplate_wty.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thelicenseplate_wty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TheLicensePlate_WTY_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TheLicensePlate_WTY_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TheLicensePlate_WTY_t qt_meta_stringdata_TheLicensePlate_WTY = {
    {
QT_MOC_LITERAL(0, 0, 19) // "TheLicensePlate_WTY"

    },
    "TheLicensePlate_WTY"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TheLicensePlate_WTY[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TheLicensePlate_WTY::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TheLicensePlate_WTY::staticMetaObject = { {
    &TheLicensePlate_WTY_Interface::staticMetaObject,
    qt_meta_stringdata_TheLicensePlate_WTY.data,
    qt_meta_data_TheLicensePlate_WTY,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TheLicensePlate_WTY::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TheLicensePlate_WTY::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TheLicensePlate_WTY.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ZBY.ContainerServer.TheLicensePlate_WTY_Interface/1.0"))
        return static_cast< TheLicensePlate_WTY_Interface*>(this);
    return TheLicensePlate_WTY_Interface::qt_metacast(_clname);
}

int TheLicensePlate_WTY::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TheLicensePlate_WTY_Interface::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x35,  'Z',  'B',  'Y',  '.',  'C', 
    'o',  'n',  't',  'a',  'i',  'n',  'e',  'r', 
    'S',  'e',  'r',  'v',  'e',  'r',  '.',  'T', 
    'h',  'e',  'L',  'i',  'c',  'e',  'n',  's', 
    'e',  'P',  'l',  'a',  't',  'e',  '_',  'W', 
    'T',  'Y',  '_',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  '/',  '1',  '.',  '0', 
    // "className"
    0x03,  0x73,  'T',  'h',  'e',  'L',  'i',  'c', 
    'e',  'n',  's',  'e',  'P',  'l',  'a',  't', 
    'e',  '_',  'W',  'T',  'Y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(TheLicensePlate_WTY, TheLicensePlate_WTY)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
