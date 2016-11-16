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
// System.String
struct String_t;
// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_t60064856;

#include "AssemblyU2DCSharp_GooglePlayGames_PlayGamesUserPro4293397255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.PlayGamesLocalUser
struct  PlayGamesLocalUser_t4064039103  : public PlayGamesUserProfile_t4293397255
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesLocalUser::mPlatform
	PlayGamesPlatform_t3624292130 * ___mPlatform_5;
	// System.String GooglePlayGames.PlayGamesLocalUser::emailAddress
	String_t* ___emailAddress_6;
	// GooglePlayGames.BasicApi.PlayerStats GooglePlayGames.PlayGamesLocalUser::mStats
	PlayerStats_t60064856 * ___mStats_7;

public:
	inline static int32_t get_offset_of_mPlatform_5() { return static_cast<int32_t>(offsetof(PlayGamesLocalUser_t4064039103, ___mPlatform_5)); }
	inline PlayGamesPlatform_t3624292130 * get_mPlatform_5() const { return ___mPlatform_5; }
	inline PlayGamesPlatform_t3624292130 ** get_address_of_mPlatform_5() { return &___mPlatform_5; }
	inline void set_mPlatform_5(PlayGamesPlatform_t3624292130 * value)
	{
		___mPlatform_5 = value;
		Il2CppCodeGenWriteBarrier(&___mPlatform_5, value);
	}

	inline static int32_t get_offset_of_emailAddress_6() { return static_cast<int32_t>(offsetof(PlayGamesLocalUser_t4064039103, ___emailAddress_6)); }
	inline String_t* get_emailAddress_6() const { return ___emailAddress_6; }
	inline String_t** get_address_of_emailAddress_6() { return &___emailAddress_6; }
	inline void set_emailAddress_6(String_t* value)
	{
		___emailAddress_6 = value;
		Il2CppCodeGenWriteBarrier(&___emailAddress_6, value);
	}

	inline static int32_t get_offset_of_mStats_7() { return static_cast<int32_t>(offsetof(PlayGamesLocalUser_t4064039103, ___mStats_7)); }
	inline PlayerStats_t60064856 * get_mStats_7() const { return ___mStats_7; }
	inline PlayerStats_t60064856 ** get_address_of_mStats_7() { return &___mStats_7; }
	inline void set_mStats_7(PlayerStats_t60064856 * value)
	{
		___mStats_7 = value;
		Il2CppCodeGenWriteBarrier(&___mStats_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
