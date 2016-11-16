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

// GooglePlayGames.Native.PInvoke.EventManager
struct EventManager_t2071886271;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// System.Action`1<GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse>
struct Action_1_t2286054569;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.EventManager/FetchResponse>
struct Action_1_t3871884938;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_G1862808700.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3670871388.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"

// System.Void GooglePlayGames.Native.PInvoke.EventManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C"  void EventManager__ctor_m4002787402 (EventManager_t2071886271 * __this, GameServices_t1862808700 * ___services0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.EventManager::FetchAll(GooglePlayGames.Native.Cwrapper.Types/DataSource,System.Action`1<GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse>)
extern "C"  void EventManager_FetchAll_m877403935 (EventManager_t2071886271 * __this, int32_t ___source0, Action_1_t2286054569 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.EventManager::InternalFetchAllCallback(System.IntPtr,System.IntPtr)
extern "C"  void EventManager_InternalFetchAllCallback_m707688650 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EventManager_InternalFetchAllCallback_m707688650(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.EventManager::Fetch(GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,System.Action`1<GooglePlayGames.Native.PInvoke.EventManager/FetchResponse>)
extern "C"  void EventManager_Fetch_m3129256583 (EventManager_t2071886271 * __this, int32_t ___source0, String_t* ___eventId1, Action_1_t3871884938 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.EventManager::InternalFetchCallback(System.IntPtr,System.IntPtr)
extern "C"  void EventManager_InternalFetchCallback_m2224631469 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EventManager_InternalFetchCallback_m2224631469(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.EventManager::Increment(System.String,System.UInt32)
extern "C"  void EventManager_Increment_m1929261972 (EventManager_t2071886271 * __this, String_t* ___eventId0, uint32_t ___steps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
