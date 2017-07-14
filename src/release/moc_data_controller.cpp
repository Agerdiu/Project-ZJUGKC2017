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
    QByteArrayData data[35];
    char stringdata0[415];
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
QT_MOC_LITERAL(13, 147, 11), // "lockChanged"
QT_MOC_LITERAL(14, 159, 4), // "lock"
QT_MOC_LITERAL(15, 164, 15), // "teamLockChanged"
QT_MOC_LITERAL(16, 180, 9), // "team_lock"
QT_MOC_LITERAL(17, 190, 17), // "leagueLockChanged"
QT_MOC_LITERAL(18, 208, 11), // "league_lock"
QT_MOC_LITERAL(19, 220, 11), // "setTeamData"
QT_MOC_LITERAL(20, 232, 13), // "setLeagueData"
QT_MOC_LITERAL(21, 246, 7), // "setLock"
QT_MOC_LITERAL(22, 254, 11), // "setTeamLock"
QT_MOC_LITERAL(23, 266, 14), // "team_name_lock"
QT_MOC_LITERAL(24, 281, 13), // "setLeagueLock"
QT_MOC_LITERAL(25, 295, 17), // "league_index_lock"
QT_MOC_LITERAL(26, 313, 11), // "getTeamList"
QT_MOC_LITERAL(27, 325, 12), // "league_index"
QT_MOC_LITERAL(28, 338, 14), // "getTeamMemList"
QT_MOC_LITERAL(29, 353, 9), // "team_name"
QT_MOC_LITERAL(30, 363, 11), // "getTeamInfo"
QT_MOC_LITERAL(31, 375, 8), // "TeamName"
QT_MOC_LITERAL(32, 384, 10), // "LeagueName"
QT_MOC_LITERAL(33, 395, 8), // "TeamLock"
QT_MOC_LITERAL(34, 404, 10) // "LeagueLock"

    },
    "Data_Controller\0teamDataChanged\0\0"
    "teamname\0leagueDataChanged\0leaguename\0"
    "signalList\0QList<QObject*>\0data\0"
    "signalInfo\0info_data\0signalMemList\0"
    "mem_data\0lockChanged\0lock\0teamLockChanged\0"
    "team_lock\0leagueLockChanged\0league_lock\0"
    "setTeamData\0setLeagueData\0setLock\0"
    "setTeamLock\0team_name_lock\0setLeagueLock\0"
    "league_index_lock\0getTeamList\0"
    "league_index\0getTeamMemList\0team_name\0"
    "getTeamInfo\0TeamName\0LeagueName\0"
    "TeamLock\0LeagueLock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Data_Controller[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       5,  142, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       6,    1,  100,    2, 0x06 /* Public */,
       9,    1,  103,    2, 0x06 /* Public */,
      11,    1,  106,    2, 0x06 /* Public */,
      13,    1,  109,    2, 0x06 /* Public */,
      15,    1,  112,    2, 0x06 /* Public */,
      17,    1,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  118,    2, 0x0a /* Public */,
      20,    1,  121,    2, 0x0a /* Public */,
      21,    1,  124,    2, 0x0a /* Public */,
      22,    1,  127,    2, 0x0a /* Public */,
      24,    1,  130,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      26,    1,  133,    2, 0x02 /* Public */,
      28,    1,  136,    2, 0x02 /* Public */,
      30,    1,  139,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QObjectStar,   10,
    QMetaType::Void, 0x80000000 | 7,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   25,

 // methods: parameters
    0x80000000 | 7, QMetaType::QString,   27,
    0x80000000 | 7, QMetaType::QString,   29,
    QMetaType::QObjectStar, QMetaType::QString,   29,

 // properties: name, type, flags
      31, QMetaType::QString, 0x00495003,
      32, QMetaType::QString, 0x00495003,
      14, QMetaType::Bool, 0x00495103,
      33, QMetaType::QString, 0x00495103,
      34, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       5,
       6,
       7,

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
        case 5: _t->lockChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->teamLockChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->leagueLockChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setTeamData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setLeagueData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setTeamLock((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->setLeagueLock((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: { QList<QObject*> _r = _t->getTeamList((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = std::move(_r); }  break;
        case 14: { QList<QObject*> _r = _t->getTeamMemList((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = std::move(_r); }  break;
        case 15: { QObject* _r = _t->getTeamInfo((*reinterpret_cast< QString(*)>(_a[1])));
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
        {
            typedef void (Data_Controller::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Data_Controller::lockChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Data_Controller::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Data_Controller::teamLockChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Data_Controller::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Data_Controller::leagueLockChanged)) {
                *result = 7;
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
        case 2: *reinterpret_cast< bool*>(_v) = _t->isLocked(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getTeamLock(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getLeagueLock(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Data_Controller *_t = static_cast<Data_Controller *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTeamData(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLeagueData(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setLock(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setTeamLock(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setLeagueLock(*reinterpret_cast< QString*>(_v)); break;
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
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

// SIGNAL 5
void Data_Controller::lockChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Data_Controller::teamLockChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Data_Controller::leagueLockChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
