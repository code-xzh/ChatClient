/****************************************************************************
** Meta object code from reading C++ file 'friend.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../friend.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'friend.qpb.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetFriendListReq",
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

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetFriendListReqENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::GetFriendListReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetFriendListReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListReqENDCLASS_t,
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
        QtPrivate::TypeAndForceComplete<GetFriendListReq, std::true_type>
    >,
    nullptr
} };

void bite_im::GetFriendListReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetFriendListReq *>(_o);
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
        auto *_t = reinterpret_cast<GetFriendListReq *>(_o);
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetFriendListRsp",
    "requestId",
    "success",
    "errmsg",
    "friendListData",
    "bite_im::UserInfoRepeated"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetFriendListRspENDCLASS[] = {

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
       4, 0x80000000 | 5, 0x0001500b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetFriendListRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetFriendListRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'friendListData'
        QtPrivate::TypeAndForceComplete<bite_im::UserInfoRepeated, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetFriendListRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::GetFriendListRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetFriendListRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::UserInfoRepeated*>(_v) = _t->friendList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetFriendListRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFriendList(*reinterpret_cast< bite_im::UserInfoRepeated*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendRemoveReq",
    "requestId",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId",
    "peerId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendRemoveReqENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::FriendRemoveReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendRemoveReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveReqENDCLASS_t,
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
        // property 'peerId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FriendRemoveReq, std::true_type>
    >,
    nullptr
} };

void bite_im::FriendRemoveReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<FriendRemoveReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->peerId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<FriendRemoveReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setPeerId(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendRemoveRsp",
    "requestId",
    "success",
    "errmsg"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendRemoveRspENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::FriendRemoveRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendRemoveRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FriendRemoveRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::FriendRemoveRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<FriendRemoveRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<FriendRemoveRsp *>(_o);
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
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendAddReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendAddReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendAddReq",
    "requestId",
    "sessionId",
    "hasSessionId",
    "userId",
    "hasUserId",
    "respondentId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendAddReqENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::FriendAddReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendAddReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendAddReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendAddReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'respondentId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FriendAddReq, std::true_type>
    >,
    nullptr
} };

void bite_im::FriendAddReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<FriendAddReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->respondentId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<FriendAddReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setRespondentId(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendAddRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendAddRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendAddRsp",
    "requestId",
    "success",
    "errmsg",
    "notifyEventId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendAddRspENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::FriendAddRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendAddRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendAddRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendAddRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'notifyEventId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FriendAddRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::FriendAddRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<FriendAddRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->notifyEventId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<FriendAddRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setNotifyEventId(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendAddProcessReq",
    "requestId",
    "notifyEventId",
    "agree",
    "applyUserId",
    "sessionId",
    "hasSessionId",
    "userId",
    "hasUserId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendAddProcessReqENDCLASS[] = {

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
       2, QMetaType::QString, 0x00015103, uint(-1), 0,
       3, QMetaType::Bool, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,
       5, QMetaType::QString, 0x00015003, uint(-1), 0,
       6, QMetaType::Bool, 0x00015001, uint(-1), 0,
       7, QMetaType::QString, 0x00015003, uint(-1), 0,
       8, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendAddProcessReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendAddProcessReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'notifyEventId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'agree'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'applyUserId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FriendAddProcessReq, std::true_type>
    >,
    nullptr
} };

void bite_im::FriendAddProcessReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<FriendAddProcessReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->notifyEventId(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->agree(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->applyUserId(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<FriendAddProcessReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setNotifyEventId(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setAgree(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setApplyUserId(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendAddProcessRsp",
    "requestId",
    "success",
    "errmsg",
    "newSessionId",
    "hasNewSessionId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendAddProcessRspENDCLASS[] = {

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
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015003, uint(-1), 0,
       5, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendAddProcessRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendAddProcessRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'newSessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasNewSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FriendAddProcessRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::FriendAddProcessRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<FriendAddProcessRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->newSessionId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasNewSessionId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<FriendAddProcessRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setNewSessionId_p(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetPendingFriendEventListReq",
    "requestId",
    "sessionId",
    "hasSessionId",
    "userId",
    "hasUserId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetPendingFriendEventListReqENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::GetPendingFriendEventListReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetPendingFriendEventListReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetPendingFriendEventListReq, std::true_type>
    >,
    nullptr
} };

void bite_im::GetPendingFriendEventListReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetPendingFriendEventListReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetPendingFriendEventListReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendEventENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendEventENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendEvent",
    "eventId",
    "sender_p",
    "bite_im::UserInfo*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendEventENDCLASS[] = {

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
       2, 0x80000000 | 3, 0x0001110b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendEvent::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendEventENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendEventENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendEventENDCLASS_t,
        // property 'eventId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sender_p'
        QtPrivate::TypeAndForceComplete<bite_im::UserInfo*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FriendEvent, std::true_type>
    >,
    nullptr
} };

void bite_im::FriendEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<FriendEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->eventId(); break;
        case 1: *reinterpret_cast< bite_im::UserInfo**>(_v) = _t->sender_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<FriendEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEventId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSender_p(*reinterpret_cast< bite_im::UserInfo**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetPendingFriendEventListRsp",
    "requestId",
    "success",
    "errmsg",
    "eventData",
    "bite_im::FriendEventRepeated"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetPendingFriendEventListRspENDCLASS[] = {

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
       4, 0x80000000 | 5, 0x0001500b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetPendingFriendEventListRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetPendingFriendEventListRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'eventData'
        QtPrivate::TypeAndForceComplete<bite_im::FriendEventRepeated, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetPendingFriendEventListRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::GetPendingFriendEventListRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetPendingFriendEventListRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::FriendEventRepeated*>(_v) = _t->event(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetPendingFriendEventListRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setEvent(*reinterpret_cast< bite_im::FriendEventRepeated*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendSearchReq",
    "requestId",
    "searchKey",
    "sessionId",
    "hasSessionId",
    "userId",
    "hasUserId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendSearchReqENDCLASS[] = {

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
       2, QMetaType::QString, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015003, uint(-1), 0,
       4, QMetaType::Bool, 0x00015001, uint(-1), 0,
       5, QMetaType::QString, 0x00015003, uint(-1), 0,
       6, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendSearchReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendSearchReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'searchKey'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FriendSearchReq, std::true_type>
    >,
    nullptr
} };

void bite_im::FriendSearchReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<FriendSearchReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->searchKey(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<FriendSearchReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSearchKey(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendSearchRsp",
    "requestId",
    "success",
    "errmsg",
    "userInfoData",
    "bite_im::UserInfoRepeated"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendSearchRspENDCLASS[] = {

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
       4, 0x80000000 | 5, 0x0001500b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendSearchRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendSearchRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userInfoData'
        QtPrivate::TypeAndForceComplete<bite_im::UserInfoRepeated, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FriendSearchRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::FriendSearchRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<FriendSearchRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::UserInfoRepeated*>(_v) = _t->userInfo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<FriendSearchRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUserInfo(*reinterpret_cast< bite_im::UserInfoRepeated*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetChatSessionListReq",
    "requestId",
    "sessionId",
    "hasSessionId",
    "userId",
    "hasUserId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetChatSessionListReqENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::GetChatSessionListReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetChatSessionListReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetChatSessionListReq, std::true_type>
    >,
    nullptr
} };

void bite_im::GetChatSessionListReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetChatSessionListReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetChatSessionListReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetChatSessionListRsp",
    "requestId",
    "success",
    "errmsg",
    "chatSessionInfoListData",
    "bite_im::ChatSessionInfoRepeated"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetChatSessionListRspENDCLASS[] = {

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
       4, 0x80000000 | 5, 0x0001500b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetChatSessionListRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetChatSessionListRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'chatSessionInfoListData'
        QtPrivate::TypeAndForceComplete<bite_im::ChatSessionInfoRepeated, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetChatSessionListRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::GetChatSessionListRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetChatSessionListRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::ChatSessionInfoRepeated*>(_v) = _t->chatSessionInfoList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetChatSessionListRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setChatSessionInfoList(*reinterpret_cast< bite_im::ChatSessionInfoRepeated*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::ChatSessionCreateReq",
    "requestId",
    "sessionId",
    "hasSessionId",
    "userId",
    "hasUserId",
    "chatSessionName",
    "memberIdList"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEChatSessionCreateReqENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
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
       7, QMetaType::QStringList, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::ChatSessionCreateReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEChatSessionCreateReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'chatSessionName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'memberIdList'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChatSessionCreateReq, std::true_type>
    >,
    nullptr
} };

void bite_im::ChatSessionCreateReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<ChatSessionCreateReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->chatSessionName(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->memberIdList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<ChatSessionCreateReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setChatSessionName(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setMemberIdList(*reinterpret_cast< QStringList*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::ChatSessionCreateRsp",
    "requestId",
    "success",
    "errmsg",
    "chatSessionInfo_p",
    "bite_im::ChatSessionInfo*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEChatSessionCreateRspENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::ChatSessionCreateRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEChatSessionCreateRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'chatSessionInfo_p'
        QtPrivate::TypeAndForceComplete<bite_im::ChatSessionInfo*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChatSessionCreateRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::ChatSessionCreateRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<ChatSessionCreateRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::ChatSessionInfo**>(_v) = _t->chatSessionInfo_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<ChatSessionCreateRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setChatSessionInfo_p(*reinterpret_cast< bite_im::ChatSessionInfo**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetChatSessionMemberReq",
    "requestId",
    "sessionId",
    "hasSessionId",
    "userId",
    "hasUserId",
    "chatSessionId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetChatSessionMemberReqENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::GetChatSessionMemberReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetChatSessionMemberReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'chatSessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetChatSessionMemberReq, std::true_type>
    >,
    nullptr
} };

void bite_im::GetChatSessionMemberReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetChatSessionMemberReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->chatSessionId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetChatSessionMemberReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setChatSessionId(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetChatSessionMemberRsp",
    "requestId",
    "success",
    "errmsg",
    "memberInfoListData",
    "bite_im::UserInfoRepeated"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetChatSessionMemberRspENDCLASS[] = {

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
       4, 0x80000000 | 5, 0x0001500b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetChatSessionMemberRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetChatSessionMemberRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'memberInfoListData'
        QtPrivate::TypeAndForceComplete<bite_im::UserInfoRepeated, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetChatSessionMemberRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::GetChatSessionMemberRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetChatSessionMemberRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::UserInfoRepeated*>(_v) = _t->memberInfoList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetChatSessionMemberRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setMemberInfoList(*reinterpret_cast< bite_im::UserInfoRepeated*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetFriendListReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetFriendListReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetFriendListReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetFriendListReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       4, uint(bite_im::GetFriendListReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetFriendListReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetFriendListReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetFriendListReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetFriendListRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "FriendListProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetFriendListRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetFriendListRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetFriendListRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::GetFriendListRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::GetFriendListRsp_QtProtobufNested::QtProtobufFieldEnum::FriendListProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetFriendListRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetFriendListRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetFriendListRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetFriendListRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendRemoveReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "PeerIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendRemoveReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::FriendRemoveReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::FriendRemoveReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       4, uint(bite_im::FriendRemoveReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       5, uint(bite_im::FriendRemoveReq_QtProtobufNested::QtProtobufFieldEnum::PeerIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendRemoveReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendRemoveReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<FriendRemoveReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendRemoveRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendRemoveRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::FriendRemoveRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::FriendRemoveRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::FriendRemoveRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendRemoveRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendRemoveRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendRemoveRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<FriendRemoveRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendAddReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendAddReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendAddReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "RespondentIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendAddReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::FriendAddReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::FriendAddReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       4, uint(bite_im::FriendAddReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       5, uint(bite_im::FriendAddReq_QtProtobufNested::QtProtobufFieldEnum::RespondentIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendAddReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendAddReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendAddReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendAddReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<FriendAddReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendAddRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendAddRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendAddRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "NotifyEventIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendAddRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::FriendAddRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::FriendAddRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::FriendAddRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::FriendAddRsp_QtProtobufNested::QtProtobufFieldEnum::NotifyEventIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendAddRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendAddRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendAddRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendAddRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<FriendAddRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendAddProcessReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "NotifyEventIdProtoFieldNumber",
    "AgreeProtoFieldNumber",
    "ApplyUserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "UserIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendAddProcessReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::FriendAddProcessReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::FriendAddProcessReq_QtProtobufNested::QtProtobufFieldEnum::NotifyEventIdProtoFieldNumber),
       4, uint(bite_im::FriendAddProcessReq_QtProtobufNested::QtProtobufFieldEnum::AgreeProtoFieldNumber),
       5, uint(bite_im::FriendAddProcessReq_QtProtobufNested::QtProtobufFieldEnum::ApplyUserIdProtoFieldNumber),
       6, uint(bite_im::FriendAddProcessReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       7, uint(bite_im::FriendAddProcessReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendAddProcessReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendAddProcessReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<FriendAddProcessReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendAddProcessRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "NewSessionIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendAddProcessRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::FriendAddProcessRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::FriendAddProcessRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::FriendAddProcessRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::FriendAddProcessRsp_QtProtobufNested::QtProtobufFieldEnum::NewSessionIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendAddProcessRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendAddProcessRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendAddProcessRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<FriendAddProcessRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetPendingFriendEventListReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "UserIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetPendingFriendEventListReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetPendingFriendEventListReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetPendingFriendEventListReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       4, uint(bite_im::GetPendingFriendEventListReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetPendingFriendEventListReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetPendingFriendEventListReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetPendingFriendEventListReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendEvent_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendEvent_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendEvent_QtProtobufNested",
    "QtProtobufFieldEnum",
    "EventIdProtoFieldNumber",
    "SenderProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendEvent_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::FriendEvent_QtProtobufNested::QtProtobufFieldEnum::EventIdProtoFieldNumber),
       3, uint(bite_im::FriendEvent_QtProtobufNested::QtProtobufFieldEnum::SenderProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendEvent_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendEvent_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendEvent_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendEvent_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<FriendEvent_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetPendingFriendEventListRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "EventProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetPendingFriendEventListRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetPendingFriendEventListRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetPendingFriendEventListRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::GetPendingFriendEventListRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::GetPendingFriendEventListRsp_QtProtobufNested::QtProtobufFieldEnum::EventProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetPendingFriendEventListRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetPendingFriendEventListRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetPendingFriendEventListRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetPendingFriendEventListRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendSearchReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SearchKeyProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "UserIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendSearchReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::FriendSearchReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::FriendSearchReq_QtProtobufNested::QtProtobufFieldEnum::SearchKeyProtoFieldNumber),
       4, uint(bite_im::FriendSearchReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       5, uint(bite_im::FriendSearchReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendSearchReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendSearchReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<FriendSearchReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::FriendSearchRsp_QtProtobufNested",
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

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFriendSearchRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::FriendSearchRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::FriendSearchRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::FriendSearchRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::FriendSearchRsp_QtProtobufNested::QtProtobufFieldEnum::UserInfoProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FriendSearchRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFriendSearchRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFriendSearchRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<FriendSearchRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetChatSessionListReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "UserIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetChatSessionListReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetChatSessionListReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetChatSessionListReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       4, uint(bite_im::GetChatSessionListReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetChatSessionListReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetChatSessionListReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetChatSessionListReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetChatSessionListRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "ChatSessionInfoListProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetChatSessionListRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetChatSessionListRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetChatSessionListRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::GetChatSessionListRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::GetChatSessionListRsp_QtProtobufNested::QtProtobufFieldEnum::ChatSessionInfoListProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetChatSessionListRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetChatSessionListRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionListRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetChatSessionListRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::ChatSessionCreateReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "ChatSessionNameProtoFieldNumber",
    "MemberIdListProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEChatSessionCreateReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::ChatSessionCreateReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::ChatSessionCreateReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       4, uint(bite_im::ChatSessionCreateReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       5, uint(bite_im::ChatSessionCreateReq_QtProtobufNested::QtProtobufFieldEnum::ChatSessionNameProtoFieldNumber),
       6, uint(bite_im::ChatSessionCreateReq_QtProtobufNested::QtProtobufFieldEnum::MemberIdListProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::ChatSessionCreateReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEChatSessionCreateReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<ChatSessionCreateReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::ChatSessionCreateRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "ChatSessionInfoProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEChatSessionCreateRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::ChatSessionCreateRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::ChatSessionCreateRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::ChatSessionCreateRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::ChatSessionCreateRsp_QtProtobufNested::QtProtobufFieldEnum::ChatSessionInfoProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::ChatSessionCreateRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEChatSessionCreateRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEChatSessionCreateRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<ChatSessionCreateRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetChatSessionMemberReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "ChatSessionIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetChatSessionMemberReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetChatSessionMemberReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetChatSessionMemberReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       4, uint(bite_im::GetChatSessionMemberReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       5, uint(bite_im::GetChatSessionMemberReq_QtProtobufNested::QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetChatSessionMemberReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetChatSessionMemberReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetChatSessionMemberReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetChatSessionMemberRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "MemberInfoListProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetChatSessionMemberRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetChatSessionMemberRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetChatSessionMemberRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::GetChatSessionMemberRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::GetChatSessionMemberRsp_QtProtobufNested::QtProtobufFieldEnum::MemberInfoListProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetChatSessionMemberRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetChatSessionMemberRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetChatSessionMemberRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetChatSessionMemberRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
