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

// GooglePlayGames.Native.PInvoke.TurnBasedManager
struct  TurnBasedManager_t3476156963  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.PInvoke.TurnBasedManager::mGameServices
	GameServices_t1862808700 * ___mGameServices_0;

public:
	inline static int32_t get_offset_of_mGameServices_0() { return static_cast<int32_t>(offsetof(TurnBasedManager_t3476156963, ___mGameServices_0)); }
	inline GameServices_t1862808700 * get_mGameServices_0() const { return ___mGameServices_0; }
	inline GameServices_t1862808700 ** get_address_of_mGameServices_0() { return &___mGameServices_0; }
	inline void set_mGameServices_0(GameServices_t1862808700 * value)
	{
		___mGameServices_0 = value;
		Il2CppCodeGenWriteBarrier(&___mGameServices_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
