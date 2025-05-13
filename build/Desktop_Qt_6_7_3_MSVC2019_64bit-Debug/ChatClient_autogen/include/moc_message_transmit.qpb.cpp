/****************************************************************************
** Meta object code from reading C++ file 'message_transmit.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../message_transmit.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'message_transmit.qpb.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSbite_imSCOPENewMessageReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENewMessageReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::NewMessageReq",
    "requestId",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId",
    "chatSessionId",
    "message_p",
    "bite_im::MessageContent*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENewMessageReqENDCLASS[] = {

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
       7, 0x80000000 | 8, 0x0001110b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NewMessageReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPENewMessageReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENewMessageReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENewMessageReqENDCLASS_t,
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
        // property 'chatSessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'message_p'
        QtPrivate::TypeAndForceComplete<bite_im::MessageContent*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NewMessageReq, std::true_type>
    >,
    nullptr
} };

void bite_im::NewMessageReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<NewMessageReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->chatSessionId(); break;
        case 6: *reinterpret_cast< bite_im::MessageContent**>(_v) = _t->message_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<NewMessageReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setChatSessionId(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setMessage_p(*reinterpret_cast< bite_im::MessageContent**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPENewMessageRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENewMessageRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::NewMessageRsp",
    "requestId",
    "success",
    "errmsg"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENewMessageRspENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::NewMessageRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPENewMessageRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENewMessageRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENewMessageRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NewMessageRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::NewMessageRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<NewMessageRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<NewMessageRsp *>(_o);
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetTransmitTargetRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetTransmitTargetRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetTransmitTargetRsp",
    "requestId",
    "success",
    "errmsg",
    "message_p",
    "bite_im::MessageInfo*",
    "targetIdList"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetTransmitTargetRspENDCLASS[] = {

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
       4, 0x80000000 | 5, 0x0001110b, uint(-1), 0,
       6, QMetaType::QStringList, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetTransmitTargetRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetTransmitTargetRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetTransmitTargetRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetTransmitTargetRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'message_p'
        QtPrivate::TypeAndForceComplete<bite_im::MessageInfo*, std::true_type>,
        // property 'targetIdList'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetTransmitTargetRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::GetTransmitTargetRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetTransmitTargetRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::MessageInfo**>(_v) = _t->message_p(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->targetIdList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetTransmitTargetRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setMessage_p(*reinterpret_cast< bite_im::MessageInfo**>(_v)); break;
        case 4: _t->setTargetIdList(*reinterpret_cast< QStringList*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPENewMessageReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENewMessageReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::NewMessageReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "ChatSessionIdProtoFieldNumber",
    "MessageProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENewMessageReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::NewMessageReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::NewMessageReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       4, uint(bite_im::NewMessageReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       5, uint(bite_im::NewMessageReq_QtProtobufNested::QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber),
       6, uint(bite_im::NewMessageReq_QtProtobufNested::QtProtobufFieldEnum::MessageProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NewMessageReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPENewMessageReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENewMessageReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENewMessageReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<NewMessageReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPENewMessageRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENewMessageRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::NewMessageRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENewMessageRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::NewMessageRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::NewMessageRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::NewMessageRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NewMessageRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPENewMessageRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENewMessageRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENewMessageRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<NewMessageRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetTransmitTargetRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetTransmitTargetRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetTransmitTargetRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "MessageProtoFieldNumber",
    "TargetIdListProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetTransmitTargetRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetTransmitTargetRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetTransmitTargetRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::GetTransmitTargetRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::GetTransmitTargetRsp_QtProtobufNested::QtProtobufFieldEnum::MessageProtoFieldNumber),
       6, uint(bite_im::GetTransmitTargetRsp_QtProtobufNested::QtProtobufFieldEnum::TargetIdListProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetTransmitTargetRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetTransmitTargetRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetTransmitTargetRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetTransmitTargetRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetTransmitTargetRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
