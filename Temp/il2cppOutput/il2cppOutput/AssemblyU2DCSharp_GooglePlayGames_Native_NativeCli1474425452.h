#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String>
struct Action_2_t1860405393;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<GetServerAuthCode>c__AnonStorey23
struct  U3CGetServerAuthCodeU3Ec__AnonStorey23_t1474425452  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String> GooglePlayGames.Native.NativeClient/<GetServerAuthCode>c__AnonStorey23::callback
	Action_2_t1860405393 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CGetServerAuthCodeU3Ec__AnonStorey23_t1474425452, ___callback_0)); }
	inline Action_2_t1860405393 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t1860405393 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t1860405393 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
