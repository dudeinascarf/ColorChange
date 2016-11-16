#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t4054002952;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener
struct OnGameThreadForwardingListener_t3760582229;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<PeersConnected>c__AnonStorey50
struct  U3CPeersConnectedU3Ec__AnonStorey50_t884522174  : public Il2CppObject
{
public:
	// System.String[] GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<PeersConnected>c__AnonStorey50::participantIds
	StringU5BU5D_t4054002952* ___participantIds_0;
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<PeersConnected>c__AnonStorey50::<>f__this
	OnGameThreadForwardingListener_t3760582229 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_participantIds_0() { return static_cast<int32_t>(offsetof(U3CPeersConnectedU3Ec__AnonStorey50_t884522174, ___participantIds_0)); }
	inline StringU5BU5D_t4054002952* get_participantIds_0() const { return ___participantIds_0; }
	inline StringU5BU5D_t4054002952** get_address_of_participantIds_0() { return &___participantIds_0; }
	inline void set_participantIds_0(StringU5BU5D_t4054002952* value)
	{
		___participantIds_0 = value;
		Il2CppCodeGenWriteBarrier(&___participantIds_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CPeersConnectedU3Ec__AnonStorey50_t884522174, ___U3CU3Ef__this_1)); }
	inline OnGameThreadForwardingListener_t3760582229 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline OnGameThreadForwardingListener_t3760582229 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(OnGameThreadForwardingListener_t3760582229 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
