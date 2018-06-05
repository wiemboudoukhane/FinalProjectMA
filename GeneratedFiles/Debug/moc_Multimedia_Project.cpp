/****************************************************************************
** Meta object code from reading C++ file 'Multimedia_Project.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Multimedia_Project.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Multimedia_Project.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Multimedia_Project_t {
    QByteArrayData data[9];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Multimedia_Project_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Multimedia_Project_t qt_meta_stringdata_Multimedia_Project = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Multimedia_Project"
QT_MOC_LITERAL(1, 19, 10), // "Dilatation"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "Erosion"
QT_MOC_LITERAL(4, 39, 8), // "Resizing"
QT_MOC_LITERAL(5, 48, 7), // "Lighten"
QT_MOC_LITERAL(6, 56, 8), // "Panorama"
QT_MOC_LITERAL(7, 65, 5), // "Canny"
QT_MOC_LITERAL(8, 71, 4) // "Exit"

    },
    "Multimedia_Project\0Dilatation\0\0Erosion\0"
    "Resizing\0Lighten\0Panorama\0Canny\0Exit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Multimedia_Project[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    0,   54,    2, 0x09 /* Protected */,
       8,    0,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Multimedia_Project::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Multimedia_Project *_t = static_cast<Multimedia_Project *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Dilatation(); break;
        case 1: _t->Erosion(); break;
        case 2: _t->Resizing(); break;
        case 3: _t->Lighten(); break;
        case 4: _t->Panorama(); break;
        case 5: _t->Canny(); break;
        case 6: _t->Exit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Multimedia_Project::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Multimedia_Project.data,
      qt_meta_data_Multimedia_Project,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Multimedia_Project::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Multimedia_Project::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Multimedia_Project.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Multimedia_Project::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
