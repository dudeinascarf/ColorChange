#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t4054002952;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t2409308905;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t1377674964;
// System.String
struct String_t;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGam4135364200.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct  PlayGamesClientConfiguration_t4135364200 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mEnableSavedGames
	bool ___mEnableSavedGames_1;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequireGooglePlus
	bool ___mRequireGooglePlus_2;
	// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mScopes
	StringU5BU5D_t4054002952* ___mScopes_3;
	// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mInvitationDelegate
	InvitationReceivedDelegate_t2409308905 * ___mInvitationDelegate_4;
	// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mMatchDelegate
	MatchDelegate_t1377674964 * ___mMatchDelegate_5;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mPermissionRationale
	String_t* ___mPermissionRationale_6;

public:
	inline static int32_t get_offset_of_mEnableSavedGames_1() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t4135364200, ___mEnableSavedGames_1)); }
	inline bool get_mEnableSavedGames_1() const { return ___mEnableSavedGames_1; }
	inline bool* get_address_of_mEnableSavedGames_1() { return &___mEnableSavedGames_1; }
	inline void set_mEnableSavedGames_1(bool value)
	{
		___mEnableSavedGames_1 = value;
	}

	inline static int32_t get_offset_of_mRequireGooglePlus_2() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t4135364200, ___mRequireGooglePlus_2)); }
	inline bool get_mRequireGooglePlus_2() const { return ___mRequireGooglePlus_2; }
	inline bool* get_address_of_mRequireGooglePlus_2() { return &___mRequireGooglePlus_2; }
	inline void set_mRequireGooglePlus_2(bool value)
	{
		___mRequireGooglePlus_2 = value;
	}

	inline static int32_t get_offset_of_mScopes_3() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t4135364200, ___mScopes_3)); }
	inline StringU5BU5D_t4054002952* get_mScopes_3() const { return ___mScopes_3; }
	inline StringU5BU5D_t4054002952** get_address_of_mScopes_3() { return &___mScopes_3; }
	inline void set_mScopes_3(StringU5BU5D_t4054002952* value)
	{
		___mScopes_3 = value;
		Il2CppCodeGenWriteBarrier(&___mScopes_3, value);
	}

	inline static int32_t get_offset_of_mInvitationDelegate_4() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t4135364200, ___mInvitationDelegate_4)); }
	inline InvitationReceivedDelegate_t2409308905 * get_mInvitationDelegate_4() const { return ___mInvitationDelegate_4; }
	inline InvitationReceivedDelegate_t2409308905 ** get_address_of_mInvitationDelegate_4() { return &___mInvitationDelegate_4; }
	inline void set_mInvitationDelegate_4(InvitationReceivedDelegate_t2409308905 * value)
	{
		___mInvitationDelegate_4 = value;
		Il2CppCodeGenWriteBarrier(&___mInvitationDelegate_4, value);
	}

	inline static int32_t get_offset_of_mMatchDelegate_5() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t4135364200, ___mMatchDelegate_5)); }
	inline MatchDelegate_t1377674964 * get_mMatchDelegate_5() const { return ___mMatchDelegate_5; }
	inline MatchDelegate_t1377674964 ** get_address_of_mMatchDelegate_5() { return &___mMatchDelegate_5; }
	inline void set_mMatchDelegate_5(MatchDelegate_t1377674964 * value)
	{
		___mMatchDelegate_5 = value;
		Il2CppCodeGenWriteBarrier(&___mMatchDelegate_5, value);
	}

	inline static int32_t get_offset_of_mPermissionRationale_6() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t4135364200, ___mPermissionRationale_6)); }
	inline String_t* get_mPermissionRationale_6() const { return ___mPermissionRationale_6; }
	inline String_t** get_address_of_mPermissionRationale_6() { return &___mPermissionRationale_6; }
	inline void set_mPermissionRationale_6(String_t* value)
	{
		___mPermissionRationale_6 = value;
		Il2CppCodeGenWriteBarrier(&___mPermissionRationale_6, value);
	}
};

struct PlayGamesClientConfiguration_t4135364200_StaticFields
{
public:
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration::DefaultConfiguration
	PlayGamesClientConfiguration_t4135364200  ___DefaultConfiguration_0;

public:
	inline static int32_t get_offset_of_DefaultConfiguration_0() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t4135364200_StaticFields, ___DefaultConfiguration_0)); }
	inline PlayGamesClientConfiguration_t4135364200  get_DefaultConfiguration_0() const { return ___DefaultConfiguration_0; }
	inline PlayGamesClientConfiguration_t4135364200 * get_address_of_DefaultConfiguration_0() { return &___DefaultConfiguration_0; }
	inline void set_DefaultConfiguration_0(PlayGamesClientConfiguration_t4135364200  value)
	{
		___DefaultConfiguration_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t4135364200_marshaled_pinvoke
{
	int32_t ___mEnableSavedGames_1;
	int32_t ___mRequireGooglePlus_2;
	char** ___mScopes_3;
	Il2CppMethodPointer ___mInvitationDelegate_4;
	Il2CppMethodPointer ___mMatchDelegate_5;
	char* ___mPermissionRationale_6;
};
// Native definition for marshalling of: GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t4135364200_marshaled_com
{
	int32_t ___mEnableSavedGames_1;
	int32_t ___mRequireGooglePlus_2;
	Il2CppChar** ___mScopes_3;
	Il2CppMethodPointer ___mInvitationDelegate_4;
	Il2CppMethodPointer ___mMatchDelegate_5;
	Il2CppChar* ___mPermissionRationale_6;
};
