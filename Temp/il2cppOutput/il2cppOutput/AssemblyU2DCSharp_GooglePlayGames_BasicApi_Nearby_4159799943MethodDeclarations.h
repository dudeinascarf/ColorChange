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
// GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t4159799943;
struct ConnectionRequest_t4159799943_marshaled_pinvoke;
struct ConnectionRequest_t4159799943_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_4159799943.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_3227722211.h"

// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.String,System.Byte[])
extern "C"  void ConnectionRequest__ctor_m629300088 (ConnectionRequest_t4159799943 * __this, String_t* ___remoteEndpointId0, String_t* ___remoteDeviceId1, String_t* ___remoteEndpointName2, String_t* ___serviceId3, ByteU5BU5D_t4260760469* ___payload4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
extern "C"  EndpointDetails_t3227722211  ConnectionRequest_get_RemoteEndpoint_m82783610 (ConnectionRequest_t4159799943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
extern "C"  ByteU5BU5D_t4260760469* ConnectionRequest_get_Payload_m851674062 (ConnectionRequest_t4159799943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ConnectionRequest_t4159799943;
struct ConnectionRequest_t4159799943_marshaled_pinvoke;

extern "C" void ConnectionRequest_t4159799943_marshal_pinvoke(const ConnectionRequest_t4159799943& unmarshaled, ConnectionRequest_t4159799943_marshaled_pinvoke& marshaled);
extern "C" void ConnectionRequest_t4159799943_marshal_pinvoke_back(const ConnectionRequest_t4159799943_marshaled_pinvoke& marshaled, ConnectionRequest_t4159799943& unmarshaled);
extern "C" void ConnectionRequest_t4159799943_marshal_pinvoke_cleanup(ConnectionRequest_t4159799943_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ConnectionRequest_t4159799943;
struct ConnectionRequest_t4159799943_marshaled_com;

extern "C" void ConnectionRequest_t4159799943_marshal_com(const ConnectionRequest_t4159799943& unmarshaled, ConnectionRequest_t4159799943_marshaled_com& marshaled);
extern "C" void ConnectionRequest_t4159799943_marshal_com_back(const ConnectionRequest_t4159799943_marshaled_com& marshaled, ConnectionRequest_t4159799943& unmarshaled);
extern "C" void ConnectionRequest_t4159799943_marshal_com_cleanup(ConnectionRequest_t4159799943_marshaled_com& marshaled);
