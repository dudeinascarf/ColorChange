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

#include "UnityEngine_UnityEngine_ScriptableObject2970544072.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AppAdvisory.social.LEADERBOARDIDS
struct  LEADERBOARDIDS_t4090313347  : public ScriptableObject_t2970544072
{
public:
	// System.String AppAdvisory.social.LEADERBOARDIDS::LEADERBOARDID_IOS
	String_t* ___LEADERBOARDID_IOS_2;
	// System.String AppAdvisory.social.LEADERBOARDIDS::LEADERBOARDID_ANDROID
	String_t* ___LEADERBOARDID_ANDROID_3;

public:
	inline static int32_t get_offset_of_LEADERBOARDID_IOS_2() { return static_cast<int32_t>(offsetof(LEADERBOARDIDS_t4090313347, ___LEADERBOARDID_IOS_2)); }
	inline String_t* get_LEADERBOARDID_IOS_2() const { return ___LEADERBOARDID_IOS_2; }
	inline String_t** get_address_of_LEADERBOARDID_IOS_2() { return &___LEADERBOARDID_IOS_2; }
	inline void set_LEADERBOARDID_IOS_2(String_t* value)
	{
		___LEADERBOARDID_IOS_2 = value;
		Il2CppCodeGenWriteBarrier(&___LEADERBOARDID_IOS_2, value);
	}

	inline static int32_t get_offset_of_LEADERBOARDID_ANDROID_3() { return static_cast<int32_t>(offsetof(LEADERBOARDIDS_t4090313347, ___LEADERBOARDID_ANDROID_3)); }
	inline String_t* get_LEADERBOARDID_ANDROID_3() const { return ___LEADERBOARDID_ANDROID_3; }
	inline String_t** get_address_of_LEADERBOARDID_ANDROID_3() { return &___LEADERBOARDID_ANDROID_3; }
	inline void set_LEADERBOARDID_ANDROID_3(String_t* value)
	{
		___LEADERBOARDID_ANDROID_3 = value;
		Il2CppCodeGenWriteBarrier(&___LEADERBOARDID_ANDROID_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
