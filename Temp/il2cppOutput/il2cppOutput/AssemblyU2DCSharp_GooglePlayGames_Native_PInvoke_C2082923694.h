#pragma once

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

// GooglePlayGames.Native.PInvoke.Callbacks/<AsOnGameThreadCallback>c__AnonStorey76`1<System.Boolean>
struct  U3CAsOnGameThreadCallbackU3Ec__AnonStorey76_1_t2082923694  : public Il2CppObject
{
public:
	// System.Action`1<T> GooglePlayGames.Native.PInvoke.Callbacks/<AsOnGameThreadCallback>c__AnonStorey76`1::toInvokeOnGameThread
	Action_1_t872614854 * ___toInvokeOnGameThread_0;

public:
	inline static int32_t get_offset_of_toInvokeOnGameThread_0() { return static_cast<int32_t>(offsetof(U3CAsOnGameThreadCallbackU3Ec__AnonStorey76_1_t2082923694, ___toInvokeOnGameThread_0)); }
	inline Action_1_t872614854 * get_toInvokeOnGameThread_0() const { return ___toInvokeOnGameThread_0; }
	inline Action_1_t872614854 ** get_address_of_toInvokeOnGameThread_0() { return &___toInvokeOnGameThread_0; }
	inline void set_toInvokeOnGameThread_0(Action_1_t872614854 * value)
	{
		___toInvokeOnGameThread_0 = value;
		Il2CppCodeGenWriteBarrier(&___toInvokeOnGameThread_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
