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

// GooglePlayGames.PlayGamesLeaderboard
struct PlayGamesLeaderboard_t3198617382;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t4279057999;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t250104726;
// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t4006482697;
// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_t486124539;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope1608660171.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Range1533311935.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope1305796361.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb4006482697.h"
#include "AssemblyU2DCSharp_GooglePlayGames_PlayGamesScore486124539.h"

// System.Void GooglePlayGames.PlayGamesLeaderboard::.ctor(System.String)
extern "C"  void PlayGamesLeaderboard__ctor_m4211124817 (PlayGamesLeaderboard_t3198617382 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLeaderboard::SetUserFilter(System.String[])
extern "C"  void PlayGamesLeaderboard_SetUserFilter_m3491369932 (PlayGamesLeaderboard_t3198617382 * __this, StringU5BU5D_t4054002952* ___userIDs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLeaderboard::LoadScores(System.Action`1<System.Boolean>)
extern "C"  void PlayGamesLeaderboard_LoadScores_m2462425657 (PlayGamesLeaderboard_t3198617382 * __this, Action_1_t872614854 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesLeaderboard::get_loading()
extern "C"  bool PlayGamesLeaderboard_get_loading_m985440366 (PlayGamesLeaderboard_t3198617382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLeaderboard::set_loading(System.Boolean)
extern "C"  void PlayGamesLeaderboard_set_loading_m1714962085 (PlayGamesLeaderboard_t3198617382 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesLeaderboard::get_id()
extern "C"  String_t* PlayGamesLeaderboard_get_id_m896566458 (PlayGamesLeaderboard_t3198617382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLeaderboard::set_id(System.String)
extern "C"  void PlayGamesLeaderboard_set_id_m199542423 (PlayGamesLeaderboard_t3198617382 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserScope GooglePlayGames.PlayGamesLeaderboard::get_userScope()
extern "C"  int32_t PlayGamesLeaderboard_get_userScope_m118555411 (PlayGamesLeaderboard_t3198617382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLeaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C"  void PlayGamesLeaderboard_set_userScope_m485564192 (PlayGamesLeaderboard_t3198617382 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Range GooglePlayGames.PlayGamesLeaderboard::get_range()
extern "C"  Range_t1533311935  PlayGamesLeaderboard_get_range_m4196876027 (PlayGamesLeaderboard_t3198617382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLeaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C"  void PlayGamesLeaderboard_set_range_m265156792 (PlayGamesLeaderboard_t3198617382 * __this, Range_t1533311935  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.TimeScope GooglePlayGames.PlayGamesLeaderboard::get_timeScope()
extern "C"  int32_t PlayGamesLeaderboard_get_timeScope_m176022927 (PlayGamesLeaderboard_t3198617382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLeaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C"  void PlayGamesLeaderboard_set_timeScope_m240527524 (PlayGamesLeaderboard_t3198617382 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IScore GooglePlayGames.PlayGamesLeaderboard::get_localUserScore()
extern "C"  Il2CppObject * PlayGamesLeaderboard_get_localUserScore_m158861082 (PlayGamesLeaderboard_t3198617382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.PlayGamesLeaderboard::get_maxRange()
extern "C"  uint32_t PlayGamesLeaderboard_get_maxRange_m891048400 (PlayGamesLeaderboard_t3198617382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IScore[] GooglePlayGames.PlayGamesLeaderboard::get_scores()
extern "C"  IScoreU5BU5D_t250104726* PlayGamesLeaderboard_get_scores_m604031869 (PlayGamesLeaderboard_t3198617382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesLeaderboard::get_title()
extern "C"  String_t* PlayGamesLeaderboard_get_title_m597770043 (PlayGamesLeaderboard_t3198617382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesLeaderboard::SetFromData(GooglePlayGames.BasicApi.LeaderboardScoreData)
extern "C"  bool PlayGamesLeaderboard_SetFromData_m3542296026 (PlayGamesLeaderboard_t3198617382 * __this, LeaderboardScoreData_t4006482697 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLeaderboard::SetMaxRange(System.UInt64)
extern "C"  void PlayGamesLeaderboard_SetMaxRange_m3112923089 (PlayGamesLeaderboard_t3198617382 * __this, uint64_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLeaderboard::SetTitle(System.String)
extern "C"  void PlayGamesLeaderboard_SetTitle_m1221383737 (PlayGamesLeaderboard_t3198617382 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLeaderboard::SetLocalUserScore(GooglePlayGames.PlayGamesScore)
extern "C"  void PlayGamesLeaderboard_SetLocalUserScore_m2088895182 (PlayGamesLeaderboard_t3198617382 * __this, PlayGamesScore_t486124539 * ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.PlayGamesLeaderboard::AddScore(GooglePlayGames.PlayGamesScore)
extern "C"  int32_t PlayGamesLeaderboard_AddScore_m4205433299 (PlayGamesLeaderboard_t3198617382 * __this, PlayGamesScore_t486124539 * ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.PlayGamesLeaderboard::get_ScoreCount()
extern "C"  int32_t PlayGamesLeaderboard_get_ScoreCount_m3010022535 (PlayGamesLeaderboard_t3198617382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesLeaderboard::HasAllScores()
extern "C"  bool PlayGamesLeaderboard_HasAllScores_m4175623983 (PlayGamesLeaderboard_t3198617382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
