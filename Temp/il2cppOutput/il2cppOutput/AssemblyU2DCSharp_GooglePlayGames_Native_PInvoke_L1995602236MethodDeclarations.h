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

// GooglePlayGames.Native.PInvoke.LeaderboardManager
struct LeaderboardManager_t1995602236;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>
struct Action_1_t3953224079;
// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct Action_1_t107331537;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t1995225314;
// GooglePlayGames.Native.PInvoke.FetchResponse
struct FetchResponse_t642400449;
// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t4006482697;
// GooglePlayGames.Native.PInvoke.FetchScoreSummaryResponse
struct FetchScoreSummaryResponse_t877231893;
// GooglePlayGames.Native.PInvoke.FetchScorePageResponse
struct FetchScorePageResponse_t1467305556;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_G1862808700.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb2320727150.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb2572053391.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb3617536533.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_ScorePa1995225314.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_Fe642400449.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb4006482697.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_Fe877231893.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_F1467305556.h"

// System.Void GooglePlayGames.Native.PInvoke.LeaderboardManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C"  void LeaderboardManager__ctor_m473262407 (LeaderboardManager_t1995602236 * __this, GameServices_t1862808700 * ___services0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.Native.PInvoke.LeaderboardManager::get_LeaderboardMaxResults()
extern "C"  int32_t LeaderboardManager_get_LeaderboardMaxResults_m1519483402 (LeaderboardManager_t1995602236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.LeaderboardManager::SubmitScore(System.String,System.Int64,System.String)
extern "C"  void LeaderboardManager_SubmitScore_m2717883074 (LeaderboardManager_t1995602236 * __this, String_t* ___leaderboardId0, int64_t ___score1, String_t* ___metadata2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.LeaderboardManager::ShowAllUI(System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>)
extern "C"  void LeaderboardManager_ShowAllUI_m1763896451 (LeaderboardManager_t1995602236 * __this, Action_1_t3953224079 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.LeaderboardManager::ShowUI(System.String,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>)
extern "C"  void LeaderboardManager_ShowUI_m3662875808 (LeaderboardManager_t1995602236 * __this, String_t* ___leaderboardId0, int32_t ___span1, Action_1_t3953224079 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.LeaderboardManager::LoadLeaderboardData(System.String,GooglePlayGames.BasicApi.LeaderboardStart,System.Int32,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.String,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
extern "C"  void LeaderboardManager_LoadLeaderboardData_m3653611081 (LeaderboardManager_t1995602236 * __this, String_t* ___leaderboardId0, int32_t ___start1, int32_t ___rowCount2, int32_t ___collection3, int32_t ___timeSpan4, String_t* ___playerId5, Action_1_t107331537 * ___callback6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.LeaderboardManager::InternalFetchCallback(System.IntPtr,System.IntPtr)
extern "C"  void LeaderboardManager_InternalFetchCallback_m2990073770 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LeaderboardManager_InternalFetchCallback_m2990073770(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.LeaderboardManager::HandleFetch(GooglePlayGames.BasicApi.ScorePageToken,GooglePlayGames.Native.PInvoke.FetchResponse,System.String,System.Int32,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
extern "C"  void LeaderboardManager_HandleFetch_m210900514 (LeaderboardManager_t1995602236 * __this, ScorePageToken_t1995225314 * ___token0, FetchResponse_t642400449 * ___response1, String_t* ___selfPlayerId2, int32_t ___maxResults3, Action_1_t107331537 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.LeaderboardManager::InternalFetchSummaryCallback(System.IntPtr,System.IntPtr)
extern "C"  void LeaderboardManager_InternalFetchSummaryCallback_m1317255880 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LeaderboardManager_InternalFetchSummaryCallback_m1317255880(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.LeaderboardManager::HandleFetchScoreSummary(GooglePlayGames.BasicApi.LeaderboardScoreData,GooglePlayGames.Native.PInvoke.FetchScoreSummaryResponse,System.String,System.Int32,GooglePlayGames.BasicApi.ScorePageToken,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
extern "C"  void LeaderboardManager_HandleFetchScoreSummary_m2008810973 (LeaderboardManager_t1995602236 * __this, LeaderboardScoreData_t4006482697 * ___data0, FetchScoreSummaryResponse_t877231893 * ___response1, String_t* ___selfPlayerId2, int32_t ___maxResults3, ScorePageToken_t1995225314 * ___token4, Action_1_t107331537 * ___callback5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.LeaderboardManager::LoadScorePage(GooglePlayGames.BasicApi.LeaderboardScoreData,System.Int32,GooglePlayGames.BasicApi.ScorePageToken,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
extern "C"  void LeaderboardManager_LoadScorePage_m1943342192 (LeaderboardManager_t1995602236 * __this, LeaderboardScoreData_t4006482697 * ___data0, int32_t ___maxResults1, ScorePageToken_t1995225314 * ___token2, Action_1_t107331537 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.LeaderboardManager::InternalFetchScorePage(System.IntPtr,System.IntPtr)
extern "C"  void LeaderboardManager_InternalFetchScorePage_m4030498258 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LeaderboardManager_InternalFetchScorePage_m4030498258(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.LeaderboardManager::HandleFetchScorePage(GooglePlayGames.BasicApi.LeaderboardScoreData,GooglePlayGames.BasicApi.ScorePageToken,GooglePlayGames.Native.PInvoke.FetchScorePageResponse,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
extern "C"  void LeaderboardManager_HandleFetchScorePage_m2199040988 (LeaderboardManager_t1995602236 * __this, LeaderboardScoreData_t4006482697 * ___data0, ScorePageToken_t1995225314 * ___token1, FetchScorePageResponse_t1467305556 * ___rsp2, Action_1_t107331537 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
