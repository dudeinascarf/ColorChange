﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<System.Object,System.Object>
struct Action_2_t4293064463;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.Callbacks/<AsOnGameThreadCallback>c__AnonStorey78`2<System.Object,System.Object>
struct  U3CAsOnGameThreadCallbackU3Ec__AnonStorey78_2_t456544845  : public Il2CppObject
{
public:
	// System.Action`2<T1,T2> GooglePlayGames.Native.PInvoke.Callbacks/<AsOnGameThreadCallback>c__AnonStorey78`2::toInvokeOnGameThread
	Action_2_t4293064463 * ___toInvokeOnGameThread_0;

public:
	inline static int32_t get_offset_of_toInvokeOnGameThread_0() { return static_cast<int32_t>(offsetof(U3CAsOnGameThreadCallbackU3Ec__AnonStorey78_2_t456544845, ___toInvokeOnGameThread_0)); }
	inline Action_2_t4293064463 * get_toInvokeOnGameThread_0() const { return ___toInvokeOnGameThread_0; }
	inline Action_2_t4293064463 ** get_address_of_toInvokeOnGameThread_0() { return &___toInvokeOnGameThread_0; }
	inline void set_toInvokeOnGameThread_0(Action_2_t4293064463 * value)
	{
		___toInvokeOnGameThread_0 = value;
		Il2CppCodeGenWriteBarrier(&___toInvokeOnGameThread_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif