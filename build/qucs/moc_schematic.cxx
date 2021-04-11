/****************************************************************************
** Meta object code from reading C++ file 'schematic.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qucs_s/qucs/schematic.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schematic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Schematic[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   42,   44,   44, 0x05,
      45,   44,   44,   44, 0x05,
      67,   44,   44,   44, 0x05,
      89,   44,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
     113,   44,   44,   44, 0x09,
     128,   44,   44,   44, 0x09,
     145,   44,   44,   44, 0x09,
     162,   44,   44,   44, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Schematic[] = {
    "Schematic\0signalCursorPosChanged(int,int)\0"
    ",\0\0signalUndoState(bool)\0signalRedoState(bool)\0"
    "signalFileChanged(bool)\0slotScrollUp()\0"
    "slotScrollDown()\0slotScrollLeft()\0"
    "slotScrollRight()\0"
};

void Schematic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Schematic *_t = static_cast<Schematic *>(_o);
        switch (_id) {
        case 0: _t->signalCursorPosChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->signalUndoState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->signalRedoState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->signalFileChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slotScrollUp(); break;
        case 5: _t->slotScrollDown(); break;
        case 6: _t->slotScrollLeft(); break;
        case 7: _t->slotScrollRight(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Schematic::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Schematic::staticMetaObject = {
    { &Q3ScrollView::staticMetaObject, qt_meta_stringdata_Schematic,
      qt_meta_data_Schematic, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Schematic::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Schematic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Schematic::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Schematic))
        return static_cast<void*>(const_cast< Schematic*>(this));
    if (!strcmp(_clname, "QucsDoc"))
        return static_cast< QucsDoc*>(const_cast< Schematic*>(this));
    return Q3ScrollView::qt_metacast(_clname);
}

int Schematic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3ScrollView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Schematic::signalCursorPosChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Schematic::signalUndoState(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Schematic::signalRedoState(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Schematic::signalFileChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
