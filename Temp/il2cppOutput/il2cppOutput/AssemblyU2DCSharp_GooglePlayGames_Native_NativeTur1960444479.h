﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch[]>
struct Action_1_t2541210452;
// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t3828344078;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<GetAllMatches>c__AnonStorey64
struct  U3CGetAllMatchesU3Ec__AnonStorey64_t1960444479  : public Il2CppObject
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch[]> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<GetAllMatches>c__AnonStorey64::callback
	Action_1_t2541210452 * ___callback_0;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<GetAllMatches>c__AnonStorey64::<>f__this
	NativeTurnBasedMultiplayerClient_t3828344078 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CGetAllMatchesU3Ec__AnonStorey64_t1960444479, ___callback_0)); }
	inline Action_1_t2541210452 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t2541210452 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t2541210452 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CGetAllMatchesU3Ec__AnonStorey64_t1960444479, ___U3CU3Ef__this_1)); }
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
