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

// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_t486124539;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_String7231557.h"

// System.Void GooglePlayGames.PlayGamesScore::.ctor(System.DateTime,System.String,System.UInt64,System.String,System.UInt64,System.String)
extern "C"  void PlayGamesScore__ctor_m2435400634 (PlayGamesScore_t486124539 * __this, DateTime_t4283661327  ___date0, String_t* ___leaderboardId1, uint64_t ___rank2, String_t* ___playerId3, uint64_t ___value4, String_t* ___metadata5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesScore::ReportScore(System.Action`1<System.Boolean>)
extern "C"  void PlayGamesScore_ReportScore_m3681302779 (PlayGamesScore_t486124539 * __this, Action_1_t872614854 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesScore::get_leaderboardID()
extern "C"  String_t* PlayGamesScore_get_leaderboardID_m3982419526 (PlayGamesScore_t486124539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesScore::set_leaderboardID(System.String)
extern "C"  void PlayGamesScore_set_leaderboardID_m2979886797 (PlayGamesScore_t486124539 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GooglePlayGames.PlayGamesScore::get_value()
extern "C"  int64_t PlayGamesScore_get_value_m96316979 (PlayGamesScore_t486124539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesScore::set_value(System.Int64)
extern "C"  void PlayGamesScore_set_value_m2736614400 (PlayGamesScore_t486124539 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GooglePlayGames.PlayGamesScore::get_date()
extern "C"  DateTime_t4283661327  PlayGamesScore_get_date_m3407034328 (PlayGamesScore_t486124539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesScore::get_formattedValue()
extern "C"  String_t* PlayGamesScore_get_formattedValue_m852870537 (PlayGamesScore_t486124539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesScore::get_userID()
extern "C"  String_t* PlayGamesScore_get_userID_m608145498 (PlayGamesScore_t486124539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.PlayGamesScore::get_rank()
extern "C"  int32_t PlayGamesScore_get_rank_m2745280459 (PlayGamesScore_t486124539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
