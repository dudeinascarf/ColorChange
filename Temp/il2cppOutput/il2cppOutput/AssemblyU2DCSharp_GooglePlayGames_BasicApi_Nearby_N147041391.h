﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t914279838;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct  NearbyConnectionConfiguration_t147041391 
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mInitializationCallback
	Action_1_t914279838 * ___mInitializationCallback_2;
	// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mLocalClientId
	int64_t ___mLocalClientId_3;

public:
	inline static int32_t get_offset_of_mInitializationCallback_2() { return static_cast<int32_t>(offsetof(NearbyConnectionConfiguration_t147041391, ___mInitializationCallback_2)); }
	inline Action_1_t914279838 * get_mInitializationCallback_2() const { return ___mInitializationCallback_2; }
	inline Action_1_t914279838 ** get_address_of_mInitializationCallback_2() { return &___mInitializationCallback_2; }
	inline void set_mInitializationCallback_2(Action_1_t914279838 * value)
	{
		___mInitializationCallback_2 = value;
		Il2CppCodeGenWriteBarrier(&___mInitializationCallback_2, value);
	}

	inline static int32_t get_offset_of_mLocalClientId_3() { return static_cast<int32_t>(offsetof(NearbyConnectionConfiguration_t147041391, ___mLocalClientId_3)); }
	inline int64_t get_mLocalClientId_3() const { return ___mLocalClientId_3; }
	inline int64_t* get_address_of_mLocalClientId_3() { return &___mLocalClientId_3; }
	inline void set_mLocalClientId_3(int64_t value)
	{
		___mLocalClientId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t147041391_marshaled_pinvoke
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};
// Native definition for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t147041391_marshaled_com
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};