﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Object>
struct Action_2_t3406652893;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.CallbackUtils/<ToOnGameThread>c__AnonStorey19`2<GooglePlayGames.BasicApi.ResponseStatus,System.Object>
struct  U3CToOnGameThreadU3Ec__AnonStorey19_2_t1142745000  : public Il2CppObject
{
public:
	// System.Action`2<T1,T2> GooglePlayGames.Native.CallbackUtils/<ToOnGameThread>c__AnonStorey19`2::toConvert
	Action_2_t3406652893 * ___toConvert_0;

public:
	inline static int32_t get_offset_of_toConvert_0() { return static_cast<int32_t>(offsetof(U3CToOnGameThreadU3Ec__AnonStorey19_2_t1142745000, ___toConvert_0)); }
	inline Action_2_t3406652893 * get_toConvert_0() const { return ___toConvert_0; }
	inline Action_2_t3406652893 ** get_address_of_toConvert_0() { return &___toConvert_0; }
	inline void set_toConvert_0(Action_2_t3406652893 * value)
	{
		___toConvert_0 = value;
		Il2CppCodeGenWriteBarrier(&___toConvert_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
