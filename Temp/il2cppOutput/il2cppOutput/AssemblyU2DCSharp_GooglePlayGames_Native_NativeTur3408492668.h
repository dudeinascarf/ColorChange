#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GooglePlayGames.BasicApi.UIStatus,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>
struct Action_2_t657955164;
// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t3828344078;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<CreateWithInvitationScreen>c__AnonStorey62
struct  U3CCreateWithInvitationScreenU3Ec__AnonStorey62_t3408492668  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.UIStatus,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<CreateWithInvitationScreen>c__AnonStorey62::callback
	Action_2_t657955164 * ___callback_0;
	// System.UInt32 GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<CreateWithInvitationScreen>c__AnonStorey62::variant
	uint32_t ___variant_1;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<CreateWithInvitationScreen>c__AnonStorey62::<>f__this
	NativeTurnBasedMultiplayerClient_t3828344078 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CCreateWithInvitationScreenU3Ec__AnonStorey62_t3408492668, ___callback_0)); }
	inline Action_2_t657955164 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t657955164 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t657955164 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_variant_1() { return static_cast<int32_t>(offsetof(U3CCreateWithInvitationScreenU3Ec__AnonStorey62_t3408492668, ___variant_1)); }
	inline uint32_t get_variant_1() const { return ___variant_1; }
	inline uint32_t* get_address_of_variant_1() { return &___variant_1; }
	inline void set_variant_1(uint32_t value)
	{
		___variant_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CCreateWithInvitationScreenU3Ec__AnonStorey62_t3408492668, ___U3CU3Ef__this_2)); }
	inline NativeTurnBasedMultiplayerClient_t3828344078 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline NativeTurnBasedMultiplayerClient_t3828344078 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(NativeTurnBasedMultiplayerClient_t3828344078 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
