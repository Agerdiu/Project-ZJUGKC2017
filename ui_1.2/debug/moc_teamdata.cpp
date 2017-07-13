/****************************************************************************
** Meta object code from reading C++ file 'teamdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../teamdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teamdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TeamData_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TeamData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TeamData_t qt_meta_stringdata_TeamData = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TeamData"
QT_MOC_LITERAL(1, 9, 12), // "TeamListRank"
QT_MOC_LITERAL(2, 22, 12), // "TeamListName"
QT_MOC_LITERAL(3, 35, 11), // "TeamListWin"
QT_MOC_LITERAL(4, 47, 12), // "TeamListDraw"
QT_MOC_LITERAL(5, 60, 12), // "TeamListLose"
QT_MOC_LITERAL(6, 73, 13) // "TeamListScore"

    },
    "TeamData\0TeamListRank\0TeamListName\0"
    "TeamListWin\0TeamListDraw\0TeamListLose\0"
    "TeamListScore"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TeamData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::QString, 0x00095401,

       0        // eod
};

void TeamData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        TeamData *_t = static_cast<TeamData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getTeamListRank(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getTeamListName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getTeamListWin(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getTeamListDraw(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getTeamListLose(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getTeamListScore(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TeamData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TeamData.data,
      qt_meta_data_TeamData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TeamData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TeamData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TeamData.stringdata0))
        return static_cast<void*>(const_cast< TeamData*>(this));
    return QObject::qt_metacast(_clname);
}

int TeamData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
