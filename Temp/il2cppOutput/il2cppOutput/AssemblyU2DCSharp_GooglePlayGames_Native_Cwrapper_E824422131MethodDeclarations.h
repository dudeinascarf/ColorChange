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

// GooglePlayGames.Native.Cwrapper.EventManager/FetchAllCallback
struct FetchAllCallback_t213806343;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.EventManager/FetchCallback
struct FetchCallback_t1493526500;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3670871388.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_E213806343.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1493526500.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"
#include "mscorlib_System_UIntPtr3365854250.h"

// System.Void GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchAll(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.EventManager/FetchAllCallback,System.IntPtr)
extern "C"  void EventManager_EventManager_FetchAll_m3820558856 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, FetchAllCallback_t213806343 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.EventManager::EventManager_Fetch(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.EventManager/FetchCallback,System.IntPtr)
extern "C"  void EventManager_EventManager_Fetch_m494543538 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, String_t* ___event_id2, FetchCallback_t1493526500 * ___callback3, IntPtr_t ___callback_arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.EventManager::EventManager_Increment(System.Runtime.InteropServices.HandleRef,System.String,System.UInt32)
extern "C"  void EventManager_EventManager_Increment_m410793165 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, String_t* ___event_id1, uint32_t ___steps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchAllResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void EventManager_EventManager_FetchAllResponse_Dispose_m3264865846 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchAllResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t EventManager_EventManager_FetchAllResponse_GetStatus_m1536464950 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchAllResponse_GetData(System.Runtime.InteropServices.HandleRef,System.IntPtr[],System.UIntPtr)
extern "C"  UIntPtr_t  EventManager_EventManager_FetchAllResponse_GetData_m3903605334 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtrU5BU5D_t3228729122* ___out_arg1, UIntPtr_t  ___out_size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void EventManager_EventManager_FetchResponse_Dispose_m3403259209 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t EventManager_EventManager_FetchResponse_GetStatus_m2055738491 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.EventManager::EventManager_FetchResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t EventManager_EventManager_FetchResponse_GetData_m2454104383 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
