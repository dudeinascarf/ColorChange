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
// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.Native.PInvoke.MultiplayerParticipant>
struct Dictionary_2_t4157650695;
// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>
struct Dictionary_2_t2624649183;
// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.String>
struct Func_2_t3045461041;
// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.BasicApi.Multiplayer.Participant>
struct Func_2_t547493001;
// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String>
struct Func_2_t3868603641;
// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.Boolean>
struct Func_2_t43203506;

#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRea1703243816.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState
struct  MessagingEnabledState_t2566974603  : public State_t1703243816
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::mSession
	RoomSession_t1352686482 * ___mSession_0;
	// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::mRoom
	NativeRealTimeRoom_t3104490121 * ___mRoom_1;
	// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.Native.PInvoke.MultiplayerParticipant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::mNativeParticipants
	Dictionary_2_t4157650695 * ___mNativeParticipants_2;
	// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::mParticipants
	Dictionary_2_t2624649183 * ___mParticipants_3;

public:
	inline static int32_t get_offset_of_mSession_0() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t2566974603, ___mSession_0)); }
	inline RoomSession_t1352686482 * get_mSession_0() const { return ___mSession_0; }
	inline RoomSession_t1352686482 ** get_address_of_mSession_0() { return &___mSession_0; }
	inline void set_mSession_0(RoomSession_t1352686482 * value)
	{
		___mSession_0 = value;
		Il2CppCodeGenWriteBarrier(&___mSession_0, value);
	}

	inline static int32_t get_offset_of_mRoom_1() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t2566974603, ___mRoom_1)); }
	inline NativeRealTimeRoom_t3104490121 * get_mRoom_1() const { return ___mRoom_1; }
	inline NativeRealTimeRoom_t3104490121 ** get_address_of_mRoom_1() { return &___mRoom_1; }
	inline void set_mRoom_1(NativeRealTimeRoom_t3104490121 * value)
	{
		___mRoom_1 = value;
		Il2CppCodeGenWriteBarrier(&___mRoom_1, value);
	}

	inline static int32_t get_offset_of_mNativeParticipants_2() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t2566974603, ___mNativeParticipants_2)); }
	inline Dictionary_2_t4157650695 * get_mNativeParticipants_2() const { return ___mNativeParticipants_2; }
	inline Dictionary_2_t4157650695 ** get_address_of_mNativeParticipants_2() { return &___mNativeParticipants_2; }
	inline void set_mNativeParticipants_2(Dictionary_2_t4157650695 * value)
	{
		___mNativeParticipants_2 = value;
		Il2CppCodeGenWriteBarrier(&___mNativeParticipants_2, value);
	}

	inline static int32_t get_offset_of_mParticipants_3() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t2566974603, ___mParticipants_3)); }
	inline Dictionary_2_t2624649183 * get_mParticipants_3() const { return ___mParticipants_3; }
	inline Dictionary_2_t2624649183 ** get_address_of_mParticipants_3() { return &___mParticipants_3; }
	inline void set_mParticipants_3(Dictionary_2_t2624649183 * value)
	{
		___mParticipants_3 = value;
		Il2CppCodeGenWriteBarrier(&___mParticipants_3, value);
	}
};

struct MessagingEnabledState_t2566974603_StaticFields
{
public:
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<>f__am$cache4
	Func_2_t3045461041 * ___U3CU3Ef__amU24cache4_4;
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<>f__am$cache5
	Func_2_t547493001 * ___U3CU3Ef__amU24cache5_5;
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<>f__am$cache6
	Func_2_t3868603641 * ___U3CU3Ef__amU24cache6_6;
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.Boolean> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<>f__am$cache7
	Func_2_t43203506 * ___U3CU3Ef__amU24cache7_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_4() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t2566974603_StaticFields, ___U3CU3Ef__amU24cache4_4)); }
	inline Func_2_t3045461041 * get_U3CU3Ef__amU24cache4_4() const { return ___U3CU3Ef__amU24cache4_4; }
	inline Func_2_t3045461041 ** get_address_of_U3CU3Ef__amU24cache4_4() { return &___U3CU3Ef__amU24cache4_4; }
	inline void set_U3CU3Ef__amU24cache4_4(Func_2_t3045461041 * value)
	{
		___U3CU3Ef__amU24cache4_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t2566974603_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Func_2_t547493001 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Func_2_t547493001 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Func_2_t547493001 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t2566974603_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline Func_2_t3868603641 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline Func_2_t3868603641 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(Func_2_t3868603641 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t2566974603_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline Func_2_t43203506 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline Func_2_t43203506 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(Func_2_t43203506 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
