#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t3573041681;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.Action`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Action_1_t698669562;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatch>c__AnonStorey6C
struct  U3CFindEqualVersionMatchU3Ec__AnonStorey6C_t1925697134  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatch>c__AnonStorey6C::match
	TurnBasedMatch_t3573041681 * ___match_0;
	// System.Action`1<System.Boolean> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatch>c__AnonStorey6C::onFailure
	Action_1_t872614854 * ___onFailure_1;
	// System.Action`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatch>c__AnonStorey6C::onVersionMatch
	Action_1_t698669562 * ___onVersionMatch_2;

public:
	inline static int32_t get_offset_of_match_0() { return static_cast<int32_t>(offsetof(U3CFindEqualVersionMatchU3Ec__AnonStorey6C_t1925697134, ___match_0)); }
	inline TurnBasedMatch_t3573041681 * get_match_0() const { return ___match_0; }
	inline TurnBasedMatch_t3573041681 ** get_address_of_match_0() { return &___match_0; }
	inline void set_match_0(TurnBasedMatch_t3573041681 * value)
	{
		___match_0 = value;
		Il2CppCodeGenWriteBarrier(&___match_0, value);
	}

	inline static int32_t get_offset_of_onFailure_1() { return static_cast<int32_t>(offsetof(U3CFindEqualVersionMatchU3Ec__AnonStorey6C_t1925697134, ___onFailure_1)); }
	inline Action_1_t872614854 * get_onFailure_1() const { return ___onFailure_1; }
	inline Action_1_t872614854 ** get_address_of_onFailure_1() { return &___onFailure_1; }
	inline void set_onFailure_1(Action_1_t872614854 * value)
	{
		___onFailure_1 = value;
		Il2CppCodeGenWriteBarrier(&___onFailure_1, value);
	}

	inline static int32_t get_offset_of_onVersionMatch_2() { return static_cast<int32_t>(offsetof(U3CFindEqualVersionMatchU3Ec__AnonStorey6C_t1925697134, ___onVersionMatch_2)); }
	inline Action_1_t698669562 * get_onVersionMatch_2() const { return ___onVersionMatch_2; }
	inline Action_1_t698669562 ** get_address_of_onVersionMatch_2() { return &___onVersionMatch_2; }
	inline void set_onVersionMatch_2(Action_1_t698669562 * value)
	{
		___onVersionMatch_2 = value;
		Il2CppCodeGenWriteBarrier(&___onVersionMatch_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
