/****************************************************************************
** Meta object code from reading C++ file 'note.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "note.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'note.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Note_t {
    QByteArrayData data[19];
    char stringdata[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Note_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Note_t qt_meta_stringdata_Note = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 7),
QT_MOC_LITERAL(2, 13, 0),
QT_MOC_LITERAL(3, 14, 4),
QT_MOC_LITERAL(4, 19, 7),
QT_MOC_LITERAL(5, 27, 4),
QT_MOC_LITERAL(6, 32, 4),
QT_MOC_LITERAL(7, 37, 6),
QT_MOC_LITERAL(8, 44, 9),
QT_MOC_LITERAL(9, 54, 7),
QT_MOC_LITERAL(10, 62, 8),
QT_MOC_LITERAL(11, 71, 13),
QT_MOC_LITERAL(12, 85, 10),
QT_MOC_LITERAL(13, 96, 28),
QT_MOC_LITERAL(14, 125, 7),
QT_MOC_LITERAL(15, 133, 23),
QT_MOC_LITERAL(16, 157, 25),
QT_MOC_LITERAL(17, 183, 24),
QT_MOC_LITERAL(18, 208, 26)
    },
    "Note\0newFile\0\0open\0openARG\0path\0save\0"
    "saveAs\0savecheck\0filePDF\0textBold\0"
    "textUnderline\0textItalic\0"
    "on_actionWarp_Text_triggered\0checked\0"
    "on_actionLeft_triggered\0"
    "on_actionCenter_triggered\0"
    "on_actionRight_triggered\0"
    "on_actionJustify_triggered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Note[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08,
       3,    0,   95,    2, 0x08,
       4,    1,   96,    2, 0x08,
       6,    0,   99,    2, 0x08,
       7,    0,  100,    2, 0x08,
       8,    0,  101,    2, 0x08,
       9,    0,  102,    2, 0x08,
      10,    0,  103,    2, 0x08,
      11,    0,  104,    2, 0x08,
      12,    0,  105,    2, 0x08,
      13,    0,  106,    2, 0x08,
      13,    1,  107,    2, 0x08,
      15,    0,  110,    2, 0x08,
      16,    0,  111,    2, 0x08,
      17,    0,  112,    2, 0x08,
      18,    0,  113,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Note::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Note *_t = static_cast<Note *>(_o);
        switch (_id) {
        case 0: _t->newFile(); break;
        case 1: _t->open(); break;
        case 2: _t->openARG((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->savecheck();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->filePDF(); break;
        case 7: _t->textBold(); break;
        case 8: _t->textUnderline(); break;
        case 9: _t->textItalic(); break;
        case 10: _t->on_actionWarp_Text_triggered(); break;
        case 11: _t->on_actionWarp_Text_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_actionLeft_triggered(); break;
        case 13: _t->on_actionCenter_triggered(); break;
        case 14: _t->on_actionRight_triggered(); break;
        case 15: _t->on_actionJustify_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject Note::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Note.data,
      qt_meta_data_Note,  qt_static_metacall, 0, 0}
};


const QMetaObject *Note::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Note::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Note.stringdata))
        return static_cast<void*>(const_cast< Note*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Note::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
