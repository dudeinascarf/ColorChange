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

// GooglePlayGames.BasicApi.DummyClient
struct DummyClient_t2268884141;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.String
struct String_t;
// System.Action`1<System.String>
struct Action_1_t403047693;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String>
struct Action_2_t1860405393;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_t1913238692;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t3814920354;
// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>
struct Action_1_t3647501372;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t1261647177;
// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t823521528;
// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct Action_1_t107331537;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t1995225314;
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
// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t2409308905;
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t2200833403;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t3419104218;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb2320727150.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb2572053391.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb3617536533.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_ScorePa1995225314.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Invitat2409308905.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void GooglePlayGames.BasicApi.DummyClient::.ctor()
extern "C"  void DummyClient__ctor_m320356400 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::Authenticate(System.Action`1<System.Boolean>,System.Boolean)
extern "C"  void DummyClient_Authenticate_m2819517267 (DummyClient_t2268884141 * __this, Action_1_t872614854 * ___callback0, bool ___silent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.DummyClient::IsAuthenticated()
extern "C"  bool DummyClient_IsAuthenticated_m2058474943 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::SignOut()
extern "C"  void DummyClient_SignOut_m3624213023 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.DummyClient::GetAccessToken()
extern "C"  String_t* DummyClient_GetAccessToken_m3227382582 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::GetIdToken(System.Action`1<System.String>)
extern "C"  void DummyClient_GetIdToken_m543085272 (DummyClient_t2268884141 * __this, Action_1_t403047693 * ___idTokenCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserId()
extern "C"  String_t* DummyClient_GetUserId_m1249568071 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.DummyClient::GetToken()
extern "C"  String_t* DummyClient_GetToken_m3199895866 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::GetServerAuthCode(System.String,System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String>)
extern "C"  void DummyClient_GetServerAuthCode_m4110425262 (DummyClient_t2268884141 * __this, String_t* ___serverClientId0, Action_2_t1860405393 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserEmail()
extern "C"  String_t* DummyClient_GetUserEmail_m2458116050 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::GetUserEmail(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String>)
extern "C"  void DummyClient_GetUserEmail_m1633422463 (DummyClient_t2268884141 * __this, Action_2_t1860405393 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::GetPlayerStats(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>)
extern "C"  void DummyClient_GetPlayerStats_m3413982506 (DummyClient_t2268884141 * __this, Action_2_t1913238692 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserDisplayName()
extern "C"  String_t* DummyClient_GetUserDisplayName_m2739125923 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserImageUrl()
extern "C"  String_t* DummyClient_GetUserImageUrl_m2120188864 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern "C"  void DummyClient_LoadUsers_m868389981 (DummyClient_t2268884141 * __this, StringU5BU5D_t4054002952* ___userIds0, Action_1_t3814920354 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadAchievements(System.Action`1<GooglePlayGames.BasicApi.Achievement[]>)
extern "C"  void DummyClient_LoadAchievements_m248769877 (DummyClient_t2268884141 * __this, Action_1_t3647501372 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Achievement GooglePlayGames.BasicApi.DummyClient::GetAchievement(System.String)
extern "C"  Achievement_t1261647177 * DummyClient_GetAchievement_m1406883999 (DummyClient_t2268884141 * __this, String_t* ___achId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::UnlockAchievement(System.String,System.Action`1<System.Boolean>)
extern "C"  void DummyClient_UnlockAchievement_m1285816246 (DummyClient_t2268884141 * __this, String_t* ___achId0, Action_1_t872614854 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::RevealAchievement(System.String,System.Action`1<System.Boolean>)
extern "C"  void DummyClient_RevealAchievement_m3355155199 (DummyClient_t2268884141 * __this, String_t* ___achId0, Action_1_t872614854 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::IncrementAchievement(System.String,System.Int32,System.Action`1<System.Boolean>)
extern "C"  void DummyClient_IncrementAchievement_m2206294486 (DummyClient_t2268884141 * __this, String_t* ___achId0, int32_t ___steps1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::SetStepsAtLeast(System.String,System.Int32,System.Action`1<System.Boolean>)
extern "C"  void DummyClient_SetStepsAtLeast_m3501443041 (DummyClient_t2268884141 * __this, String_t* ___achId0, int32_t ___steps1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowAchievementsUI(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C"  void DummyClient_ShowAchievementsUI_m461724835 (DummyClient_t2268884141 * __this, Action_1_t823521528 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowLeaderboardUI(System.String,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C"  void DummyClient_ShowLeaderboardUI_m1719597734 (DummyClient_t2268884141 * __this, String_t* ___leaderboardId0, int32_t ___span1, Action_1_t823521528 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.DummyClient::LeaderboardMaxResults()
extern "C"  int32_t DummyClient_LeaderboardMaxResults_m3829820815 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadScores(System.String,GooglePlayGames.BasicApi.LeaderboardStart,System.Int32,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
extern "C"  void DummyClient_LoadScores_m3478143521 (DummyClient_t2268884141 * __this, String_t* ___leaderboardId0, int32_t ___start1, int32_t ___rowCount2, int32_t ___collection3, int32_t ___timeSpan4, Action_1_t107331537 * ___callback5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadMoreScores(GooglePlayGames.BasicApi.ScorePageToken,System.Int32,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
extern "C"  void DummyClient_LoadMoreScores_m4000932708 (DummyClient_t2268884141 * __this, ScorePageToken_t1995225314 * ___token0, int32_t ___rowCount1, Action_1_t107331537 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::SubmitScore(System.String,System.Int64,System.Action`1<System.Boolean>)
extern "C"  void DummyClient_SubmitScore_m2922134891 (DummyClient_t2268884141 * __this, String_t* ___leaderboardId0, int64_t ___score1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::SubmitScore(System.String,System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C"  void DummyClient_SubmitScore_m2881937703 (DummyClient_t2268884141 * __this, String_t* ___leaderboardId0, int64_t ___score1, String_t* ___metadata2, Action_1_t872614854 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.IRealTimeMultiplayerClient GooglePlayGames.BasicApi.DummyClient::GetRtmpClient()
extern "C"  Il2CppObject * DummyClient_GetRtmpClient_m596573550 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.ITurnBasedMultiplayerClient GooglePlayGames.BasicApi.DummyClient::GetTbmpClient()
extern "C"  Il2CppObject * DummyClient_GetTbmpClient_m4198461663 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient GooglePlayGames.BasicApi.DummyClient::GetSavedGameClient()
extern "C"  Il2CppObject * DummyClient_GetSavedGameClient_m73236605 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Events.IEventsClient GooglePlayGames.BasicApi.DummyClient::GetEventsClient()
extern "C"  Il2CppObject * DummyClient_GetEventsClient_m4207568117 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.IQuestsClient GooglePlayGames.BasicApi.DummyClient::GetQuestsClient()
extern "C"  Il2CppObject * DummyClient_GetQuestsClient_m1374386461 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::RegisterInvitationDelegate(GooglePlayGames.BasicApi.InvitationReceivedDelegate)
extern "C"  void DummyClient_RegisterInvitationDelegate_m2515718614 (DummyClient_t2268884141 * __this, InvitationReceivedDelegate_t2409308905 * ___invitationDelegate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Invitation GooglePlayGames.BasicApi.DummyClient::GetInvitationFromNotification()
extern "C"  Invitation_t2200833403 * DummyClient_GetInvitationFromNotification_m2852733012 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.DummyClient::HasInvitationFromNotification()
extern "C"  bool DummyClient_HasInvitationFromNotification_m3113596866 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadFriends(System.Action`1<System.Boolean>)
extern "C"  void DummyClient_LoadFriends_m2259743862 (DummyClient_t2268884141 * __this, Action_1_t872614854 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.BasicApi.DummyClient::GetFriends()
extern "C"  IUserProfileU5BU5D_t3419104218* DummyClient_GetFriends_m1878052807 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.BasicApi.DummyClient::GetApiClient()
extern "C"  IntPtr_t DummyClient_GetApiClient_m2857917208 (DummyClient_t2268884141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::LogUsage()
extern "C"  void DummyClient_LogUsage_m101351185 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
