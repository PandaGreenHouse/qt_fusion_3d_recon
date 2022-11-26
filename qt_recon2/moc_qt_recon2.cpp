/****************************************************************************
** Meta object code from reading C++ file 'qt_recon2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt_recon2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_recon2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WorkerThread_t {
    QByteArrayData data[3];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorkerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorkerThread_t qt_meta_stringdata_WorkerThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WorkerThread"
QT_MOC_LITERAL(1, 13, 11), // "resultReady"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "WorkerThread\0resultReady\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorkerThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void WorkerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WorkerThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultReady(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WorkerThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WorkerThread::resultReady)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WorkerThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_WorkerThread.data,
    qt_meta_data_WorkerThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WorkerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorkerThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int WorkerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void WorkerThread::resultReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_qt_recon2_t {
    QByteArrayData data[26];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qt_recon2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qt_recon2_t qt_meta_stringdata_qt_recon2 = {
    {
QT_MOC_LITERAL(0, 0, 9), // "qt_recon2"
QT_MOC_LITERAL(1, 10, 13), // "progressReady"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "total"
QT_MOC_LITERAL(4, 31, 3), // "sub"
QT_MOC_LITERAL(5, 35, 5), // "char*"
QT_MOC_LITERAL(6, 41, 3), // "msg"
QT_MOC_LITERAL(7, 45, 13), // "onBtnRunClick"
QT_MOC_LITERAL(8, 59, 14), // "onBtnImagePath"
QT_MOC_LITERAL(9, 74, 14), // "onBtnScenePath"
QT_MOC_LITERAL(10, 89, 16), // "onOpenModelClick"
QT_MOC_LITERAL(11, 106, 12), // "onAkazeCheck"
QT_MOC_LITERAL(12, 119, 11), // "onSiftCheck"
QT_MOC_LITERAL(13, 131, 17), // "onAkaze_SiftCheck"
QT_MOC_LITERAL(14, 149, 10), // "onMvsCheck"
QT_MOC_LITERAL(15, 160, 11), // "onSMvsCheck"
QT_MOC_LITERAL(16, 172, 15), // "onReconFinished"
QT_MOC_LITERAL(17, 188, 15), // "onSeperateRecon"
QT_MOC_LITERAL(18, 204, 11), // "setProgress"
QT_MOC_LITERAL(19, 216, 14), // "onDefaultCheck"
QT_MOC_LITERAL(20, 231, 14), // "onMakeSceneBtn"
QT_MOC_LITERAL(21, 246, 13), // "onSfmReconBtn"
QT_MOC_LITERAL(22, 260, 12), // "onDmReconBtn"
QT_MOC_LITERAL(23, 273, 13), // "onFssReconBtn"
QT_MOC_LITERAL(24, 287, 13), // "onTexReconBtn"
QT_MOC_LITERAL(25, 301, 16) // "onScalingTexMesh"

    },
    "qt_recon2\0progressReady\0\0total\0sub\0"
    "char*\0msg\0onBtnRunClick\0onBtnImagePath\0"
    "onBtnScenePath\0onOpenModelClick\0"
    "onAkazeCheck\0onSiftCheck\0onAkaze_SiftCheck\0"
    "onMvsCheck\0onSMvsCheck\0onReconFinished\0"
    "onSeperateRecon\0setProgress\0onDefaultCheck\0"
    "onMakeSceneBtn\0onSfmReconBtn\0onDmReconBtn\0"
    "onFssReconBtn\0onTexReconBtn\0"
    "onScalingTexMesh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qt_recon2[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  121,    2, 0x0a /* Public */,
       8,    0,  122,    2, 0x0a /* Public */,
       9,    0,  123,    2, 0x0a /* Public */,
      10,    0,  124,    2, 0x0a /* Public */,
      11,    0,  125,    2, 0x0a /* Public */,
      12,    0,  126,    2, 0x0a /* Public */,
      13,    0,  127,    2, 0x0a /* Public */,
      14,    0,  128,    2, 0x0a /* Public */,
      15,    0,  129,    2, 0x0a /* Public */,
      16,    0,  130,    2, 0x0a /* Public */,
      17,    0,  131,    2, 0x0a /* Public */,
      18,    3,  132,    2, 0x0a /* Public */,
      19,    0,  139,    2, 0x0a /* Public */,
      20,    0,  140,    2, 0x0a /* Public */,
      21,    0,  141,    2, 0x0a /* Public */,
      22,    0,  142,    2, 0x0a /* Public */,
      23,    0,  143,    2, 0x0a /* Public */,
      24,    0,  144,    2, 0x0a /* Public */,
      25,    0,  145,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qt_recon2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qt_recon2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progressReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< char*(*)>(_a[3]))); break;
        case 1: _t->onBtnRunClick(); break;
        case 2: _t->onBtnImagePath(); break;
        case 3: _t->onBtnScenePath(); break;
        case 4: _t->onOpenModelClick(); break;
        case 5: _t->onAkazeCheck(); break;
        case 6: _t->onSiftCheck(); break;
        case 7: _t->onAkaze_SiftCheck(); break;
        case 8: _t->onMvsCheck(); break;
        case 9: _t->onSMvsCheck(); break;
        case 10: _t->onReconFinished(); break;
        case 11: _t->onSeperateRecon(); break;
        case 12: _t->setProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< char*(*)>(_a[3]))); break;
        case 13: _t->onDefaultCheck(); break;
        case 14: _t->onMakeSceneBtn(); break;
        case 15: _t->onSfmReconBtn(); break;
        case 16: _t->onDmReconBtn(); break;
        case 17: _t->onFssReconBtn(); break;
        case 18: _t->onTexReconBtn(); break;
        case 19: _t->onScalingTexMesh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qt_recon2::*)(int , int , char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qt_recon2::progressReady)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qt_recon2::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_qt_recon2.data,
    qt_meta_data_qt_recon2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qt_recon2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qt_recon2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qt_recon2.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int qt_recon2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void qt_recon2::progressReady(int _t1, int _t2, char * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
