/****************************************************************************
** Meta object code from reading C++ file 'textdoc.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qucs_s/qucs/textdoc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textdoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TextDoc[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,   40,   42,   42, 0x05,
      43,   42,   42,   42, 0x05,
      67,   42,   42,   42, 0x05,
      89,   42,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
     111,  142,   42,   42, 0x0a,
     178,  223,   42,   42, 0x0a,
     278,   42,   42,   42, 0x0a,
     301,   42,   42,   42, 0x0a,
     318,   42,   42,   42, 0x08,
     341,  376,  380,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TextDoc[] = {
    "TextDoc\0signalCursorPosChanged(int,int)\0"
    ",\0\0signalFileChanged(bool)\0"
    "signalUndoState(bool)\0signalRedoState(bool)\0"
    "search(QString,bool,bool,bool)\0"
    "str,CaseSensitive,wordOnly,backward\0"
    "replace(QString,QString,bool,bool,bool,bool)\0"
    "str,str2,needConfirmed,CaseSensitive,wordOnly,backward\0"
    "slotCursorPosChanged()\0slotSetChanged()\0"
    "highlightCurrentLine()\0"
    "baseSearch(QString,bool,bool,bool)\0"
    ",,,\0bool\0"
};

void TextDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TextDoc *_t = static_cast<TextDoc *>(_o);
        switch (_id) {
        case 0: _t->signalCursorPosChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->signalFileChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->signalUndoState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->signalRedoState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->search((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->replace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 6: _t->slotCursorPosChanged(); break;
        case 7: _t->slotSetChanged(); break;
        case 8: _t->highlightCurrentLine(); break;
        case 9: { bool _r = _t->baseSearch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TextDoc::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TextDoc::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_TextDoc,
      qt_meta_data_TextDoc, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextDoc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextDoc))
        return static_cast<void*>(const_cast< TextDoc*>(this));
    if (!strcmp(_clname, "QucsDoc"))
        return static_cast< QucsDoc*>(const_cast< TextDoc*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int TextDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
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
void TextDoc::signalCursorPosChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TextDoc::signalFileChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TextDoc::signalUndoState(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TextDoc::signalRedoState(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
