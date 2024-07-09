/****************************************************************************
** Meta object code from reading C++ file 'home_page.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../home_page.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'home_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSHome_PageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSHome_PageENDCLASS = QtMocHelpers::stringData(
    "Home_Page",
    "callUserName",
    "",
    "on_pushButton_clicked",
    "on_trade_button_clicked",
    "on_community_button_clicked",
    "on_mystock_button_clicked",
    "on_admin_button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSHome_PageENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[10];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[24];
    char stringdata5[28];
    char stringdata6[26];
    char stringdata7[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSHome_PageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSHome_PageENDCLASS_t qt_meta_stringdata_CLASSHome_PageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "Home_Page"
        QT_MOC_LITERAL(10, 12),  // "callUserName"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(46, 23),  // "on_trade_button_clicked"
        QT_MOC_LITERAL(70, 27),  // "on_community_button_clicked"
        QT_MOC_LITERAL(98, 25),  // "on_mystock_button_clicked"
        QT_MOC_LITERAL(124, 23)   // "on_admin_button_clicked"
    },
    "Home_Page",
    "callUserName",
    "",
    "on_pushButton_clicked",
    "on_trade_button_clicked",
    "on_community_button_clicked",
    "on_mystock_button_clicked",
    "on_admin_button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHome_PageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Home_Page::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSHome_PageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHome_PageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHome_PageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Home_Page, std::true_type>,
        // method 'callUserName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_trade_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_community_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_mystock_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_admin_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Home_Page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Home_Page *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->callUserName(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_trade_button_clicked(); break;
        case 3: _t->on_community_button_clicked(); break;
        case 4: _t->on_mystock_button_clicked(); break;
        case 5: _t->on_admin_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Home_Page::*)();
            if (_t _q_method = &Home_Page::callUserName; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Home_Page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Home_Page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHome_PageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Home_Page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Home_Page::callUserName()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
