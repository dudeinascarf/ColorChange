﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<System.Object,System.Boolean>
struct Action_2_t599046810;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.Callbacks/<AsOnGameThreadCallback>c__AnonStorey78`2<System.Object,System.Boolean>
struct  U3CAsOnGameThreadCallbackU3Ec__AnonStorey78_2_t1057494488  : public Il2CppObject
{
public:
	// System.Action`2<T1,T2> GooglePlayGames.Native.PInvoke.Callbacks/<AsOnGameThreadCallback>c__AnonStorey78`2::toInvokeOnGameThread
	Action_2_t599046810 * ___toInvokeOnGameThread_0;

public:
	inline static int32_t get_offset_of_toInvokeOnGameThread_0() { return static_cast<int32_t>(offsetof(U3CAsOnGameThreadCallbackU3Ec__AnonStorey78_2_t1057494488, ___toInvokeOnGameThread_0)); }
	inline Action_2_t599046810 * get_toInvokeOnGameThread_0() const { return ___toInvokeOnGameThread_0; }
	inline Action_2_t599046810 ** get_address_of_toInvokeOnGameThread_0() { return &___toInvokeOnGameThread_0; }
	inline void set_toInvokeOnGameThread_0(Action_2_t599046810 * value)
	{
		___toInvokeOnGameThread_0 = value;
		Il2CppCodeGenWriteBarrier(&___toInvokeOnGameThread_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif