/****************************************************************************
** Meta object code from reading C++ file 'catalogylist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../catalogylist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'catalogylist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CatalogListWidgetName_t {
    QByteArrayData data[1];
    char stringdata[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CatalogListWidgetName_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CatalogListWidgetName_t qt_meta_stringdata_CatalogListWidgetName = {
    {
QT_MOC_LITERAL(0, 0, 21) // "CatalogListWidgetName"

    },
    "CatalogListWidgetName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CatalogListWidgetName[] = {

 // content:
       7,       // revision
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

void CatalogListWidgetName::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CatalogListWidgetName::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CatalogListWidgetName.data,
      qt_meta_data_CatalogListWidgetName,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CatalogListWidgetName::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CatalogListWidgetName::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CatalogListWidgetName.stringdata))
        return static_cast<void*>(const_cast< CatalogListWidgetName*>(this));
    return QFrame::qt_metacast(_clname);
}

int CatalogListWidgetName::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CatalogListWidgetIcon_t {
    QByteArrayData data[5];
    char stringdata[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CatalogListWidgetIcon_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CatalogListWidgetIcon_t qt_meta_stringdata_CatalogListWidgetIcon = {
    {
QT_MOC_LITERAL(0, 0, 21), // "CatalogListWidgetIcon"
QT_MOC_LITERAL(1, 22, 16), // "scrollToIdByIcon"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "buttonId"
QT_MOC_LITERAL(4, 49, 16) // "setCheckedButton"

    },
    "CatalogListWidgetIcon\0scrollToIdByIcon\0"
    "\0buttonId\0setCheckedButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CatalogListWidgetIcon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void CatalogListWidgetIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CatalogListWidgetIcon *_t = static_cast<CatalogListWidgetIcon *>(_o);
        switch (_id) {
        case 0: _t->scrollToIdByIcon((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setCheckedButton((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CatalogListWidgetIcon::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CatalogListWidgetIcon::scrollToIdByIcon)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CatalogListWidgetIcon::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CatalogListWidgetIcon.data,
      qt_meta_data_CatalogListWidgetIcon,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CatalogListWidgetIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CatalogListWidgetIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CatalogListWidgetIcon.stringdata))
        return static_cast<void*>(const_cast< CatalogListWidgetIcon*>(this));
    return QFrame::qt_metacast(_clname);
}

int CatalogListWidgetIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CatalogListWidgetIcon::scrollToIdByIcon(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CatalogListWidgetWord_t {
    QByteArrayData data[5];
    char stringdata[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CatalogListWidgetWord_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CatalogListWidgetWord_t qt_meta_stringdata_CatalogListWidgetWord = {
    {
QT_MOC_LITERAL(0, 0, 21), // "CatalogListWidgetWord"
QT_MOC_LITERAL(1, 22, 16), // "scrollToIdByWord"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "buttonId"
QT_MOC_LITERAL(4, 49, 16) // "setCheckedButton"

    },
    "CatalogListWidgetWord\0scrollToIdByWord\0"
    "\0buttonId\0setCheckedButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CatalogListWidgetWord[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void CatalogListWidgetWord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CatalogListWidgetWord *_t = static_cast<CatalogListWidgetWord *>(_o);
        switch (_id) {
        case 0: _t->scrollToIdByWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setCheckedButton((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CatalogListWidgetWord::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CatalogListWidgetWord::scrollToIdByWord)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CatalogListWidgetWord::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CatalogListWidgetWord.data,
      qt_meta_data_CatalogListWidgetWord,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CatalogListWidgetWord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CatalogListWidgetWord::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CatalogListWidgetWord.stringdata))
        return static_cast<void*>(const_cast< CatalogListWidgetWord*>(this));
    return QFrame::qt_metacast(_clname);
}

int CatalogListWidgetWord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CatalogListWidgetWord::scrollToIdByWord(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
