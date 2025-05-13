#include <QtProtobuf/qprotobufserializer.h>
#include "message_storage.qpb.h"

namespace bite_im {
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarGetHistoryMsgReq(qRegisterProtobufType<GetHistoryMsgReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarGetHistoryMsgRsp(qRegisterProtobufType<GetHistoryMsgRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarGetRecentMsgReq(qRegisterProtobufType<GetRecentMsgReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarGetRecentMsgRsp(qRegisterProtobufType<GetRecentMsgRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarMsgSearchReq(qRegisterProtobufType<MsgSearchReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarMsgSearchRsp(qRegisterProtobufType<MsgSearchRsp>);
static bool RegisterMessage_storageProtobufTypes = [](){ qRegisterProtobufTypes(); return true; }();
} // namespace bite_im

