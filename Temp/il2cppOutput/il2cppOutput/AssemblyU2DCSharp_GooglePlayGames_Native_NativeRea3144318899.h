#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t1352686482;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/<HelperForSession>c__AnonStorey40
struct  U3CHelperForSessionU3Ec__AnonStorey40_t3144318899  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession GooglePlayGames.Native.NativeRealtimeMultiplayerClient/<HelperForSession>c__AnonStorey40::session
	RoomSession_t1352686482 * ___session_0;

public:
	inline static int32_t get_offset_of_session_0() { return static_cast<int32_t>(offsetof(U3CHelperForSessionU3Ec__AnonStorey40_t3144318899, ___session_0)); }
	inline RoomSession_t1352686482 * get_session_0() const { return ___session_0; }
	inline RoomSession_t1352686482 ** get_address_of_session_0() { return &___session_0; }
	inline void set_session_0(RoomSession_t1352686482 * value)
	{
		___session_0 = value;
		Il2CppCodeGenWriteBarrier(&___session_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
