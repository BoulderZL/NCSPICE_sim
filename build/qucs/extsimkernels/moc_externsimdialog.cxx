/****************************************************************************
** Meta object code from reading C++ file 'externsimdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qucs_s/qucs/extsimkernels/externsimdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'externsimdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExternSimDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   28,   28,   28, 0x05,
      29,   28,   28,   28, 0x05,
      40,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   28,   28,   28, 0x08,
      70,   28,   28,   28, 0x08,
      91,  137,   28,   28, 0x08,
     141,   28,   28,   28, 0x08,
     153,   28,   28,   28, 0x08,
     164,   28,   28,   28, 0x08,
     183,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExternSimDialog[] = {
    "ExternSimDialog\0simulated()\0\0warnings()\0"
    "success()\0slotProcessOutput()\0"
    "slotNgspiceStarted()\0"
    "slotNgspiceStartError(QProcess::ProcessError)\0"
    "err\0slotStart()\0slotStop()\0"
    "slotSetSimulator()\0slotSaveNetlist()\0"
};

void ExternSimDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExternSimDialog *_t = static_cast<ExternSimDialog *>(_o);
        switch (_id) {
        case 0: _t->simulated(); break;
        case 1: _t->warnings(); break;
        case 2: _t->success(); break;
        case 3: _t->slotProcessOutput(); break;
        case 4: _t->slotNgspiceStarted(); break;
        case 5: _t->slotNgspiceStartError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 6: _t->slotStart(); break;
        case 7: _t->slotStop(); break;
        case 8: _t->slotSetSimulator(); break;
        case 9: _t->slotSaveNetlist(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExternSimDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExternSimDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExternSimDialog,
      qt_meta_data_ExternSimDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExternSimDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExternSimDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExternSimDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExternSimDialog))
        return static_cast<void*>(const_cast< ExternSimDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExternSimDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ExternSimDialog::simulated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ExternSimDialog::warnings()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ExternSimDialog::success()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
