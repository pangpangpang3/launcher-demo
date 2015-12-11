/****************************************************************************
** Meta object code from reading C++ file 'launcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../launcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'launcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Launcher_t {
    QByteArrayData data[23];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Launcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Launcher_t qt_meta_stringdata_Launcher = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Launcher"
QT_MOC_LITERAL(1, 9, 15), // "openSearchedApp"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "showwidget"
QT_MOC_LITERAL(4, 37, 15), // "timerhidewidget"
QT_MOC_LITERAL(5, 53, 10), // "hidewidget"
QT_MOC_LITERAL(6, 64, 13), // "catalogByName"
QT_MOC_LITERAL(7, 78, 13), // "catalogByWord"
QT_MOC_LITERAL(8, 92, 13), // "catalogByIcon"
QT_MOC_LITERAL(9, 106, 22), // "catalogByTimeInstalled"
QT_MOC_LITERAL(10, 129, 18), // "catalogByFrequency"
QT_MOC_LITERAL(11, 148, 16), // "scrollToPosition"
QT_MOC_LITERAL(12, 165, 8), // "buttonId"
QT_MOC_LITERAL(13, 174, 11), // "sliderValue"
QT_MOC_LITERAL(14, 186, 5), // "appId"
QT_MOC_LITERAL(15, 192, 13), // "keyPressEvent"
QT_MOC_LITERAL(16, 206, 10), // "QKeyEvent*"
QT_MOC_LITERAL(17, 217, 8), // "keyEvent"
QT_MOC_LITERAL(18, 226, 9), // "searchApp"
QT_MOC_LITERAL(19, 236, 14), // "searchKeyWords"
QT_MOC_LITERAL(20, 251, 18), // "setBackgroundImage"
QT_MOC_LITERAL(21, 270, 8), // "imageUrl"
QT_MOC_LITERAL(22, 279, 11) // "closeWindow"

    },
    "Launcher\0openSearchedApp\0\0showwidget\0"
    "timerhidewidget\0hidewidget\0catalogByName\0"
    "catalogByWord\0catalogByIcon\0"
    "catalogByTimeInstalled\0catalogByFrequency\0"
    "scrollToPosition\0buttonId\0sliderValue\0"
    "appId\0keyPressEvent\0QKeyEvent*\0keyEvent\0"
    "searchApp\0searchKeyWords\0setBackgroundImage\0"
    "imageUrl\0closeWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Launcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    1,   98,    2, 0x0a /* Public */,
      13,    1,  101,    2, 0x0a /* Public */,
      15,    1,  104,    2, 0x0a /* Public */,
      18,    1,  107,    2, 0x0a /* Public */,
      20,    1,  110,    2, 0x0a /* Public */,
      22,    0,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,

       0        // eod
};

void Launcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Launcher *_t = static_cast<Launcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openSearchedApp(); break;
        case 1: _t->showwidget(); break;
        case 2: _t->timerhidewidget(); break;
        case 3: _t->hidewidget(); break;
        case 4: _t->catalogByName(); break;
        case 5: _t->catalogByWord(); break;
        case 6: _t->catalogByIcon(); break;
        case 7: _t->catalogByTimeInstalled(); break;
        case 8: _t->catalogByFrequency(); break;
        case 9: _t->scrollToPosition((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->sliderValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 12: _t->searchApp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->setBackgroundImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->closeWindow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Launcher::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Launcher::openSearchedApp)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Launcher::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Launcher.data,
      qt_meta_data_Launcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Launcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Launcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Launcher.stringdata0))
        return static_cast<void*>(const_cast< Launcher*>(this));
    return QFrame::qt_metacast(_clname);
}

int Launcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Launcher::openSearchedApp()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
