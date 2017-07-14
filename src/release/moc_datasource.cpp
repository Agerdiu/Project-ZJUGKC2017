/****************************************************************************
** Meta object code from reading C++ file 'datasource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../datasource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datasource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_datasource_t {
    QByteArrayData data[11];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_datasource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_datasource_t qt_meta_stringdata_datasource = {
    {
QT_MOC_LITERAL(0, 0, 10), // "datasource"
QT_MOC_LITERAL(1, 11, 17), // "preparelineseries"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "QLineSeries*"
QT_MOC_LITERAL(4, 43, 6), // "series"
QT_MOC_LITERAL(5, 50, 6), // "league"
QT_MOC_LITERAL(6, 57, 4), // "team"
QT_MOC_LITERAL(7, 62, 4), // "attr"
QT_MOC_LITERAL(8, 67, 16), // "preparebarseries"
QT_MOC_LITERAL(9, 84, 11), // "QBarSeries*"
QT_MOC_LITERAL(10, 96, 4) // "lock"

    },
    "datasource\0preparelineseries\0\0"
    "QLineSeries*\0series\0league\0team\0attr\0"
    "preparebarseries\0QBarSeries*\0lock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_datasource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    4,   24,    2, 0x02 /* Public */,
       8,    5,   33,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    4,    5,    6,    7,   10,

       0        // eod
};

void datasource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        datasource *_t = static_cast<datasource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->preparelineseries((*reinterpret_cast< QLineSeries*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->preparebarseries((*reinterpret_cast< QBarSeries*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLineSeries* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBarSeries* >(); break;
            }
            break;
        }
    }
}

const QMetaObject datasource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_datasource.data,
      qt_meta_data_datasource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *datasource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *datasource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_datasource.stringdata0))
        return static_cast<void*>(const_cast< datasource*>(this));
    return QObject::qt_metacast(_clname);
}

int datasource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
