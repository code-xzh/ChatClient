/****************************************************************************
** Meta object code from reading C++ file 'speech_recognition.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../speech_recognition.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'speech_recognition.qpb.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::SpeechRecognitionReq",
    "requestId",
    "speechContent",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESpeechRecognitionReqENDCLASS[] = {

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
       2, QMetaType::QByteArray, 0x00015103, uint(-1), 0,
       3, QMetaType::QString, 0x00015003, uint(-1), 0,
       4, QMetaType::Bool, 0x00015001, uint(-1), 0,
       5, QMetaType::QString, 0x00015003, uint(-1), 0,
       6, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SpeechRecognitionReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESpeechRecognitionReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'speechContent'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'userId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasUserId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sessionId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasSessionId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpeechRecognitionReq, std::true_type>
    >,
    nullptr
} };

void bite_im::SpeechRecognitionReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<SpeechRecognitionReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->speechContent(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<SpeechRecognitionReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSpeechContent(*reinterpret_cast< QByteArray*>(_v)); break;
        case 2: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::SpeechRecognitionRsp",
    "requestId",
    "success",
    "errmsg",
    "recognitionResult"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESpeechRecognitionRspENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::SpeechRecognitionRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESpeechRecognitionRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'recognitionResult'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpeechRecognitionRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::SpeechRecognitionRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<SpeechRecognitionRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->recognitionResult(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<SpeechRecognitionRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setRecognitionResult(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::SpeechRecognitionReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SpeechContentProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESpeechRecognitionReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::SpeechRecognitionReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::SpeechRecognitionReq_QtProtobufNested::QtProtobufFieldEnum::SpeechContentProtoFieldNumber),
       4, uint(bite_im::SpeechRecognitionReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       5, uint(bite_im::SpeechRecognitionReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SpeechRecognitionReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESpeechRecognitionReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<SpeechRecognitionReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::SpeechRecognitionRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "RecognitionResultProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPESpeechRecognitionRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::SpeechRecognitionRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::SpeechRecognitionRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::SpeechRecognitionRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::SpeechRecognitionRsp_QtProtobufNested::QtProtobufFieldEnum::RecognitionResultProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::SpeechRecognitionRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPESpeechRecognitionRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPESpeechRecognitionRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<SpeechRecognitionRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
