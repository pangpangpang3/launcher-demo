/****************************************************************************
** Meta object code from reading C++ file 'dtablewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dtablewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dtablewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DTableWidget_t {
    QByteArrayData data[6];
    char stringdata[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DTableWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DTableWidget_t qt_meta_stringdata_DTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DTableWidget"
QT_MOC_LITERAL(1, 13, 18), // "sliderValueChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "value"
QT_MOC_LITERAL(4, 39, 14), // "closeAppWindow"
QT_MOC_LITERAL(5, 54, 22) // "setVerticalScrollValue"

    },
    "DTableWidget\0sliderValueChanged\0\0value\0"
    "closeAppWindow\0setVerticalScrollValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DTableWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void DTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DTableWidget *_t = static_cast<DTableWidget *>(_o);
        switch (_id) {
        case 0: _t->sliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->closeAppWindow(); break;
        case 2: _t->setVerticalScrollValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DTableWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DTableWidget::sliderValueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (DTableWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DTableWidget::closeAppWindow)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject DTableWidget::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_DTableWidget.data,
      qt_meta_data_DTableWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DTableWidget.stringdata))
        return static_cast<void*>(const_cast< DTableWidget*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int DTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DTableWidget::sliderValueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DTableWidget::closeAppWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
