#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_t1913238692;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<GetPlayerStats>c__AnonStorey28
struct  U3CGetPlayerStatsU3Ec__AnonStorey28_t1415230531  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats> GooglePlayGames.Native.NativeClient/<GetPlayerStats>c__AnonStorey28::callback
	Action_2_t1913238692 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CGetPlayerStatsU3Ec__AnonStorey28_t1415230531, ___callback_0)); }
	inline Action_2_t1913238692 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t1913238692 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t1913238692 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
