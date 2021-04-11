/****************************************************************************
** Meta object code from reading C++ file 'abstractspicekernel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qucs_s/qucs/extsimkernels/abstractspicekernel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractspicekernel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractSpiceKernel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   30,   30,   30, 0x05,
      31,   30,   30,   30, 0x05,
      42,   30,   30,   30, 0x05,
      73,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      87,   30,   30,   30, 0x09,
     102,   30,   30,   30, 0x09,
     122,   30,   30,   30, 0x0a,
     137,   30,   30,   30, 0x0a,
     151,  186,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AbstractSpiceKernel[] = {
    "AbstractSpiceKernel\0started()\0\0"
    "finished()\0errors(QProcess::ProcessError)\0"
    "progress(int)\0slotFinished()\0"
    "slotProcessOutput()\0slotSimulate()\0"
    "killThemAll()\0slotErrors(QProcess::ProcessError)\0"
    "err\0"
};

void AbstractSpiceKernel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AbstractSpiceKernel *_t = static_cast<AbstractSpiceKernel *>(_o);
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->finished(); break;
        case 2: _t->errors((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 3: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotFinished(); break;
        case 5: _t->slotProcessOutput(); break;
        case 6: _t->slotSimulate(); break;
        case 7: _t->killThemAll(); break;
        case 8: _t->slotErrors((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AbstractSpiceKernel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AbstractSpiceKernel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractSpiceKernel,
      qt_meta_data_AbstractSpiceKernel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractSpiceKernel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractSpiceKernel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractSpiceKernel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractSpiceKernel))
        return static_cast<void*>(const_cast< AbstractSpiceKernel*>(this));
    return QObject::qt_metacast(_clname);
}

int AbstractSpiceKernel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AbstractSpiceKernel::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AbstractSpiceKernel::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void AbstractSpiceKernel::errors(QProcess::ProcessError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AbstractSpiceKernel::progress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
