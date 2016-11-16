#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean>
struct Action_2_t1635784644;
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch
struct NativeTurnBasedMatch_t302853426;
// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t3828344078;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<HandleMatchEvent>c__AnonStorey6A
struct  U3CHandleMatchEventU3Ec__AnonStorey6A_t586645313  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<HandleMatchEvent>c__AnonStorey6A::currentDelegate
	Action_2_t1635784644 * ___currentDelegate_0;
	// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<HandleMatchEvent>c__AnonStorey6A::match
	NativeTurnBasedMatch_t302853426 * ___match_1;
	// System.Boolean GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<HandleMatchEvent>c__AnonStorey6A::shouldAutolaunch
	bool ___shouldAutolaunch_2;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<HandleMatchEvent>c__AnonStorey6A::<>f__this
	NativeTurnBasedMultiplayerClient_t3828344078 * ___U3CU3Ef__this_3;

public:
	inline static int32_t get_offset_of_currentDelegate_0() { return static_cast<int32_t>(offsetof(U3CHandleMatchEventU3Ec__AnonStorey6A_t586645313, ___currentDelegate_0)); }
	inline Action_2_t1635784644 * get_currentDelegate_0() const { return ___currentDelegate_0; }
	inline Action_2_t1635784644 ** get_address_of_currentDelegate_0() { return &___currentDelegate_0; }
	inline void set_currentDelegate_0(Action_2_t1635784644 * value)
	{
		___currentDelegate_0 = value;
		Il2CppCodeGenWriteBarrier(&___currentDelegate_0, value);
	}

	inline static int32_t get_offset_of_match_1() { return static_cast<int32_t>(offsetof(U3CHandleMatchEventU3Ec__AnonStorey6A_t586645313, ___match_1)); }
	inline NativeTurnBasedMatch_t302853426 * get_match_1() const { return ___match_1; }
	inline NativeTurnBasedMatch_t302853426 ** get_address_of_match_1() { return &___match_1; }
	inline void set_match_1(NativeTurnBasedMatch_t302853426 * value)
	{
		___match_1 = value;
		Il2CppCodeGenWriteBarrier(&___match_1, value);
	}

	inline static int32_t get_offset_of_shouldAutolaunch_2() { return static_cast<int32_t>(offsetof(U3CHandleMatchEventU3Ec__AnonStorey6A_t586645313, ___shouldAutolaunch_2)); }
	inline bool get_shouldAutolaunch_2() const { return ___shouldAutolaunch_2; }
	inline bool* get_address_of_shouldAutolaunch_2() { return &___shouldAutolaunch_2; }
	inline void set_shouldAutolaunch_2(bool value)
	{
		___shouldAutolaunch_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_3() { return static_cast<int32_t>(offsetof(U3CHandleMatchEventU3Ec__AnonStorey6A_t586645313, ___U3CU3Ef__this_3)); }
	inline NativeTurnBasedMultiplayerClient_t3828344078 * get_U3CU3Ef__this_3() const { return ___U3CU3Ef__this_3; }
	inline NativeTurnBasedMultiplayerClient_t3828344078 ** get_address_of_U3CU3Ef__this_3() { return &___U3CU3Ef__this_3; }
	inline void set_U3CU3Ef__this_3(NativeTurnBasedMultiplayerClient_t3828344078 * value)
	{
		___U3CU3Ef__this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
