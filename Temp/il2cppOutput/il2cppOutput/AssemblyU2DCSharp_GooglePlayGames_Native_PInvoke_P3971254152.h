#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>>
struct Action_2_t36582397;
// GooglePlayGames.Native.PInvoke.PlayerManager
struct PlayerManager_t3380828466;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.PlayerManager/<FetchFriends>c__AnonStorey7E
struct  U3CFetchFriendsU3Ec__AnonStorey7E_t3971254152  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>> GooglePlayGames.Native.PInvoke.PlayerManager/<FetchFriends>c__AnonStorey7E::callback
	Action_2_t36582397 * ___callback_0;
	// GooglePlayGames.Native.PInvoke.PlayerManager GooglePlayGames.Native.PInvoke.PlayerManager/<FetchFriends>c__AnonStorey7E::<>f__this
	PlayerManager_t3380828466 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CFetchFriendsU3Ec__AnonStorey7E_t3971254152, ___callback_0)); }
	inline Action_2_t36582397 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t36582397 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t36582397 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CFetchFriendsU3Ec__AnonStorey7E_t3971254152, ___U3CU3Ef__this_1)); }
	inline PlayerManager_t3380828466 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline PlayerManager_t3380828466 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(PlayerManager_t3380828466 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
