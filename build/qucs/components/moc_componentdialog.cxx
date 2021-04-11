/****************************************************************************
** Meta object code from reading C++ file 'componentdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qucs_s/qucs/components/componentdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'componentdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ComponentDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   29,   29,   29, 0x08,
      30,   29,   29,   29, 0x08,
      47,   85,   29,   29, 0x08,
      90,   29,   29,   29, 0x08,
     107,  127,   29,   29, 0x08,
     133,   29,   29,   29, 0x08,
     150,   29,   29,   29, 0x08,
     165,  190,   29,   29, 0x08,
     195,   29,   29,   29, 0x08,
     215,   29,   29,   29, 0x08,
     235,   29,   29,   29, 0x08,
     249,   29,   29,   29, 0x08,
     263,   29,   29,   29, 0x08,
     276,   29,   29,   29, 0x08,
     291,   29,   29,   29, 0x08,
     314,   29,   29,   29, 0x08,
     341,   29,   29,   29, 0x08,
     366,   29,   29,   29, 0x08,
     385,   29,   29,   29, 0x08,
     405,   29,   29,   29, 0x08,
     425,   29,   29,   29, 0x08,
     444,   29,   29,   29, 0x08,
     462,   29,   29,   29, 0x08,
     480,   29,   29,   29, 0x08,
     500,  524,   29,   29, 0x08,
     534,   29,   29,   29, 0x09,
     543,  573,  583,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ComponentDialog[] = {
    "ComponentDialog\0slotButtOK()\0\0"
    "slotButtCancel()\0slotSelectProperty(QTableWidgetItem*)\0"
    "item\0slotApplyInput()\0slotApplyState(int)\0"
    "State\0slotBrowseFile()\0slotEditFile()\0"
    "slotApplyChange(QString)\0Text\0"
    "slotApplyProperty()\0slotApplyPropName()\0"
    "slotButtAdd()\0slotButtRem()\0slotButtUp()\0"
    "slotButtDown()\0slotSimTypeChange(int)\0"
    "slotNumberChanged(QString)\0"
    "slotStepChanged(QString)\0slotParamEntered()\0"
    "slotSimEntered(int)\0slotValuesEntered()\0"
    "slotStartEntered()\0slotStopEntered()\0"
    "slotStepEntered()\0slotNumberEntered()\0"
    "slotHHeaderClicked(int)\0headerIdx\0"
    "reject()\0eventFilter(QObject*,QEvent*)\0"
    "obj,event\0bool\0"
};

void ComponentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ComponentDialog *_t = static_cast<ComponentDialog *>(_o);
        switch (_id) {
        case 0: _t->slotButtOK(); break;
        case 1: _t->slotButtCancel(); break;
        case 2: _t->slotSelectProperty((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->slotApplyInput(); break;
        case 4: _t->slotApplyState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotBrowseFile(); break;
        case 6: _t->slotEditFile(); break;
        case 7: _t->slotApplyChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->slotApplyProperty(); break;
        case 9: _t->slotApplyPropName(); break;
        case 10: _t->slotButtAdd(); break;
        case 11: _t->slotButtRem(); break;
        case 12: _t->slotButtUp(); break;
        case 13: _t->slotButtDown(); break;
        case 14: _t->slotSimTypeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->slotNumberChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->slotStepChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->slotParamEntered(); break;
        case 18: _t->slotSimEntered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->slotValuesEntered(); break;
        case 20: _t->slotStartEntered(); break;
        case 21: _t->slotStopEntered(); break;
        case 22: _t->slotStepEntered(); break;
        case 23: _t->slotNumberEntered(); break;
        case 24: _t->slotHHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->reject(); break;
        case 26: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ComponentDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ComponentDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ComponentDialog,
      qt_meta_data_ComponentDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ComponentDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ComponentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ComponentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ComponentDialog))
        return static_cast<void*>(const_cast< ComponentDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ComponentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
