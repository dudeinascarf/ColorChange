﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Boolean>
struct Action_1_t872614854;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<InvokeCallbackOnGameThread>c__AnonStorey1E`1<System.Boolean>
struct  U3CInvokeCallbackOnGameThreadU3Ec__AnonStorey1E_1_t767201733  : public Il2CppObject
{
public:
	// System.Action`1<T> GooglePlayGames.Native.NativeClient/<InvokeCallbackOnGameThread>c__AnonStorey1E`1::callback
	Action_1_t872614854 * ___callback_0;
	// T GooglePlayGames.Native.NativeClient/<InvokeCallbackOnGameThread>c__AnonStorey1E`1::data
	bool ___data_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CInvokeCallbackOnGameThreadU3Ec__AnonStorey1E_1_t767201733, ___callback_0)); }
	inline Action_1_t872614854 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t872614854 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t872614854 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3CInvokeCallbackOnGameThreadU3Ec__AnonStorey1E_1_t767201733, ___data_1)); }
	inline bool get_data_1() const { return ___data_1; }
	inline bool* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(bool value)
	{
		___data_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
