/****************************************************************************
** Meta object code from reading C++ file 'notify.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../notify.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notify.qpb.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddApplyENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddApplyENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyFriendAddApply",
    "userInfo_p",
    "bite_im::UserInfo*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyFriendAddApplyENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001110b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NotifyFriendAddApply::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddApplyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyFriendAddApplyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddApplyENDCLASS_t,
        // property 'userInfo_p'
        QtPrivate::TypeAndForceComplete<bite_im::UserInfo*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NotifyFriendAddApply, std::true_type>
    >,
    nullptr
} };

void bite_im::NotifyFriendAddApply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<NotifyFriendAddApply *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bite_im::UserInfo**>(_v) = _t->userInfo_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<NotifyFriendAddApply *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserInfo_p(*reinterpret_cast< bite_im::UserInfo**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddProcessENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddProcessENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyFriendAddProcess",
    "agree",
    "userInfo_p",
    "bite_im::UserInfo*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyFriendAddProcessENDCLASS[] = {

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
       1, QMetaType::Bool, 0x00015103, uint(-1), 0,
       2, 0x80000000 | 3, 0x0001110b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NotifyFriendAddProcess::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddProcessENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyFriendAddProcessENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddProcessENDCLASS_t,
        // property 'agree'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'userInfo_p'
        QtPrivate::TypeAndForceComplete<bite_im::UserInfo*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NotifyFriendAddProcess, std::true_type>
    >,
    nullptr
} };

void bite_im::NotifyFriendAddProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<NotifyFriendAddProcess *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->agree(); break;
        case 1: *reinterpret_cast< bite_im::UserInfo**>(_v) = _t->userInfo_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<NotifyFriendAddProcess *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAgree(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setUserInfo_p(*reinterpret_cast< bite_im::UserInfo**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendRemoveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendRemoveENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyFriendRemove",
    "userId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyFriendRemoveENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NotifyFriendRemove::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendRemoveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyFriendRemoveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendRemoveENDCLASS_t,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NotifyFriendRemove, std::true_type>
    >,
    nullptr
} };

void bite_im::NotifyFriendRemove::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<NotifyFriendRemove *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->userId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<NotifyFriendRemove *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserId(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyNewChatSessionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyNewChatSessionENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyNewChatSession",
    "chatSessionInfo_p",
    "bite_im::ChatSessionInfo*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyNewChatSessionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001110b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NotifyNewChatSession::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyNewChatSessionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyNewChatSessionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyNewChatSessionENDCLASS_t,
        // property 'chatSessionInfo_p'
        QtPrivate::TypeAndForceComplete<bite_im::ChatSessionInfo*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NotifyNewChatSession, std::true_type>
    >,
    nullptr
} };

void bite_im::NotifyNewChatSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<NotifyNewChatSession *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bite_im::ChatSessionInfo**>(_v) = _t->chatSessionInfo_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<NotifyNewChatSession *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setChatSessionInfo_p(*reinterpret_cast< bite_im::ChatSessionInfo**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyNewMessageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyNewMessageENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyNewMessage",
    "messageInfo_p",
    "bite_im::MessageInfo*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyNewMessageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001110b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NotifyNewMessage::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyNewMessageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyNewMessageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyNewMessageENDCLASS_t,
        // property 'messageInfo_p'
        QtPrivate::TypeAndForceComplete<bite_im::MessageInfo*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NotifyNewMessage, std::true_type>
    >,
    nullptr
} };

void bite_im::NotifyNewMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<NotifyNewMessage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bite_im::MessageInfo**>(_v) = _t->messageInfo_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<NotifyNewMessage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMessageInfo_p(*reinterpret_cast< bite_im::MessageInfo**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyMessageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyMessageENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyMessage",
    "notifyEventId",
    "hasNotifyEventId",
    "notifyType",
    "bite_im::NotifyTypeGadget::NotifyType",
    "friendAddApply_p",
    "bite_im::NotifyFriendAddApply*",
    "hasFriendAddApply",
    "friendProcessResult_p",
    "bite_im::NotifyFriendAddProcess*",
    "hasFriendProcessResult",
    "friendRemove_p",
    "bite_im::NotifyFriendRemove*",
    "hasFriendRemove",
    "newChatSessionInfo_p",
    "bite_im::NotifyNewChatSession*",
    "hasNewChatSessionInfo",
    "newMessageInfo_p",
    "bite_im::NotifyNewMessage*",
    "hasNewMessageInfo"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyMessageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015003, uint(-1), 0,
       2, QMetaType::Bool, 0x00015001, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001110b, uint(-1), 0,
       7, QMetaType::Bool, 0x00015001, uint(-1), 0,
       8, 0x80000000 | 9, 0x0001110b, uint(-1), 0,
      10, QMetaType::Bool, 0x00015001, uint(-1), 0,
      11, 0x80000000 | 12, 0x0001110b, uint(-1), 0,
      13, QMetaType::Bool, 0x00015001, uint(-1), 0,
      14, 0x80000000 | 15, 0x0001110b, uint(-1), 0,
      16, QMetaType::Bool, 0x00015001, uint(-1), 0,
      17, 0x80000000 | 18, 0x0001110b, uint(-1), 0,
      19, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSbite_imSCOPENotifyMessageENDCLASS[] = {
    QMetaObject::SuperData::link<bite_im::NotifyTypeGadget::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject bite_im::NotifyMessage::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyMessageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyMessageENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSbite_imSCOPENotifyMessageENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyMessageENDCLASS_t,
        // property 'notifyEventId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasNotifyEventId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'notifyType'
        QtPrivate::TypeAndForceComplete<bite_im::NotifyTypeGadget::NotifyType, std::true_type>,
        // property 'friendAddApply_p'
        QtPrivate::TypeAndForceComplete<bite_im::NotifyFriendAddApply*, std::true_type>,
        // property 'hasFriendAddApply'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'friendProcessResult_p'
        QtPrivate::TypeAndForceComplete<bite_im::NotifyFriendAddProcess*, std::true_type>,
        // property 'hasFriendProcessResult'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'friendRemove_p'
        QtPrivate::TypeAndForceComplete<bite_im::NotifyFriendRemove*, std::true_type>,
        // property 'hasFriendRemove'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'newChatSessionInfo_p'
        QtPrivate::TypeAndForceComplete<bite_im::NotifyNewChatSession*, std::true_type>,
        // property 'hasNewChatSessionInfo'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'newMessageInfo_p'
        QtPrivate::TypeAndForceComplete<bite_im::NotifyNewMessage*, std::true_type>,
        // property 'hasNewMessageInfo'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NotifyMessage, std::true_type>
    >,
    nullptr
} };

void bite_im::NotifyMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<NotifyMessage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->notifyEventId_p(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasNotifyEventId(); break;
        case 2: *reinterpret_cast< bite_im::NotifyTypeGadget::NotifyType*>(_v) = _t->notifyType(); break;
        case 3: *reinterpret_cast< bite_im::NotifyFriendAddApply**>(_v) = _t->friendAddApply_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasFriendAddApply(); break;
        case 5: *reinterpret_cast< bite_im::NotifyFriendAddProcess**>(_v) = _t->friendProcessResult_p(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasFriendProcessResult(); break;
        case 7: *reinterpret_cast< bite_im::NotifyFriendRemove**>(_v) = _t->friendRemove_p(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->hasFriendRemove(); break;
        case 9: *reinterpret_cast< bite_im::NotifyNewChatSession**>(_v) = _t->newChatSessionInfo_p(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->hasNewChatSessionInfo(); break;
        case 11: *reinterpret_cast< bite_im::NotifyNewMessage**>(_v) = _t->newMessageInfo_p(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->hasNewMessageInfo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<NotifyMessage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNotifyEventId_p(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setNotifyType(*reinterpret_cast< bite_im::NotifyTypeGadget::NotifyType*>(_v)); break;
        case 3: _t->setFriendAddApply_p(*reinterpret_cast< bite_im::NotifyFriendAddApply**>(_v)); break;
        case 5: _t->setFriendProcessResult_p(*reinterpret_cast< bite_im::NotifyFriendAddProcess**>(_v)); break;
        case 7: _t->setFriendRemove_p(*reinterpret_cast< bite_im::NotifyFriendRemove**>(_v)); break;
        case 9: _t->setNewChatSessionInfo_p(*reinterpret_cast< bite_im::NotifyNewChatSession**>(_v)); break;
        case 11: _t->setNewMessageInfo_p(*reinterpret_cast< bite_im::NotifyNewMessage**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyTypeGadgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyTypeGadgetENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyTypeGadget",
    "NotifyType",
    "FRIEND_ADD_APPLY_NOTIFY",
    "FRIEND_ADD_PROCESS_NOTIFY",
    "CHAT_SESSION_CREATE_NOTIFY",
    "CHAT_MESSAGE_NOTIFY",
    "FRIEND_REMOVE_NOTIFY"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyTypeGadgetENDCLASS[] = {

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
       1,    1, 0x0,    5,   19,

 // enum data: key, value
       2, uint(bite_im::NotifyTypeGadget::FRIEND_ADD_APPLY_NOTIFY),
       3, uint(bite_im::NotifyTypeGadget::FRIEND_ADD_PROCESS_NOTIFY),
       4, uint(bite_im::NotifyTypeGadget::CHAT_SESSION_CREATE_NOTIFY),
       5, uint(bite_im::NotifyTypeGadget::CHAT_MESSAGE_NOTIFY),
       6, uint(bite_im::NotifyTypeGadget::FRIEND_REMOVE_NOTIFY),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NotifyTypeGadget::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyTypeGadgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyTypeGadgetENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyTypeGadgetENDCLASS_t,
        // enum 'NotifyType'
        QtPrivate::TypeAndForceComplete<NotifyTypeGadget::NotifyType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddApply_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddApply_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyFriendAddApply_QtProtobufNested",
    "QtProtobufFieldEnum",
    "UserInfoProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyFriendAddApply_QtProtobufNestedENDCLASS[] = {

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
       1,    1, 0x2,    1,   19,

 // enum data: key, value
       2, uint(bite_im::NotifyFriendAddApply_QtProtobufNested::QtProtobufFieldEnum::UserInfoProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NotifyFriendAddApply_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddApply_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyFriendAddApply_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddApply_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<NotifyFriendAddApply_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddProcess_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddProcess_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyFriendAddProcess_QtProtobufNested",
    "QtProtobufFieldEnum",
    "AgreeProtoFieldNumber",
    "UserInfoProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyFriendAddProcess_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::NotifyFriendAddProcess_QtProtobufNested::QtProtobufFieldEnum::AgreeProtoFieldNumber),
       3, uint(bite_im::NotifyFriendAddProcess_QtProtobufNested::QtProtobufFieldEnum::UserInfoProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NotifyFriendAddProcess_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddProcess_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyFriendAddProcess_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendAddProcess_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<NotifyFriendAddProcess_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendRemove_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendRemove_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyFriendRemove_QtProtobufNested",
    "QtProtobufFieldEnum",
    "UserIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyFriendRemove_QtProtobufNestedENDCLASS[] = {

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
       1,    1, 0x2,    1,   19,

 // enum data: key, value
       2, uint(bite_im::NotifyFriendRemove_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NotifyFriendRemove_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendRemove_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyFriendRemove_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyFriendRemove_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<NotifyFriendRemove_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyNewChatSession_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyNewChatSession_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyNewChatSession_QtProtobufNested",
    "QtProtobufFieldEnum",
    "ChatSessionInfoProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyNewChatSession_QtProtobufNestedENDCLASS[] = {

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
       1,    1, 0x2,    1,   19,

 // enum data: key, value
       2, uint(bite_im::NotifyNewChatSession_QtProtobufNested::QtProtobufFieldEnum::ChatSessionInfoProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NotifyNewChatSession_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyNewChatSession_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyNewChatSession_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyNewChatSession_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<NotifyNewChatSession_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyNewMessage_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyNewMessage_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyNewMessage_QtProtobufNested",
    "QtProtobufFieldEnum",
    "MessageInfoProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyNewMessage_QtProtobufNestedENDCLASS[] = {

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
       1,    1, 0x2,    1,   19,

 // enum data: key, value
       2, uint(bite_im::NotifyNewMessage_QtProtobufNested::QtProtobufFieldEnum::MessageInfoProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NotifyNewMessage_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyNewMessage_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyNewMessage_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyNewMessage_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<NotifyNewMessage_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPENotifyMessage_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPENotifyMessage_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::NotifyMessage_QtProtobufNested",
    "QtProtobufFieldEnum",
    "NotifyEventIdProtoFieldNumber",
    "NotifyTypeProtoFieldNumber",
    "FriendAddApplyProtoFieldNumber",
    "FriendProcessResultProtoFieldNumber",
    "FriendRemoveProtoFieldNumber",
    "NewChatSessionInfoProtoFieldNumber",
    "NewMessageInfoProtoFieldNumber",
    "Notify_remarksFields",
    "UninitializedField",
    "FriendAddApply",
    "FriendProcessResult",
    "FriendRemove",
    "NewChatSessionInfo",
    "NewMessageInfo"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPENotifyMessage_QtProtobufNestedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    7,   24,
       9,    9, 0x2,    6,   38,

 // enum data: key, value
       2, uint(bite_im::NotifyMessage_QtProtobufNested::QtProtobufFieldEnum::NotifyEventIdProtoFieldNumber),
       3, uint(bite_im::NotifyMessage_QtProtobufNested::QtProtobufFieldEnum::NotifyTypeProtoFieldNumber),
       4, uint(bite_im::NotifyMessage_QtProtobufNested::QtProtobufFieldEnum::FriendAddApplyProtoFieldNumber),
       5, uint(bite_im::NotifyMessage_QtProtobufNested::QtProtobufFieldEnum::FriendProcessResultProtoFieldNumber),
       6, uint(bite_im::NotifyMessage_QtProtobufNested::QtProtobufFieldEnum::FriendRemoveProtoFieldNumber),
       7, uint(bite_im::NotifyMessage_QtProtobufNested::QtProtobufFieldEnum::NewChatSessionInfoProtoFieldNumber),
       8, uint(bite_im::NotifyMessage_QtProtobufNested::QtProtobufFieldEnum::NewMessageInfoProtoFieldNumber),
      10, uint(bite_im::NotifyMessage_QtProtobufNested::Notify_remarksFields::UninitializedField),
      11, uint(bite_im::NotifyMessage_QtProtobufNested::Notify_remarksFields::FriendAddApply),
      12, uint(bite_im::NotifyMessage_QtProtobufNested::Notify_remarksFields::FriendProcessResult),
      13, uint(bite_im::NotifyMessage_QtProtobufNested::Notify_remarksFields::FriendRemove),
      14, uint(bite_im::NotifyMessage_QtProtobufNested::Notify_remarksFields::NewChatSessionInfo),
      15, uint(bite_im::NotifyMessage_QtProtobufNested::Notify_remarksFields::NewMessageInfo),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::NotifyMessage_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPENotifyMessage_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPENotifyMessage_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPENotifyMessage_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<NotifyMessage_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // enum 'Notify_remarksFields'
        QtPrivate::TypeAndForceComplete<NotifyMessage_QtProtobufNested::Notify_remarksFields, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
