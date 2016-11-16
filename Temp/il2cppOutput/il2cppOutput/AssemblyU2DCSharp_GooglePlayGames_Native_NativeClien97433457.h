#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>
struct Action_1_t3647501372;
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_t3251685236;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<LoadAchievements>c__AnonStorey2D
struct  U3CLoadAchievementsU3Ec__AnonStorey2D_t97433457  : public Il2CppObject
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Achievement[]> GooglePlayGames.Native.NativeClient/<LoadAchievements>c__AnonStorey2D::callback
	Action_1_t3647501372 * ___callback_0;
	// GooglePlayGames.BasicApi.Achievement[] GooglePlayGames.Native.NativeClient/<LoadAchievements>c__AnonStorey2D::data
	AchievementU5BU5D_t3251685236* ___data_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CLoadAchievementsU3Ec__AnonStorey2D_t97433457, ___callback_0)); }
	inline Action_1_t3647501372 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t3647501372 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t3647501372 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3CLoadAchievementsU3Ec__AnonStorey2D_t97433457, ___data_1)); }
	inline AchievementU5BU5D_t3251685236* get_data_1() const { return ___data_1; }
	inline AchievementU5BU5D_t3251685236** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(AchievementU5BU5D_t3251685236* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
