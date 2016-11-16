#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t3624292130;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_t1732200103;
// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t4064039103;
// GooglePlayGames.BasicApi.IPlayGamesClient
struct IPlayGamesClient_t2528289561;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Boolean476798718.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGam4135364200.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.PlayGamesPlatform
struct  PlayGamesPlatform_t3624292130  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.PlayGamesPlatform::mConfiguration
	PlayGamesClientConfiguration_t4135364200  ___mConfiguration_3;
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesPlatform::mLocalUser
	PlayGamesLocalUser_t4064039103 * ___mLocalUser_4;
	// GooglePlayGames.BasicApi.IPlayGamesClient GooglePlayGames.PlayGamesPlatform::mClient
	Il2CppObject * ___mClient_5;
	// System.String GooglePlayGames.PlayGamesPlatform::mDefaultLbUi
	String_t* ___mDefaultLbUi_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GooglePlayGames.PlayGamesPlatform::mIdMap
	Dictionary_2_t827649927 * ___mIdMap_7;

public:
	inline static int32_t get_offset_of_mConfiguration_3() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t3624292130, ___mConfiguration_3)); }
	inline PlayGamesClientConfiguration_t4135364200  get_mConfiguration_3() const { return ___mConfiguration_3; }
	inline PlayGamesClientConfiguration_t4135364200 * get_address_of_mConfiguration_3() { return &___mConfiguration_3; }
	inline void set_mConfiguration_3(PlayGamesClientConfiguration_t4135364200  value)
	{
		___mConfiguration_3 = value;
	}

	inline static int32_t get_offset_of_mLocalUser_4() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t3624292130, ___mLocalUser_4)); }
	inline PlayGamesLocalUser_t4064039103 * get_mLocalUser_4() const { return ___mLocalUser_4; }
	inline PlayGamesLocalUser_t4064039103 ** get_address_of_mLocalUser_4() { return &___mLocalUser_4; }
	inline void set_mLocalUser_4(PlayGamesLocalUser_t4064039103 * value)
	{
		___mLocalUser_4 = value;
		Il2CppCodeGenWriteBarrier(&___mLocalUser_4, value);
	}

	inline static int32_t get_offset_of_mClient_5() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t3624292130, ___mClient_5)); }
	inline Il2CppObject * get_mClient_5() const { return ___mClient_5; }
	inline Il2CppObject ** get_address_of_mClient_5() { return &___mClient_5; }
	inline void set_mClient_5(Il2CppObject * value)
	{
		___mClient_5 = value;
		Il2CppCodeGenWriteBarrier(&___mClient_5, value);
	}

	inline static int32_t get_offset_of_mDefaultLbUi_6() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t3624292130, ___mDefaultLbUi_6)); }
	inline String_t* get_mDefaultLbUi_6() const { return ___mDefaultLbUi_6; }
	inline String_t** get_address_of_mDefaultLbUi_6() { return &___mDefaultLbUi_6; }
	inline void set_mDefaultLbUi_6(String_t* value)
	{
		___mDefaultLbUi_6 = value;
		Il2CppCodeGenWriteBarrier(&___mDefaultLbUi_6, value);
	}

	inline static int32_t get_offset_of_mIdMap_7() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t3624292130, ___mIdMap_7)); }
	inline Dictionary_2_t827649927 * get_mIdMap_7() const { return ___mIdMap_7; }
	inline Dictionary_2_t827649927 ** get_address_of_mIdMap_7() { return &___mIdMap_7; }
	inline void set_mIdMap_7(Dictionary_2_t827649927 * value)
	{
		___mIdMap_7 = value;
		Il2CppCodeGenWriteBarrier(&___mIdMap_7, value);
	}
};

struct PlayGamesPlatform_t3624292130_StaticFields
{
public:
	// GooglePlayGames.PlayGamesPlatform modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sInstance
	PlayGamesPlatform_t3624292130 * ___sInstance_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyInitializePending
	bool ___sNearbyInitializePending_1;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyConnectionClient
	Il2CppObject * ___sNearbyConnectionClient_2;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t3624292130_StaticFields, ___sInstance_0)); }
	inline PlayGamesPlatform_t3624292130 * get_sInstance_0() const { return ___sInstance_0; }
	inline PlayGamesPlatform_t3624292130 ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(PlayGamesPlatform_t3624292130 * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___sInstance_0, value);
	}

	inline static int32_t get_offset_of_sNearbyInitializePending_1() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t3624292130_StaticFields, ___sNearbyInitializePending_1)); }
	inline bool get_sNearbyInitializePending_1() const { return ___sNearbyInitializePending_1; }
	inline bool* get_address_of_sNearbyInitializePending_1() { return &___sNearbyInitializePending_1; }
	inline void set_sNearbyInitializePending_1(bool value)
	{
		___sNearbyInitializePending_1 = value;
	}

	inline static int32_t get_offset_of_sNearbyConnectionClient_2() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t3624292130_StaticFields, ___sNearbyConnectionClient_2)); }
	inline Il2CppObject * get_sNearbyConnectionClient_2() const { return ___sNearbyConnectionClient_2; }
	inline Il2CppObject ** get_address_of_sNearbyConnectionClient_2() { return &___sNearbyConnectionClient_2; }
	inline void set_sNearbyConnectionClient_2(Il2CppObject * value)
	{
		___sNearbyConnectionClient_2 = value;
		Il2CppCodeGenWriteBarrier(&___sNearbyConnectionClient_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
