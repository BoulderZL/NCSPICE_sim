/****************************************************************************
** Meta object code from reading C++ file 'qucslib.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qucs_s/qucs-lib/qucslib.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qucslib.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QucsLib[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,   20,   20,   20, 0x08,
      21,   20,   20,   20, 0x08,
      32,   20,   20,   20, 0x08,
      43,   20,   20,   20, 0x08,
      65,   20,   20,   20, 0x08,
      81,   20,   20,   20, 0x08,
     104,   20,   20,   20, 0x08,
     133,   20,   20,   20, 0x08,
     151,   20,   20,   20, 0x08,
     187,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QucsLib[] = {
    "QucsLib\0slotAbout()\0\0slotQuit()\0"
    "slotHelp()\0slotCopyToClipBoard()\0"
    "slotShowModel()\0slotSelectLibrary(int)\0"
    "slotSearchComponent(QString)\0"
    "slotSearchClear()\0slotShowComponent(QListWidgetItem*)\0"
    "slotManageLib()\0"
};

void QucsLib::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QucsLib *_t = static_cast<QucsLib *>(_o);
        switch (_id) {
        case 0: _t->slotAbout(); break;
        case 1: _t->slotQuit(); break;
        case 2: _t->slotHelp(); break;
        case 3: _t->slotCopyToClipBoard(); break;
        case 4: _t->slotShowModel(); break;
        case 5: _t->slotSelectLibrary((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotSearchComponent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->slotSearchClear(); break;
        case 8: _t->slotShowComponent((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->slotManageLib(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QucsLib::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QucsLib::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QucsLib,
      qt_meta_data_QucsLib, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QucsLib::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QucsLib::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QucsLib::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QucsLib))
        return static_cast<void*>(const_cast< QucsLib*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QucsLib::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
