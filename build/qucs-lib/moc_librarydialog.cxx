/****************************************************************************
** Meta object code from reading C++ file 'librarydialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qucs_s/qucs-lib/librarydialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librarydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LibraryDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   27,   27,   27, 0x08,
      28,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LibraryDialog[] = {
    "LibraryDialog\0slotDelete()\0\0slotRename()\0"
};

void LibraryDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LibraryDialog *_t = static_cast<LibraryDialog *>(_o);
        switch (_id) {
        case 0: _t->slotDelete(); break;
        case 1: _t->slotRename(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LibraryDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LibraryDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LibraryDialog,
      qt_meta_data_LibraryDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LibraryDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LibraryDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LibraryDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryDialog))
        return static_cast<void*>(const_cast< LibraryDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LibraryDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
