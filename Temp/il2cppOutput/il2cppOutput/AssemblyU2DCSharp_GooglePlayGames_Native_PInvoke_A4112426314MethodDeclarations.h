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

// GooglePlayGames.Native.PInvoke.AchievementManager
struct AchievementManager_t4112426314;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>
struct Action_1_t3953224079;
// System.Action`1<GooglePlayGames.Native.PInvoke.AchievementManager/FetchAllResponse>
struct Action_1_t3201525886;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.AchievementManager/FetchResponse>
struct Action_1_t2909004501;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_G1862808700.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"

// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C"  void AchievementManager__ctor_m3961080405 (AchievementManager_t4112426314 * __this, GameServices_t1862808700 * ___services0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::ShowAllUI(System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>)
extern "C"  void AchievementManager_ShowAllUI_m3617054353 (AchievementManager_t4112426314 * __this, Action_1_t3953224079 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::FetchAll(System.Action`1<GooglePlayGames.Native.PInvoke.AchievementManager/FetchAllResponse>)
extern "C"  void AchievementManager_FetchAll_m3952980287 (AchievementManager_t4112426314 * __this, Action_1_t3201525886 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::InternalFetchAllCallback(System.IntPtr,System.IntPtr)
extern "C"  void AchievementManager_InternalFetchAllCallback_m3755056863 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AchievementManager_InternalFetchAllCallback_m3755056863(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::Fetch(System.String,System.Action`1<GooglePlayGames.Native.PInvoke.AchievementManager/FetchResponse>)
extern "C"  void AchievementManager_Fetch_m3637316351 (AchievementManager_t4112426314 * __this, String_t* ___achId0, Action_1_t2909004501 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::InternalFetchCallback(System.IntPtr,System.IntPtr)
extern "C"  void AchievementManager_InternalFetchCallback_m2182924472 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AchievementManager_InternalFetchCallback_m2182924472(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::Increment(System.String,System.UInt32)
extern "C"  void AchievementManager_Increment_m3353888287 (AchievementManager_t4112426314 * __this, String_t* ___achievementId0, uint32_t ___numSteps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::SetStepsAtLeast(System.String,System.UInt32)
extern "C"  void AchievementManager_SetStepsAtLeast_m4281850813 (AchievementManager_t4112426314 * __this, String_t* ___achivementId0, uint32_t ___numSteps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::Reveal(System.String)
extern "C"  void AchievementManager_Reveal_m1286313979 (AchievementManager_t4112426314 * __this, String_t* ___achievementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::Unlock(System.String)
extern "C"  void AchievementManager_Unlock_m4227064740 (AchievementManager_t4112426314 * __this, String_t* ___achievementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
