/****************************************************************************
** Meta object code from reading C++ file 'showdialog.h'
**
** Created: Wed 15. Nov 18:31:19 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../showdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShowDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x08,
      37,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ShowDialog[] = {
    "ShowDialog\0\0col,row\0showOne(int,int)\0"
    "updateTable()\0"
};

const QMetaObject ShowDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ShowDialog,
      qt_meta_data_ShowDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShowDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShowDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShowDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShowDialog))
        return static_cast<void*>(const_cast< ShowDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ShowDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showOne((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: updateTable(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE