﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t4006482697;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t1995225314;
// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct Action_1_t107331537;
// GooglePlayGames.Native.PInvoke.LeaderboardManager
struct LeaderboardManager_t1995602236;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadScorePage>c__AnonStorey7C
struct  U3CLoadScorePageU3Ec__AnonStorey7C_t2815605456  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.LeaderboardScoreData GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadScorePage>c__AnonStorey7C::data
	LeaderboardScoreData_t4006482697 * ___data_0;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadScorePage>c__AnonStorey7C::token
	ScorePageToken_t1995225314 * ___token_1;
	// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData> GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadScorePage>c__AnonStorey7C::callback
	Action_1_t107331537 * ___callback_2;
	// GooglePlayGames.Native.PInvoke.LeaderboardManager GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadScorePage>c__AnonStorey7C::<>f__this
	LeaderboardManager_t1995602236 * ___U3CU3Ef__this_3;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(U3CLoadScorePageU3Ec__AnonStorey7C_t2815605456, ___data_0)); }
	inline LeaderboardScoreData_t4006482697 * get_data_0() const { return ___data_0; }
	inline LeaderboardScoreData_t4006482697 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(LeaderboardScoreData_t4006482697 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_token_1() { return static_cast<int32_t>(offsetof(U3CLoadScorePageU3Ec__AnonStorey7C_t2815605456, ___token_1)); }
	inline ScorePageToken_t1995225314 * get_token_1() const { return ___token_1; }
	inline ScorePageToken_t1995225314 ** get_address_of_token_1() { return &___token_1; }
	inline void set_token_1(ScorePageToken_t1995225314 * value)
	{
		___token_1 = value;
		Il2CppCodeGenWriteBarrier(&___token_1, value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CLoadScorePageU3Ec__AnonStorey7C_t2815605456, ___callback_2)); }
	inline Action_1_t107331537 * get_callback_2() const { return ___callback_2; }
	inline Action_1_t107331537 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_t107331537 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier(&___callback_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_3() { return static_cast<int32_t>(offsetof(U3CLoadScorePageU3Ec__AnonStorey7C_t2815605456, ___U3CU3Ef__this_3)); }
	inline LeaderboardManager_t1995602236 * get_U3CU3Ef__this_3() const { return ___U3CU3Ef__this_3; }
	inline LeaderboardManager_t1995602236 ** get_address_of_U3CU3Ef__this_3() { return &___U3CU3Ef__this_3; }
	inline void set_U3CU3Ef__this_3(LeaderboardManager_t1995602236 * value)
	{
		___U3CU3Ef__this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
