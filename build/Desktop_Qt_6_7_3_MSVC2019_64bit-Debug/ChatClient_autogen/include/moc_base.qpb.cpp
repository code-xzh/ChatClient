/****************************************************************************
** Meta object code from reading C++ file 'base.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../base.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'base.qpb.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSbite_imSCOPEUserInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEUserInfoENDCLASS = QtMocHelpers::stringData(
    "bite_im::UserInfo",
    "userId",
    "nickname",
    "description",
    "phone",
    "avatar"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEUserInfoENDCLASS[] = {

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
       5, QMetaType::QByteArray, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::UserInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEUserInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEUserInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEUserInfoENDCLASS_t,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'nickname'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'phone'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'avatar'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserInfo, std::true_type>
    >,
    nullptr
} };

void bite_im::UserInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<UserInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->userId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->nickname(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->phone(); break;
        case 4: *reinterpret_cast< QByteArray*>(_v) = _t->avatar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<UserInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setNickname(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPhone(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setAvatar(*reinterpret_cast< QByteArray*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEChatSessionInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEChatSessionInfoENDCLASS = QtMocHelpers::stringData(
    "bite_im::ChatSessionInfo",
    "singleChatFriendId",
    "hasSingleChatFriendId",
    "chatSessionId",
    "chatSessionName",
    "prevMessage_p",
    "bite_im::MessageInfo*",
    "avatar",
    "hasAvatar"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEChatSessionInfoENDCLASS[] = {

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
       1, QMetaType::QString, 0x00015003, uint(-1), 0,
       2, QMetaType::Bool, 0x00015001, uint(-1), 0,
       3, QMetaType::QString, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001110b, uint(-1), 0,
       7, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       8, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::ChatSessionInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEChatSessionInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEChatSessionInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEChatSessionInfoENDCLASS_t,
        // property 'singleChatFriendId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSingleChatFriendId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'chatSessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'chatSessionName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'prevMessage_p'
        QtPrivate::TypeAndForceComplete<bite_im::MessageInfo*, std::true_type>,
        // property 'avatar'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'hasAvatar'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChatSessionInfo, std::true_type>
    >,
    nullptr
} };

void bite_im::ChatSessionInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<ChatSessionInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->singleChatFriendId_p(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasSingleChatFriendId(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->chatSessionId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->chatSessionName(); break;
        case 4: *reinterpret_cast< bite_im::MessageInfo**>(_v) = _t->prevMessage_p(); break;
        case 5: *reinterpret_cast< QByteArray*>(_v) = _t->avatar_p(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasAvatar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<ChatSessionInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSingleChatFriendId_p(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setChatSessionId(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setChatSessionName(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setPrevMessage_p(*reinterpret_cast< bite_im::MessageInfo**>(_v)); break;
        case 5: _t->setAvatar_p(*reinterpret_cast< QByteArray*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEStringMessageInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEStringMessageInfoENDCLASS = QtMocHelpers::stringData(
    "bite_im::StringMessageInfo",
    "content"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEStringMessageInfoENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::StringMessageInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEStringMessageInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEStringMessageInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEStringMessageInfoENDCLASS_t,
        // property 'content'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StringMessageInfo, std::true_type>
    >,
    nullptr
} };

void bite_im::StringMessageInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<StringMessageInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->content(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<StringMessageInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContent(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEImageMessageInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEImageMessageInfoENDCLASS = QtMocHelpers::stringData(
    "bite_im::ImageMessageInfo",
    "fileId",
    "hasFileId",
    "imageContent",
    "hasImageContent"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEImageMessageInfoENDCLASS[] = {

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
       1, QMetaType::QString, 0x00015003, uint(-1), 0,
       2, QMetaType::Bool, 0x00015001, uint(-1), 0,
       3, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       4, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::ImageMessageInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEImageMessageInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEImageMessageInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEImageMessageInfoENDCLASS_t,
        // property 'fileId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasFileId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'imageContent'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'hasImageContent'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ImageMessageInfo, std::true_type>
    >,
    nullptr
} };

void bite_im::ImageMessageInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<ImageMessageInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fileId_p(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasFileId(); break;
        case 2: *reinterpret_cast< QByteArray*>(_v) = _t->imageContent_p(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasImageContent(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<ImageMessageInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileId_p(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setImageContent_p(*reinterpret_cast< QByteArray*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEFileMessageInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFileMessageInfoENDCLASS = QtMocHelpers::stringData(
    "bite_im::FileMessageInfo",
    "fileId",
    "hasFileId",
    "fileSize",
    "QtProtobuf::int64",
    "fileName",
    "fileContents",
    "hasFileContents"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFileMessageInfoENDCLASS[] = {

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
       1, QMetaType::QString, 0x00015003, uint(-1), 0,
       2, QMetaType::Bool, 0x00015001, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001110b, uint(-1), 0,
       5, QMetaType::QString, 0x00015103, uint(-1), 0,
       6, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       7, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSbite_imSCOPEFileMessageInfoENDCLASS[] = {
    QMetaObject::SuperData::link<QtProtobuf::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject bite_im::FileMessageInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEFileMessageInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFileMessageInfoENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSbite_imSCOPEFileMessageInfoENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFileMessageInfoENDCLASS_t,
        // property 'fileId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasFileId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fileSize'
        QtPrivate::TypeAndForceComplete<QtProtobuf::int64, std::true_type>,
        // property 'fileName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileContents'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'hasFileContents'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileMessageInfo, std::true_type>
    >,
    nullptr
} };

void bite_im::FileMessageInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtProtobuf::int64 >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<FileMessageInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fileId_p(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasFileId(); break;
        case 2: *reinterpret_cast< QtProtobuf::int64*>(_v) = _t->fileSize(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 4: *reinterpret_cast< QByteArray*>(_v) = _t->fileContents_p(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->hasFileContents(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<FileMessageInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileId_p(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFileSize(*reinterpret_cast< QtProtobuf::int64*>(_v)); break;
        case 3: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setFileContents_p(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESpeechMessageInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESpeechMessageInfoENDCLASS = QtMocHelpers::stringData(
    "bite_im::SpeechMessageInfo",
    "fileId",
    "hasFileId",
    "fileContents",
    "hasFileContents"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESpeechMessageInfoENDCLASS[] = {

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
       1, QMetaType::QString, 0x00015003, uint(-1), 0,
       2, QMetaType::Bool, 0x00015001, uint(-1), 0,
       3, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       4, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SpeechMessageInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPESpeechMessageInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESpeechMessageInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESpeechMessageInfoENDCLASS_t,
        // property 'fileId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasFileId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fileContents'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'hasFileContents'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpeechMessageInfo, std::true_type>
    >,
    nullptr
} };

void bite_im::SpeechMessageInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<SpeechMessageInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fileId_p(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasFileId(); break;
        case 2: *reinterpret_cast< QByteArray*>(_v) = _t->fileContents_p(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasFileContents(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<SpeechMessageInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileId_p(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFileContents_p(*reinterpret_cast< QByteArray*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEMessageContentENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEMessageContentENDCLASS = QtMocHelpers::stringData(
    "bite_im::MessageContent",
    "messageType",
    "bite_im::MessageTypeGadget::MessageType",
    "stringMessage_p",
    "bite_im::StringMessageInfo*",
    "hasStringMessage",
    "fileMessage_p",
    "bite_im::FileMessageInfo*",
    "hasFileMessage",
    "speechMessage_p",
    "bite_im::SpeechMessageInfo*",
    "hasSpeechMessage",
    "imageMessage_p",
    "bite_im::ImageMessageInfo*",
    "hasImageMessage"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEMessageContentENDCLASS[] = {

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
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001110b, uint(-1), 0,
       5, QMetaType::Bool, 0x00015001, uint(-1), 0,
       6, 0x80000000 | 7, 0x0001110b, uint(-1), 0,
       8, QMetaType::Bool, 0x00015001, uint(-1), 0,
       9, 0x80000000 | 10, 0x0001110b, uint(-1), 0,
      11, QMetaType::Bool, 0x00015001, uint(-1), 0,
      12, 0x80000000 | 13, 0x0001110b, uint(-1), 0,
      14, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSbite_imSCOPEMessageContentENDCLASS[] = {
    QMetaObject::SuperData::link<bite_im::MessageTypeGadget::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject bite_im::MessageContent::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEMessageContentENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEMessageContentENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSbite_imSCOPEMessageContentENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEMessageContentENDCLASS_t,
        // property 'messageType'
        QtPrivate::TypeAndForceComplete<bite_im::MessageTypeGadget::MessageType, std::true_type>,
        // property 'stringMessage_p'
        QtPrivate::TypeAndForceComplete<bite_im::StringMessageInfo*, std::true_type>,
        // property 'hasStringMessage'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fileMessage_p'
        QtPrivate::TypeAndForceComplete<bite_im::FileMessageInfo*, std::true_type>,
        // property 'hasFileMessage'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'speechMessage_p'
        QtPrivate::TypeAndForceComplete<bite_im::SpeechMessageInfo*, std::true_type>,
        // property 'hasSpeechMessage'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'imageMessage_p'
        QtPrivate::TypeAndForceComplete<bite_im::ImageMessageInfo*, std::true_type>,
        // property 'hasImageMessage'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MessageContent, std::true_type>
    >,
    nullptr
} };

void bite_im::MessageContent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<MessageContent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bite_im::MessageTypeGadget::MessageType*>(_v) = _t->messageType(); break;
        case 1: *reinterpret_cast< bite_im::StringMessageInfo**>(_v) = _t->stringMessage_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasStringMessage(); break;
        case 3: *reinterpret_cast< bite_im::FileMessageInfo**>(_v) = _t->fileMessage_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasFileMessage(); break;
        case 5: *reinterpret_cast< bite_im::SpeechMessageInfo**>(_v) = _t->speechMessage_p(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasSpeechMessage(); break;
        case 7: *reinterpret_cast< bite_im::ImageMessageInfo**>(_v) = _t->imageMessage_p(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->hasImageMessage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<MessageContent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMessageType(*reinterpret_cast< bite_im::MessageTypeGadget::MessageType*>(_v)); break;
        case 1: _t->setStringMessage_p(*reinterpret_cast< bite_im::StringMessageInfo**>(_v)); break;
        case 3: _t->setFileMessage_p(*reinterpret_cast< bite_im::FileMessageInfo**>(_v)); break;
        case 5: _t->setSpeechMessage_p(*reinterpret_cast< bite_im::SpeechMessageInfo**>(_v)); break;
        case 7: _t->setImageMessage_p(*reinterpret_cast< bite_im::ImageMessageInfo**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEMessageInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEMessageInfoENDCLASS = QtMocHelpers::stringData(
    "bite_im::MessageInfo",
    "messageId",
    "chatSessionId",
    "timestamp",
    "QtProtobuf::int64",
    "sender_p",
    "bite_im::UserInfo*",
    "message_p",
    "bite_im::MessageContent*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEMessageInfoENDCLASS[] = {

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
       3, 0x80000000 | 4, 0x0001110b, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001110b, uint(-1), 0,
       7, 0x80000000 | 8, 0x0001110b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSbite_imSCOPEMessageInfoENDCLASS[] = {
    QMetaObject::SuperData::link<QtProtobuf::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject bite_im::MessageInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEMessageInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEMessageInfoENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSbite_imSCOPEMessageInfoENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEMessageInfoENDCLASS_t,
        // property 'messageId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'chatSessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'timestamp'
        QtPrivate::TypeAndForceComplete<QtProtobuf::int64, std::true_type>,
        // property 'sender_p'
        QtPrivate::TypeAndForceComplete<bite_im::UserInfo*, std::true_type>,
        // property 'message_p'
        QtPrivate::TypeAndForceComplete<bite_im::MessageContent*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MessageInfo, std::true_type>
    >,
    nullptr
} };

void bite_im::MessageInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtProtobuf::int64 >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<MessageInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->messageId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->chatSessionId(); break;
        case 2: *reinterpret_cast< QtProtobuf::int64*>(_v) = _t->timestamp(); break;
        case 3: *reinterpret_cast< bite_im::UserInfo**>(_v) = _t->sender_p(); break;
        case 4: *reinterpret_cast< bite_im::MessageContent**>(_v) = _t->message_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<MessageInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMessageId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setChatSessionId(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setTimestamp(*reinterpret_cast< QtProtobuf::int64*>(_v)); break;
        case 3: _t->setSender_p(*reinterpret_cast< bite_im::UserInfo**>(_v)); break;
        case 4: _t->setMessage_p(*reinterpret_cast< bite_im::MessageContent**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEMessageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEMessageENDCLASS = QtMocHelpers::stringData(
    "bite_im::Message",
    "requestId",
    "message_p",
    "bite_im::MessageInfo*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEMessageENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::Message::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEMessageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEMessageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEMessageENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'message_p'
        QtPrivate::TypeAndForceComplete<bite_im::MessageInfo*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Message, std::true_type>
    >,
    nullptr
} };

void bite_im::Message::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Message *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bite_im::MessageInfo**>(_v) = _t->message_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<Message *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setMessage_p(*reinterpret_cast< bite_im::MessageInfo**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEFileDownloadDataENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFileDownloadDataENDCLASS = QtMocHelpers::stringData(
    "bite_im::FileDownloadData",
    "fileId",
    "fileContent"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFileDownloadDataENDCLASS[] = {

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
       2, QMetaType::QByteArray, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FileDownloadData::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEFileDownloadDataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFileDownloadDataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFileDownloadDataENDCLASS_t,
        // property 'fileId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileContent'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileDownloadData, std::true_type>
    >,
    nullptr
} };

void bite_im::FileDownloadData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<FileDownloadData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fileId(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->fileContent(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<FileDownloadData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFileContent(*reinterpret_cast< QByteArray*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEFileUploadDataENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFileUploadDataENDCLASS = QtMocHelpers::stringData(
    "bite_im::FileUploadData",
    "fileName",
    "fileSize",
    "QtProtobuf::int64",
    "fileContent"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFileUploadDataENDCLASS[] = {

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
       2, 0x80000000 | 3, 0x0001110b, uint(-1), 0,
       4, QMetaType::QByteArray, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSbite_imSCOPEFileUploadDataENDCLASS[] = {
    QMetaObject::SuperData::link<QtProtobuf::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject bite_im::FileUploadData::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEFileUploadDataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFileUploadDataENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSbite_imSCOPEFileUploadDataENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFileUploadDataENDCLASS_t,
        // property 'fileName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileSize'
        QtPrivate::TypeAndForceComplete<QtProtobuf::int64, std::true_type>,
        // property 'fileContent'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileUploadData, std::true_type>
    >,
    nullptr
} };

void bite_im::FileUploadData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtProtobuf::int64 >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<FileUploadData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 1: *reinterpret_cast< QtProtobuf::int64*>(_v) = _t->fileSize(); break;
        case 2: *reinterpret_cast< QByteArray*>(_v) = _t->fileContent(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<FileUploadData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFileSize(*reinterpret_cast< QtProtobuf::int64*>(_v)); break;
        case 2: _t->setFileContent(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEMessageTypeGadgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEMessageTypeGadgetENDCLASS = QtMocHelpers::stringData(
    "bite_im::MessageTypeGadget",
    "MessageType",
    "STRING",
    "IMAGE",
    "FILE",
    "SPEECH"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEMessageTypeGadgetENDCLASS[] = {

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
       1,    1, 0x0,    4,   19,

 // enum data: key, value
       2, uint(bite_im::MessageTypeGadget::STRING),
       3, uint(bite_im::MessageTypeGadget::IMAGE),
       4, uint(bite_im::MessageTypeGadget::FILE),
       5, uint(bite_im::MessageTypeGadget::SPEECH),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::MessageTypeGadget::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEMessageTypeGadgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEMessageTypeGadgetENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEMessageTypeGadgetENDCLASS_t,
        // enum 'MessageType'
        QtPrivate::TypeAndForceComplete<MessageTypeGadget::MessageType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEUserInfo_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEUserInfo_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::UserInfo_QtProtobufNested",
    "QtProtobufFieldEnum",
    "UserIdProtoFieldNumber",
    "NicknameProtoFieldNumber",
    "DescriptionProtoFieldNumber",
    "PhoneProtoFieldNumber",
    "AvatarProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEUserInfo_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::UserInfo_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       3, uint(bite_im::UserInfo_QtProtobufNested::QtProtobufFieldEnum::NicknameProtoFieldNumber),
       4, uint(bite_im::UserInfo_QtProtobufNested::QtProtobufFieldEnum::DescriptionProtoFieldNumber),
       5, uint(bite_im::UserInfo_QtProtobufNested::QtProtobufFieldEnum::PhoneProtoFieldNumber),
       6, uint(bite_im::UserInfo_QtProtobufNested::QtProtobufFieldEnum::AvatarProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::UserInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEUserInfo_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEUserInfo_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEUserInfo_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<UserInfo_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEChatSessionInfo_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEChatSessionInfo_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::ChatSessionInfo_QtProtobufNested",
    "QtProtobufFieldEnum",
    "SingleChatFriendIdProtoFieldNumber",
    "ChatSessionIdProtoFieldNumber",
    "ChatSessionNameProtoFieldNumber",
    "PrevMessageProtoFieldNumber",
    "AvatarProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEChatSessionInfo_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::ChatSessionInfo_QtProtobufNested::QtProtobufFieldEnum::SingleChatFriendIdProtoFieldNumber),
       3, uint(bite_im::ChatSessionInfo_QtProtobufNested::QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber),
       4, uint(bite_im::ChatSessionInfo_QtProtobufNested::QtProtobufFieldEnum::ChatSessionNameProtoFieldNumber),
       5, uint(bite_im::ChatSessionInfo_QtProtobufNested::QtProtobufFieldEnum::PrevMessageProtoFieldNumber),
       6, uint(bite_im::ChatSessionInfo_QtProtobufNested::QtProtobufFieldEnum::AvatarProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::ChatSessionInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEChatSessionInfo_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEChatSessionInfo_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEChatSessionInfo_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<ChatSessionInfo_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEStringMessageInfo_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEStringMessageInfo_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::StringMessageInfo_QtProtobufNested",
    "QtProtobufFieldEnum",
    "ContentProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEStringMessageInfo_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::StringMessageInfo_QtProtobufNested::QtProtobufFieldEnum::ContentProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::StringMessageInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEStringMessageInfo_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEStringMessageInfo_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEStringMessageInfo_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<StringMessageInfo_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEImageMessageInfo_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEImageMessageInfo_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::ImageMessageInfo_QtProtobufNested",
    "QtProtobufFieldEnum",
    "FileIdProtoFieldNumber",
    "ImageContentProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEImageMessageInfo_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::ImageMessageInfo_QtProtobufNested::QtProtobufFieldEnum::FileIdProtoFieldNumber),
       3, uint(bite_im::ImageMessageInfo_QtProtobufNested::QtProtobufFieldEnum::ImageContentProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::ImageMessageInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEImageMessageInfo_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEImageMessageInfo_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEImageMessageInfo_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<ImageMessageInfo_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEFileMessageInfo_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFileMessageInfo_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::FileMessageInfo_QtProtobufNested",
    "QtProtobufFieldEnum",
    "FileIdProtoFieldNumber",
    "FileSizeProtoFieldNumber",
    "FileNameProtoFieldNumber",
    "FileContentsProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFileMessageInfo_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::FileMessageInfo_QtProtobufNested::QtProtobufFieldEnum::FileIdProtoFieldNumber),
       3, uint(bite_im::FileMessageInfo_QtProtobufNested::QtProtobufFieldEnum::FileSizeProtoFieldNumber),
       4, uint(bite_im::FileMessageInfo_QtProtobufNested::QtProtobufFieldEnum::FileNameProtoFieldNumber),
       5, uint(bite_im::FileMessageInfo_QtProtobufNested::QtProtobufFieldEnum::FileContentsProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FileMessageInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEFileMessageInfo_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFileMessageInfo_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFileMessageInfo_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<FileMessageInfo_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESpeechMessageInfo_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESpeechMessageInfo_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::SpeechMessageInfo_QtProtobufNested",
    "QtProtobufFieldEnum",
    "FileIdProtoFieldNumber",
    "FileContentsProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESpeechMessageInfo_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::SpeechMessageInfo_QtProtobufNested::QtProtobufFieldEnum::FileIdProtoFieldNumber),
       3, uint(bite_im::SpeechMessageInfo_QtProtobufNested::QtProtobufFieldEnum::FileContentsProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SpeechMessageInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPESpeechMessageInfo_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESpeechMessageInfo_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESpeechMessageInfo_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<SpeechMessageInfo_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEMessageContent_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEMessageContent_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::MessageContent_QtProtobufNested",
    "QtProtobufFieldEnum",
    "MessageTypeProtoFieldNumber",
    "StringMessageProtoFieldNumber",
    "FileMessageProtoFieldNumber",
    "SpeechMessageProtoFieldNumber",
    "ImageMessageProtoFieldNumber",
    "Msg_contentFields",
    "UninitializedField",
    "StringMessage",
    "FileMessage",
    "SpeechMessage",
    "ImageMessage"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEMessageContent_QtProtobufNestedENDCLASS[] = {

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
       1,    1, 0x2,    5,   24,
       7,    7, 0x2,    5,   34,

 // enum data: key, value
       2, uint(bite_im::MessageContent_QtProtobufNested::QtProtobufFieldEnum::MessageTypeProtoFieldNumber),
       3, uint(bite_im::MessageContent_QtProtobufNested::QtProtobufFieldEnum::StringMessageProtoFieldNumber),
       4, uint(bite_im::MessageContent_QtProtobufNested::QtProtobufFieldEnum::FileMessageProtoFieldNumber),
       5, uint(bite_im::MessageContent_QtProtobufNested::QtProtobufFieldEnum::SpeechMessageProtoFieldNumber),
       6, uint(bite_im::MessageContent_QtProtobufNested::QtProtobufFieldEnum::ImageMessageProtoFieldNumber),
       8, uint(bite_im::MessageContent_QtProtobufNested::Msg_contentFields::UninitializedField),
       9, uint(bite_im::MessageContent_QtProtobufNested::Msg_contentFields::StringMessage),
      10, uint(bite_im::MessageContent_QtProtobufNested::Msg_contentFields::FileMessage),
      11, uint(bite_im::MessageContent_QtProtobufNested::Msg_contentFields::SpeechMessage),
      12, uint(bite_im::MessageContent_QtProtobufNested::Msg_contentFields::ImageMessage),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::MessageContent_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEMessageContent_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEMessageContent_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEMessageContent_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<MessageContent_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // enum 'Msg_contentFields'
        QtPrivate::TypeAndForceComplete<MessageContent_QtProtobufNested::Msg_contentFields, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEMessageInfo_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEMessageInfo_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::MessageInfo_QtProtobufNested",
    "QtProtobufFieldEnum",
    "MessageIdProtoFieldNumber",
    "ChatSessionIdProtoFieldNumber",
    "TimestampProtoFieldNumber",
    "SenderProtoFieldNumber",
    "MessageProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEMessageInfo_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::MessageInfo_QtProtobufNested::QtProtobufFieldEnum::MessageIdProtoFieldNumber),
       3, uint(bite_im::MessageInfo_QtProtobufNested::QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber),
       4, uint(bite_im::MessageInfo_QtProtobufNested::QtProtobufFieldEnum::TimestampProtoFieldNumber),
       5, uint(bite_im::MessageInfo_QtProtobufNested::QtProtobufFieldEnum::SenderProtoFieldNumber),
       6, uint(bite_im::MessageInfo_QtProtobufNested::QtProtobufFieldEnum::MessageProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::MessageInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEMessageInfo_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEMessageInfo_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEMessageInfo_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<MessageInfo_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEMessage_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEMessage_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::Message_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "MessageProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEMessage_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::Message_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::Message_QtProtobufNested::QtProtobufFieldEnum::MessageProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::Message_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEMessage_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEMessage_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEMessage_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<Message_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEFileDownloadData_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFileDownloadData_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::FileDownloadData_QtProtobufNested",
    "QtProtobufFieldEnum",
    "FileIdProtoFieldNumber",
    "FileContentProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFileDownloadData_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::FileDownloadData_QtProtobufNested::QtProtobufFieldEnum::FileIdProtoFieldNumber),
       3, uint(bite_im::FileDownloadData_QtProtobufNested::QtProtobufFieldEnum::FileContentProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FileDownloadData_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEFileDownloadData_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFileDownloadData_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFileDownloadData_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<FileDownloadData_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEFileUploadData_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEFileUploadData_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::FileUploadData_QtProtobufNested",
    "QtProtobufFieldEnum",
    "FileNameProtoFieldNumber",
    "FileSizeProtoFieldNumber",
    "FileContentProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEFileUploadData_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::FileUploadData_QtProtobufNested::QtProtobufFieldEnum::FileNameProtoFieldNumber),
       3, uint(bite_im::FileUploadData_QtProtobufNested::QtProtobufFieldEnum::FileSizeProtoFieldNumber),
       4, uint(bite_im::FileUploadData_QtProtobufNested::QtProtobufFieldEnum::FileContentProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::FileUploadData_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEFileUploadData_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEFileUploadData_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEFileUploadData_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<FileUploadData_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
