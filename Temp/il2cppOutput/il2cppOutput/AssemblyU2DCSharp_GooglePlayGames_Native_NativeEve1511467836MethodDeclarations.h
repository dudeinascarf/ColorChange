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

// GooglePlayGames.Native.NativeEventClient
struct NativeEventClient_t1511467836;
// GooglePlayGames.Native.PInvoke.EventManager
struct EventManager_t2071886271;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Events.IEvent>>
struct Action_2_t1791805235;
// System.String
struct String_t;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Events.IEvent>
struct Action_2_t423619683;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_E2071886271.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_DataSou3931761423.h"
#include "mscorlib_System_String7231557.h"

// System.Void GooglePlayGames.Native.NativeEventClient::.ctor(GooglePlayGames.Native.PInvoke.EventManager)
extern "C"  void NativeEventClient__ctor_m1615853330 (NativeEventClient_t1511467836 * __this, EventManager_t2071886271 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeEventClient::FetchAllEvents(GooglePlayGames.BasicApi.DataSource,System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Events.IEvent>>)
extern "C"  void NativeEventClient_FetchAllEvents_m497105433 (NativeEventClient_t1511467836 * __this, int32_t ___source0, Action_2_t1791805235 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeEventClient::FetchEvent(GooglePlayGames.BasicApi.DataSource,System.String,System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Events.IEvent>)
extern "C"  void NativeEventClient_FetchEvent_m3029498297 (NativeEventClient_t1511467836 * __this, int32_t ___source0, String_t* ___eventId1, Action_2_t423619683 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeEventClient::IncrementEvent(System.String,System.UInt32)
extern "C"  void NativeEventClient_IncrementEvent_m468116081 (NativeEventClient_t1511467836 * __this, String_t* ___eventId0, uint32_t ___stepsToIncrement1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
