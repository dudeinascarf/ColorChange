#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t2409308905;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t1377674964;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct  Builder_t1745712882  : public Il2CppObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mEnableSaveGames
	bool ___mEnableSaveGames_0;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequireGooglePlus
	bool ___mRequireGooglePlus_1;
	// System.Collections.Generic.List`1<System.String> GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mScopes
	List_1_t1375417109 * ___mScopes_2;
	// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mInvitationDelegate
	InvitationReceivedDelegate_t2409308905 * ___mInvitationDelegate_3;
	// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mMatchDelegate
	MatchDelegate_t1377674964 * ___mMatchDelegate_4;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRationale
	String_t* ___mRationale_5;

public:
	inline static int32_t get_offset_of_mEnableSaveGames_0() { return static_cast<int32_t>(offsetof(Builder_t1745712882, ___mEnableSaveGames_0)); }
	inline bool get_mEnableSaveGames_0() const { return ___mEnableSaveGames_0; }
	inline bool* get_address_of_mEnableSaveGames_0() { return &___mEnableSaveGames_0; }
	inline void set_mEnableSaveGames_0(bool value)
	{
		___mEnableSaveGames_0 = value;
	}

	inline static int32_t get_offset_of_mRequireGooglePlus_1() { return static_cast<int32_t>(offsetof(Builder_t1745712882, ___mRequireGooglePlus_1)); }
	inline bool get_mRequireGooglePlus_1() const { return ___mRequireGooglePlus_1; }
	inline bool* get_address_of_mRequireGooglePlus_1() { return &___mRequireGooglePlus_1; }
	inline void set_mRequireGooglePlus_1(bool value)
	{
		___mRequireGooglePlus_1 = value;
	}

	inline static int32_t get_offset_of_mScopes_2() { return static_cast<int32_t>(offsetof(Builder_t1745712882, ___mScopes_2)); }
	inline List_1_t1375417109 * get_mScopes_2() const { return ___mScopes_2; }
	inline List_1_t1375417109 ** get_address_of_mScopes_2() { return &___mScopes_2; }
	inline void set_mScopes_2(List_1_t1375417109 * value)
	{
		___mScopes_2 = value;
		Il2CppCodeGenWriteBarrier(&___mScopes_2, value);
	}

	inline static int32_t get_offset_of_mInvitationDelegate_3() { return static_cast<int32_t>(offsetof(Builder_t1745712882, ___mInvitationDelegate_3)); }
	inline InvitationReceivedDelegate_t2409308905 * get_mInvitationDelegate_3() const { return ___mInvitationDelegate_3; }
	inline InvitationReceivedDelegate_t2409308905 ** get_address_of_mInvitationDelegate_3() { return &___mInvitationDelegate_3; }
	inline void set_mInvitationDelegate_3(InvitationReceivedDelegate_t2409308905 * value)
	{
		___mInvitationDelegate_3 = value;
		Il2CppCodeGenWriteBarrier(&___mInvitationDelegate_3, value);
	}

	inline static int32_t get_offset_of_mMatchDelegate_4() { return static_cast<int32_t>(offsetof(Builder_t1745712882, ___mMatchDelegate_4)); }
	inline MatchDelegate_t1377674964 * get_mMatchDelegate_4() const { return ___mMatchDelegate_4; }
	inline MatchDelegate_t1377674964 ** get_address_of_mMatchDelegate_4() { return &___mMatchDelegate_4; }
	inline void set_mMatchDelegate_4(MatchDelegate_t1377674964 * value)
	{
		___mMatchDelegate_4 = value;
		Il2CppCodeGenWriteBarrier(&___mMatchDelegate_4, value);
	}

	inline static int32_t get_offset_of_mRationale_5() { return static_cast<int32_t>(offsetof(Builder_t1745712882, ___mRationale_5)); }
	inline String_t* get_mRationale_5() const { return ___mRationale_5; }
	inline String_t** get_address_of_mRationale_5() { return &___mRationale_5; }
	inline void set_mRationale_5(String_t* value)
	{
		___mRationale_5 = value;
		Il2CppCodeGenWriteBarrier(&___mRationale_5, value);
	}
};

struct Builder_t1745712882_StaticFields
{
public:
	// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::<>f__am$cache6
	InvitationReceivedDelegate_t2409308905 * ___U3CU3Ef__amU24cache6_6;
	// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::<>f__am$cache7
	MatchDelegate_t1377674964 * ___U3CU3Ef__amU24cache7_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(Builder_t1745712882_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline InvitationReceivedDelegate_t2409308905 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline InvitationReceivedDelegate_t2409308905 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(InvitationReceivedDelegate_t2409308905 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(Builder_t1745712882_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline MatchDelegate_t1377674964 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline MatchDelegate_t1377674964 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(MatchDelegate_t1377674964 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
