﻿#pragma once

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

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<BridgeMatchToUserCallback>c__AnonStorey65
struct  U3CBridgeMatchToUserCallbackU3Ec__AnonStorey65_t1794499103  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.UIStatus,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<BridgeMatchToUserCallback>c__AnonStorey65::userCallback
	Action_2_t657955164 * ___userCallback_0;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<BridgeMatchToUserCallback>c__AnonStorey65::<>f__this
	NativeTurnBasedMultiplayerClient_t3828344078 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_userCallback_0() { return static_cast<int32_t>(offsetof(U3CBridgeMatchToUserCallbackU3Ec__AnonStorey65_t1794499103, ___userCallback_0)); }
	inline Action_2_t657955164 * get_userCallback_0() const { return ___userCallback_0; }
	inline Action_2_t657955164 ** get_address_of_userCallback_0() { return &___userCallback_0; }
	inline void set_userCallback_0(Action_2_t657955164 * value)
	{
		___userCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___userCallback_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CBridgeMatchToUserCallbackU3Ec__AnonStorey65_t1794499103, ___U3CU3Ef__this_1)); }
	inline NativeTurnBasedMultiplayerClient_t3828344078 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline NativeTurnBasedMultiplayerClient_t3828344078 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(NativeTurnBasedMultiplayerClient_t3828344078 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
