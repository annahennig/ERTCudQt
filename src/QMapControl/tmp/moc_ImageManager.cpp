/****************************************************************************
** Meta object code from reading C++ file 'ImageManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ImageManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qmapcontrol__ImageManager_t {
    QByteArrayData data[10];
    char stringdata[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_qmapcontrol__ImageManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_qmapcontrol__ImageManager_t qt_meta_stringdata_qmapcontrol__ImageManager = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 13),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 3),
QT_MOC_LITERAL(4, 45, 21),
QT_MOC_LITERAL(5, 67, 5),
QT_MOC_LITERAL(6, 73, 19),
QT_MOC_LITERAL(7, 93, 12),
QT_MOC_LITERAL(8, 106, 15),
QT_MOC_LITERAL(9, 122, 6)
    },
    "qmapcontrol::ImageManager\0downloadImage\0"
    "\0url\0downloadingInProgress\0count\0"
    "downloadingFinished\0imageUpdated\0"
    "imageDownloaded\0pixmap\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qmapcontrol__ImageManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06,
       4,    1,   42,    2, 0x06,
       6,    0,   45,    2, 0x06,
       7,    1,   46,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       8,    2,   49,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QPixmap,    3,    9,

       0        // eod
};

void qmapcontrol::ImageManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageManager *_t = static_cast<ImageManager *>(_o);
        switch (_id) {
        case 0: _t->downloadImage((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->downloadingInProgress((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->downloadingFinished(); break;
        case 3: _t->imageUpdated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->imageDownloaded((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImageManager::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageManager::downloadImage)) {
                *result = 0;
            }
        }
        {
            typedef void (ImageManager::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageManager::downloadingInProgress)) {
                *result = 1;
            }
        }
        {
            typedef void (ImageManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageManager::downloadingFinished)) {
                *result = 2;
            }
        }
        {
            typedef void (ImageManager::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageManager::imageUpdated)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject qmapcontrol::ImageManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qmapcontrol__ImageManager.data,
      qt_meta_data_qmapcontrol__ImageManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *qmapcontrol::ImageManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qmapcontrol::ImageManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qmapcontrol__ImageManager.stringdata))
        return static_cast<void*>(const_cast< ImageManager*>(this));
    return QObject::qt_metacast(_clname);
}

int qmapcontrol::ImageManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void qmapcontrol::ImageManager::downloadImage(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qmapcontrol::ImageManager::downloadingInProgress(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qmapcontrol::ImageManager::downloadingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void qmapcontrol::ImageManager::imageUpdated(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
