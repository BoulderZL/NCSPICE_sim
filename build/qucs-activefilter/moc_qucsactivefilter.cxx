/****************************************************************************
** Meta object code from reading C++ file 'qucsactivefilter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qucs_s/qucs-activefilter/qucsactivefilter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qucsactivefilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QucsActiveFilter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   39,   39,   39, 0x08,
      40,   39,   39,   39, 0x08,
      61,   39,   39,   39, 0x08,
      81,   39,   39,   39, 0x08,
     104,   39,   39,   39, 0x08,
     120,   39,   39,   39, 0x08,
     145,   39,   39,   39, 0x08,
     161,   39,   39,   39, 0x08,
     179,   39,   39,   39, 0x08,
     195,  217,   39,   39, 0x08,
     224,   39,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QucsActiveFilter[] = {
    "QucsActiveFilter\0slotUpdateSchematic()\0"
    "\0slotUpdateResponse()\0slotCalcSchematic()\0"
    "slotSwitchParameters()\0slotSetLabels()\0"
    "slotDefineTransferFunc()\0slotHelpAbout()\0"
    "slotHelpAboutQt()\0slotHelpIntro()\0"
    "slotViewConsole(bool)\0toggle\0fixSize()\0"
};

void QucsActiveFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QucsActiveFilter *_t = static_cast<QucsActiveFilter *>(_o);
        switch (_id) {
        case 0: _t->slotUpdateSchematic(); break;
        case 1: _t->slotUpdateResponse(); break;
        case 2: _t->slotCalcSchematic(); break;
        case 3: _t->slotSwitchParameters(); break;
        case 4: _t->slotSetLabels(); break;
        case 5: _t->slotDefineTransferFunc(); break;
        case 6: _t->slotHelpAbout(); break;
        case 7: _t->slotHelpAboutQt(); break;
        case 8: _t->slotHelpIntro(); break;
        case 9: _t->slotViewConsole((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->fixSize(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QucsActiveFilter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QucsActiveFilter::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QucsActiveFilter,
      qt_meta_data_QucsActiveFilter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QucsActiveFilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QucsActiveFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QucsActiveFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QucsActiveFilter))
        return static_cast<void*>(const_cast< QucsActiveFilter*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QucsActiveFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
