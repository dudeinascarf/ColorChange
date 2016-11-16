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
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t3104490121;
// System.Action
struct Action_t3771233898;

#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRea1703243816.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom
struct  LeavingRoom_t1845424902  : public State_t1703243816
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::mSession
	RoomSession_t1352686482 * ___mSession_0;
	// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::mRoomToLeave
	NativeRealTimeRoom_t3104490121 * ___mRoomToLeave_1;
	// System.Action GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::mLeavingCompleteCallback
	Action_t3771233898 * ___mLeavingCompleteCallback_2;

public:
	inline static int32_t get_offset_of_mSession_0() { return static_cast<int32_t>(offsetof(LeavingRoom_t1845424902, ___mSession_0)); }
	inline RoomSession_t1352686482 * get_mSession_0() const { return ___mSession_0; }
	inline RoomSession_t1352686482 ** get_address_of_mSession_0() { return &___mSession_0; }
	inline void set_mSession_0(RoomSession_t1352686482 * value)
	{
		___mSession_0 = value;
		Il2CppCodeGenWriteBarrier(&___mSession_0, value);
	}

	inline static int32_t get_offset_of_mRoomToLeave_1() { return static_cast<int32_t>(offsetof(LeavingRoom_t1845424902, ___mRoomToLeave_1)); }
	inline NativeRealTimeRoom_t3104490121 * get_mRoomToLeave_1() const { return ___mRoomToLeave_1; }
	inline NativeRealTimeRoom_t3104490121 ** get_address_of_mRoomToLeave_1() { return &___mRoomToLeave_1; }
	inline void set_mRoomToLeave_1(NativeRealTimeRoom_t3104490121 * value)
	{
		___mRoomToLeave_1 = value;
		Il2CppCodeGenWriteBarrier(&___mRoomToLeave_1, value);
	}

	inline static int32_t get_offset_of_mLeavingCompleteCallback_2() { return static_cast<int32_t>(offsetof(LeavingRoom_t1845424902, ___mLeavingCompleteCallback_2)); }
	inline Action_t3771233898 * get_mLeavingCompleteCallback_2() const { return ___mLeavingCompleteCallback_2; }
	inline Action_t3771233898 ** get_address_of_mLeavingCompleteCallback_2() { return &___mLeavingCompleteCallback_2; }
	inline void set_mLeavingCompleteCallback_2(Action_t3771233898 * value)
	{
		___mLeavingCompleteCallback_2 = value;
		Il2CppCodeGenWriteBarrier(&___mLeavingCompleteCallback_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
