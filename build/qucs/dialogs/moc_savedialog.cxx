/****************************************************************************
** Meta object code from reading C++ file 'savedialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qucs_s/qucs/dialogs/savedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SaveDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   29,   29,   29, 0x09,
      30,   29,   29,   29, 0x09,
      52,   29,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SaveDialog[] = {
    "SaveDialog\0dontSaveClicked()\0\0"
    "saveSelectedClicked()\0reject()\0"
};

void SaveDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SaveDialog *_t = static_cast<SaveDialog *>(_o);
        switch (_id) {
        case 0: _t->dontSaveClicked(); break;
        case 1: _t->saveSelectedClicked(); break;
        case 2: _t->reject(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SaveDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SaveDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SaveDialog,
      qt_meta_data_SaveDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SaveDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SaveDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SaveDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SaveDialog))
        return static_cast<void*>(const_cast< SaveDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SaveDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
