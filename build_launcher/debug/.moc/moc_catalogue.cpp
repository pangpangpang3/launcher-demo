/****************************************************************************
** Meta object code from reading C++ file 'catalogue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../catalogue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'catalogue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Catalogue_t {
    QByteArrayData data[9];
    char stringdata[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Catalogue_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Catalogue_t qt_meta_stringdata_Catalogue = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Catalogue"
QT_MOC_LITERAL(1, 10, 10), // "alwaysShow"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "leaveShow"
QT_MOC_LITERAL(4, 32, 16), // "catalogierByName"
QT_MOC_LITERAL(5, 49, 16), // "catalogierByIcon"
QT_MOC_LITERAL(6, 66, 16), // "catalogierByWord"
QT_MOC_LITERAL(7, 83, 25), // "catalogierByTimeInstalled"
QT_MOC_LITERAL(8, 109, 21) // "catalogierByFrequency"

    },
    "Catalogue\0alwaysShow\0\0leaveShow\0"
    "catalogierByName\0catalogierByIcon\0"
    "catalogierByWord\0catalogierByTimeInstalled\0"
    "catalogierByFrequency"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Catalogue[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Catalogue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Catalogue *_t = static_cast<Catalogue *>(_o);
        switch (_id) {
        case 0: _t->alwaysShow(); break;
        case 1: _t->leaveShow(); break;
        case 2: _t->catalogierByName(); break;
        case 3: _t->catalogierByIcon(); break;
        case 4: _t->catalogierByWord(); break;
        case 5: _t->catalogierByTimeInstalled(); break;
        case 6: _t->catalogierByFrequency(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Catalogue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Catalogue::alwaysShow)) {
                *result = 0;
            }
        }
        {
            typedef void (Catalogue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Catalogue::leaveShow)) {
                *result = 1;
            }
        }
        {
            typedef void (Catalogue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Catalogue::catalogierByName)) {
                *result = 2;
            }
        }
        {
            typedef void (Catalogue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Catalogue::catalogierByIcon)) {
                *result = 3;
            }
        }
        {
            typedef void (Catalogue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Catalogue::catalogierByWord)) {
                *result = 4;
            }
        }
        {
            typedef void (Catalogue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Catalogue::catalogierByTimeInstalled)) {
                *result = 5;
            }
        }
        {
            typedef void (Catalogue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Catalogue::catalogierByFrequency)) {
                *result = 6;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Catalogue::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Catalogue.data,
      qt_meta_data_Catalogue,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Catalogue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Catalogue::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Catalogue.stringdata))
        return static_cast<void*>(const_cast< Catalogue*>(this));
    return QFrame::qt_metacast(_clname);
}

int Catalogue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Catalogue::alwaysShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Catalogue::leaveShow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Catalogue::catalogierByName()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Catalogue::catalogierByIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Catalogue::catalogierByWord()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Catalogue::catalogierByTimeInstalled()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Catalogue::catalogierByFrequency()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
