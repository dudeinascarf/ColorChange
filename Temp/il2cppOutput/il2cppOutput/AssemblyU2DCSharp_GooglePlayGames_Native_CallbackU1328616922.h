#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Object>
struct Action_1_t271665211;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.CallbackUtils/<ToOnGameThread>c__AnonStorey17`1<System.Object>
struct  U3CToOnGameThreadU3Ec__AnonStorey17_1_t1328616922  : public Il2CppObject
{
public:
	// System.Action`1<T> GooglePlayGames.Native.CallbackUtils/<ToOnGameThread>c__AnonStorey17`1::toConvert
	Action_1_t271665211 * ___toConvert_0;

public:
	inline static int32_t get_offset_of_toConvert_0() { return static_cast<int32_t>(offsetof(U3CToOnGameThreadU3Ec__AnonStorey17_1_t1328616922, ___toConvert_0)); }
	inline Action_1_t271665211 * get_toConvert_0() const { return ___toConvert_0; }
	inline Action_1_t271665211 ** get_address_of_toConvert_0() { return &___toConvert_0; }
	inline void set_toConvert_0(Action_1_t271665211 * value)
	{
		___toConvert_0 = value;
		Il2CppCodeGenWriteBarrier(&___toConvert_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
