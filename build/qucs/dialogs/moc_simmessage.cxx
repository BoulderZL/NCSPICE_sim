/****************************************************************************
** Meta object code from reading C++ file 'simmessage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qucs_s/qucs/dialogs/simmessage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simmessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimMessage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   44,   46,   46, 0x05,
      47,   44,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
      82,   46,   46,   46, 0x0a,
      94,   46,   46,   46, 0x08,
     111,   46,   46,   46, 0x08,
     128,   46,   46,   46, 0x08,
     145,  186,   46,   46, 0x08,
     195,  234,   46,   46, 0x08,
     254,   46,   46,   46, 0x08,
     274,   46,   46,   46, 0x08,
     285,   46,   46,   46, 0x08,
     308,  336,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SimMessage[] = {
    "SimMessage\0SimulationEnded(int,SimMessage*)\0"
    ",\0\0displayDataPage(QString&,QString&)\0"
    "slotClose()\0slotDisplayMsg()\0"
    "slotDisplayErr()\0slotCloseStdin()\0"
    "slotStateChanged(QProcess::ProcessState)\0"
    "newState\0slotSimEnded(int,QProcess::ExitStatus)\0"
    "exitCode,exitStatus\0slotDisplayButton()\0"
    "AbortSim()\0slotReadSpiceNetlist()\0"
    "slotFinishSpiceNetlist(int)\0status\0"
};

void SimMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimMessage *_t = static_cast<SimMessage *>(_o);
        switch (_id) {
        case 0: _t->SimulationEnded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SimMessage*(*)>(_a[2]))); break;
        case 1: _t->displayDataPage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->slotClose(); break;
        case 3: _t->slotDisplayMsg(); break;
        case 4: _t->slotDisplayErr(); break;
        case 5: _t->slotCloseStdin(); break;
        case 6: _t->slotStateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 7: _t->slotSimEnded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 8: _t->slotDisplayButton(); break;
        case 9: _t->AbortSim(); break;
        case 10: _t->slotReadSpiceNetlist(); break;
        case 11: _t->slotFinishSpiceNetlist((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SimMessage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimMessage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SimMessage,
      qt_meta_data_SimMessage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimMessage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimMessage))
        return static_cast<void*>(const_cast< SimMessage*>(this));
    return QDialog::qt_metacast(_clname);
}

int SimMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SimMessage::SimulationEnded(int _t1, SimMessage * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SimMessage::displayDataPage(QString & _t1, QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
