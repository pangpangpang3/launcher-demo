/****************************************************************************
** Meta object code from reading C++ file 'launcherinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../launcherinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'launcherinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LauncherInterface_t {
    QByteArrayData data[40];
    char stringdata[747];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LauncherInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LauncherInterface_t qt_meta_stringdata_LauncherInterface = {
    {
QT_MOC_LITERAL(0, 0, 17), // "LauncherInterface"
QT_MOC_LITERAL(1, 18, 11), // "ItemChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "in0"
QT_MOC_LITERAL(4, 35, 7), // "AppInfo"
QT_MOC_LITERAL(5, 43, 3), // "in1"
QT_MOC_LITERAL(6, 47, 3), // "in2"
QT_MOC_LITERAL(7, 51, 14), // "NewAppLaunched"
QT_MOC_LITERAL(8, 66, 22), // "NewAppMarkedAsLaunched"
QT_MOC_LITERAL(9, 89, 23), // "RemoveFromDesktopFailed"
QT_MOC_LITERAL(10, 113, 24), // "RemoveFromDesktopSuccess"
QT_MOC_LITERAL(11, 138, 10), // "SearchDone"
QT_MOC_LITERAL(12, 149, 19), // "SendToDesktopFailed"
QT_MOC_LITERAL(13, 169, 20), // "SendToDesktopSuccess"
QT_MOC_LITERAL(14, 190, 15), // "UninstallFailed"
QT_MOC_LITERAL(15, 206, 16), // "UninstallSuccess"
QT_MOC_LITERAL(16, 223, 19), // "GetAllCategoryInfos"
QT_MOC_LITERAL(17, 243, 34), // "QDBusPendingReply<CatalogInfo..."
QT_MOC_LITERAL(18, 278, 15), // "GetAllFrequency"
QT_MOC_LITERAL(19, 294, 35), // "QDBusPendingReply<AppFrequenc..."
QT_MOC_LITERAL(20, 330, 15), // "GetAllItemInfos"
QT_MOC_LITERAL(21, 346, 30), // "QDBusPendingReply<AppInfoList>"
QT_MOC_LITERAL(22, 377, 22), // "GetAllNewInstalledApps"
QT_MOC_LITERAL(23, 400, 30), // "QDBusPendingReply<QStringList>"
QT_MOC_LITERAL(24, 431, 19), // "GetAllTimeInstalled"
QT_MOC_LITERAL(25, 451, 39), // "QDBusPendingReply<AppTimeInst..."
QT_MOC_LITERAL(26, 491, 15), // "GetCategoryInfo"
QT_MOC_LITERAL(27, 507, 30), // "QDBusPendingReply<CatalogInfo>"
QT_MOC_LITERAL(28, 538, 11), // "GetItemInfo"
QT_MOC_LITERAL(29, 550, 26), // "QDBusPendingReply<AppInfo>"
QT_MOC_LITERAL(30, 577, 15), // "IsItemOnDesktop"
QT_MOC_LITERAL(31, 593, 23), // "QDBusPendingReply<bool>"
QT_MOC_LITERAL(32, 617, 12), // "MarkLaunched"
QT_MOC_LITERAL(33, 630, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(34, 650, 15), // "RecordFrequency"
QT_MOC_LITERAL(35, 666, 10), // "RecordRate"
QT_MOC_LITERAL(36, 677, 24), // "RequestRemoveFromDesktop"
QT_MOC_LITERAL(37, 702, 20), // "RequestSendToDesktop"
QT_MOC_LITERAL(38, 723, 16), // "RequestUninstall"
QT_MOC_LITERAL(39, 740, 6) // "Search"

    },
    "LauncherInterface\0ItemChanged\0\0in0\0"
    "AppInfo\0in1\0in2\0NewAppLaunched\0"
    "NewAppMarkedAsLaunched\0RemoveFromDesktopFailed\0"
    "RemoveFromDesktopSuccess\0SearchDone\0"
    "SendToDesktopFailed\0SendToDesktopSuccess\0"
    "UninstallFailed\0UninstallSuccess\0"
    "GetAllCategoryInfos\0"
    "QDBusPendingReply<CatalogInfoList>\0"
    "GetAllFrequency\0QDBusPendingReply<AppFrequencyList>\0"
    "GetAllItemInfos\0QDBusPendingReply<AppInfoList>\0"
    "GetAllNewInstalledApps\0"
    "QDBusPendingReply<QStringList>\0"
    "GetAllTimeInstalled\0"
    "QDBusPendingReply<AppTimeInstalledList>\0"
    "GetCategoryInfo\0QDBusPendingReply<CatalogInfo>\0"
    "GetItemInfo\0QDBusPendingReply<AppInfo>\0"
    "IsItemOnDesktop\0QDBusPendingReply<bool>\0"
    "MarkLaunched\0QDBusPendingReply<>\0"
    "RecordFrequency\0RecordRate\0"
    "RequestRemoveFromDesktop\0RequestSendToDesktop\0"
    "RequestUninstall\0Search"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LauncherInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  139,    2, 0x06 /* Public */,
       7,    1,  146,    2, 0x06 /* Public */,
       8,    1,  149,    2, 0x06 /* Public */,
       9,    2,  152,    2, 0x06 /* Public */,
      10,    1,  157,    2, 0x06 /* Public */,
      11,    1,  160,    2, 0x06 /* Public */,
      12,    2,  163,    2, 0x06 /* Public */,
      13,    1,  168,    2, 0x06 /* Public */,
      14,    2,  171,    2, 0x06 /* Public */,
      15,    1,  176,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  179,    2, 0x0a /* Public */,
      18,    0,  180,    2, 0x0a /* Public */,
      20,    0,  181,    2, 0x0a /* Public */,
      22,    0,  182,    2, 0x0a /* Public */,
      24,    0,  183,    2, 0x0a /* Public */,
      26,    1,  184,    2, 0x0a /* Public */,
      28,    1,  187,    2, 0x0a /* Public */,
      30,    1,  190,    2, 0x0a /* Public */,
      32,    1,  193,    2, 0x0a /* Public */,
      34,    1,  196,    2, 0x0a /* Public */,
      35,    1,  199,    2, 0x0a /* Public */,
      36,    1,  202,    2, 0x0a /* Public */,
      37,    1,  205,    2, 0x0a /* Public */,
      38,    2,  208,    2, 0x0a /* Public */,
      39,    1,  213,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::LongLong,    3,    5,    6,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    0x80000000 | 17,
    0x80000000 | 19,
    0x80000000 | 21,
    0x80000000 | 23,
    0x80000000 | 25,
    0x80000000 | 27, QMetaType::LongLong,    3,
    0x80000000 | 29, QMetaType::QString,    3,
    0x80000000 | 31, QMetaType::QString,    3,
    0x80000000 | 33, QMetaType::QString,    3,
    0x80000000 | 33, QMetaType::QString,    3,
    0x80000000 | 33, QMetaType::QString,    3,
    0x80000000 | 31, QMetaType::QString,    3,
    0x80000000 | 31, QMetaType::QString,    3,
    0x80000000 | 33, QMetaType::QString, QMetaType::Bool,    3,    5,
    0x80000000 | 33, QMetaType::QString,    3,

       0        // eod
};

void LauncherInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LauncherInterface *_t = static_cast<LauncherInterface *>(_o);
        switch (_id) {
        case 0: _t->ItemChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< AppInfo(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3]))); break;
        case 1: _t->NewAppLaunched((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->NewAppMarkedAsLaunched((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->RemoveFromDesktopFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->RemoveFromDesktopSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->SearchDone((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->SendToDesktopFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->SendToDesktopSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->UninstallFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->UninstallSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: { QDBusPendingReply<CatalogInfoList> _r = _t->GetAllCategoryInfos();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<CatalogInfoList>*>(_a[0]) = _r; }  break;
        case 11: { QDBusPendingReply<AppFrequencyList> _r = _t->GetAllFrequency();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<AppFrequencyList>*>(_a[0]) = _r; }  break;
        case 12: { QDBusPendingReply<AppInfoList> _r = _t->GetAllItemInfos();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<AppInfoList>*>(_a[0]) = _r; }  break;
        case 13: { QDBusPendingReply<QStringList> _r = _t->GetAllNewInstalledApps();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = _r; }  break;
        case 14: { QDBusPendingReply<AppTimeInstalledList> _r = _t->GetAllTimeInstalled();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<AppTimeInstalledList>*>(_a[0]) = _r; }  break;
        case 15: { QDBusPendingReply<CatalogInfo> _r = _t->GetCategoryInfo((*reinterpret_cast< qlonglong(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<CatalogInfo>*>(_a[0]) = _r; }  break;
        case 16: { QDBusPendingReply<AppInfo> _r = _t->GetItemInfo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<AppInfo>*>(_a[0]) = _r; }  break;
        case 17: { QDBusPendingReply<bool> _r = _t->IsItemOnDesktop((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 18: { QDBusPendingReply<> _r = _t->MarkLaunched((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 19: { QDBusPendingReply<> _r = _t->RecordFrequency((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 20: { QDBusPendingReply<> _r = _t->RecordRate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 21: { QDBusPendingReply<bool> _r = _t->RequestRemoveFromDesktop((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 22: { QDBusPendingReply<bool> _r = _t->RequestSendToDesktop((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 23: { QDBusPendingReply<> _r = _t->RequestUninstall((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 24: { QDBusPendingReply<> _r = _t->Search((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AppInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LauncherInterface::*_t)(const QString & , AppInfo , qlonglong );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LauncherInterface::ItemChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (LauncherInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LauncherInterface::NewAppLaunched)) {
                *result = 1;
            }
        }
        {
            typedef void (LauncherInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LauncherInterface::NewAppMarkedAsLaunched)) {
                *result = 2;
            }
        }
        {
            typedef void (LauncherInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LauncherInterface::RemoveFromDesktopFailed)) {
                *result = 3;
            }
        }
        {
            typedef void (LauncherInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LauncherInterface::RemoveFromDesktopSuccess)) {
                *result = 4;
            }
        }
        {
            typedef void (LauncherInterface::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LauncherInterface::SearchDone)) {
                *result = 5;
            }
        }
        {
            typedef void (LauncherInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LauncherInterface::SendToDesktopFailed)) {
                *result = 6;
            }
        }
        {
            typedef void (LauncherInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LauncherInterface::SendToDesktopSuccess)) {
                *result = 7;
            }
        }
        {
            typedef void (LauncherInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LauncherInterface::UninstallFailed)) {
                *result = 8;
            }
        }
        {
            typedef void (LauncherInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LauncherInterface::UninstallSuccess)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject LauncherInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_LauncherInterface.data,
      qt_meta_data_LauncherInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LauncherInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LauncherInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LauncherInterface.stringdata))
        return static_cast<void*>(const_cast< LauncherInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int LauncherInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void LauncherInterface::ItemChanged(const QString & _t1, AppInfo _t2, qlonglong _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LauncherInterface::NewAppLaunched(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LauncherInterface::NewAppMarkedAsLaunched(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LauncherInterface::RemoveFromDesktopFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LauncherInterface::RemoveFromDesktopSuccess(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LauncherInterface::SearchDone(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LauncherInterface::SendToDesktopFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LauncherInterface::SendToDesktopSuccess(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void LauncherInterface::UninstallFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LauncherInterface::UninstallSuccess(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
