/****************************************************************************
** Meta object code from reading C++ file 'data_controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../data_controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'data_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Data_Controller_t {
    QByteArrayData data[22];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Data_Controller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Data_Controller_t qt_meta_stringdata_Data_Controller = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Data_Controller"
QT_MOC_LITERAL(1, 16, 15), // "teamDataChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "teamname"
QT_MOC_LITERAL(4, 42, 17), // "leagueDataChanged"
QT_MOC_LITERAL(5, 60, 10), // "leaguename"
QT_MOC_LITERAL(6, 71, 10), // "signalList"
QT_MOC_LITERAL(7, 82, 15), // "QList<QObject*>"
QT_MOC_LITERAL(8, 98, 4), // "data"
QT_MOC_LITERAL(9, 103, 10), // "signalInfo"
QT_MOC_LITERAL(10, 114, 9), // "info_data"
QT_MOC_LITERAL(11, 124, 13), // "signalMemList"
QT_MOC_LITERAL(12, 138, 8), // "mem_data"
QT_MOC_LITERAL(13, 147, 11), // "setTeamData"
QT_MOC_LITERAL(14, 159, 13), // "setLeagueData"
QT_MOC_LITERAL(15, 173, 11), // "getTeamList"
QT_MOC_LITERAL(16, 185, 12), // "league_index"
QT_MOC_LITERAL(17, 198, 14), // "getTeamMemList"
QT_MOC_LITERAL(18, 213, 9), // "team_name"
QT_MOC_LITERAL(19, 223, 11), // "getTeamInfo"
QT_MOC_LITERAL(20, 235, 8), // "TeamName"
QT_MOC_LITERAL(21, 244, 10) // "LeagueName"

    },
    "Data_Controller\0teamDataChanged\0\0"
    "teamname\0leagueDataChanged\0leaguename\0"
    "signalList\0QList<QObject*>\0data\0"
    "signalInfo\0info_data\0signalMemList\0"
    "mem_data\0setTeamData\0setLeagueData\0"
    "getTeamList\0league_index\0getTeamMemList\0"
    "team_name\0getTeamInfo\0TeamName\0"
    "LeagueName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Data_Controller[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,
      11,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   79,    2, 0x0a /* Public */,
      14,    1,   82,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    1,   85,    2, 0x02 /* Public */,
      17,    1,   88,    2, 0x02 /* Public */,
      19,    1,   91,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QObjectStar,   10,
    QMetaType::Void, 0x80000000 | 7,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // methods: parameters
    0x80000000 | 7, QMetaType::QString,   16,
    0x80000000 | 7, QMetaType::QString,   18,
    QMetaType::QObjectStar, QMetaType::QString,   18,

 // properties: name, type, flags
      20, QMetaType::QString, 0x00495003,
      21, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Data_Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Data_Controller *_t = static_cast<Data_Controller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->teamDataChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->leagueDataChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->signalList((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 3: _t->signalInfo((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->signalMemList((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 5: _t->setTeamData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setLeagueData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: { QList<QObject*> _r = _t->getTeamList((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QList<QObject*> _r = _t->getTeamMemList((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = std::move(_r); }  break;
        case 9: { QObject* _r = _t->getTeamInfo((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Data_Controller::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Data_Controller::teamDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Data_Controller::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Data_Controller::leagueDataChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Data_Controller::*_t)(QList<QObject*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Data_Controller::signalList)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Data_Controller::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Data_Controller::signalInfo)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Data_Controller::*_t)(QList<QObject*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Data_Controller::signalMemList)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Data_Controller *_t = static_cast<Data_Controller *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getTeamName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getLeague(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Data_Controller *_t = static_cast<Data_Controller *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTeamData(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLeagueData(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Data_Controller::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Data_Controller.data,
      qt_meta_data_Data_Controller,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Data_Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Data_Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Data_Controller.stringdata0))
        return static_cast<void*>(const_cast< Data_Controller*>(this));
    return QObject::qt_metacast(_clname);
}

int Data_Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Data_Controller::teamDataChanged(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Data_Controller::leagueDataChanged(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Data_Controller::signalList(QList<QObject*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Data_Controller::signalInfo(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Data_Controller::signalMemList(QList<QObject*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
