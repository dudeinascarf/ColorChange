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
// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t4064039103;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.PlayGamesLocalUser/<GetStats>c__AnonStoreyD
struct  U3CGetStatsU3Ec__AnonStoreyD_t2822535906  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats> GooglePlayGames.PlayGamesLocalUser/<GetStats>c__AnonStoreyD::callback
	Action_2_t1913238692 * ___callback_0;
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesLocalUser/<GetStats>c__AnonStoreyD::<>f__this
	PlayGamesLocalUser_t4064039103 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CGetStatsU3Ec__AnonStoreyD_t2822535906, ___callback_0)); }
	inline Action_2_t1913238692 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t1913238692 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t1913238692 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CGetStatsU3Ec__AnonStoreyD_t2822535906, ___U3CU3Ef__this_1)); }
	inline PlayGamesLocalUser_t4064039103 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline PlayGamesLocalUser_t4064039103 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(PlayGamesLocalUser_t4064039103 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
