#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AppAdvisory.social.LEADERBOARDIDS
struct LEADERBOARDIDS_t4090313347;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AppAdvisory.social.LeaderboardInit
struct  LeaderboardInit_t2461464827  : public MonoBehaviour_t667441552
{
public:
	// AppAdvisory.social.LEADERBOARDIDS AppAdvisory.social.LeaderboardInit::leaderboardIds
	LEADERBOARDIDS_t4090313347 * ___leaderboardIds_2;

public:
	inline static int32_t get_offset_of_leaderboardIds_2() { return static_cast<int32_t>(offsetof(LeaderboardInit_t2461464827, ___leaderboardIds_2)); }
	inline LEADERBOARDIDS_t4090313347 * get_leaderboardIds_2() const { return ___leaderboardIds_2; }
	inline LEADERBOARDIDS_t4090313347 ** get_address_of_leaderboardIds_2() { return &___leaderboardIds_2; }
	inline void set_leaderboardIds_2(LEADERBOARDIDS_t4090313347 * value)
	{
		___leaderboardIds_2 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboardIds_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
