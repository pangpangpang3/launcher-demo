/****************************************************************************
** Meta object code from reading C++ file 'dpushbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dpushbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dpushbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DPushButton_t {
    QByteArrayData data[7];
    char stringdata[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DPushButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DPushButton_t qt_meta_stringdata_DPushButton = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DPushButton"
QT_MOC_LITERAL(1, 12, 9), // "enterArea"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "leaveArea"
QT_MOC_LITERAL(4, 33, 13), // "buttonclicked"
QT_MOC_LITERAL(5, 47, 8), // "buttonId"
QT_MOC_LITERAL(6, 56, 11) // "buttonclick"

    },
    "DPushButton\0enterArea\0\0leaveArea\0"
    "buttonclicked\0buttonId\0buttonclick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DPushButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void DPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DPushButton *_t = static_cast<DPushButton *>(_o);
        switch (_id) {
        case 0: _t->enterArea(); break;
        case 1: _t->leaveArea(); break;
        case 2: _t->buttonclicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->buttonclick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DPushButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DPushButton::enterArea)) {
                *result = 0;
            }
        }
        {
            typedef void (DPushButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DPushButton::leaveArea)) {
                *result = 1;
            }
        }
        {
            typedef void (DPushButton::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DPushButton::buttonclicked)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject DPushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_DPushButton.data,
      qt_meta_data_DPushButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DPushButton.stringdata))
        return static_cast<void*>(const_cast< DPushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int DPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DPushButton::enterArea()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DPushButton::leaveArea()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DPushButton::buttonclicked(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
