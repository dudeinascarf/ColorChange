#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation>
struct Action_1_t3807004673;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindInvitationWithId>c__AnonStorey68
struct  U3CFindInvitationWithIdU3Ec__AnonStorey68_t2678500462  : public Il2CppObject
{
public:
	// System.Action`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindInvitationWithId>c__AnonStorey68::callback
	Action_1_t3807004673 * ___callback_0;
	// System.String GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindInvitationWithId>c__AnonStorey68::invitationId
	String_t* ___invitationId_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CFindInvitationWithIdU3Ec__AnonStorey68_t2678500462, ___callback_0)); }
	inline Action_1_t3807004673 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t3807004673 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t3807004673 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_invitationId_1() { return static_cast<int32_t>(offsetof(U3CFindInvitationWithIdU3Ec__AnonStorey68_t2678500462, ___invitationId_1)); }
	inline String_t* get_invitationId_1() const { return ___invitationId_1; }
	inline String_t** get_address_of_invitationId_1() { return &___invitationId_1; }
	inline void set_invitationId_1(String_t* value)
	{
		___invitationId_1 = value;
		Il2CppCodeGenWriteBarrier(&___invitationId_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
