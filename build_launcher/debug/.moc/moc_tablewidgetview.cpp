/****************************************************************************
** Meta object code from reading C++ file 'tablewidgetview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tablewidgetview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablewidgetview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TableWidgetClassifyBar_t {
    QByteArrayData data[9];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TableWidgetClassifyBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TableWidgetClassifyBar_t qt_meta_stringdata_TableWidgetClassifyBar = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TableWidgetClassifyBar"
QT_MOC_LITERAL(1, 23, 11), // "sliderValue"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "value"
QT_MOC_LITERAL(4, 42, 15), // "scrollToTableId"
QT_MOC_LITERAL(5, 58, 5), // "appId"
QT_MOC_LITERAL(6, 64, 12), // "setRowNumber"
QT_MOC_LITERAL(7, 77, 3), // "row"
QT_MOC_LITERAL(8, 81, 11) // "scrollToRow"

    },
    "TableWidgetClassifyBar\0sliderValue\0\0"
    "value\0scrollToTableId\0appId\0setRowNumber\0"
    "row\0scrollToRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableWidgetClassifyBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void TableWidgetClassifyBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TableWidgetClassifyBar *_t = static_cast<TableWidgetClassifyBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliderValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->scrollToTableId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setRowNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->scrollToRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TableWidgetClassifyBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableWidgetClassifyBar::sliderValue)) {
                *result = 0;
            }
        }
        {
            typedef void (TableWidgetClassifyBar::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableWidgetClassifyBar::scrollToTableId)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject TableWidgetClassifyBar::staticMetaObject = {
    { &DTableWidget::staticMetaObject, qt_meta_stringdata_TableWidgetClassifyBar.data,
      qt_meta_data_TableWidgetClassifyBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TableWidgetClassifyBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableWidgetClassifyBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TableWidgetClassifyBar.stringdata0))
        return static_cast<void*>(const_cast< TableWidgetClassifyBar*>(this));
    return DTableWidget::qt_metacast(_clname);
}

int TableWidgetClassifyBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DTableWidget::qt_metacall(_c, _id, _a);
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
void TableWidgetClassifyBar::sliderValue(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TableWidgetClassifyBar::scrollToTableId(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_TableWidgetAssort_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TableWidgetAssort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TableWidgetAssort_t qt_meta_stringdata_TableWidgetAssort = {
    {
QT_MOC_LITERAL(0, 0, 17) // "TableWidgetAssort"

    },
    "TableWidgetAssort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableWidgetAssort[] = {

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

void TableWidgetAssort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TableWidgetAssort::staticMetaObject = {
    { &DTableWidget::staticMetaObject, qt_meta_stringdata_TableWidgetAssort.data,
      qt_meta_data_TableWidgetAssort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TableWidgetAssort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableWidgetAssort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TableWidgetAssort.stringdata0))
        return static_cast<void*>(const_cast< TableWidgetAssort*>(this));
    return DTableWidget::qt_metacast(_clname);
}

int TableWidgetAssort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
