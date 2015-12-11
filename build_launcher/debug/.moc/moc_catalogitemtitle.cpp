/****************************************************************************
** Meta object code from reading C++ file 'catalogitemtitle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../catalogitemtitle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'catalogitemtitle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CatalogItemTitle_t {
    QByteArrayData data[1];
    char stringdata[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CatalogItemTitle_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CatalogItemTitle_t qt_meta_stringdata_CatalogItemTitle = {
    {
QT_MOC_LITERAL(0, 0, 16) // "CatalogItemTitle"

    },
    "CatalogItemTitle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CatalogItemTitle[] = {

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

void CatalogItemTitle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CatalogItemTitle::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CatalogItemTitle.data,
      qt_meta_data_CatalogItemTitle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CatalogItemTitle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CatalogItemTitle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CatalogItemTitle.stringdata))
        return static_cast<void*>(const_cast< CatalogItemTitle*>(this));
    return QFrame::qt_metacast(_clname);
}

int CatalogItemTitle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
