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

// GooglePlayGames.Native.Cwrapper.AchievementManager/FetchAllCallback
struct FetchAllCallback_t3534128988;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.AchievementManager/ShowAllUICallback
struct ShowAllUICallback_t766686189;
// GooglePlayGames.Native.Cwrapper.AchievementManager/FetchCallback
struct FetchCallback_t1950512559;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3670871388.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3534128988.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_A766686189.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1950512559.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"
#include "mscorlib_System_UIntPtr3365854250.h"

// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchAll(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.AchievementManager/FetchAllCallback,System.IntPtr)
extern "C"  void AchievementManager_AchievementManager_FetchAll_m3626149097 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, FetchAllCallback_t3534128988 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_Reveal(System.Runtime.InteropServices.HandleRef,System.String)
extern "C"  void AchievementManager_AchievementManager_Reveal_m3698355969 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, String_t* ___achievement_id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_Unlock(System.Runtime.InteropServices.HandleRef,System.String)
extern "C"  void AchievementManager_AchievementManager_Unlock_m2257098104 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, String_t* ___achievement_id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_ShowAllUI(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.AchievementManager/ShowAllUICallback,System.IntPtr)
extern "C"  void AchievementManager_AchievementManager_ShowAllUI_m2369165707 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, ShowAllUICallback_t766686189 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_SetStepsAtLeast(System.Runtime.InteropServices.HandleRef,System.String,System.UInt32)
extern "C"  void AchievementManager_AchievementManager_SetStepsAtLeast_m2472921605 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, String_t* ___achievement_id1, uint32_t ___steps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_Increment(System.Runtime.InteropServices.HandleRef,System.String,System.UInt32)
extern "C"  void AchievementManager_AchievementManager_Increment_m1904273699 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, String_t* ___achievement_id1, uint32_t ___steps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_Fetch(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.AchievementManager/FetchCallback,System.IntPtr)
extern "C"  void AchievementManager_AchievementManager_Fetch_m482127901 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, String_t* ___achievement_id2, FetchCallback_t1950512559 * ___callback3, IntPtr_t ___callback_arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchAllResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void AchievementManager_AchievementManager_FetchAllResponse_Dispose_m144236064 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchAllResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t AchievementManager_AchievementManager_FetchAllResponse_GetStatus_m297788192 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchAllResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
extern "C"  UIntPtr_t  AchievementManager_AchievementManager_FetchAllResponse_GetData_Length_m1891043432 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchAllResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C"  IntPtr_t AchievementManager_AchievementManager_FetchAllResponse_GetData_GetElement_m3590892796 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, UIntPtr_t  ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void AchievementManager_AchievementManager_FetchResponse_Dispose_m3071131039 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t AchievementManager_AchievementManager_FetchResponse_GetStatus_m1328071121 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.AchievementManager::AchievementManager_FetchResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t AchievementManager_AchievementManager_FetchResponse_GetData_m3197280789 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
