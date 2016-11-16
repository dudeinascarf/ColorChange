#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Events.IEvent>
struct Action_2_t423619683;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeEventClient/<FetchEvent>c__AnonStorey37
struct  U3CFetchEventU3Ec__AnonStorey37_t2007942635  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Events.IEvent> GooglePlayGames.Native.NativeEventClient/<FetchEvent>c__AnonStorey37::callback
	Action_2_t423619683 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CFetchEventU3Ec__AnonStorey37_t2007942635, ___callback_0)); }
	inline Action_2_t423619683 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t423619683 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t423619683 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
