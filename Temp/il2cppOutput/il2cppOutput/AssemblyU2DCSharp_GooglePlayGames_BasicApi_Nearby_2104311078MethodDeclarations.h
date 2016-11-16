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

// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct DummyNearbyConnectionClient_t2104311078;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t464558559;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_t260648783;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct Action_1_t380876779;
// GooglePlayGames.BasicApi.Nearby.IMessageListener
struct IMessageListener_t196090326;
// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener
struct IDiscoveryListener_t771411711;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Nullable_1_gen497649510.h"

// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::.ctor()
extern "C"  void DummyNearbyConnectionClient__ctor_m2255000610 (DummyNearbyConnectionClient_t2104311078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxUnreliableMessagePayloadLength()
extern "C"  int32_t DummyNearbyConnectionClient_MaxUnreliableMessagePayloadLength_m2407084066 (DummyNearbyConnectionClient_t2104311078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxReliableMessagePayloadLength()
extern "C"  int32_t DummyNearbyConnectionClient_MaxReliableMessagePayloadLength_m1863357321 (DummyNearbyConnectionClient_t2104311078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendReliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
extern "C"  void DummyNearbyConnectionClient_SendReliable_m2733661835 (DummyNearbyConnectionClient_t2104311078 * __this, List_1_t1375417109 * ___recipientEndpointIds0, ByteU5BU5D_t4260760469* ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendUnreliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
extern "C"  void DummyNearbyConnectionClient_SendUnreliable_m551218660 (DummyNearbyConnectionClient_t2104311078 * __this, List_1_t1375417109 * ___recipientEndpointIds0, ByteU5BU5D_t4260760469* ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartAdvertising(System.String,System.Collections.Generic.List`1<System.String>,System.Nullable`1<System.TimeSpan>,System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>,System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>)
extern "C"  void DummyNearbyConnectionClient_StartAdvertising_m4044659943 (DummyNearbyConnectionClient_t2104311078 * __this, String_t* ___name0, List_1_t1375417109 * ___appIdentifiers1, Nullable_1_t497649510  ___advertisingDuration2, Action_1_t464558559 * ___resultCallback3, Action_1_t260648783 * ___connectionRequestCallback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAdvertising()
extern "C"  void DummyNearbyConnectionClient_StopAdvertising_m1265323970 (DummyNearbyConnectionClient_t2104311078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendConnectionRequest(System.String,System.String,System.Byte[],System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>,GooglePlayGames.BasicApi.Nearby.IMessageListener)
extern "C"  void DummyNearbyConnectionClient_SendConnectionRequest_m3979378923 (DummyNearbyConnectionClient_t2104311078 * __this, String_t* ___name0, String_t* ___remoteEndpointId1, ByteU5BU5D_t4260760469* ___payload2, Action_1_t380876779 * ___responseCallback3, Il2CppObject * ___listener4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::AcceptConnectionRequest(System.String,System.Byte[],GooglePlayGames.BasicApi.Nearby.IMessageListener)
extern "C"  void DummyNearbyConnectionClient_AcceptConnectionRequest_m231326481 (DummyNearbyConnectionClient_t2104311078 * __this, String_t* ___remoteEndpointId0, ByteU5BU5D_t4260760469* ___payload1, Il2CppObject * ___listener2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartDiscovery(System.String,System.Nullable`1<System.TimeSpan>,GooglePlayGames.BasicApi.Nearby.IDiscoveryListener)
extern "C"  void DummyNearbyConnectionClient_StartDiscovery_m3147442275 (DummyNearbyConnectionClient_t2104311078 * __this, String_t* ___serviceId0, Nullable_1_t497649510  ___advertisingTimeout1, Il2CppObject * ___listener2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopDiscovery(System.String)
extern "C"  void DummyNearbyConnectionClient_StopDiscovery_m4293994292 (DummyNearbyConnectionClient_t2104311078 * __this, String_t* ___serviceId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::RejectConnectionRequest(System.String)
extern "C"  void DummyNearbyConnectionClient_RejectConnectionRequest_m1647268176 (DummyNearbyConnectionClient_t2104311078 * __this, String_t* ___requestingEndpointId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::DisconnectFromEndpoint(System.String)
extern "C"  void DummyNearbyConnectionClient_DisconnectFromEndpoint_m2293822501 (DummyNearbyConnectionClient_t2104311078 * __this, String_t* ___remoteEndpointId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAllConnections()
extern "C"  void DummyNearbyConnectionClient_StopAllConnections_m3599939384 (DummyNearbyConnectionClient_t2104311078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalEndpointId()
extern "C"  String_t* DummyNearbyConnectionClient_LocalEndpointId_m3939990526 (DummyNearbyConnectionClient_t2104311078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalDeviceId()
extern "C"  String_t* DummyNearbyConnectionClient_LocalDeviceId_m258452351 (DummyNearbyConnectionClient_t2104311078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetAppBundleId()
extern "C"  String_t* DummyNearbyConnectionClient_GetAppBundleId_m671054247 (DummyNearbyConnectionClient_t2104311078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetServiceId()
extern "C"  String_t* DummyNearbyConnectionClient_GetServiceId_m1948329817 (DummyNearbyConnectionClient_t2104311078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
