﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// GooglePlayGames.Native.NativeClient
struct NativeClient_t3798002602;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<IncrementAchievement>c__AnonStorey31
struct  U3CIncrementAchievementU3Ec__AnonStorey31_t2732920467  : public Il2CppObject
{
public:
	// System.String GooglePlayGames.Native.NativeClient/<IncrementAchievement>c__AnonStorey31::achId
	String_t* ___achId_0;
	// System.Action`1<System.Boolean> GooglePlayGames.Native.NativeClient/<IncrementAchievement>c__AnonStorey31::callback
	Action_1_t872614854 * ___callback_1;
	// GooglePlayGames.Native.NativeClient GooglePlayGames.Native.NativeClient/<IncrementAchievement>c__AnonStorey31::<>f__this
	NativeClient_t3798002602 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_achId_0() { return static_cast<int32_t>(offsetof(U3CIncrementAchievementU3Ec__AnonStorey31_t2732920467, ___achId_0)); }
	inline String_t* get_achId_0() const { return ___achId_0; }
	inline String_t** get_address_of_achId_0() { return &___achId_0; }
	inline void set_achId_0(String_t* value)
	{
		___achId_0 = value;
		Il2CppCodeGenWriteBarrier(&___achId_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CIncrementAchievementU3Ec__AnonStorey31_t2732920467, ___callback_1)); }
	inline Action_1_t872614854 * get_callback_1() const { return ___callback_1; }
	inline Action_1_t872614854 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_t872614854 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CIncrementAchievementU3Ec__AnonStorey31_t2732920467, ___U3CU3Ef__this_2)); }
	inline NativeClient_t3798002602 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline NativeClient_t3798002602 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(NativeClient_t3798002602 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif