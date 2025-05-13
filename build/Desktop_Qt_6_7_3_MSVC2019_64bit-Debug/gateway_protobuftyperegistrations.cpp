#include <QtProtobuf/qprotobufserializer.h>
#include "gateway.qpb.h"

namespace bite_im {
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarClientAuthenticationReq(qRegisterProtobufType<ClientAuthenticationReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarClientAuthenticationRsp(qRegisterProtobufType<ClientAuthenticationRsp>);
static bool RegisterGatewayProtobufTypes = [](){ qRegisterProtobufTypes(); return true; }();
} // namespace bite_im

