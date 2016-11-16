#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_t4280027939;
struct ConnectionResponse_t4280027939_marshaled_pinvoke;
struct ConnectionResponse_t4280027939_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_4280027939.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_C215995099.h"

// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
extern "C"  void ConnectionResponse__ctor_m3490223223 (ConnectionResponse_t4280027939 * __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_t4260760469* ___payload3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.cctor()
extern "C"  void ConnectionResponse__cctor_m936051288 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
extern "C"  int64_t ConnectionResponse_get_LocalClientId_m2880157004 (ConnectionResponse_t4280027939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
extern "C"  String_t* ConnectionResponse_get_RemoteEndpointId_m3429562769 (ConnectionResponse_t4280027939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
extern "C"  int32_t ConnectionResponse_get_ResponseStatus_m1845726115 (ConnectionResponse_t4280027939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
extern "C"  ByteU5BU5D_t4260760469* ConnectionResponse_get_Payload_m3485165134 (ConnectionResponse_t4280027939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
extern "C"  ConnectionResponse_t4280027939  ConnectionResponse_Rejected_m1848731346 (Il2CppObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::NetworkNotConnected(System.Int64,System.String)
extern "C"  ConnectionResponse_t4280027939  ConnectionResponse_NetworkNotConnected_m284450542 (Il2CppObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::InternalError(System.Int64,System.String)
extern "C"  ConnectionResponse_t4280027939  ConnectionResponse_InternalError_m2905270581 (Il2CppObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EndpointNotConnected(System.Int64,System.String)
extern "C"  ConnectionResponse_t4280027939  ConnectionResponse_EndpointNotConnected_m2853682431 (Il2CppObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Accepted(System.Int64,System.String,System.Byte[])
extern "C"  ConnectionResponse_t4280027939  ConnectionResponse_Accepted_m3351650366 (Il2CppObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, ByteU5BU5D_t4260760469* ___payload2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::AlreadyConnected(System.Int64,System.String)
extern "C"  ConnectionResponse_t4280027939  ConnectionResponse_AlreadyConnected_m2547398757 (Il2CppObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ConnectionResponse_t4280027939;
struct ConnectionResponse_t4280027939_marshaled_pinvoke;

extern "C" void ConnectionResponse_t4280027939_marshal_pinvoke(const ConnectionResponse_t4280027939& unmarshaled, ConnectionResponse_t4280027939_marshaled_pinvoke& marshaled);
extern "C" void ConnectionResponse_t4280027939_marshal_pinvoke_back(const ConnectionResponse_t4280027939_marshaled_pinvoke& marshaled, ConnectionResponse_t4280027939& unmarshaled);
extern "C" void ConnectionResponse_t4280027939_marshal_pinvoke_cleanup(ConnectionResponse_t4280027939_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ConnectionResponse_t4280027939;
struct ConnectionResponse_t4280027939_marshaled_com;

extern "C" void ConnectionResponse_t4280027939_marshal_com(const ConnectionResponse_t4280027939& unmarshaled, ConnectionResponse_t4280027939_marshaled_com& marshaled);
extern "C" void ConnectionResponse_t4280027939_marshal_com_back(const ConnectionResponse_t4280027939_marshaled_com& marshaled, ConnectionResponse_t4280027939& unmarshaled);
extern "C" void ConnectionResponse_t4280027939_marshal_com_cleanup(ConnectionResponse_t4280027939_marshaled_com& marshaled);
