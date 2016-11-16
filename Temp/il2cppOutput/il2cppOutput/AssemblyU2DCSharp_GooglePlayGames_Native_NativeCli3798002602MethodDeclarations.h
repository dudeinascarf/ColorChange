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

// GooglePlayGames.Native.NativeClient
struct NativeClient_t3798002602;
// GooglePlayGames.IClientImpl
struct IClientImpl_t1458355702;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_t3411188537;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String>
struct Action_2_t1860405393;
// System.Action`1<System.String>
struct Action_1_t403047693;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t3419104218;
// GooglePlayGames.Native.PInvoke.AchievementManager/FetchAllResponse
struct FetchAllResponse_t2805709750;
// GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse
struct FetchSelfResponse_t1087840609;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_t1913238692;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t3814920354;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t1261647177;
// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>
struct Action_1_t3647501372;
// System.Predicate`1<GooglePlayGames.BasicApi.Achievement>
struct Predicate_1_t872704060;
// System.Action`1<GooglePlayGames.BasicApi.Achievement>
struct Action_1_t1657463313;
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
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch
struct NativeTurnBasedMatch_t302853426;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGam4135364200.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2613789975.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_M3411188537.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_A2805709750.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_P1087840609.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1624738888.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_C803408059.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb2320727150.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb2572053391.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb3617536533.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_ScorePa1995225314.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Invitat2409308905.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_Na302853426.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Achieve1261647177.h"

