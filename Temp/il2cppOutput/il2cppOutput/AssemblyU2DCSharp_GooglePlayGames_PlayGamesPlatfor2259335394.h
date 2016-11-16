#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t645920862;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.PlayGamesPlatform/<LoadScores>c__AnonStorey10
struct  U3CLoadScoresU3Ec__AnonStorey10_t2259335394  : public Il2CppObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IScore[]> GooglePlayGames.PlayGamesPlatform/<LoadScores>c__AnonStorey10::callback
	Action_1_t645920862 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CLoadScoresU3Ec__AnonStorey10_t2259335394, ___callback_0)); }
	inline Action_1_t645920862 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t645920862 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t645920862 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
