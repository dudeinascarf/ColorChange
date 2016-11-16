#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t823521528;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<ShowAchievementsUI>c__AnonStorey33
struct  U3CShowAchievementsUIU3Ec__AnonStorey33_t1277145194  : public Il2CppObject
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.UIStatus> GooglePlayGames.Native.NativeClient/<ShowAchievementsUI>c__AnonStorey33::cb
	Action_1_t823521528 * ___cb_0;

public:
	inline static int32_t get_offset_of_cb_0() { return static_cast<int32_t>(offsetof(U3CShowAchievementsUIU3Ec__AnonStorey33_t1277145194, ___cb_0)); }
	inline Action_1_t823521528 * get_cb_0() const { return ___cb_0; }
	inline Action_1_t823521528 ** get_address_of_cb_0() { return &___cb_0; }
	inline void set_cb_0(Action_1_t823521528 * value)
	{
		___cb_0 = value;
		Il2CppCodeGenWriteBarrier(&___cb_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
