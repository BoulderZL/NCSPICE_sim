/****************************************************************************
** Meta object code from reading C++ file 'qucsfilter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qucs_s/qucs-filter/qucsfilter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qucsfilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QucsFilter[] = {

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
      11,   22,   22,   22, 0x08,
      23,   22,   22,   22, 0x08,
      39,   22,   22,   22, 0x08,
      55,   22,   22,   22, 0x08,
      73,   22,   22,   22, 0x08,
      89,   22,   22,   22, 0x08,
     110,   22,   22,   22, 0x08,
     132,   22,   22,   22, 0x08,
     149,   22,   22,   22, 0x08,
     177,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QucsFilter[] = {
    "QucsFilter\0slotQuit()\0\0slotHelpIntro()\0"
    "slotHelpAbout()\0slotHelpAboutQt()\0"
    "slotCalculate()\0slotTypeChanged(int)\0"
    "slotClassChanged(int)\0slotShowResult()\0"
    "slotRealizationChanged(int)\0"
    "slotTakeEr(QString)\0"
};

void QucsFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QucsFilter *_t = static_cast<QucsFilter *>(_o);
        switch (_id) {
        case 0: _t->slotQuit(); break;
        case 1: _t->slotHelpIntro(); break;
        case 2: _t->slotHelpAbout(); break;
        case 3: _t->slotHelpAboutQt(); break;
        case 4: _t->slotCalculate(); break;
        case 5: _t->slotTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotClassChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotShowResult(); break;
        case 8: _t->slotRealizationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->slotTakeEr((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QucsFilter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QucsFilter::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QucsFilter,
      qt_meta_data_QucsFilter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QucsFilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QucsFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QucsFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QucsFilter))
        return static_cast<void*>(const_cast< QucsFilter*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QucsFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
