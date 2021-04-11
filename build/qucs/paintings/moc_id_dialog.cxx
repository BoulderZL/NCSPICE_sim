/****************************************************************************
** Meta object code from reading C++ file 'id_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qucs_s/qucs/paintings/id_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'id_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ID_Dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,   19,   19,   19, 0x08,
      20,   19,   19,   19, 0x08,
      32,   19,   19,   19, 0x08,
      51,   19,   19,   19, 0x08,
      73,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ID_Dialog[] = {
    "ID_Dialog\0slotOk()\0\0slotApply()\0"
    "slotAddParameter()\0slotRemoveParameter()\0"
    "slotEditParameter()\0"
};

void ID_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ID_Dialog *_t = static_cast<ID_Dialog *>(_o);
        switch (_id) {
        case 0: _t->slotOk(); break;
        case 1: _t->slotApply(); break;
        case 2: _t->slotAddParameter(); break;
        case 3: _t->slotRemoveParameter(); break;
        case 4: _t->slotEditParameter(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ID_Dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ID_Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ID_Dialog,
      qt_meta_data_ID_Dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ID_Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ID_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ID_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ID_Dialog))
        return static_cast<void*>(const_cast< ID_Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ID_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
