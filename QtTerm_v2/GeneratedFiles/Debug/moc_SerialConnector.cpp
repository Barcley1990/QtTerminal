/****************************************************************************
** Meta object code from reading C++ file 'SerialConnector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SerialConnector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialConnector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialConnector_t {
    QByteArrayData data[13];
    char stringdata[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialConnector_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialConnector_t qt_meta_stringdata_SerialConnector = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 13),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 10),
QT_MOC_LITERAL(4, 42, 10),
QT_MOC_LITERAL(5, 53, 14),
QT_MOC_LITERAL(6, 68, 9),
QT_MOC_LITERAL(7, 78, 10),
QT_MOC_LITERAL(8, 89, 11),
QT_MOC_LITERAL(9, 101, 11),
QT_MOC_LITERAL(10, 113, 13),
QT_MOC_LITERAL(11, 127, 13),
QT_MOC_LITERAL(12, 141, 14)
    },
    "SerialConnector\0scanPortNames\0\0"
    "choosePort\0chooseBaud\0chooseDataBits\0"
    "configure\0disconnect\0CR_Checkbox\0"
    "LF_Checkbox\0CRLF_Checkbox\0WriteToSerial\0"
    "ReadFromSerial"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialConnector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    1,   70,    2, 0x0a /* Public */,
       4,    1,   73,    2, 0x0a /* Public */,
       5,    1,   76,    2, 0x0a /* Public */,
       6,    0,   79,    2, 0x0a /* Public */,
       7,    0,   80,    2, 0x0a /* Public */,
       8,    1,   81,    2, 0x0a /* Public */,
       9,    1,   84,    2, 0x0a /* Public */,
      10,    1,   87,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SerialConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialConnector *_t = static_cast<SerialConnector *>(_o);
        switch (_id) {
        case 0: _t->scanPortNames(); break;
        case 1: _t->choosePort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->chooseBaud((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->chooseDataBits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->configure(); break;
        case 5: _t->disconnect(); break;
        case 6: _t->CR_Checkbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->LF_Checkbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->CRLF_Checkbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->WriteToSerial(); break;
        case 10: _t->ReadFromSerial(); break;
        default: ;
        }
    }
}

const QMetaObject SerialConnector::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SerialConnector.data,
      qt_meta_data_SerialConnector,  qt_static_metacall, 0, 0}
};


const QMetaObject *SerialConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialConnector.stringdata))
        return static_cast<void*>(const_cast< SerialConnector*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SerialConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
