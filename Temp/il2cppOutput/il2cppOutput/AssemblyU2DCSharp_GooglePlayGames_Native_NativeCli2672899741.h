#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.String>
struct Action_1_t403047693;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<GetIdToken>c__AnonStorey22
struct  U3CGetIdTokenU3Ec__AnonStorey22_t2672899741  : public Il2CppObject
{
public:
	// System.Action`1<System.String> GooglePlayGames.Native.NativeClient/<GetIdToken>c__AnonStorey22::idTokenCallback
	Action_1_t403047693 * ___idTokenCallback_0;

public:
	inline static int32_t get_offset_of_idTokenCallback_0() { return static_cast<int32_t>(offsetof(U3CGetIdTokenU3Ec__AnonStorey22_t2672899741, ___idTokenCallback_0)); }
	inline Action_1_t403047693 * get_idTokenCallback_0() const { return ___idTokenCallback_0; }
	inline Action_1_t403047693 ** get_address_of_idTokenCallback_0() { return &___idTokenCallback_0; }
	inline void set_idTokenCallback_0(Action_1_t403047693 * value)
	{
		___idTokenCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___idTokenCallback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
