﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GooglePlayGames.BasicApi.Quests.QuestAcceptStatus,GooglePlayGames.BasicApi.Quests.IQuest>
struct Action_2_t2211148282;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeQuestClient/<Accept>c__AnonStorey3B
struct  U3CAcceptU3Ec__AnonStorey3B_t1936577094  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.Quests.QuestAcceptStatus,GooglePlayGames.BasicApi.Quests.IQuest> GooglePlayGames.Native.NativeQuestClient/<Accept>c__AnonStorey3B::callback
	Action_2_t2211148282 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CAcceptU3Ec__AnonStorey3B_t1936577094, ___callback_0)); }
	inline Action_2_t2211148282 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t2211148282 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t2211148282 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
