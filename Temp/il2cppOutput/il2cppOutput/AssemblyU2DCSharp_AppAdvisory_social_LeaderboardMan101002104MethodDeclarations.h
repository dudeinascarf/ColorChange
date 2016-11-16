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

// System.String
struct String_t;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t250104726;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void AppAdvisory.social.LeaderboardManager::.cctor()
extern "C"  void LeaderboardManager__cctor_m561624575 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AppAdvisory.social.LeaderboardManager::get_LEADERBOARDID()
extern "C"  String_t* LeaderboardManager_get_LEADERBOARDID_m1299844318 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppAdvisory.social.LeaderboardManager::set_LEADERBOARDID(System.String)
extern "C"  void LeaderboardManager_set_LEADERBOARDID_m554117339 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppAdvisory.social.LeaderboardManager::Init()
extern "C"  void LeaderboardManager_Init_m2084463910 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppAdvisory.social.LeaderboardManager::AuthAndroid()
extern "C"  void LeaderboardManager_AuthAndroid_m3312273971 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppAdvisory.social.LeaderboardManager::serviceNotReadyHandler(System.String)
extern "C"  void LeaderboardManager_serviceNotReadyHandler_m2893942855 (Il2CppObject * __this /* static, unused */, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppAdvisory.social.LeaderboardManager::serviceReadyHandler()
extern "C"  void LeaderboardManager_serviceReadyHandler_m4208350696 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppAdvisory.social.LeaderboardManager::ProcessAuthentication(System.Boolean)
extern "C"  void LeaderboardManager_ProcessAuthentication_m1893381066 (Il2CppObject * __this /* static, unused */, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppAdvisory.social.LeaderboardManager::ShowLeaderboardUI()
extern "C"  void LeaderboardManager_ShowLeaderboardUI_m4042844640 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppAdvisory.social.LeaderboardManager::ShowAchievementsUI()
extern "C"  void LeaderboardManager_ShowAchievementsUI_m2408897323 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AppAdvisory.social.LeaderboardManager::IsInitialized()
extern "C"  bool LeaderboardManager_IsInitialized_m1535190538 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppAdvisory.social.LeaderboardManager::ReportScore(System.Int32)
extern "C"  void LeaderboardManager_ReportScore_m44412123 (Il2CppObject * __this /* static, unused */, int32_t ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppAdvisory.social.LeaderboardManager::<AuthAndroid>m__DA(System.Boolean)
extern "C"  void LeaderboardManager_U3CAuthAndroidU3Em__DA_m2531137156 (Il2CppObject * __this /* static, unused */, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppAdvisory.social.LeaderboardManager::<ProcessAuthentication>m__DB(UnityEngine.SocialPlatforms.IScore[])
extern "C"  void LeaderboardManager_U3CProcessAuthenticationU3Em__DB_m3002632529 (Il2CppObject * __this /* static, unused */, IScoreU5BU5D_t250104726* ___scores0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppAdvisory.social.LeaderboardManager::<ReportScore>m__DC(System.Boolean)
extern "C"  void LeaderboardManager_U3CReportScoreU3Em__DC_m2330553693 (Il2CppObject * __this /* static, unused */, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
