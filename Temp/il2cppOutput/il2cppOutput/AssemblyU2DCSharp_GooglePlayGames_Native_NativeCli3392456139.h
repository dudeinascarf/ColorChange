﻿#pragma once

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

// GooglePlayGames.Native.NativeClient/<AsOnGameThreadCallback>c__AnonStorey1D`1<System.Object>
struct  U3CAsOnGameThreadCallbackU3Ec__AnonStorey1D_1_t3392456139  : public Il2CppObject
{
public:
	// System.Action`1<T> GooglePlayGames.Native.NativeClient/<AsOnGameThreadCallback>c__AnonStorey1D`1::callback
	Action_1_t271665211 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CAsOnGameThreadCallbackU3Ec__AnonStorey1D_1_t3392456139, ___callback_0)); }
	inline Action_1_t271665211 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t271665211 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t271665211 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
