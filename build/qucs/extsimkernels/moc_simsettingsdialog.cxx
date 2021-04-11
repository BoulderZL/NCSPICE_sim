/****************************************************************************
** Meta object code from reading C++ file 'simsettingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qucs_s/qucs/extsimkernels/simsettingsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simsettingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimSettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   30,   30,   30, 0x08,
      31,   30,   30,   30, 0x08,
      44,   30,   30,   30, 0x08,
      61,   30,   30,   30, 0x08,
      75,   30,   30,   30, 0x08,
      92,   30,   30,   30, 0x08,
     111,   30,   30,   30, 0x08,
     129,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SimSettingsDialog[] = {
    "SimSettingsDialog\0slotApply()\0\0"
    "slotCancel()\0slotSetNgspice()\0"
    "slotSetXyce()\0slotSetXycePar()\0"
    "slotSetSpiceOpus()\0slotSetQucsator()\0"
    "slotSetWorkdir()\0"
};

void SimSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimSettingsDialog *_t = static_cast<SimSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->slotApply(); break;
        case 1: _t->slotCancel(); break;
        case 2: _t->slotSetNgspice(); break;
        case 3: _t->slotSetXyce(); break;
        case 4: _t->slotSetXycePar(); break;
        case 5: _t->slotSetSpiceOpus(); break;
        case 6: _t->slotSetQucsator(); break;
        case 7: _t->slotSetWorkdir(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SimSettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SimSettingsDialog,
      qt_meta_data_SimSettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimSettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimSettingsDialog))
        return static_cast<void*>(const_cast< SimSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SimSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
