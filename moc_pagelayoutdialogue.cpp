/****************************************************************************
** Meta object code from reading C++ file 'pagelayoutdialogue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "pagelayoutdialogue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagelayoutdialogue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageLayoutDialog_t {
    QByteArrayData data[16];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageLayoutDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageLayoutDialog_t qt_meta_stringdata_PageLayoutDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PageLayoutDialog"
QT_MOC_LITERAL(1, 17, 15), // "PageSizeChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "setPortrait"
QT_MOC_LITERAL(4, 46, 12), // "setLandscape"
QT_MOC_LITERAL(5, 59, 13), // "MarginChanged"
QT_MOC_LITERAL(6, 73, 20), // "PageSizeComboChanged"
QT_MOC_LITERAL(7, 94, 5), // "index"
QT_MOC_LITERAL(8, 100, 12), // "setPageWidth"
QT_MOC_LITERAL(9, 113, 5), // "Width"
QT_MOC_LITERAL(10, 119, 13), // "setPageHeight"
QT_MOC_LITERAL(11, 133, 6), // "Height"
QT_MOC_LITERAL(12, 140, 12), // "setMarginTop"
QT_MOC_LITERAL(13, 153, 13), // "setMarginLeft"
QT_MOC_LITERAL(14, 167, 14), // "setMarginRight"
QT_MOC_LITERAL(15, 182, 15) // "setMarginBottom"

    },
    "PageLayoutDialog\0PageSizeChanged\0\0"
    "setPortrait\0setLandscape\0MarginChanged\0"
    "PageSizeComboChanged\0index\0setPageWidth\0"
    "Width\0setPageHeight\0Height\0setMarginTop\0"
    "setMarginLeft\0setMarginRight\0"
    "setMarginBottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageLayoutDialog[] = {

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
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x0a /* Public */,
      10,    1,   79,    2, 0x0a /* Public */,
      12,    1,   82,    2, 0x0a /* Public */,
      13,    1,   85,    2, 0x0a /* Public */,
      14,    1,   88,    2, 0x0a /* Public */,
      15,    1,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,

       0        // eod
};

void PageLayoutDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PageLayoutDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PageSizeChanged(); break;
        case 1: _t->setPortrait(); break;
        case 2: _t->setLandscape(); break;
        case 3: _t->MarginChanged(); break;
        case 4: _t->PageSizeComboChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setPageWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setPageHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setMarginTop((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setMarginLeft((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setMarginRight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setMarginBottom((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageLayoutDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PageLayoutDialog.data,
    qt_meta_data_PageLayoutDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PageLayoutDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageLayoutDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageLayoutDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PageLayoutDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PageLayoutView_t {
    QByteArrayData data[10];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageLayoutView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageLayoutView_t qt_meta_stringdata_PageLayoutView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PageLayoutView"
QT_MOC_LITERAL(1, 15, 12), // "setPageWidth"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "Width"
QT_MOC_LITERAL(4, 35, 13), // "setPageHeight"
QT_MOC_LITERAL(5, 49, 6), // "Height"
QT_MOC_LITERAL(6, 56, 12), // "setMarginTop"
QT_MOC_LITERAL(7, 69, 13), // "setMarginLeft"
QT_MOC_LITERAL(8, 83, 14), // "setMarginRight"
QT_MOC_LITERAL(9, 98, 15) // "setMarginBottom"

    },
    "PageLayoutView\0setPageWidth\0\0Width\0"
    "setPageHeight\0Height\0setMarginTop\0"
    "setMarginLeft\0setMarginRight\0"
    "setMarginBottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageLayoutView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       7,    1,   53,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,

       0        // eod
};

void PageLayoutView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PageLayoutView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPageWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setPageHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setMarginTop((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setMarginLeft((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setMarginRight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setMarginBottom((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageLayoutView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PageLayoutView.data,
    qt_meta_data_PageLayoutView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PageLayoutView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageLayoutView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageLayoutView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PageLayoutView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
