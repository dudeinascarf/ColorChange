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

#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRea1703243816.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/AbortingRoomCreationState
struct  AbortingRoomCreationState_t4011446620  : public State_t1703243816
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession GooglePlayGames.Native.NativeRealtimeMultiplayerClient/AbortingRoomCreationState::mSession
	RoomSession_t1352686482 * ___mSession_0;

public:
	inline static int32_t get_offset_of_mSession_0() { return static_cast<int32_t>(offsetof(AbortingRoomCreationState_t4011446620, ___mSession_0)); }
	inline RoomSession_t1352686482 * get_mSession_0() const { return ___mSession_0; }
	inline RoomSession_t1352686482 ** get_address_of_mSession_0() { return &___mSession_0; }
	inline void set_mSession_0(RoomSession_t1352686482 * value)
	{
		___mSession_0 = value;
		Il2CppCodeGenWriteBarrier(&___mSession_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
