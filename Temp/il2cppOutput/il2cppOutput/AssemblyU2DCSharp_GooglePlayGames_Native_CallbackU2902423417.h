#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,System.Object,System.Object>
struct Action_3_t178818711;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.CallbackUtils/<ToOnGameThread>c__AnonStorey1B`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,System.Object,System.Object>
struct  U3CToOnGameThreadU3Ec__AnonStorey1B_3_t2902423417  : public Il2CppObject
{
public:
	// System.Action`3<T1,T2,T3> GooglePlayGames.Native.CallbackUtils/<ToOnGameThread>c__AnonStorey1B`3::toConvert
	Action_3_t178818711 * ___toConvert_0;

public:
	inline static int32_t get_offset_of_toConvert_0() { return static_cast<int32_t>(offsetof(U3CToOnGameThreadU3Ec__AnonStorey1B_3_t2902423417, ___toConvert_0)); }
	inline Action_3_t178818711 * get_toConvert_0() const { return ___toConvert_0; }
	inline Action_3_t178818711 ** get_address_of_toConvert_0() { return &___toConvert_0; }
	inline void set_toConvert_0(Action_3_t178818711 * value)
	{
		___toConvert_0 = value;
		Il2CppCodeGenWriteBarrier(&___toConvert_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
