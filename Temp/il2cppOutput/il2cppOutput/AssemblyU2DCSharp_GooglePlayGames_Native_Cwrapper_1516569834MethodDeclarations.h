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

// GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback
struct FetchListCallback_t2067692889;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.PlayerManager/FetchCallback
struct FetchCallback_t1233224091;
// GooglePlayGames.Native.Cwrapper.PlayerManager/FetchSelfCallback
struct FetchSelfCallback_t2479296007;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3670871388.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2067692889.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1233224091.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2479296007.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"
#include "mscorlib_System_UIntPtr3365854250.h"

// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchInvitable(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback,System.IntPtr)
extern "C"  void PlayerManager_PlayerManager_FetchInvitable_m2282165339 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, FetchListCallback_t2067692889 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchConnected(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback,System.IntPtr)
extern "C"  void PlayerManager_PlayerManager_FetchConnected_m1675562728 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, FetchListCallback_t2067692889 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_Fetch(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.PlayerManager/FetchCallback,System.IntPtr)
extern "C"  void PlayerManager_PlayerManager_Fetch_m347110307 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, String_t* ___player_id2, FetchCallback_t1233224091 * ___callback3, IntPtr_t ___callback_arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchRecentlyPlayed(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback,System.IntPtr)
extern "C"  void PlayerManager_PlayerManager_FetchRecentlyPlayed_m1891255950 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, FetchListCallback_t2067692889 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchSelf(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.PlayerManager/FetchSelfCallback,System.IntPtr)
extern "C"  void PlayerManager_PlayerManager_FetchSelf_m1180265743 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, FetchSelfCallback_t2479296007 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchSelfResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void PlayerManager_PlayerManager_FetchSelfResponse_Dispose_m624931599 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchSelfResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t PlayerManager_PlayerManager_FetchSelfResponse_GetStatus_m2310467073 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchSelfResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t PlayerManager_PlayerManager_FetchSelfResponse_GetData_m79348549 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void PlayerManager_PlayerManager_FetchResponse_Dispose_m3241435299 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t PlayerManager_PlayerManager_FetchResponse_GetStatus_m4206879509 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t PlayerManager_PlayerManager_FetchResponse_GetData_m3490935641 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchListResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void PlayerManager_PlayerManager_FetchListResponse_Dispose_m359459297 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchListResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t PlayerManager_PlayerManager_FetchListResponse_GetStatus_m594655315 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchListResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
extern "C"  UIntPtr_t  PlayerManager_PlayerManager_FetchListResponse_GetData_Length_m2043206263 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchListResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C"  IntPtr_t PlayerManager_PlayerManager_FetchListResponse_GetData_GetElement_m823786567 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, UIntPtr_t  ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
