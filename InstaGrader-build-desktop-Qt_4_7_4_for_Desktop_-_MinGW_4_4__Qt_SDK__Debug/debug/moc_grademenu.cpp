/****************************************************************************
** Meta object code from reading C++ file 'grademenu.h'
**
** Created: Tue Dec 27 21:36:05 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../InstaGrader/grademenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grademenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_grademenu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      34,   10,   10,   10, 0x08,
      57,   10,   10,   10, 0x08,
      86,   10,   10,   10, 0x08,
     113,  108,   10,   10, 0x08,
     146,  108,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_grademenu[] = {
    "grademenu\0\0on_cppselect_clicked()\0"
    "on_txtselect_clicked()\0"
    "on_opengradebutton_clicked()\0"
    "on_openback_clicked()\0arg1\0"
    "on_lineEdit_textChanged(QString)\0"
    "on_lineEdit_2_textChanged(QString)\0"
};

const QMetaObject grademenu::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_grademenu,
      qt_meta_data_grademenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &grademenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *grademenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *grademenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_grademenu))
        return static_cast<void*>(const_cast< grademenu*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int grademenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_cppselect_clicked(); break;
        case 1: on_txtselect_clicked(); break;
        case 2: on_opengradebutton_clicked(); break;
        case 3: on_openback_clicked(); break;
        case 4: on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: on_lineEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
