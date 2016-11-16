#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Events.IEvent>>
struct Action_2_t1791805235;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeEventClient/<FetchAllEvents>c__AnonStorey36
struct  U3CFetchAllEventsU3Ec__AnonStorey36_t824241002  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Events.IEvent>> GooglePlayGames.Native.NativeEventClient/<FetchAllEvents>c__AnonStorey36::callback
	Action_2_t1791805235 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CFetchAllEventsU3Ec__AnonStorey36_t824241002, ___callback_0)); }
	inline Action_2_t1791805235 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t1791805235 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t1791805235 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
