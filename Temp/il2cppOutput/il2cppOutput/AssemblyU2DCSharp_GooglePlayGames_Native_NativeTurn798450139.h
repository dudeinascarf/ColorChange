#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>
struct Action_2_t1747968918;
// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t3828344078;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<AcceptInvitation>c__AnonStorey67
struct  U3CAcceptInvitationU3Ec__AnonStorey67_t798450139  : public Il2CppObject
{
public:
	// System.String GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<AcceptInvitation>c__AnonStorey67::invitationId
	String_t* ___invitationId_0;
	// System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<AcceptInvitation>c__AnonStorey67::callback
	Action_2_t1747968918 * ___callback_1;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<AcceptInvitation>c__AnonStorey67::<>f__this
	NativeTurnBasedMultiplayerClient_t3828344078 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_invitationId_0() { return static_cast<int32_t>(offsetof(U3CAcceptInvitationU3Ec__AnonStorey67_t798450139, ___invitationId_0)); }
	inline String_t* get_invitationId_0() const { return ___invitationId_0; }
	inline String_t** get_address_of_invitationId_0() { return &___invitationId_0; }
	inline void set_invitationId_0(String_t* value)
	{
		___invitationId_0 = value;
		Il2CppCodeGenWriteBarrier(&___invitationId_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CAcceptInvitationU3Ec__AnonStorey67_t798450139, ___callback_1)); }
	inline Action_2_t1747968918 * get_callback_1() const { return ___callback_1; }
	inline Action_2_t1747968918 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_2_t1747968918 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CAcceptInvitationU3Ec__AnonStorey67_t798450139, ___U3CU3Ef__this_2)); }
	inline NativeTurnBasedMultiplayerClient_t3828344078 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline NativeTurnBasedMultiplayerClient_t3828344078 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(NativeTurnBasedMultiplayerClient_t3828344078 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
