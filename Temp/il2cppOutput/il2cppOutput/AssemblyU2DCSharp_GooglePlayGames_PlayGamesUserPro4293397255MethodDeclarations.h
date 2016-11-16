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

// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t4293397255;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState1609153288.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String)
extern "C"  void PlayGamesUserProfile__ctor_m3655178218 (PlayGamesUserProfile_t4293397255 * __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesUserProfile::ResetIdentity(System.String,System.String,System.String)
extern "C"  void PlayGamesUserProfile_ResetIdentity_m1865931839 (PlayGamesUserProfile_t4293397255 * __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesUserProfile::get_userName()
extern "C"  String_t* PlayGamesUserProfile_get_userName_m2379353398 (PlayGamesUserProfile_t4293397255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesUserProfile::get_id()
extern "C"  String_t* PlayGamesUserProfile_get_id_m613081947 (PlayGamesUserProfile_t4293397255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesUserProfile::get_isFriend()
extern "C"  bool PlayGamesUserProfile_get_isFriend_m43038265 (PlayGamesUserProfile_t4293397255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserState GooglePlayGames.PlayGamesUserProfile::get_state()
extern "C"  int32_t PlayGamesUserProfile_get_state_m361572247 (PlayGamesUserProfile_t4293397255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::get_image()
extern "C"  Texture2D_t3884108195 * PlayGamesUserProfile_get_image_m3678310755 (PlayGamesUserProfile_t4293397255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesUserProfile::get_AvatarURL()
extern "C"  String_t* PlayGamesUserProfile_get_AvatarURL_m1380365272 (PlayGamesUserProfile_t4293397255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GooglePlayGames.PlayGamesUserProfile::LoadImage()
extern "C"  Il2CppObject * PlayGamesUserProfile_LoadImage_m280276411 (PlayGamesUserProfile_t4293397255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesUserProfile::Equals(System.Object)
extern "C"  bool PlayGamesUserProfile_Equals_m2359957581 (PlayGamesUserProfile_t4293397255 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.PlayGamesUserProfile::GetHashCode()
extern "C"  int32_t PlayGamesUserProfile_GetHashCode_m2802127217 (PlayGamesUserProfile_t4293397255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesUserProfile::ToString()
extern "C"  String_t* PlayGamesUserProfile_ToString_m3644280771 (PlayGamesUserProfile_t4293397255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
