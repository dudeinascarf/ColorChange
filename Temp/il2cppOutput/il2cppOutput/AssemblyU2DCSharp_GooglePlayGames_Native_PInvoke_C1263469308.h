#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.IntPtr,System.Object>
struct Func_2_t2304636665;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4293064463;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.Callbacks/<ToIntPtr>c__AnonStorey75`2<System.Object,System.Object>
struct  U3CToIntPtrU3Ec__AnonStorey75_2_t1263469308  : public Il2CppObject
{
public:
	// System.Func`2<System.IntPtr,P> GooglePlayGames.Native.PInvoke.Callbacks/<ToIntPtr>c__AnonStorey75`2::conversionFunction
	Func_2_t2304636665 * ___conversionFunction_0;
	// System.Action`2<T,P> GooglePlayGames.Native.PInvoke.Callbacks/<ToIntPtr>c__AnonStorey75`2::callback
	Action_2_t4293064463 * ___callback_1;

public:
	inline static int32_t get_offset_of_conversionFunction_0() { return static_cast<int32_t>(offsetof(U3CToIntPtrU3Ec__AnonStorey75_2_t1263469308, ___conversionFunction_0)); }
	inline Func_2_t2304636665 * get_conversionFunction_0() const { return ___conversionFunction_0; }
	inline Func_2_t2304636665 ** get_address_of_conversionFunction_0() { return &___conversionFunction_0; }
	inline void set_conversionFunction_0(Func_2_t2304636665 * value)
	{
		___conversionFunction_0 = value;
		Il2CppCodeGenWriteBarrier(&___conversionFunction_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CToIntPtrU3Ec__AnonStorey75_2_t1263469308, ___callback_1)); }
	inline Action_2_t4293064463 * get_callback_1() const { return ___callback_1; }
	inline Action_2_t4293064463 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_2_t4293064463 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
