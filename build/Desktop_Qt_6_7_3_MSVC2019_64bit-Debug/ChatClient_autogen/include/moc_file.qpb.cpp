/****************************************************************************
** Meta object code from reading C++ file 'file.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../file.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'file.qpb.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetSingleFileReq",
    "requestId",
    "fileId",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetSingleFileReqENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::GetSingleFileReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetSingleFileReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileReqENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileId'
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
        QtPrivate::TypeAndForceComplete<GetSingleFileReq, std::true_type>
    >,
    nullptr
} };

void bite_im::GetSingleFileReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetSingleFileReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->fileId(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetSingleFileReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFileId(*reinterpret_cast< QString*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetSingleFileRsp",
    "requestId",
    "success",
    "errmsg",
    "fileData_p",
    "bite_im::FileDownloadData*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetSingleFileRspENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::GetSingleFileRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetSingleFileRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileData_p'
        QtPrivate::TypeAndForceComplete<bite_im::FileDownloadData*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetSingleFileRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::GetSingleFileRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetSingleFileRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::FileDownloadData**>(_v) = _t->fileData_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetSingleFileRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFileData_p(*reinterpret_cast< bite_im::FileDownloadData**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetMultiFileReq",
    "requestId",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId",
    "fileIdList"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetMultiFileReqENDCLASS[] = {

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
       6, QMetaType::QStringList, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetMultiFileReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetMultiFileReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileReqENDCLASS_t,
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
        // property 'fileIdList'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetMultiFileReq, std::true_type>
    >,
    nullptr
} };

void bite_im::GetMultiFileReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetMultiFileReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->fileIdList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetMultiFileReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setFileIdList(*reinterpret_cast< QStringList*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetMultiFileRsp",
    "requestId",
    "success",
    "errmsg",
    "fileDataData",
    "bite_im::FileDownloadDataRepeated"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetMultiFileRspENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::GetMultiFileRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetMultiFileRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileDataData'
        QtPrivate::TypeAndForceComplete<bite_im::FileDownloadDataRepeated, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetMultiFileRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::GetMultiFileRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<GetMultiFileRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::FileDownloadDataRepeated*>(_v) = _t->fileData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<GetMultiFileRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFileData(*reinterpret_cast< bite_im::FileDownloadDataRepeated*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::PutSingleFileReq",
    "requestId",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId",
    "fileData_p",
    "bite_im::FileUploadData*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPutSingleFileReqENDCLASS[] = {

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
       6, 0x80000000 | 7, 0x0001110b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PutSingleFileReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPutSingleFileReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileReqENDCLASS_t,
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
        // property 'fileData_p'
        QtPrivate::TypeAndForceComplete<bite_im::FileUploadData*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PutSingleFileReq, std::true_type>
    >,
    nullptr
} };

void bite_im::PutSingleFileReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<PutSingleFileReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast< bite_im::FileUploadData**>(_v) = _t->fileData_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<PutSingleFileReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setFileData_p(*reinterpret_cast< bite_im::FileUploadData**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::PutSingleFileRsp",
    "requestId",
    "success",
    "errmsg",
    "fileInfo_p",
    "bite_im::FileMessageInfo*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPutSingleFileRspENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::PutSingleFileRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPutSingleFileRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileInfo_p'
        QtPrivate::TypeAndForceComplete<bite_im::FileMessageInfo*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PutSingleFileRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::PutSingleFileRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<PutSingleFileRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::FileMessageInfo**>(_v) = _t->fileInfo_p(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<PutSingleFileRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFileInfo_p(*reinterpret_cast< bite_im::FileMessageInfo**>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileReqENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileReqENDCLASS = QtMocHelpers::stringData(
    "bite_im::PutMultiFileReq",
    "requestId",
    "userId",
    "hasUserId",
    "sessionId",
    "hasSessionId",
    "fileDataData",
    "bite_im::FileUploadDataRepeated"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPutMultiFileReqENDCLASS[] = {

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
       6, 0x80000000 | 7, 0x0001500b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PutMultiFileReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileReqENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPutMultiFileReqENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileReqENDCLASS_t,
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
        // property 'fileDataData'
        QtPrivate::TypeAndForceComplete<bite_im::FileUploadDataRepeated, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PutMultiFileReq, std::true_type>
    >,
    nullptr
} };

void bite_im::PutMultiFileReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<PutMultiFileReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast< bite_im::FileUploadDataRepeated*>(_v) = _t->fileData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<PutMultiFileReq *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setFileData(*reinterpret_cast< bite_im::FileUploadDataRepeated*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileRspENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileRspENDCLASS = QtMocHelpers::stringData(
    "bite_im::PutMultiFileRsp",
    "requestId",
    "success",
    "errmsg",
    "fileInfoData",
    "bite_im::FileMessageInfoRepeated"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPutMultiFileRspENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject bite_im::PutMultiFileRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileRspENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPutMultiFileRspENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileRspENDCLASS_t,
        // property 'requestId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'success'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errmsg'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileInfoData'
        QtPrivate::TypeAndForceComplete<bite_im::FileMessageInfoRepeated, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PutMultiFileRsp, std::true_type>
    >,
    nullptr
} };

void bite_im::PutMultiFileRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<PutMultiFileRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast< bite_im::FileMessageInfoRepeated*>(_v) = _t->fileInfo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<PutMultiFileRsp *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFileInfo(*reinterpret_cast< bite_im::FileMessageInfoRepeated*>(_v)); break;
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
struct qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetSingleFileReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "FileIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetSingleFileReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetSingleFileReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetSingleFileReq_QtProtobufNested::QtProtobufFieldEnum::FileIdProtoFieldNumber),
       4, uint(bite_im::GetSingleFileReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       5, uint(bite_im::GetSingleFileReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetSingleFileReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetSingleFileReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetSingleFileReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetSingleFileRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "FileDataProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetSingleFileRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetSingleFileRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetSingleFileRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::GetSingleFileRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::GetSingleFileRsp_QtProtobufNested::QtProtobufFieldEnum::FileDataProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetSingleFileRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetSingleFileRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetSingleFileRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetSingleFileRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetMultiFileReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "FileIdListProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetMultiFileReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetMultiFileReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetMultiFileReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       4, uint(bite_im::GetMultiFileReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       5, uint(bite_im::GetMultiFileReq_QtProtobufNested::QtProtobufFieldEnum::FileIdListProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetMultiFileReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetMultiFileReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetMultiFileReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::GetMultiFileRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "FileDataProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEGetMultiFileRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::GetMultiFileRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::GetMultiFileRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::GetMultiFileRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::GetMultiFileRsp_QtProtobufNested::QtProtobufFieldEnum::FileDataProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::GetMultiFileRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEGetMultiFileRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEGetMultiFileRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<GetMultiFileRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::PutSingleFileReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "FileDataProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPutSingleFileReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::PutSingleFileReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::PutSingleFileReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       4, uint(bite_im::PutSingleFileReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       5, uint(bite_im::PutSingleFileReq_QtProtobufNested::QtProtobufFieldEnum::FileDataProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PutSingleFileReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPutSingleFileReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<PutSingleFileReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::PutSingleFileRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "FileInfoProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPutSingleFileRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::PutSingleFileRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::PutSingleFileRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::PutSingleFileRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::PutSingleFileRsp_QtProtobufNested::QtProtobufFieldEnum::FileInfoProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PutSingleFileRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPutSingleFileRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPutSingleFileRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<PutSingleFileRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileReq_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileReq_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::PutMultiFileReq_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "UserIdProtoFieldNumber",
    "SessionIdProtoFieldNumber",
    "FileDataProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPutMultiFileReq_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::PutMultiFileReq_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::PutMultiFileReq_QtProtobufNested::QtProtobufFieldEnum::UserIdProtoFieldNumber),
       4, uint(bite_im::PutMultiFileReq_QtProtobufNested::QtProtobufFieldEnum::SessionIdProtoFieldNumber),
       5, uint(bite_im::PutMultiFileReq_QtProtobufNested::QtProtobufFieldEnum::FileDataProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PutMultiFileReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileReq_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPutMultiFileReq_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileReq_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<PutMultiFileReq_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileRsp_QtProtobufNestedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileRsp_QtProtobufNestedENDCLASS = QtMocHelpers::stringData(
    "bite_im::PutMultiFileRsp_QtProtobufNested",
    "QtProtobufFieldEnum",
    "RequestIdProtoFieldNumber",
    "SuccessProtoFieldNumber",
    "ErrmsgProtoFieldNumber",
    "FileInfoProtoFieldNumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbite_imSCOPEPutMultiFileRsp_QtProtobufNestedENDCLASS[] = {

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
       2, uint(bite_im::PutMultiFileRsp_QtProtobufNested::QtProtobufFieldEnum::RequestIdProtoFieldNumber),
       3, uint(bite_im::PutMultiFileRsp_QtProtobufNested::QtProtobufFieldEnum::SuccessProtoFieldNumber),
       4, uint(bite_im::PutMultiFileRsp_QtProtobufNested::QtProtobufFieldEnum::ErrmsgProtoFieldNumber),
       5, uint(bite_im::PutMultiFileRsp_QtProtobufNested::QtProtobufFieldEnum::FileInfoProtoFieldNumber),

       0        // eod
};

Q_CONSTINIT const QMetaObject bite_im::PutMultiFileRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileRsp_QtProtobufNestedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbite_imSCOPEPutMultiFileRsp_QtProtobufNestedENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbite_imSCOPEPutMultiFileRsp_QtProtobufNestedENDCLASS_t,
        // enum 'QtProtobufFieldEnum'
        QtPrivate::TypeAndForceComplete<PutMultiFileRsp_QtProtobufNested::QtProtobufFieldEnum, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
