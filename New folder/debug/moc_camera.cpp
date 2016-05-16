/****************************************************************************
** Meta object code from reading C++ file 'camera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Final/camera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Camera_t {
    QByteArrayData data[14];
    char stringdata0[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Camera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Camera_t qt_meta_stringdata_Camera = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Camera"
QT_MOC_LITERAL(1, 7, 24), // "processFrameAndupdateGUI"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "on_pushBtn_clicked"
QT_MOC_LITERAL(4, 52, 38), // "on_horizontalScrollBar_action..."
QT_MOC_LITERAL(5, 91, 5), // "value"
QT_MOC_LITERAL(6, 97, 40), // "on_horizontalScrollBar_4_acti..."
QT_MOC_LITERAL(7, 138, 40), // "on_horizontalScrollBar_2_acti..."
QT_MOC_LITERAL(8, 179, 40), // "on_horizontalScrollBar_5_acti..."
QT_MOC_LITERAL(9, 220, 40), // "on_horizontalScrollBar_3_acti..."
QT_MOC_LITERAL(10, 261, 40), // "on_horizontalScrollBar_6_acti..."
QT_MOC_LITERAL(11, 302, 20), // "on_pushBtn_2_clicked"
QT_MOC_LITERAL(12, 323, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(13, 347, 21) // "on_pushButton_clicked"

    },
    "Camera\0processFrameAndupdateGUI\0\0"
    "on_pushBtn_clicked\0"
    "on_horizontalScrollBar_actionTriggered\0"
    "value\0on_horizontalScrollBar_4_actionTriggered\0"
    "on_horizontalScrollBar_2_actionTriggered\0"
    "on_horizontalScrollBar_5_actionTriggered\0"
    "on_horizontalScrollBar_3_actionTriggered\0"
    "on_horizontalScrollBar_6_actionTriggered\0"
    "on_pushBtn_2_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Camera[] = {

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
       3,    0,   70,    2, 0x08 /* Private */,
       4,    1,   71,    2, 0x08 /* Private */,
       6,    1,   74,    2, 0x08 /* Private */,
       7,    1,   77,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      10,    1,   86,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Camera *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processFrameAndupdateGUI(); break;
        case 1: _t->on_pushBtn_clicked(); break;
        case 2: _t->on_horizontalScrollBar_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_horizontalScrollBar_4_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_horizontalScrollBar_2_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_horizontalScrollBar_5_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_horizontalScrollBar_3_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_horizontalScrollBar_6_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pushBtn_2_clicked(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Camera::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Camera.data,
      qt_meta_data_Camera,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Camera.stringdata0))
        return static_cast<void*>(const_cast< Camera*>(this));
    return QDialog::qt_metacast(_clname);
}

int Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
