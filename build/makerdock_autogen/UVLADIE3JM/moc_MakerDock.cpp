/****************************************************************************
** Meta object code from reading C++ file 'MakerDock.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/MakerDock.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MakerDock.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MakerDock_t {
    QByteArrayData data[10];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MakerDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MakerDock_t qt_meta_stringdata_MakerDock = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MakerDock"
QT_MOC_LITERAL(1, 10, 13), // "appendWinItem"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "WId"
QT_MOC_LITERAL(4, 29, 8), // "windowId"
QT_MOC_LITERAL(5, 38, 13), // "deleteWinItem"
QT_MOC_LITERAL(6, 52, 7), // "winItem"
QT_MOC_LITERAL(7, 60, 21), // "MakerDockWinItem::Ref"
QT_MOC_LITERAL(8, 82, 14), // "tryAttractItem"
QT_MOC_LITERAL(9, 97, 4) // "item"

    },
    "MakerDock\0appendWinItem\0\0WId\0windowId\0"
    "deleteWinItem\0winItem\0MakerDockWinItem::Ref\0"
    "tryAttractItem\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MakerDock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 7, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    9,

       0        // eod
};

void MakerDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MakerDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appendWinItem((*reinterpret_cast< WId(*)>(_a[1]))); break;
        case 1: _t->deleteWinItem((*reinterpret_cast< WId(*)>(_a[1]))); break;
        case 2: { MakerDockWinItem::Ref _r = _t->winItem((*reinterpret_cast< WId(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< MakerDockWinItem::Ref*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->tryAttractItem((*reinterpret_cast< MakerDockWinItem::Ref(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MakerDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MakerDock.data,
    qt_meta_data_MakerDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MakerDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MakerDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MakerDock.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MakerDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
