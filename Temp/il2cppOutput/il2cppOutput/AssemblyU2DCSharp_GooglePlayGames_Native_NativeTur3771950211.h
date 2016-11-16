#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t1377674964;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<RegisterMatchDelegate>c__AnonStorey69
struct  U3CRegisterMatchDelegateU3Ec__AnonStorey69_t3771950211  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<RegisterMatchDelegate>c__AnonStorey69::del
	MatchDelegate_t1377674964 * ___del_0;

public:
	inline static int32_t get_offset_of_del_0() { return static_cast<int32_t>(offsetof(U3CRegisterMatchDelegateU3Ec__AnonStorey69_t3771950211, ___del_0)); }
	inline MatchDelegate_t1377674964 * get_del_0() const { return ___del_0; }
	inline MatchDelegate_t1377674964 ** get_address_of_del_0() { return &___del_0; }
	inline void set_del_0(MatchDelegate_t1377674964 * value)
	{
		___del_0 = value;
		Il2CppCodeGenWriteBarrier(&___del_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
