/****************************************************************************
** Meta object code from reading C++ file 'NetworkManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../NetworkManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qmapcontrol__NetworkManager_t {
    QByteArrayData data[17];
    char stringdata[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_qmapcontrol__NetworkManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_qmapcontrol__NetworkManager_t qt_meta_stringdata_qmapcontrol__NetworkManager = {
    {
QT_MOC_LITERAL(0, 0, 27),
QT_MOC_LITERAL(1, 28, 21),
QT_MOC_LITERAL(2, 50, 0),
QT_MOC_LITERAL(3, 51, 5),
QT_MOC_LITERAL(4, 57, 19),
QT_MOC_LITERAL(5, 77, 15),
QT_MOC_LITERAL(6, 93, 3),
QT_MOC_LITERAL(7, 97, 6),
QT_MOC_LITERAL(8, 104, 13),
QT_MOC_LITERAL(9, 118, 27),
QT_MOC_LITERAL(10, 146, 13),
QT_MOC_LITERAL(11, 160, 5),
QT_MOC_LITERAL(12, 166, 15),
QT_MOC_LITERAL(13, 182, 13),
QT_MOC_LITERAL(14, 196, 16),
QT_MOC_LITERAL(15, 213, 14),
QT_MOC_LITERAL(16, 228, 5)
    },
    "qmapcontrol::NetworkManager\0"
    "downloadingInProgress\0\0count\0"
    "downloadingFinished\0imageDownloaded\0"
    "url\0pixmap\0downloadImage\0"
    "proxyAuthenticationRequired\0QNetworkProxy\0"
    "proxy\0QAuthenticator*\0authenticator\0"
    "downloadFinished\0QNetworkReply*\0reply\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qmapcontrol__NetworkManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06,
       4,    0,   47,    2, 0x06,
       5,    2,   48,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       8,    1,   53,    2, 0x0a,
       9,    2,   56,    2, 0x08,
      14,    1,   61,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QPixmap,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    6,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void qmapcontrol::NetworkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkManager *_t = static_cast<NetworkManager *>(_o);
        switch (_id) {
        case 0: _t->downloadingInProgress((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->downloadingFinished(); break;
        case 2: _t->imageDownloaded((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 3: _t->downloadImage((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 5: _t->downloadFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NetworkManager::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkManager::downloadingInProgress)) {
                *result = 0;
            }
        }
        {
            typedef void (NetworkManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkManager::downloadingFinished)) {
                *result = 1;
            }
        }
        {
            typedef void (NetworkManager::*_t)(const QUrl & , const QPixmap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkManager::imageDownloaded)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject qmapcontrol::NetworkManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qmapcontrol__NetworkManager.data,
      qt_meta_data_qmapcontrol__NetworkManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *qmapcontrol::NetworkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qmapcontrol::NetworkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qmapcontrol__NetworkManager.stringdata))
        return static_cast<void*>(const_cast< NetworkManager*>(this));
    return QObject::qt_metacast(_clname);
}

int qmapcontrol::NetworkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void qmapcontrol::NetworkManager::downloadingInProgress(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qmapcontrol::NetworkManager::downloadingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void qmapcontrol::NetworkManager::imageDownloaded(const QUrl & _t1, const QPixmap & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE