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

// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// GooglePlayGames.Native.PInvoke.AchievementManager
struct AchievementManager_t4112426314;
// GooglePlayGames.Native.PInvoke.LeaderboardManager
struct LeaderboardManager_t1995602236;
// GooglePlayGames.Native.PInvoke.PlayerManager
struct PlayerManager_t3380828466;
// GooglePlayGames.Native.PInvoke.StatsManager
struct StatsManager_t4261398554;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.GameServices/FetchServerAuthCodeResponse>
struct Action_1_t1447876159;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_String7231557.h"

// System.Void GooglePlayGames.Native.PInvoke.GameServices::.ctor(System.IntPtr)
extern "C"  void GameServices__ctor_m2984384604 (GameServices_t1862808700 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.GameServices::IsAuthenticated()
extern "C"  bool GameServices_IsAuthenticated_m2719657839 (GameServices_t1862808700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServices::SignOut()
extern "C"  void GameServices_SignOut_m2275501799 (GameServices_t1862808700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServices::StartAuthorizationUI()
extern "C"  void GameServices_StartAuthorizationUI_m1552029335 (GameServices_t1862808700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.AchievementManager GooglePlayGames.Native.PInvoke.GameServices::AchievementManager()
extern "C"  AchievementManager_t4112426314 * GameServices_AchievementManager_m3632791416 (GameServices_t1862808700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.LeaderboardManager GooglePlayGames.Native.PInvoke.GameServices::LeaderboardManager()
extern "C"  LeaderboardManager_t1995602236 * GameServices_LeaderboardManager_m2880482908 (GameServices_t1862808700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.PlayerManager GooglePlayGames.Native.PInvoke.GameServices::PlayerManager()
extern "C"  PlayerManager_t3380828466 * GameServices_PlayerManager_m3832296566 (GameServices_t1862808700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.StatsManager GooglePlayGames.Native.PInvoke.GameServices::StatsManager()
extern "C"  StatsManager_t4261398554 * GameServices_StatsManager_m4147505496 (GameServices_t1862808700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.HandleRef GooglePlayGames.Native.PInvoke.GameServices::AsHandle()
extern "C"  HandleRef_t1780819301  GameServices_AsHandle_m4151855468 (GameServices_t1862808700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServices::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void GameServices_CallDispose_m3372822740 (GameServices_t1862808700 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServices::FetchServerAuthCode(System.String,System.Action`1<GooglePlayGames.Native.PInvoke.GameServices/FetchServerAuthCodeResponse>)
extern "C"  void GameServices_FetchServerAuthCode_m573676399 (GameServices_t1862808700 * __this, String_t* ___server_client_id0, Action_1_t1447876159 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServices::InternalFetchServerAuthCodeCallback(System.IntPtr,System.IntPtr)
extern "C"  void GameServices_InternalFetchServerAuthCodeCallback_m549906226 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_GameServices_InternalFetchServerAuthCodeCallback_m549906226(intptr_t ___arg00, intptr_t ___arg11);
