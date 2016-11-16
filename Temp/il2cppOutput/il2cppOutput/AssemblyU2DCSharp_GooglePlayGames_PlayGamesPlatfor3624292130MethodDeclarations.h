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

// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t3624292130;
// GooglePlayGames.BasicApi.IPlayGamesClient
struct IPlayGamesClient_t2528289561;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_t1732200103;
// GooglePlayGames.BasicApi.Multiplayer.IRealTimeMultiplayerClient
struct IRealTimeMultiplayerClient_t3917639923;
// GooglePlayGames.BasicApi.Multiplayer.ITurnBasedMultiplayerClient
struct ITurnBasedMultiplayerClient_t661201890;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient
struct ISavedGameClient_t3735673347;
// GooglePlayGames.BasicApi.Events.IEventsClient
struct IEventsClient_t3804513627;
// GooglePlayGames.BasicApi.Quests.IQuestsClient
struct IQuestsClient_t519086643;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t2654168339;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>
struct Action_1_t2128016239;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t3814920354;
// System.Action`1<System.String>
struct Action_1_t403047693;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String>
struct Action_2_t1860405393;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_t1913238692;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t1261647177;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t229750097;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t2349069933;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t2957812780;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t645920862;
// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct Action_1_t107331537;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t1995225314;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t3799088250;
// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t823521528;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t2409308905;
// GooglePlayGames.PlayGamesLeaderboard
struct PlayGamesLeaderboard_t3198617382;
// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t4006482697;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t3419104218;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGam4135364200.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb2572053391.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb3617536533.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb2320727150.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_ScorePa1995225314.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Invitat2409308905.h"
#include "AssemblyU2DCSharp_GooglePlayGames_PlayGamesLeaderb3198617382.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb4006482697.h"

