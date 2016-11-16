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

// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t4064039103;
// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t3624292130;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t3419104218;
// System.Action`1<System.String>
struct Action_1_t403047693;
// System.String
struct String_t;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_t1913238692;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_PlayGamesPlatfor3624292130.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState1609153288.h"

// System.Void GooglePlayGames.PlayGamesLocalUser::.ctor(GooglePlayGames.PlayGamesPlatform)
extern "C"  void PlayGamesLocalUser__ctor_m3952843924 (PlayGamesLocalUser_t4064039103 * __this, PlayGamesPlatform_t3624292130 * ___plaf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLocalUser::Authenticate(System.Action`1<System.Boolean>)
extern "C"  void PlayGamesLocalUser_Authenticate_m3099382162 (PlayGamesLocalUser_t4064039103 * __this, Action_1_t872614854 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLocalUser::Authenticate(System.Action`1<System.Boolean>,System.Boolean)
extern "C"  void PlayGamesLocalUser_Authenticate_m4267174827 (PlayGamesLocalUser_t4064039103 * __this, Action_1_t872614854 * ___callback0, bool ___silent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLocalUser::LoadFriends(System.Action`1<System.Boolean>)
extern "C"  void PlayGamesLocalUser_LoadFriends_m1928733902 (PlayGamesLocalUser_t4064039103 * __this, Action_1_t872614854 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.PlayGamesLocalUser::get_friends()
extern "C"  IUserProfileU5BU5D_t3419104218* PlayGamesLocalUser_get_friends_m728743214 (PlayGamesLocalUser_t4064039103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLocalUser::GetIdToken(System.Action`1<System.String>)
extern "C"  void PlayGamesLocalUser_GetIdToken_m4167317808 (PlayGamesLocalUser_t4064039103 * __this, Action_1_t403047693 * ___idTokenCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesLocalUser::get_authenticated()
extern "C"  bool PlayGamesLocalUser_get_authenticated_m4184744680 (PlayGamesLocalUser_t4064039103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesLocalUser::get_underage()
extern "C"  bool PlayGamesLocalUser_get_underage_m2889300464 (PlayGamesLocalUser_t4064039103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesLocalUser::get_userName()
extern "C"  String_t* PlayGamesLocalUser_get_userName_m1023461806 (PlayGamesLocalUser_t4064039103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesLocalUser::get_id()
extern "C"  String_t* PlayGamesLocalUser_get_id_m2596166099 (PlayGamesLocalUser_t4064039103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesLocalUser::get_accessToken()
extern "C"  String_t* PlayGamesLocalUser_get_accessToken_m4125991455 (PlayGamesLocalUser_t4064039103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesLocalUser::get_isFriend()
extern "C"  bool PlayGamesLocalUser_get_isFriend_m2454307569 (PlayGamesLocalUser_t4064039103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserState GooglePlayGames.PlayGamesLocalUser::get_state()
extern "C"  int32_t PlayGamesLocalUser_get_state_m570677023 (PlayGamesLocalUser_t4064039103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesLocalUser::get_AvatarURL()
extern "C"  String_t* PlayGamesLocalUser_get_AvatarURL_m2297398880 (PlayGamesLocalUser_t4064039103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesLocalUser::get_Email()
extern "C"  String_t* PlayGamesLocalUser_get_Email_m1335109542 (PlayGamesLocalUser_t4064039103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLocalUser::GetStats(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>)
extern "C"  void PlayGamesLocalUser_GetStats_m2172969827 (PlayGamesLocalUser_t4064039103 * __this, Action_2_t1913238692 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