// System.Void GooglePlayGames.Native.NativeClient::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration,GooglePlayGames.IClientImpl)
extern "C"  void NativeClient__ctor_m3414341266 (NativeClient_t3798002602 * __this, PlayGamesClientConfiguration_t4135364200  ___configuration0, Il2CppObject * ___clientImpl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.NativeClient::GameServices()
extern "C"  GameServices_t1862808700 * NativeClient_GameServices_m2793534632 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::Authenticate(System.Action`1<System.Boolean>,System.Boolean)
extern "C"  void NativeClient_Authenticate_m3980326551 (NativeClient_t3798002602 * __this, Action_1_t872614854 * ___callback0, bool ___silent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::InitializeGameServices()
extern "C"  void NativeClient_InitializeGameServices_m2140353464 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::HandleInvitation(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.MultiplayerInvitation)
extern "C"  void NativeClient_HandleInvitation_m281420600 (NativeClient_t3798002602 * __this, int32_t ___eventType0, String_t* ___invitationId1, MultiplayerInvitation_t3411188537 * ___invitation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeClient::GetUserEmail()
extern "C"  String_t* NativeClient_GetUserEmail_m2562450544 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::GetUserEmail(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String>)
extern "C"  void NativeClient_GetUserEmail_m3568473787 (NativeClient_t3798002602 * __this, Action_2_t1860405393 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeClient::GetAccessToken()
extern "C"  String_t* NativeClient_GetAccessToken_m413616212 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::GetIdToken(System.Action`1<System.String>)
extern "C"  void NativeClient_GetIdToken_m3632949020 (NativeClient_t3798002602 * __this, Action_1_t403047693 * ___idTokenCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::GetServerAuthCode(System.String,System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String>)
extern "C"  void NativeClient_GetServerAuthCode_m761762034 (NativeClient_t3798002602 * __this, String_t* ___serverClientId0, Action_2_t1860405393 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeClient::IsAuthenticated()
extern "C"  bool NativeClient_IsAuthenticated_m457598435 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::LoadFriends(System.Action`1<System.Boolean>)
extern "C"  void NativeClient_LoadFriends_m3796404154 (NativeClient_t3798002602 * __this, Action_1_t872614854 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.Native.NativeClient::GetFriends()
extern "C"  IUserProfileU5BU5D_t3419104218* NativeClient_GetFriends_m4009149923 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::PopulateAchievements(System.UInt32,GooglePlayGames.Native.PInvoke.AchievementManager/FetchAllResponse)
extern "C"  void NativeClient_PopulateAchievements_m3533285916 (NativeClient_t3798002602 * __this, uint32_t ___authGeneration0, FetchAllResponse_t2805709750 * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::MaybeFinishAuthentication()
extern "C"  void NativeClient_MaybeFinishAuthentication_m1196012221 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::PopulateUser(System.UInt32,GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse)
extern "C"  void NativeClient_PopulateUser_m345502648 (NativeClient_t3798002602 * __this, uint32_t ___authGeneration0, FetchSelfResponse_t1087840609 * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::HandleAuthTransition(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,GooglePlayGames.Native.Cwrapper.CommonErrorStatus/AuthStatus)
extern "C"  void NativeClient_HandleAuthTransition_m1148397502 (NativeClient_t3798002602 * __this, int32_t ___operation0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::UnpauseUnityPlayer()
extern "C"  void NativeClient_UnpauseUnityPlayer_m2362960465 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::ToUnauthenticated()
extern "C"  void NativeClient_ToUnauthenticated_m2876066181 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::SignOut()
extern "C"  void NativeClient_SignOut_m720362843 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeClient::GetUserId()
extern "C"  String_t* NativeClient_GetUserId_m1469863273 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeClient::GetUserDisplayName()
extern "C"  String_t* NativeClient_GetUserDisplayName_m1585534145 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeClient::GetUserImageUrl()
extern "C"  String_t* NativeClient_GetUserImageUrl_m792777314 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::GetPlayerStats(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>)
extern "C"  void NativeClient_GetPlayerStats_m983920238 (NativeClient_t3798002602 * __this, Action_2_t1913238692 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern "C"  void NativeClient_LoadUsers_m2593378977 (NativeClient_t3798002602 * __this, StringU5BU5D_t4054002952* ___userIds0, Action_1_t3814920354 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Achievement GooglePlayGames.Native.NativeClient::GetAchievement(System.String)
extern "C"  Achievement_t1261647177 * NativeClient_GetAchievement_m1146160519 (NativeClient_t3798002602 * __this, String_t* ___achId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::LoadAchievements(System.Action`1<GooglePlayGames.BasicApi.Achievement[]>)
extern "C"  void NativeClient_LoadAchievements_m587649169 (NativeClient_t3798002602 * __this, Action_1_t3647501372 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::UnlockAchievement(System.String,System.Action`1<System.Boolean>)
extern "C"  void NativeClient_UnlockAchievement_m609569018 (NativeClient_t3798002602 * __this, String_t* ___achId0, Action_1_t872614854 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::RevealAchievement(System.String,System.Action`1<System.Boolean>)
extern "C"  void NativeClient_RevealAchievement_m2678907971 (NativeClient_t3798002602 * __this, String_t* ___achId0, Action_1_t872614854 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::UpdateAchievement(System.String,System.String,System.Action`1<System.Boolean>,System.Predicate`1<GooglePlayGames.BasicApi.Achievement>,System.Action`1<GooglePlayGames.BasicApi.Achievement>)
extern "C"  void NativeClient_UpdateAchievement_m619765138 (NativeClient_t3798002602 * __this, String_t* ___updateType0, String_t* ___achId1, Action_1_t872614854 * ___callback2, Predicate_1_t872704060 * ___alreadyDone3, Action_1_t1657463313 * ___updateAchievment4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::IncrementAchievement(System.String,System.Int32,System.Action`1<System.Boolean>)
extern "C"  void NativeClient_IncrementAchievement_m3063915290 (NativeClient_t3798002602 * __this, String_t* ___achId0, int32_t ___steps1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::SetStepsAtLeast(System.String,System.Int32,System.Action`1<System.Boolean>)
extern "C"  void NativeClient_SetStepsAtLeast_m2746928157 (NativeClient_t3798002602 * __this, String_t* ___achId0, int32_t ___steps1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::ShowAchievementsUI(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C"  void NativeClient_ShowAchievementsUI_m1585685223 (NativeClient_t3798002602 * __this, Action_1_t823521528 * ___cb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.Native.NativeClient::LeaderboardMaxResults()
extern "C"  int32_t NativeClient_LeaderboardMaxResults_m3308619815 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::ShowLeaderboardUI(System.String,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C"  void NativeClient_ShowLeaderboardUI_m1984177130 (NativeClient_t3798002602 * __this, String_t* ___leaderboardId0, int32_t ___span1, Action_1_t823521528 * ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::LoadScores(System.String,GooglePlayGames.BasicApi.LeaderboardStart,System.Int32,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
extern "C"  void NativeClient_LoadScores_m2136446557 (NativeClient_t3798002602 * __this, String_t* ___leaderboardId0, int32_t ___start1, int32_t ___rowCount2, int32_t ___collection3, int32_t ___timeSpan4, Action_1_t107331537 * ___callback5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::LoadMoreScores(GooglePlayGames.BasicApi.ScorePageToken,System.Int32,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
extern "C"  void NativeClient_LoadMoreScores_m525763488 (NativeClient_t3798002602 * __this, ScorePageToken_t1995225314 * ___token0, int32_t ___rowCount1, Action_1_t107331537 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::SubmitScore(System.String,System.Int64,System.Action`1<System.Boolean>)
extern "C"  void NativeClient_SubmitScore_m3405168551 (NativeClient_t3798002602 * __this, String_t* ___leaderboardId0, int64_t ___score1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::SubmitScore(System.String,System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C"  void NativeClient_SubmitScore_m443730531 (NativeClient_t3798002602 * __this, String_t* ___leaderboardId0, int64_t ___score1, String_t* ___metadata2, Action_1_t872614854 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.IRealTimeMultiplayerClient GooglePlayGames.Native.NativeClient::GetRtmpClient()
extern "C"  Il2CppObject * NativeClient_GetRtmpClient_m1633071670 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.ITurnBasedMultiplayerClient GooglePlayGames.Native.NativeClient::GetTbmpClient()
extern "C"  Il2CppObject * NativeClient_GetTbmpClient_m4205892733 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient GooglePlayGames.Native.NativeClient::GetSavedGameClient()
extern "C"  Il2CppObject * NativeClient_GetSavedGameClient_m117000235 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Events.IEventsClient GooglePlayGames.Native.NativeClient::GetEventsClient()
extern "C"  Il2CppObject * NativeClient_GetEventsClient_m2173859639 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.IQuestsClient GooglePlayGames.Native.NativeClient::GetQuestsClient()
extern "C"  Il2CppObject * NativeClient_GetQuestsClient_m1239566975 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::RegisterInvitationDelegate(GooglePlayGames.BasicApi.InvitationReceivedDelegate)
extern "C"  void NativeClient_RegisterInvitationDelegate_m3374667794 (NativeClient_t3798002602 * __this, InvitationReceivedDelegate_t2409308905 * ___invitationDelegate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeClient::GetToken()
extern "C"  String_t* NativeClient_GetToken_m158960856 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.NativeClient::GetApiClient()
extern "C"  IntPtr_t NativeClient_GetApiClient_m2782285010 (NativeClient_t3798002602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::<InitializeGameServices>m__1A(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch)
extern "C"  void NativeClient_U3CInitializeGameServicesU3Em__1A_m1821700013 (NativeClient_t3798002602 * __this, int32_t ___eventType0, String_t* ___matchId1, NativeTurnBasedMatch_t302853426 * ___match2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::<GetFriends>m__24(System.Boolean)
extern "C"  void NativeClient_U3CGetFriendsU3Em__24_m4061718317 (NativeClient_t3798002602 * __this, bool ___ok0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeClient::<UnlockAchievement>m__2A(GooglePlayGames.BasicApi.Achievement)
extern "C"  bool NativeClient_U3CUnlockAchievementU3Em__2A_m983073930 (Il2CppObject * __this /* static, unused */, Achievement_t1261647177 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeClient::<RevealAchievement>m__2C(GooglePlayGames.BasicApi.Achievement)
extern "C"  bool NativeClient_U3CRevealAchievementU3Em__2C_m1123861603 (Il2CppObject * __this /* static, unused */, Achievement_t1261647177 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
