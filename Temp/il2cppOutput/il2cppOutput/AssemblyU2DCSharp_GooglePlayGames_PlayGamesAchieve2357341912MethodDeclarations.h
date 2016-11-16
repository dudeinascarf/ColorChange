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

// GooglePlayGames.PlayGamesAchievement
struct PlayGamesAchievement_t2357341912;
// GooglePlayGames.ReportProgress
struct ReportProgress_t3967815895;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t1261647177;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_ReportProgress3967815895.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Achieve1261647177.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_DateTime4283661327.h"

// System.Void GooglePlayGames.PlayGamesAchievement::.ctor()
extern "C"  void PlayGamesAchievement__ctor_m3384221919 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor(GooglePlayGames.ReportProgress)
extern "C"  void PlayGamesAchievement__ctor_m1026446980 (PlayGamesAchievement_t2357341912 * __this, ReportProgress_t3967815895 * ___progressCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor(GooglePlayGames.BasicApi.Achievement)
extern "C"  void PlayGamesAchievement__ctor_m1510359896 (PlayGamesAchievement_t2357341912 * __this, Achievement_t1261647177 * ___ach0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesAchievement::ReportProgress(System.Action`1<System.Boolean>)
extern "C"  void PlayGamesAchievement_ReportProgress_m4053774893 (PlayGamesAchievement_t2357341912 * __this, Action_1_t872614854 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GooglePlayGames.PlayGamesAchievement::LoadImage()
extern "C"  Texture2D_t3884108195 * PlayGamesAchievement_LoadImage_m298890549 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesAchievement::get_id()
extern "C"  String_t* PlayGamesAchievement_get_id_m197866988 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesAchievement::set_id(System.String)
extern "C"  void PlayGamesAchievement_set_id_m1300436645 (PlayGamesAchievement_t2357341912 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesAchievement::get_isIncremental()
extern "C"  bool PlayGamesAchievement_get_isIncremental_m2094723408 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.PlayGamesAchievement::get_currentSteps()
extern "C"  int32_t PlayGamesAchievement_get_currentSteps_m3429421098 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.PlayGamesAchievement::get_totalSteps()
extern "C"  int32_t PlayGamesAchievement_get_totalSteps_m3902196415 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double GooglePlayGames.PlayGamesAchievement::get_percentCompleted()
extern "C"  double PlayGamesAchievement_get_percentCompleted_m2462165463 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesAchievement::set_percentCompleted(System.Double)
extern "C"  void PlayGamesAchievement_set_percentCompleted_m870793946 (PlayGamesAchievement_t2357341912 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesAchievement::get_completed()
extern "C"  bool PlayGamesAchievement_get_completed_m3462469643 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesAchievement::get_hidden()
extern "C"  bool PlayGamesAchievement_get_hidden_m1598629132 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GooglePlayGames.PlayGamesAchievement::get_lastReportedDate()
extern "C"  DateTime_t4283661327  PlayGamesAchievement_get_lastReportedDate_m802603102 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesAchievement::get_title()
extern "C"  String_t* PlayGamesAchievement_get_title_m3348342985 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GooglePlayGames.PlayGamesAchievement::get_image()
extern "C"  Texture2D_t3884108195 * PlayGamesAchievement_get_image_m3515279666 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesAchievement::get_achievedDescription()
extern "C"  String_t* PlayGamesAchievement_get_achievedDescription_m478251002 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesAchievement::get_unachievedDescription()
extern "C"  String_t* PlayGamesAchievement_get_unachievedDescription_m439592705 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.PlayGamesAchievement::get_points()
extern "C"  int32_t PlayGamesAchievement_get_points_m2562384607 (PlayGamesAchievement_t2357341912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
