#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`3<GooglePlayGames.BasicApi.Quests.QuestClaimMilestoneStatus,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>
struct Action_3_t2040057952;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeQuestClient/<ClaimMilestone>c__AnonStorey3C
struct  U3CClaimMilestoneU3Ec__AnonStorey3C_t2177446867  : public Il2CppObject
{
public:
	// System.Action`3<GooglePlayGames.BasicApi.Quests.QuestClaimMilestoneStatus,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone> GooglePlayGames.Native.NativeQuestClient/<ClaimMilestone>c__AnonStorey3C::callback
	Action_3_t2040057952 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CClaimMilestoneU3Ec__AnonStorey3C_t2177446867, ___callback_0)); }
	inline Action_3_t2040057952 * get_callback_0() const { return ___callback_0; }
	inline Action_3_t2040057952 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_3_t2040057952 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
