/****************************************************************************
** Meta object code from reading C++ file 'maindialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maindialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      48,   11,   11,   11, 0x08,
      83,   11,   11,   11, 0x08,
     110,   11,   11,   11, 0x08,
     136,   11,   11,   11, 0x08,
     171,   11,   11,   11, 0x08,
     204,   11,   11,   11, 0x08,
     238,   11,   11,   11, 0x08,
     269,   11,   11,   11, 0x08,
     299,   11,   11,   11, 0x08,
     332,   11,   11,   11, 0x08,
     377,  368,   11,   11, 0x08,
     418,   11,   11,   11, 0x08,
     446,   11,   11,   11, 0x08,
     481,   11,   11,   11, 0x08,
     511,   11,   11,   11, 0x08,
     535,   11,   11,   11, 0x08,
     568,   11,   11,   11, 0x08,
     607,   11,   11,   11, 0x08,
     631,   11,   11,   11, 0x08,
     654,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainDialog[] = {
    "MainDialog\0\0on_shutterSpinBox_valueChanged(int)\0"
    "on_resizeSmallPushButton_clicked()\0"
    "on_whiteCheckBox_clicked()\0"
    "on_gridCheckBox_clicked()\0"
    "on_recordPosesPushButton_clicked()\0"
    "on_playPosesPushButton_clicked()\0"
    "on_deletePosePushButton_clicked()\0"
    "on_addPosePushButton_clicked()\0"
    "on_resizePushButton_clicked()\0"
    "on_showCamerasCheckBox_clicked()\0"
    "on_backgroundWallCheckBox_clicked()\0"
    "position\0on_backgroundWallSlider_sliderMoved(int)\0"
    "on_resetBusButton_clicked()\0"
    "on_readFromFilesCheckBox_clicked()\0"
    "on_stereoScanButton_clicked()\0"
    "on_exitButton_clicked()\0"
    "on_stopCapturingButton_clicked()\0"
    "on_captureFromFirewireButton_clicked()\0"
    "newStereoImageArrived()\0newHomographyArrived()\0"
    "newDisparityMapArrived()\0"
};

void MainDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainDialog *_t = static_cast<MainDialog *>(_o);
        switch (_id) {
        case 0: _t->on_shutterSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_resizeSmallPushButton_clicked(); break;
        case 2: _t->on_whiteCheckBox_clicked(); break;
        case 3: _t->on_gridCheckBox_clicked(); break;
        case 4: _t->on_recordPosesPushButton_clicked(); break;
        case 5: _t->on_playPosesPushButton_clicked(); break;
        case 6: _t->on_deletePosePushButton_clicked(); break;
        case 7: _t->on_addPosePushButton_clicked(); break;
        case 8: _t->on_resizePushButton_clicked(); break;
        case 9: _t->on_showCamerasCheckBox_clicked(); break;
        case 10: _t->on_backgroundWallCheckBox_clicked(); break;
        case 11: _t->on_backgroundWallSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_resetBusButton_clicked(); break;
        case 13: _t->on_readFromFilesCheckBox_clicked(); break;
        case 14: _t->on_stereoScanButton_clicked(); break;
        case 15: _t->on_exitButton_clicked(); break;
        case 16: _t->on_stopCapturingButton_clicked(); break;
        case 17: _t->on_captureFromFirewireButton_clicked(); break;
        case 18: _t->newStereoImageArrived(); break;
        case 19: _t->newHomographyArrived(); break;
        case 20: _t->newDisparityMapArrived(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MainDialog,
      qt_meta_data_MainDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainDialog))
        return static_cast<void*>(const_cast< MainDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MainDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
