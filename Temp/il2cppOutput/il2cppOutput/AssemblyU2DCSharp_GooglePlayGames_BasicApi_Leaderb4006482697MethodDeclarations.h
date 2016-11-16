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

// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t4006482697;
// System.String
struct String_t;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t4279057999;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t250104726;
// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_t486124539;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t1995225314;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Response419677757.h"
#include "AssemblyU2DCSharp_GooglePlayGames_PlayGamesScore486124539.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_ScorePa1995225314.h"

// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::.ctor(System.String)
extern "C"  void LeaderboardScoreData__ctor_m2362925406 (LeaderboardScoreData_t4006482697 * __this, String_t* ___leaderboardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::.ctor(System.String,GooglePlayGames.BasicApi.ResponseStatus)
extern "C"  void LeaderboardScoreData__ctor_m2065891215 (LeaderboardScoreData_t4006482697 * __this, String_t* ___leaderboardId0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.LeaderboardScoreData::get_Valid()
extern "C"  bool LeaderboardScoreData_get_Valid_m1568951177 (LeaderboardScoreData_t4006482697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::get_Status()
extern "C"  int32_t LeaderboardScoreData_get_Status_m2729886851 (LeaderboardScoreData_t4006482697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_Status(GooglePlayGames.BasicApi.ResponseStatus)
extern "C"  void LeaderboardScoreData_set_Status_m2659475592 (LeaderboardScoreData_t4006482697 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::get_ApproximateCount()
extern "C"  uint64_t LeaderboardScoreData_get_ApproximateCount_m1040175016 (LeaderboardScoreData_t4006482697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_ApproximateCount(System.UInt64)
extern "C"  void LeaderboardScoreData_set_ApproximateCount_m318820931 (LeaderboardScoreData_t4006482697 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::get_Title()
extern "C"  String_t* LeaderboardScoreData_get_Title_m2388953492 (LeaderboardScoreData_t4006482697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_Title(System.String)
extern "C"  void LeaderboardScoreData_set_Title_m2609068005 (LeaderboardScoreData_t4006482697 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::get_Id()
extern "C"  String_t* LeaderboardScoreData_get_Id_m2974548225 (LeaderboardScoreData_t4006482697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_Id(System.String)
extern "C"  void LeaderboardScoreData_set_Id_m2678665482 (LeaderboardScoreData_t4006482697 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::get_PlayerScore()
extern "C"  Il2CppObject * LeaderboardScoreData_get_PlayerScore_m1767200780 (LeaderboardScoreData_t4006482697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_PlayerScore(UnityEngine.SocialPlatforms.IScore)
extern "C"  void LeaderboardScoreData_set_PlayerScore_m1934705755 (LeaderboardScoreData_t4006482697 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IScore[] GooglePlayGames.BasicApi.LeaderboardScoreData::get_Scores()
extern "C"  IScoreU5BU5D_t250104726* LeaderboardScoreData_get_Scores_m1316040810 (LeaderboardScoreData_t4006482697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.LeaderboardScoreData::AddScore(GooglePlayGames.PlayGamesScore)
extern "C"  int32_t LeaderboardScoreData_AddScore_m3327745284 (LeaderboardScoreData_t4006482697 * __this, PlayGamesScore_t486124539 * ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::get_PrevPageToken()
extern "C"  ScorePageToken_t1995225314 * LeaderboardScoreData_get_PrevPageToken_m3527181347 (LeaderboardScoreData_t4006482697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_PrevPageToken(GooglePlayGames.BasicApi.ScorePageToken)
extern "C"  void LeaderboardScoreData_set_PrevPageToken_m1055113750 (LeaderboardScoreData_t4006482697 * __this, ScorePageToken_t1995225314 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::get_NextPageToken()
extern "C"  ScorePageToken_t1995225314 * LeaderboardScoreData_get_NextPageToken_m1251517283 (LeaderboardScoreData_t4006482697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_NextPageToken(GooglePlayGames.BasicApi.ScorePageToken)
extern "C"  void LeaderboardScoreData_set_NextPageToken_m3199138518 (LeaderboardScoreData_t4006482697 * __this, ScorePageToken_t1995225314 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::ToString()
extern "C"  String_t* LeaderboardScoreData_ToString_m1891807177 (LeaderboardScoreData_t4006482697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
