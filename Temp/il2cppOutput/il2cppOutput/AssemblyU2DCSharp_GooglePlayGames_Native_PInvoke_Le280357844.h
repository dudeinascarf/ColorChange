#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t1995225314;
// System.String
struct String_t;
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

// GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadLeaderboardData>c__AnonStorey7A
struct  U3CLoadLeaderboardDataU3Ec__AnonStorey7A_t280357844  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadLeaderboardData>c__AnonStorey7A::token
	ScorePageToken_t1995225314 * ___token_0;
	// System.String GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadLeaderboardData>c__AnonStorey7A::playerId
	String_t* ___playerId_1;
	// System.Int32 GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadLeaderboardData>c__AnonStorey7A::rowCount
	int32_t ___rowCount_2;
	// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData> GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadLeaderboardData>c__AnonStorey7A::callback
	Action_1_t107331537 * ___callback_3;
	// GooglePlayGames.Native.PInvoke.LeaderboardManager GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadLeaderboardData>c__AnonStorey7A::<>f__this
	LeaderboardManager_t1995602236 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_token_0() { return static_cast<int32_t>(offsetof(U3CLoadLeaderboardDataU3Ec__AnonStorey7A_t280357844, ___token_0)); }
	inline ScorePageToken_t1995225314 * get_token_0() const { return ___token_0; }
	inline ScorePageToken_t1995225314 ** get_address_of_token_0() { return &___token_0; }
	inline void set_token_0(ScorePageToken_t1995225314 * value)
	{
		___token_0 = value;
		Il2CppCodeGenWriteBarrier(&___token_0, value);
	}

	inline static int32_t get_offset_of_playerId_1() { return static_cast<int32_t>(offsetof(U3CLoadLeaderboardDataU3Ec__AnonStorey7A_t280357844, ___playerId_1)); }
	inline String_t* get_playerId_1() const { return ___playerId_1; }
	inline String_t** get_address_of_playerId_1() { return &___playerId_1; }
	inline void set_playerId_1(String_t* value)
	{
		___playerId_1 = value;
		Il2CppCodeGenWriteBarrier(&___playerId_1, value);
	}

	inline static int32_t get_offset_of_rowCount_2() { return static_cast<int32_t>(offsetof(U3CLoadLeaderboardDataU3Ec__AnonStorey7A_t280357844, ___rowCount_2)); }
	inline int32_t get_rowCount_2() const { return ___rowCount_2; }
	inline int32_t* get_address_of_rowCount_2() { return &___rowCount_2; }
	inline void set_rowCount_2(int32_t value)
	{
		___rowCount_2 = value;
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(U3CLoadLeaderboardDataU3Ec__AnonStorey7A_t280357844, ___callback_3)); }
	inline Action_1_t107331537 * get_callback_3() const { return ___callback_3; }
	inline Action_1_t107331537 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(Action_1_t107331537 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier(&___callback_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CLoadLeaderboardDataU3Ec__AnonStorey7A_t280357844, ___U3CU3Ef__this_4)); }
	inline LeaderboardManager_t1995602236 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline LeaderboardManager_t1995602236 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(LeaderboardManager_t1995602236 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
