/****************************************************************************
** Meta object code from reading C++ file 'appearancedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "appearancedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appearancedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_appearanceDialog_t {
    QByteArrayData data[14];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_appearanceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_appearanceDialog_t qt_meta_stringdata_appearanceDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "appearanceDialog"
QT_MOC_LITERAL(1, 17, 16), // "titleFontPressed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "wsFontPressed"
QT_MOC_LITERAL(4, 49, 13), // "wlFontPressed"
QT_MOC_LITERAL(5, 63, 17), // "titleColorPressed"
QT_MOC_LITERAL(6, 81, 14), // "wsColorPressed"
QT_MOC_LITERAL(7, 96, 14), // "wlColorPressed"
QT_MOC_LITERAL(8, 111, 14), // "bgColorPressed"
QT_MOC_LITERAL(9, 126, 14), // "hlColorPressed"
QT_MOC_LITERAL(10, 141, 16), // "gridColorPressed"
QT_MOC_LITERAL(11, 158, 9), // "okPressed"
QT_MOC_LITERAL(12, 168, 15), // "gridWidthChange"
QT_MOC_LITERAL(13, 184, 5) // "width"

    },
    "appearanceDialog\0titleFontPressed\0\0"
    "wsFontPressed\0wlFontPressed\0"
    "titleColorPressed\0wsColorPressed\0"
    "wlColorPressed\0bgColorPressed\0"
    "hlColorPressed\0gridColorPressed\0"
    "okPressed\0gridWidthChange\0width"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_appearanceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    1,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   13,

       0        // eod
};

void appearanceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<appearanceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->titleFontPressed(); break;
        case 1: _t->wsFontPressed(); break;
        case 2: _t->wlFontPressed(); break;
        case 3: _t->titleColorPressed(); break;
        case 4: _t->wsColorPressed(); break;
        case 5: _t->wlColorPressed(); break;
        case 6: _t->bgColorPressed(); break;
        case 7: _t->hlColorPressed(); break;
        case 8: _t->gridColorPressed(); break;
        case 9: _t->okPressed(); break;
        case 10: _t->gridWidthChange((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject appearanceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_appearanceDialog.data,
    qt_meta_data_appearanceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *appearanceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *appearanceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_appearanceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int appearanceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
