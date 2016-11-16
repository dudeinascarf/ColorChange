#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.BasicApi.Multiplayer.MatchOutcome
struct MatchOutcome_t2238854319;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t3828344078;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<Finish>c__AnonStorey6E
struct  U3CFinishU3Ec__AnonStorey6E_t3948912571  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.Multiplayer.MatchOutcome GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<Finish>c__AnonStorey6E::outcome
	MatchOutcome_t2238854319 * ___outcome_0;
	// System.Action`1<System.Boolean> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<Finish>c__AnonStorey6E::callback
	Action_1_t872614854 * ___callback_1;
	// System.Byte[] GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<Finish>c__AnonStorey6E::data
	ByteU5BU5D_t4260760469* ___data_2;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<Finish>c__AnonStorey6E::<>f__this
	NativeTurnBasedMultiplayerClient_t3828344078 * ___U3CU3Ef__this_3;

public:
	inline static int32_t get_offset_of_outcome_0() { return static_cast<int32_t>(offsetof(U3CFinishU3Ec__AnonStorey6E_t3948912571, ___outcome_0)); }
	inline MatchOutcome_t2238854319 * get_outcome_0() const { return ___outcome_0; }
	inline MatchOutcome_t2238854319 ** get_address_of_outcome_0() { return &___outcome_0; }
	inline void set_outcome_0(MatchOutcome_t2238854319 * value)
	{
		___outcome_0 = value;
		Il2CppCodeGenWriteBarrier(&___outcome_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CFinishU3Ec__AnonStorey6E_t3948912571, ___callback_1)); }
	inline Action_1_t872614854 * get_callback_1() const { return ___callback_1; }
	inline Action_1_t872614854 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_t872614854 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(U3CFinishU3Ec__AnonStorey6E_t3948912571, ___data_2)); }
	inline ByteU5BU5D_t4260760469* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_t4260760469** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_t4260760469* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier(&___data_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_3() { return static_cast<int32_t>(offsetof(U3CFinishU3Ec__AnonStorey6E_t3948912571, ___U3CU3Ef__this_3)); }
	inline NativeTurnBasedMultiplayerClient_t3828344078 * get_U3CU3Ef__this_3() const { return ___U3CU3Ef__this_3; }
	inline NativeTurnBasedMultiplayerClient_t3828344078 ** get_address_of_U3CU3Ef__this_3() { return &___U3CU3Ef__this_3; }
	inline void set_U3CU3Ef__this_3(NativeTurnBasedMultiplayerClient_t3828344078 * value)
	{
		___U3CU3Ef__this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