// System.Void GooglePlayGames.PlayGamesPlatform::.ctor(GooglePlayGames.BasicApi.IPlayGamesClient)
extern "C"  void PlayGamesPlatform__ctor_m2037393110 (PlayGamesPlatform_t3624292130 * __this, Il2CppObject * ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration)
extern "C"  void PlayGamesPlatform__ctor_m3086690151 (PlayGamesPlatform_t3624292130 * __this, PlayGamesClientConfiguration_t4135364200  ___configuration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::.cctor()
extern "C"  void PlayGamesPlatform__cctor_m2735946152 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesPlatform::get_DebugLogEnabled()
extern "C"  bool PlayGamesPlatform_get_DebugLogEnabled_m2560835678 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::set_DebugLogEnabled(System.Boolean)
extern "C"  void PlayGamesPlatform_set_DebugLogEnabled_m1455586989 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::get_Instance()
extern "C"  PlayGamesPlatform_t3624292130 * PlayGamesPlatform_get_Instance_m247033584 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient GooglePlayGames.PlayGamesPlatform::get_Nearby()
extern "C"  Il2CppObject * PlayGamesPlatform_get_Nearby_m3819147390 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.IRealTimeMultiplayerClient GooglePlayGames.PlayGamesPlatform::get_RealTime()
extern "C"  Il2CppObject * PlayGamesPlatform_get_RealTime_m2455404397 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.ITurnBasedMultiplayerClient GooglePlayGames.PlayGamesPlatform::get_TurnBased()
extern "C"  Il2CppObject * PlayGamesPlatform_get_TurnBased_m1184567569 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient GooglePlayGames.PlayGamesPlatform::get_SavedGame()
extern "C"  Il2CppObject * PlayGamesPlatform_get_SavedGame_m2856314446 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Events.IEventsClient GooglePlayGames.PlayGamesPlatform::get_Events()
extern "C"  Il2CppObject * PlayGamesPlatform_get_Events_m971873230 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.IQuestsClient GooglePlayGames.PlayGamesPlatform::get_Quests()
extern "C"  Il2CppObject * PlayGamesPlatform_get_Quests_m3579546102 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser GooglePlayGames.PlayGamesPlatform::get_localUser()
extern "C"  Il2CppObject * PlayGamesPlatform_get_localUser_m2126881742 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::InitializeInstance(GooglePlayGames.BasicApi.PlayGamesClientConfiguration)
extern "C"  void PlayGamesPlatform_InitializeInstance_m2009168616 (Il2CppObject * __this /* static, unused */, PlayGamesClientConfiguration_t4135364200  ___configuration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::InitializeNearby(System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>)
extern "C"  void PlayGamesPlatform_InitializeNearby_m2278615940 (Il2CppObject * __this /* static, unused */, Action_1_t2128016239 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::Activate()
extern "C"  PlayGamesPlatform_t3624292130 * PlayGamesPlatform_Activate_m3016211397 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.PlayGamesPlatform::GetApiClient()
extern "C"  IntPtr_t PlayGamesPlatform_GetApiClient_m2667095353 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::AddIdMapping(System.String,System.String)
extern "C"  void PlayGamesPlatform_AddIdMapping_m3155954189 (PlayGamesPlatform_t3624292130 * __this, String_t* ___fromId0, String_t* ___toId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::Authenticate(System.Action`1<System.Boolean>)
extern "C"  void PlayGamesPlatform_Authenticate_m193306015 (PlayGamesPlatform_t3624292130 * __this, Action_1_t872614854 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::Authenticate(System.Action`1<System.Boolean>,System.Boolean)
extern "C"  void PlayGamesPlatform_Authenticate_m1942348798 (PlayGamesPlatform_t3624292130 * __this, Action_1_t872614854 * ___callback0, bool ___silent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C"  void PlayGamesPlatform_Authenticate_m193434690 (PlayGamesPlatform_t3624292130 * __this, Il2CppObject * ___unused0, Action_1_t872614854 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesPlatform::IsAuthenticated()
extern "C"  bool PlayGamesPlatform_IsAuthenticated_m2538886108 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::SignOut()
extern "C"  void PlayGamesPlatform_SignOut_m1679456084 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern "C"  void PlayGamesPlatform_LoadUsers_m2176466248 (PlayGamesPlatform_t3624292130 * __this, StringU5BU5D_t4054002952* ___userIds0, Action_1_t3814920354 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesPlatform::GetUserId()
extern "C"  String_t* PlayGamesPlatform_GetUserId_m3348234722 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::GetIdToken(System.Action`1<System.String>)
extern "C"  void PlayGamesPlatform_GetIdToken_m1555869763 (PlayGamesPlatform_t3624292130 * __this, Action_1_t403047693 * ___idTokenCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesPlatform::GetAccessToken()
extern "C"  String_t* PlayGamesPlatform_GetAccessToken_m2849472379 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::GetServerAuthCode(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String>)
extern "C"  void PlayGamesPlatform_GetServerAuthCode_m2525601181 (PlayGamesPlatform_t3624292130 * __this, Action_2_t1860405393 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesPlatform::GetUserEmail()
extern "C"  String_t* PlayGamesPlatform_GetUserEmail_m1997388119 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::GetUserEmail(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String>)
extern "C"  void PlayGamesPlatform_GetUserEmail_m3529081076 (PlayGamesPlatform_t3624292130 * __this, Action_2_t1860405393 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::GetPlayerStats(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>)
extern "C"  void PlayGamesPlatform_GetPlayerStats_m3541911125 (PlayGamesPlatform_t3624292130 * __this, Action_2_t1913238692 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Achievement GooglePlayGames.PlayGamesPlatform::GetAchievement(System.String)
extern "C"  Achievement_t1261647177 * PlayGamesPlatform_GetAchievement_m1603747456 (PlayGamesPlatform_t3624292130 * __this, String_t* ___achievementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesPlatform::GetUserDisplayName()
extern "C"  String_t* PlayGamesPlatform_GetUserDisplayName_m3773014120 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesPlatform::GetUserImageUrl()
extern "C"  String_t* PlayGamesPlatform_GetUserImageUrl_m3289874459 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern "C"  void PlayGamesPlatform_ReportProgress_m1748764843 (PlayGamesPlatform_t3624292130 * __this, String_t* ___achievementID0, double ___progress1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::IncrementAchievement(System.String,System.Int32,System.Action`1<System.Boolean>)
extern "C"  void PlayGamesPlatform_IncrementAchievement_m1794692865 (PlayGamesPlatform_t3624292130 * __this, String_t* ___achievementID0, int32_t ___steps1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::SetStepsAtLeast(System.String,System.Int32,System.Action`1<System.Boolean>)
extern "C"  void PlayGamesPlatform_SetStepsAtLeast_m1284277206 (PlayGamesPlatform_t3624292130 * __this, String_t* ___achievementID0, int32_t ___steps1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
extern "C"  void PlayGamesPlatform_LoadAchievementDescriptions_m2564331573 (PlayGamesPlatform_t3624292130 * __this, Action_1_t229750097 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
extern "C"  void PlayGamesPlatform_LoadAchievements_m861189147 (PlayGamesPlatform_t3624292130 * __this, Action_1_t2349069933 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IAchievement GooglePlayGames.PlayGamesPlatform::CreateAchievement()
extern "C"  Il2CppObject * PlayGamesPlatform_CreateAchievement_m3087416859 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C"  void PlayGamesPlatform_ReportScore_m947609404 (PlayGamesPlatform_t3624292130 * __this, int64_t ___score0, String_t* ___board1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ReportScore(System.Int64,System.String,System.String,System.Action`1<System.Boolean>)
extern "C"  void PlayGamesPlatform_ReportScore_m615121208 (PlayGamesPlatform_t3624292130 * __this, int64_t ___score0, String_t* ___board1, String_t* ___metadata2, Action_1_t872614854 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern "C"  void PlayGamesPlatform_LoadScores_m649875421 (PlayGamesPlatform_t3624292130 * __this, String_t* ___leaderboardId0, Action_1_t645920862 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadScores(System.String,GooglePlayGames.BasicApi.LeaderboardStart,System.Int32,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
extern "C"  void PlayGamesPlatform_LoadScores_m1161796118 (PlayGamesPlatform_t3624292130 * __this, String_t* ___leaderboardId0, int32_t ___start1, int32_t ___rowCount2, int32_t ___collection3, int32_t ___timeSpan4, Action_1_t107331537 * ___callback5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadMoreScores(GooglePlayGames.BasicApi.ScorePageToken,System.Int32,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
extern "C"  void PlayGamesPlatform_LoadMoreScores_m462535769 (PlayGamesPlatform_t3624292130 * __this, ScorePageToken_t1995225314 * ___token0, int32_t ___rowCount1, Action_1_t107331537 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILeaderboard GooglePlayGames.PlayGamesPlatform::CreateLeaderboard()
extern "C"  Il2CppObject * PlayGamesPlatform_CreateLeaderboard_m1579918043 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ShowAchievementsUI()
extern "C"  void PlayGamesPlatform_ShowAchievementsUI_m4102105428 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ShowAchievementsUI(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C"  void PlayGamesPlatform_ShowAchievementsUI_m2534030222 (PlayGamesPlatform_t3624292130 * __this, Action_1_t823521528 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI()
extern "C"  void PlayGamesPlatform_ShowLeaderboardUI_m2711990935 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI(System.String)
extern "C"  void PlayGamesPlatform_ShowLeaderboardUI_m954145227 (PlayGamesPlatform_t3624292130 * __this, String_t* ___leaderboardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI(System.String,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C"  void PlayGamesPlatform_ShowLeaderboardUI_m1355272853 (PlayGamesPlatform_t3624292130 * __this, String_t* ___leaderboardId0, Action_1_t823521528 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI(System.String,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C"  void PlayGamesPlatform_ShowLeaderboardUI_m3010809297 (PlayGamesPlatform_t3624292130 * __this, String_t* ___leaderboardId0, int32_t ___span1, Action_1_t823521528 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::SetDefaultLeaderboardForUI(System.String)
extern "C"  void PlayGamesPlatform_SetDefaultLeaderboardForUI_m3695507140 (PlayGamesPlatform_t3624292130 * __this, String_t* ___lbid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C"  void PlayGamesPlatform_LoadFriends_m3849896064 (PlayGamesPlatform_t3624292130 * __this, Il2CppObject * ___user0, Action_1_t872614854 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
extern "C"  void PlayGamesPlatform_LoadScores_m1968437709 (PlayGamesPlatform_t3624292130 * __this, Il2CppObject * ___board0, Action_1_t872614854 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
extern "C"  bool PlayGamesPlatform_GetLoading_m1681232331 (PlayGamesPlatform_t3624292130 * __this, Il2CppObject * ___board0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::RegisterInvitationDelegate(GooglePlayGames.BasicApi.InvitationReceivedDelegate)
extern "C"  void PlayGamesPlatform_RegisterInvitationDelegate_m3195177803 (PlayGamesPlatform_t3624292130 * __this, InvitationReceivedDelegate_t2409308905 * ___deleg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesPlatform::GetToken()
extern "C"  String_t* PlayGamesPlatform_GetToken_m4098878783 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::HandleLoadingScores(GooglePlayGames.PlayGamesLeaderboard,GooglePlayGames.BasicApi.LeaderboardScoreData,System.Action`1<System.Boolean>)
extern "C"  void PlayGamesPlatform_HandleLoadingScores_m1326934272 (PlayGamesPlatform_t3624292130 * __this, PlayGamesLeaderboard_t3198617382 * ___board0, LeaderboardScoreData_t4006482697 * ___scoreData1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.PlayGamesPlatform::GetFriends()
extern "C"  IUserProfileU5BU5D_t3419104218* PlayGamesPlatform_GetFriends_m3329218634 (PlayGamesPlatform_t3624292130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesPlatform::MapId(System.String)
extern "C"  String_t* PlayGamesPlatform_MapId_m1357306405 (PlayGamesPlatform_t3624292130 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
