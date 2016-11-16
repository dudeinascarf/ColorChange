#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t4006482697;
// System.String
struct String_t;
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

// GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey7B
struct  U3CHandleFetchU3Ec__AnonStorey7B_t932101190  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.LeaderboardScoreData GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey7B::data
	LeaderboardScoreData_t4006482697 * ___data_0;
	// System.String GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey7B::selfPlayerId
	String_t* ___selfPlayerId_1;
	// System.Int32 GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey7B::maxResults
	int32_t ___maxResults_2;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey7B::token
	ScorePageToken_t1995225314 * ___token_3;
	// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData> GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey7B::callback
	Action_1_t107331537 * ___callback_4;
	// GooglePlayGames.Native.PInvoke.LeaderboardManager GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey7B::<>f__this
	LeaderboardManager_t1995602236 * ___U3CU3Ef__this_5;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__AnonStorey7B_t932101190, ___data_0)); }
	inline LeaderboardScoreData_t4006482697 * get_data_0() const { return ___data_0; }
	inline LeaderboardScoreData_t4006482697 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(LeaderboardScoreData_t4006482697 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_selfPlayerId_1() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__AnonStorey7B_t932101190, ___selfPlayerId_1)); }
	inline String_t* get_selfPlayerId_1() const { return ___selfPlayerId_1; }
	inline String_t** get_address_of_selfPlayerId_1() { return &___selfPlayerId_1; }
	inline void set_selfPlayerId_1(String_t* value)
	{
		___selfPlayerId_1 = value;
		Il2CppCodeGenWriteBarrier(&___selfPlayerId_1, value);
	}

	inline static int32_t get_offset_of_maxResults_2() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__AnonStorey7B_t932101190, ___maxResults_2)); }
	inline int32_t get_maxResults_2() const { return ___maxResults_2; }
	inline int32_t* get_address_of_maxResults_2() { return &___maxResults_2; }
	inline void set_maxResults_2(int32_t value)
	{
		___maxResults_2 = value;
	}

	inline static int32_t get_offset_of_token_3() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__AnonStorey7B_t932101190, ___token_3)); }
	inline ScorePageToken_t1995225314 * get_token_3() const { return ___token_3; }
	inline ScorePageToken_t1995225314 ** get_address_of_token_3() { return &___token_3; }
	inline void set_token_3(ScorePageToken_t1995225314 * value)
	{
		___token_3 = value;
		Il2CppCodeGenWriteBarrier(&___token_3, value);
	}

	inline static int32_t get_offset_of_callback_4() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__AnonStorey7B_t932101190, ___callback_4)); }
	inline Action_1_t107331537 * get_callback_4() const { return ___callback_4; }
	inline Action_1_t107331537 ** get_address_of_callback_4() { return &___callback_4; }
	inline void set_callback_4(Action_1_t107331537 * value)
	{
		___callback_4 = value;
		Il2CppCodeGenWriteBarrier(&___callback_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_5() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__AnonStorey7B_t932101190, ___U3CU3Ef__this_5)); }
	inline LeaderboardManager_t1995602236 * get_U3CU3Ef__this_5() const { return ___U3CU3Ef__this_5; }
	inline LeaderboardManager_t1995602236 ** get_address_of_U3CU3Ef__this_5() { return &___U3CU3Ef__this_5; }
	inline void set_U3CU3Ef__this_5(LeaderboardManager_t1995602236 * value)
	{
		___U3CU3Ef__this_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
