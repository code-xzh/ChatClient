/****************************************************************************
** Meta object code from reading C++ file 'user.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../user.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user.qpb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
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
struct qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::UserRegisterReq",
    "requestId",
    "nickname",
    "password",
    "verifyCodeId",
    "verifyCode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEUserRegisterReqENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QString, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,
       5, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::UserRegisterReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEUserRegisterReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'nickname'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'password'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'verifyCodeId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'verifyCode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserRegisterReq, std::true_type>
    >,
    nullptr
} };

void bite_im::UserRegisterReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<UserRegisterReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->nickname(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->password(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->verifyCodeId(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->verifyCode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<UserRegisterReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setNickname(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setVerifyCodeId(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setVerifyCode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::UserRegisterRsp",
    "requestId",
    "success",
    "errmsg"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEUserRegisterRspENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::UserRegisterRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEUserRegisterRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserRegisterRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::UserRegisterRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<UserRegisterRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<UserRegisterRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEUserLoginReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEUserLoginReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::UserLoginReq",
    "requestId",
    "nickname",
    "password",
    "verifyCodeId",
    "verifyCode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEUserLoginReqENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QString, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,
       5, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::UserLoginReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEUserLoginReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEUserLoginReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEUserLoginReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'nickname'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'password'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'verifyCodeId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'verifyCode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserLoginReq, std::true_type>
    >,
    nullptr
} };

void bite_im::UserLoginReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<UserLoginReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->nickname(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->password(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->verifyCodeId(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->verifyCode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<UserLoginReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setNickname(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setVerifyCodeId(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setVerifyCode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEUserLoginRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEUserLoginRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::UserLoginRsp",
    "requestId",
    "success",
    "errmsg",
    "loginSessionId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEUserLoginRspENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::UserLoginRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEUserLoginRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEUserLoginRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEUserLoginRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'loginSessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserLoginRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::UserLoginRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<UserLoginRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->loginSessionId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<UserLoginRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setLoginSessionId(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::PhoneVerifyCodeReq",
    "requestId",
    "phoneNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPhoneVerifyCodeReqENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PhoneVerifyCodeReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPhoneVerifyCodeReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'phoneNumber'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PhoneVerifyCodeReq, std::true_type>
    >,
    nullptr
} };

void bite_im::PhoneVerifyCodeReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<PhoneVerifyCodeReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->phoneNumber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<PhoneVerifyCodeReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPhoneNumber(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::PhoneVerifyCodeRsp",
    "requestId",
    "success",
    "errmsg",
    "verifyCodeId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPhoneVerifyCodeRspENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PhoneVerifyCodeRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPhoneVerifyCodeRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'verifyCodeId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PhoneVerifyCodeRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::PhoneVerifyCodeRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<PhoneVerifyCodeRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->verifyCodeId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<PhoneVerifyCodeRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setVerifyCodeId(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::PhoneRegisterReq",
    "requestId",
    "phoneNumber",
    "verifyCodeId",
    "verifyCode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPhoneRegisterReqENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QString, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PhoneRegisterReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPhoneRegisterReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'phoneNumber'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'verifyCodeId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'verifyCode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PhoneRegisterReq, std::true_type>
    >,
    nullptr
} };

void bite_im::PhoneRegisterReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<PhoneRegisterReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->phoneNumber(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->verifyCodeId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->verifyCode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<PhoneRegisterReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPhoneNumber(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setVerifyCodeId(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setVerifyCode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::PhoneRegisterRsp",
    "requestId",
    "success",
    "errmsg"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPhoneRegisterRspENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PhoneRegisterRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPhoneRegisterRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PhoneRegisterRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::PhoneRegisterRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<PhoneRegisterRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<PhoneRegisterRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::PhoneLoginReq",
    "requestId",
    "phoneNumber",
    "verifyCodeId",
    "verifyCode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPhoneLoginReqENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QString, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PhoneLoginReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPhoneLoginReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'phoneNumber'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'verifyCodeId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'verifyCode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PhoneLoginReq, std::true_type>
    >,
    nullptr
} };

void bite_im::PhoneLoginReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<PhoneLoginReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->phoneNumber(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->verifyCodeId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->verifyCode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<PhoneLoginReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPhoneNumber(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setVerifyCodeId(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setVerifyCode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::PhoneLoginRsp",
    "requestId",
    "success",
    "errmsg",
    "loginSessionId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPhoneLoginRspENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PhoneLoginRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPhoneLoginRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'loginSessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PhoneLoginRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::PhoneLoginRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<PhoneLoginRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->loginSessionId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<PhoneLoginRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setLoginSessionId(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetUserInfoReq",
    "requestId",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetUserInfoReqENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::Bool, 0x00015001, uint(-1), 0,
       4, QMetaType::QString, 0x00015003, uint(-1), 0,
       5, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetUserInfoReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetUserInfoReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetUserInfoReq, std::true_type>
    >,
    nullptr
} };

void bite_im::GetUserInfoReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetUserInfoReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetUserInfoReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetUserInfoRsp",
    "requestId",
    "success",
    "errmsg",
    "userInfo_p",
    "bite_im::UserInfo*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetUserInfoRspENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,
       4, 0x80000000 | 5, 0x0001110b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetUserInfoRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetUserInfoRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userInfo_p'
        QtPrivate::TypeAndForceComplete<bite_im::UserInfo*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetUserInfoRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::GetUserInfoRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetUserInfoRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::UserInfo**>(_v) = _t->userInfo_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetUserInfoRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUserInfo_p(*reinterpret_cast< bite_im::UserInfo**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserAvatarReq",
    "requestId",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId",
    "avatar"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserAvatarReqENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::Bool, 0x00015001, uint(-1), 0,
       4, QMetaType::QString, 0x00015003, uint(-1), 0,
       5, QMetaType::Bool, 0x00015001, uint(-1), 0,
       6, QMetaType::QByteArray, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserAvatarReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserAvatarReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'avatar'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SetUserAvatarReq, std::true_type>
    >,
    nullptr
} };

void bite_im::SetUserAvatarReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<SetUserAvatarReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast< QByteArray*>(_v) = _t->avatar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<SetUserAvatarReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setAvatar(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserAvatarRsp",
    "requestId",
    "success",
    "errmsg"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserAvatarRspENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserAvatarRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserAvatarRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SetUserAvatarRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::SetUserAvatarRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<SetUserAvatarRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<SetUserAvatarRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserNicknameReq",
    "requestId",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId",
    "nickname"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserNicknameReqENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::Bool, 0x00015001, uint(-1), 0,
       4, QMetaType::QString, 0x00015003, uint(-1), 0,
       5, QMetaType::Bool, 0x00015001, uint(-1), 0,
       6, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserNicknameReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserNicknameReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'nickname'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SetUserNicknameReq, std::true_type>
    >,
    nullptr
} };

void bite_im::SetUserNicknameReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<SetUserNicknameReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->nickname(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<SetUserNicknameReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setNickname(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserNicknameRsp",
    "requestId",
    "success",
    "errmsg"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserNicknameRspENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserNicknameRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserNicknameRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SetUserNicknameRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::SetUserNicknameRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<SetUserNicknameRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<SetUserNicknameRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserDescriptionReq",
    "requestId",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId",
    "description"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserDescriptionReqENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::Bool, 0x00015001, uint(-1), 0,
       4, QMetaType::QString, 0x00015003, uint(-1), 0,
       5, QMetaType::Bool, 0x00015001, uint(-1), 0,
       6, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserDescriptionReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserDescriptionReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SetUserDescriptionReq, std::true_type>
    >,
    nullptr
} };

void bite_im::SetUserDescriptionReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<SetUserDescriptionReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<SetUserDescriptionReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserDescriptionRsp",
    "requestId",
    "success",
    "errmsg"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserDescriptionRspENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserDescriptionRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserDescriptionRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SetUserDescriptionRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::SetUserDescriptionRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<SetUserDescriptionRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<SetUserDescriptionRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserPhoneNumberReq",
    "requestId",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId",
    "phoneNumber",
    "phoneVerifyCodeId",
    "phoneVerifyCode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserPhoneNumberReqENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::Bool, 0x00015001, uint(-1), 0,
       4, QMetaType::QString, 0x00015003, uint(-1), 0,
       5, QMetaType::Bool, 0x00015001, uint(-1), 0,
       6, QMetaType::QString, 0x00015103, uint(-1), 0,
       7, QMetaType::QString, 0x00015103, uint(-1), 0,
       8, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserPhoneNumberReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserPhoneNumberReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'phoneNumber'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'phoneVerifyCodeId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'phoneVerifyCode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SetUserPhoneNumberReq, std::true_type>
    >,
    nullptr
} };

void bite_im::SetUserPhoneNumberReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<SetUserPhoneNumberReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->phoneNumber(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->phoneVerifyCodeId(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->phoneVerifyCode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<SetUserPhoneNumberReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setPhoneNumber(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setPhoneVerifyCodeId(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setPhoneVerifyCode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserPhoneNumberRsp",
    "requestId",
    "success",
    "errmsg"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserPhoneNumberRspENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserPhoneNumberRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserPhoneNumberRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SetUserPhoneNumberRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::SetUserPhoneNumberRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<SetUserPhoneNumberRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<SetUserPhoneNumberRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::UserRegisterReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "NicknameProtoFieldNumber",
    "PasswordProtoFieldNumber",
    "VerifyCodeIdProtoFieldNumber",
    "VerifyCodeProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEUserRegisterReq_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    5,   19,

 // enum data: key, value
       2, uint(bite_im::UserRegisterReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::UserRegisterReq_QtProtobufNested::QtProtobufFieldEnum::NicknameProtoFieldNumber),
       4, uint(bite_im::UserRegisterReq_QtProtobufNested::QtProtobufFieldEnum::PasswordProtoFieldNumber),
       5, uint(bite_im::UserRegisterReq_QtProtobufNested::QtProtobufFieldEnum::VerifyCodeIdProtoFieldNumber),
       6, uint(bite_im::UserRegisterReq_QtProtobufNested::QtProtobufFieldEnum::VerifyCodeProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::UserRegisterReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEUserRegisterReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<UserRegisterReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::UserRegisterRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEUserRegisterRsp_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    3,   19,

 // enum data: key, value
       2, uint(bite_im::UserRegisterRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::UserRegisterRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::UserRegisterRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::UserRegisterRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEUserRegisterRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEUserRegisterRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<UserRegisterRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEUserLoginReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEUserLoginReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::UserLoginReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "NicknameProtoFieldNumber",
    "PasswordProtoFieldNumber",
    "VerifyCodeIdProtoFieldNumber",
    "VerifyCodeProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEUserLoginReq_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    5,   19,

 // enum data: key, value
       2, uint(bite_im::UserLoginReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::UserLoginReq_QtProtobufNested::QtProtobufFieldEnum::NicknameProtoFieldNumber),
       4, uint(bite_im::UserLoginReq_QtProtobufNested::QtProtobufFieldEnum::PasswordProtoFieldNumber),
       5, uint(bite_im::UserLoginReq_QtProtobufNested::QtProtobufFieldEnum::VerifyCodeIdProtoFieldNumber),
       6, uint(bite_im::UserLoginReq_QtProtobufNested::QtProtobufFieldEnum::VerifyCodeProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::UserLoginReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEUserLoginReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEUserLoginReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEUserLoginReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<UserLoginReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEUserLoginRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEUserLoginRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::UserLoginRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "LoginSessionIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEUserLoginRsp_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    4,   19,

 // enum data: key, value
       2, uint(bite_im::UserLoginRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::UserLoginRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::UserLoginRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::UserLoginRsp_QtProtobufNested::QtProtobufFieldEnum::LoginSessionIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::UserLoginRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEUserLoginRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEUserLoginRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEUserLoginRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<UserLoginRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::PhoneVerifyCodeReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "PhoneNumberProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPhoneVerifyCodeReq_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    2,   19,

 // enum data: key, value
       2, uint(bite_im::PhoneVerifyCodeReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::PhoneVerifyCodeReq_QtProtobufNested::QtProtobufFieldEnum::PhoneNumberProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PhoneVerifyCodeReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPhoneVerifyCodeReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<PhoneVerifyCodeReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::PhoneVerifyCodeRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "VerifyCodeIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPhoneVerifyCodeRsp_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    4,   19,

 // enum data: key, value
       2, uint(bite_im::PhoneVerifyCodeRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::PhoneVerifyCodeRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::PhoneVerifyCodeRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::PhoneVerifyCodeRsp_QtProtobufNested::QtProtobufFieldEnum::VerifyCodeIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PhoneVerifyCodeRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPhoneVerifyCodeRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPhoneVerifyCodeRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<PhoneVerifyCodeRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::PhoneRegisterReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "PhoneNumberProtoFieldNumber",
    "VerifyCodeIdProtoFieldNumber",
    "VerifyCodeProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPhoneRegisterReq_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    4,   19,

 // enum data: key, value
       2, uint(bite_im::PhoneRegisterReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::PhoneRegisterReq_QtProtobufNested::QtProtobufFieldEnum::PhoneNumberProtoFieldNumber),
       4, uint(bite_im::PhoneRegisterReq_QtProtobufNested::QtProtobufFieldEnum::VerifyCodeIdProtoFieldNumber),
       5, uint(bite_im::PhoneRegisterReq_QtProtobufNested::QtProtobufFieldEnum::VerifyCodeProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PhoneRegisterReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPhoneRegisterReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<PhoneRegisterReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::PhoneRegisterRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPhoneRegisterRsp_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    3,   19,

 // enum data: key, value
       2, uint(bite_im::PhoneRegisterRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::PhoneRegisterRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::PhoneRegisterRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PhoneRegisterRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPhoneRegisterRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPhoneRegisterRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<PhoneRegisterRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::PhoneLoginReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "PhoneNumberProtoFieldNumber",
    "VerifyCodeIdProtoFieldNumber",
    "VerifyCodeProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPhoneLoginReq_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    4,   19,

 // enum data: key, value
       2, uint(bite_im::PhoneLoginReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::PhoneLoginReq_QtProtobufNested::QtProtobufFieldEnum::PhoneNumberProtoFieldNumber),
       4, uint(bite_im::PhoneLoginReq_QtProtobufNested::QtProtobufFieldEnum::VerifyCodeIdProtoFieldNumber),
       5, uint(bite_im::PhoneLoginReq_QtProtobufNested::QtProtobufFieldEnum::VerifyCodeProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PhoneLoginReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPhoneLoginReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<PhoneLoginReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::PhoneLoginRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "LoginSessionIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPhoneLoginRsp_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    4,   19,

 // enum data: key, value
       2, uint(bite_im::PhoneLoginRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::PhoneLoginRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::PhoneLoginRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::PhoneLoginRsp_QtProtobufNested::QtProtobufFieldEnum::LoginSessionIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PhoneLoginRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPhoneLoginRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPhoneLoginRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<PhoneLoginRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetUserInfoReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetUserInfoReq_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    3,   19,

 // enum data: key, value
       2, uint(bite_im::GetUserInfoReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetUserInfoReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       4, uint(bite_im::GetUserInfoReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetUserInfoReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetUserInfoReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetUserInfoReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetUserInfoRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "UserInfoProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetUserInfoRsp_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    4,   19,

 // enum data: key, value
       2, uint(bite_im::GetUserInfoRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetUserInfoRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::GetUserInfoRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::GetUserInfoRsp_QtProtobufNested::QtProtobufFieldEnum::UserInfoProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetUserInfoRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetUserInfoRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetUserInfoRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetUserInfoRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserAvatarReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "AvatarProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserAvatarReq_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    4,   19,

 // enum data: key, value
       2, uint(bite_im::SetUserAvatarReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::SetUserAvatarReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       4, uint(bite_im::SetUserAvatarReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       5, uint(bite_im::SetUserAvatarReq_QtProtobufNested::QtProtobufFieldEnum::AvatarProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserAvatarReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserAvatarReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<SetUserAvatarReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserAvatarRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserAvatarRsp_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    3,   19,

 // enum data: key, value
       2, uint(bite_im::SetUserAvatarRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::SetUserAvatarRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::SetUserAvatarRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserAvatarRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserAvatarRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserAvatarRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<SetUserAvatarRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserNicknameReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "NicknameProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserNicknameReq_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    4,   19,

 // enum data: key, value
       2, uint(bite_im::SetUserNicknameReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::SetUserNicknameReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       4, uint(bite_im::SetUserNicknameReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       5, uint(bite_im::SetUserNicknameReq_QtProtobufNested::QtProtobufFieldEnum::NicknameProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserNicknameReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserNicknameReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<SetUserNicknameReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserNicknameRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserNicknameRsp_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    3,   19,

 // enum data: key, value
       2, uint(bite_im::SetUserNicknameRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::SetUserNicknameRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::SetUserNicknameRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserNicknameRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserNicknameRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserNicknameRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<SetUserNicknameRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserDescriptionReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "DescriptionProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserDescriptionReq_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    4,   19,

 // enum data: key, value
       2, uint(bite_im::SetUserDescriptionReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::SetUserDescriptionReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       4, uint(bite_im::SetUserDescriptionReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       5, uint(bite_im::SetUserDescriptionReq_QtProtobufNested::QtProtobufFieldEnum::DescriptionProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserDescriptionReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserDescriptionReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<SetUserDescriptionReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserDescriptionRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserDescriptionRsp_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    3,   19,

 // enum data: key, value
       2, uint(bite_im::SetUserDescriptionRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::SetUserDescriptionRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::SetUserDescriptionRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserDescriptionRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserDescriptionRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserDescriptionRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<SetUserDescriptionRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserPhoneNumberReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "PhoneNumberProtoFieldNumber",
    "PhoneVerifyCodeIdProtoFieldNumber",
    "PhoneVerifyCodeProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserPhoneNumberReq_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    6,   19,

 // enum data: key, value
       2, uint(bite_im::SetUserPhoneNumberReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::SetUserPhoneNumberReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       4, uint(bite_im::SetUserPhoneNumberReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       5, uint(bite_im::SetUserPhoneNumberReq_QtProtobufNested::QtProtobufFieldEnum::PhoneNumberProtoFieldNumber),
       6, uint(bite_im::SetUserPhoneNumberReq_QtProtobufNested::QtProtobufFieldEnum::PhoneVerifyCodeIdProtoFieldNumber),
       7, uint(bite_im::SetUserPhoneNumberReq_QtProtobufNested::QtProtobufFieldEnum::PhoneVerifyCodeProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserPhoneNumberReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserPhoneNumberReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<SetUserPhoneNumberReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::SetUserPhoneNumberRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESetUserPhoneNumberRsp_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    3,   19,

 // enum data: key, value
       2, uint(bite_im::SetUserPhoneNumberRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::SetUserPhoneNumberRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::SetUserPhoneNumberRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SetUserPhoneNumberRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESetUserPhoneNumberRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESetUserPhoneNumberRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<SetUserPhoneNumberRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
