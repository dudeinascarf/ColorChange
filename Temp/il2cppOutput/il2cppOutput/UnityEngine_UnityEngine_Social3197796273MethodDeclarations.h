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

// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_t277815499;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t2654168339;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t645920862;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern "C"  Il2CppObject * Social_get_Active_m590102927 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::set_Active(UnityEngine.SocialPlatforms.ISocialPlatform)
extern "C"  void Social_set_Active_m3574014644 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern "C"  Il2CppObject * Social_get_localUser_m2966161563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C"  void Social_ReportScore_m2033004471 (Il2CppObject * __this /* static, unused */, int64_t ___score0, String_t* ___board1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern "C"  void Social_LoadScores_m4252988760 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardID0, Action_1_t645920862 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ShowAchievementsUI()
extern "C"  void Social_ShowAchievementsUI_m2977882297 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ShowLeaderboardUI()
extern "C"  void Social_ShowLeaderboardUI_m4061198994 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
