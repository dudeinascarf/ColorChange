#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.LeaderboardManager
struct  LeaderboardManager_t1995602236  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.PInvoke.LeaderboardManager::mServices
	GameServices_t1862808700 * ___mServices_0;

public:
	inline static int32_t get_offset_of_mServices_0() { return static_cast<int32_t>(offsetof(LeaderboardManager_t1995602236, ___mServices_0)); }
	inline GameServices_t1862808700 * get_mServices_0() const { return ___mServices_0; }
	inline GameServices_t1862808700 ** get_address_of_mServices_0() { return &___mServices_0; }
	inline void set_mServices_0(GameServices_t1862808700 * value)
	{
		___mServices_0 = value;
		Il2CppCodeGenWriteBarrier(&___mServices_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
