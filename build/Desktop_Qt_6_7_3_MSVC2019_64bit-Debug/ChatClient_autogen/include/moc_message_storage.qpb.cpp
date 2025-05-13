/****************************************************************************
** Meta object code from reading C++ file 'message_storage.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../message_storage.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'message_storage.qpb.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetHistoryMsgReq",
    "requestId",
    "chatSessionId",
    "startTime",
    "QtProtobuf::int64",
    "overTime",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetHistoryMsgReqENDCLASS[] = {

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
       3, 0x80000000 | 4, 0x0001110b, uint(-1), 0,
       5, 0x80000000 | 4, 0x0001110b, uint(-1), 0,
       6, QMetaType::QString, 0x00015003, uint(-1), 0,
       7, QMetaType::Bool, 0x00015001, uint(-1), 0,
       8, QMetaType::QString, 0x00015003, uint(-1), 0,
       9, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSbite_imSCOPEGetHistoryMsgReqENDCLASS[] = {
    QMetaObject::SuperData::link<QtProtobuf::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject bite_im::GetHistoryMsgReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetHistoryMsgReqENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSbite_imSCOPEGetHistoryMsgReqENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'chatSessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'startTime'
        QtPrivate::TypeAndForceComplete<QtProtobuf::int64, std::true_type>,
        // property 'overTime'
        QtPrivate::TypeAndForceComplete<QtProtobuf::int64, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetHistoryMsgReq, std::true_type>
    >,
    nullptr
} };

void bite_im::GetHistoryMsgReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtProtobuf::int64 >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetHistoryMsgReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->chatSessionId(); break;
        case 2: *reinterpret_cast< QtProtobuf::int64*>(_v) = _t->startTime(); break;
        case 3: *reinterpret_cast< QtProtobuf::int64*>(_v) = _t->overTime(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetHistoryMsgReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setChatSessionId(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setStartTime(*reinterpret_cast< QtProtobuf::int64*>(_v)); break;
        case 3: _t->setOverTime(*reinterpret_cast< QtProtobuf::int64*>(_v)); break;
        case 4: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetHistoryMsgRsp",
    "requestId",
    "success",
    "errmsg",
    "msgListData",
    "bite_im::MessageInfoRepeated"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetHistoryMsgRspENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::GetHistoryMsgRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetHistoryMsgRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'msgListData'
        QtPrivate::TypeAndForceComplete<bite_im::MessageInfoRepeated, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetHistoryMsgRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::GetHistoryMsgRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetHistoryMsgRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::MessageInfoRepeated*>(_v) = _t->msgList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetHistoryMsgRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setMsgList(*reinterpret_cast< bite_im::MessageInfoRepeated*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetRecentMsgReq",
    "requestId",
    "chatSessionId",
    "msgCount",
    "QtProtobuf::int64",
    "curTime",
    "hasCurTime",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetRecentMsgReqENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QString, 0x00015103, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001110b, uint(-1), 0,
       5, 0x80000000 | 4, 0x0001500b, uint(-1), 0,
       6, QMetaType::Bool, 0x00015001, uint(-1), 0,
       7, QMetaType::QString, 0x00015003, uint(-1), 0,
       8, QMetaType::Bool, 0x00015001, uint(-1), 0,
       9, QMetaType::QString, 0x00015003, uint(-1), 0,
      10, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSbite_imSCOPEGetRecentMsgReqENDCLASS[] = {
    QMetaObject::SuperData::link<QtProtobuf::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject bite_im::GetRecentMsgReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetRecentMsgReqENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSbite_imSCOPEGetRecentMsgReqENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'chatSessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'msgCount'
        QtPrivate::TypeAndForceComplete<QtProtobuf::int64, std::true_type>,
        // property 'curTime'
        QtPrivate::TypeAndForceComplete<QtProtobuf::int64, std::true_type>,
        // property 'hasCurTime'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetRecentMsgReq, std::true_type>
    >,
    nullptr
} };

void bite_im::GetRecentMsgReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtProtobuf::int64 >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetRecentMsgReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->chatSessionId(); break;
        case 2: *reinterpret_cast< QtProtobuf::int64*>(_v) = _t->msgCount(); break;
        case 3: *reinterpret_cast< QtProtobuf::int64*>(_v) = _t->curTime_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasCurTime(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetRecentMsgReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setChatSessionId(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setMsgCount(*reinterpret_cast< QtProtobuf::int64*>(_v)); break;
        case 3: _t->setCurTime_p(*reinterpret_cast< QtProtobuf::int64*>(_v)); break;
        case 5: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetRecentMsgRsp",
    "requestId",
    "success",
    "errmsg",
    "msgListData",
    "bite_im::MessageInfoRepeated"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetRecentMsgRspENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::GetRecentMsgRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetRecentMsgRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'msgListData'
        QtPrivate::TypeAndForceComplete<bite_im::MessageInfoRepeated, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetRecentMsgRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::GetRecentMsgRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetRecentMsgRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::MessageInfoRepeated*>(_v) = _t->msgList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetRecentMsgRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setMsgList(*reinterpret_cast< bite_im::MessageInfoRepeated*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::MsgSearchReq",
    "requestId",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId",
    "chatSessionId",
    "searchKey"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEMsgSearchReqENDCLASS[] = {

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
       7, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::MsgSearchReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEMsgSearchReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchReqENDCLASS_t,
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
        // property 'searchKey'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MsgSearchReq, std::true_type>
    >,
    nullptr
} };

void bite_im::MsgSearchReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<MsgSearchReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->chatSessionId(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->searchKey(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<MsgSearchReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setChatSessionId(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setSearchKey(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::MsgSearchRsp",
    "requestId",
    "success",
    "errmsg",
    "msgListData",
    "bite_im::MessageInfoRepeated"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEMsgSearchRspENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::MsgSearchRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEMsgSearchRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'msgListData'
        QtPrivate::TypeAndForceComplete<bite_im::MessageInfoRepeated, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MsgSearchRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::MsgSearchRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<MsgSearchRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::MessageInfoRepeated*>(_v) = _t->msgList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<MsgSearchRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setMsgList(*reinterpret_cast< bite_im::MessageInfoRepeated*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetHistoryMsgReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "ChatSessionIdProtoFieldNumber",
    "StartTimeProtoFieldNumber",
    "OverTimeProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetHistoryMsgReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetHistoryMsgReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetHistoryMsgReq_QtProtobufNested::QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber),
       4, uint(bite_im::GetHistoryMsgReq_QtProtobufNested::QtProtobufFieldEnum::StartTimeProtoFieldNumber),
       5, uint(bite_im::GetHistoryMsgReq_QtProtobufNested::QtProtobufFieldEnum::OverTimeProtoFieldNumber),
       6, uint(bite_im::GetHistoryMsgReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       7, uint(bite_im::GetHistoryMsgReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetHistoryMsgReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetHistoryMsgReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetHistoryMsgReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetHistoryMsgRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "MsgListProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetHistoryMsgRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetHistoryMsgRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetHistoryMsgRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::GetHistoryMsgRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::GetHistoryMsgRsp_QtProtobufNested::QtProtobufFieldEnum::MsgListProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetHistoryMsgRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetHistoryMsgRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetHistoryMsgRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetHistoryMsgRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetRecentMsgReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "ChatSessionIdProtoFieldNumber",
    "MsgCountProtoFieldNumber",
    "CurTimeProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetRecentMsgReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetRecentMsgReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetRecentMsgReq_QtProtobufNested::QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber),
       4, uint(bite_im::GetRecentMsgReq_QtProtobufNested::QtProtobufFieldEnum::MsgCountProtoFieldNumber),
       5, uint(bite_im::GetRecentMsgReq_QtProtobufNested::QtProtobufFieldEnum::CurTimeProtoFieldNumber),
       6, uint(bite_im::GetRecentMsgReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       7, uint(bite_im::GetRecentMsgReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetRecentMsgReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetRecentMsgReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetRecentMsgReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetRecentMsgRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "MsgListProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetRecentMsgRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetRecentMsgRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetRecentMsgRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::GetRecentMsgRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::GetRecentMsgRsp_QtProtobufNested::QtProtobufFieldEnum::MsgListProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetRecentMsgRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetRecentMsgRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetRecentMsgRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetRecentMsgRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::MsgSearchReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "ChatSessionIdProtoFieldNumber",
    "SearchKeyProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEMsgSearchReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::MsgSearchReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::MsgSearchReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       4, uint(bite_im::MsgSearchReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       5, uint(bite_im::MsgSearchReq_QtProtobufNested::QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber),
       6, uint(bite_im::MsgSearchReq_QtProtobufNested::QtProtobufFieldEnum::SearchKeyProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::MsgSearchReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEMsgSearchReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<MsgSearchReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::MsgSearchRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "MsgListProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEMsgSearchRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::MsgSearchRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::MsgSearchRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::MsgSearchRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::MsgSearchRsp_QtProtobufNested::QtProtobufFieldEnum::MsgListProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::MsgSearchRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEMsgSearchRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEMsgSearchRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<MsgSearchRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
