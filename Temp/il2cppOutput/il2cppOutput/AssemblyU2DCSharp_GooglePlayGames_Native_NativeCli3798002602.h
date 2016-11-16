#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.IClientImpl
struct IClientImpl_t1458355702;
// System.Object
struct Il2CppObject;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t3828344078;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient
struct NativeRealtimeMultiplayerClient_t2043220689;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient
struct ISavedGameClient_t3735673347;
// GooglePlayGames.BasicApi.Events.IEventsClient
struct IEventsClient_t3804513627;
// GooglePlayGames.BasicApi.Quests.IQuestsClient
struct IQuestsClient_t519086643;
// GooglePlayGames.TokenClient
struct TokenClient_t401350470;
// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean>
struct Action_2_t3702216562;
// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Achievement>
struct Dictionary_2_t2082065547;
// GooglePlayGames.BasicApi.Multiplayer.Player
struct Player_t3727527619;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>
struct List_1_t800745875;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.String
struct String_t;
// System.Predicate`1<GooglePlayGames.BasicApi.Achievement>
struct Predicate_1_t872704060;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGam4135364200.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeClie518825337.h"
#include "mscorlib_System_UInt3224667981.h"
#include "mscorlib_System_Boolean476798718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient
struct  NativeClient_t3798002602  : public Il2CppObject
{
public:
	// GooglePlayGames.IClientImpl GooglePlayGames.Native.NativeClient::clientImpl
	Il2CppObject * ___clientImpl_0;
	// System.Object GooglePlayGames.Native.NativeClient::GameServicesLock
	Il2CppObject * ___GameServicesLock_1;
	// System.Object GooglePlayGames.Native.NativeClient::AuthStateLock
	Il2CppObject * ___AuthStateLock_2;
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.Native.NativeClient::mConfiguration
	PlayGamesClientConfiguration_t4135364200  ___mConfiguration_3;
	// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.NativeClient::mServices
	GameServices_t1862808700 * ___mServices_4;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mTurnBasedClient
	NativeTurnBasedMultiplayerClient_t3828344078 * ___mTurnBasedClient_5;
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mRealTimeClient
	NativeRealtimeMultiplayerClient_t2043220689 * ___mRealTimeClient_6;
	// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mSavedGameClient
	Il2CppObject * ___mSavedGameClient_7;
	// GooglePlayGames.BasicApi.Events.IEventsClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mEventsClient
	Il2CppObject * ___mEventsClient_8;
	// GooglePlayGames.BasicApi.Quests.IQuestsClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mQuestsClient
	Il2CppObject * ___mQuestsClient_9;
	// GooglePlayGames.TokenClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mTokenClient
	Il2CppObject * ___mTokenClient_10;
	// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mInvitationDelegate
	Action_2_t3702216562 * ___mInvitationDelegate_11;
	// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Achievement> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mAchievements
	Dictionary_2_t2082065547 * ___mAchievements_12;
	// GooglePlayGames.BasicApi.Multiplayer.Player modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mUser
	Player_t3727527619 * ___mUser_13;
	// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mFriends
	List_1_t800745875 * ___mFriends_14;
	// System.Action`1<System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mPendingAuthCallbacks
	Action_1_t872614854 * ___mPendingAuthCallbacks_15;
	// System.Action`1<System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mSilentAuthCallbacks
	Action_1_t872614854 * ___mSilentAuthCallbacks_16;
	// GooglePlayGames.Native.NativeClient/AuthState modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mAuthState
	int32_t ___mAuthState_17;
	// System.UInt32 modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mAuthGeneration
	uint32_t ___mAuthGeneration_18;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mSilentAuthFailed
	bool ___mSilentAuthFailed_19;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::friendsLoading
	bool ___friendsLoading_20;
	// System.String GooglePlayGames.Native.NativeClient::rationale
	String_t* ___rationale_21;
	// System.Int32 GooglePlayGames.Native.NativeClient::webclientWarningFreq
	int32_t ___webclientWarningFreq_22;
	// System.Int32 GooglePlayGames.Native.NativeClient::noWebClientIdWarningCount
	int32_t ___noWebClientIdWarningCount_23;

public:
	inline static int32_t get_offset_of_clientImpl_0() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___clientImpl_0)); }
	inline Il2CppObject * get_clientImpl_0() const { return ___clientImpl_0; }
	inline Il2CppObject ** get_address_of_clientImpl_0() { return &___clientImpl_0; }
	inline void set_clientImpl_0(Il2CppObject * value)
	{
		___clientImpl_0 = value;
		Il2CppCodeGenWriteBarrier(&___clientImpl_0, value);
	}

	inline static int32_t get_offset_of_GameServicesLock_1() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___GameServicesLock_1)); }
	inline Il2CppObject * get_GameServicesLock_1() const { return ___GameServicesLock_1; }
	inline Il2CppObject ** get_address_of_GameServicesLock_1() { return &___GameServicesLock_1; }
	inline void set_GameServicesLock_1(Il2CppObject * value)
	{
		___GameServicesLock_1 = value;
		Il2CppCodeGenWriteBarrier(&___GameServicesLock_1, value);
	}

	inline static int32_t get_offset_of_AuthStateLock_2() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___AuthStateLock_2)); }
	inline Il2CppObject * get_AuthStateLock_2() const { return ___AuthStateLock_2; }
	inline Il2CppObject ** get_address_of_AuthStateLock_2() { return &___AuthStateLock_2; }
	inline void set_AuthStateLock_2(Il2CppObject * value)
	{
		___AuthStateLock_2 = value;
		Il2CppCodeGenWriteBarrier(&___AuthStateLock_2, value);
	}

	inline static int32_t get_offset_of_mConfiguration_3() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mConfiguration_3)); }
	inline PlayGamesClientConfiguration_t4135364200  get_mConfiguration_3() const { return ___mConfiguration_3; }
	inline PlayGamesClientConfiguration_t4135364200 * get_address_of_mConfiguration_3() { return &___mConfiguration_3; }
	inline void set_mConfiguration_3(PlayGamesClientConfiguration_t4135364200  value)
	{
		___mConfiguration_3 = value;
	}

	inline static int32_t get_offset_of_mServices_4() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mServices_4)); }
	inline GameServices_t1862808700 * get_mServices_4() const { return ___mServices_4; }
	inline GameServices_t1862808700 ** get_address_of_mServices_4() { return &___mServices_4; }
	inline void set_mServices_4(GameServices_t1862808700 * value)
	{
		___mServices_4 = value;
		Il2CppCodeGenWriteBarrier(&___mServices_4, value);
	}

	inline static int32_t get_offset_of_mTurnBasedClient_5() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mTurnBasedClient_5)); }
	inline NativeTurnBasedMultiplayerClient_t3828344078 * get_mTurnBasedClient_5() const { return ___mTurnBasedClient_5; }
	inline NativeTurnBasedMultiplayerClient_t3828344078 ** get_address_of_mTurnBasedClient_5() { return &___mTurnBasedClient_5; }
	inline void set_mTurnBasedClient_5(NativeTurnBasedMultiplayerClient_t3828344078 * value)
	{
		___mTurnBasedClient_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTurnBasedClient_5, value);
	}

	inline static int32_t get_offset_of_mRealTimeClient_6() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mRealTimeClient_6)); }
	inline NativeRealtimeMultiplayerClient_t2043220689 * get_mRealTimeClient_6() const { return ___mRealTimeClient_6; }
	inline NativeRealtimeMultiplayerClient_t2043220689 ** get_address_of_mRealTimeClient_6() { return &___mRealTimeClient_6; }
	inline void set_mRealTimeClient_6(NativeRealtimeMultiplayerClient_t2043220689 * value)
	{
		___mRealTimeClient_6 = value;
		Il2CppCodeGenWriteBarrier(&___mRealTimeClient_6, value);
	}

	inline static int32_t get_offset_of_mSavedGameClient_7() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mSavedGameClient_7)); }
	inline Il2CppObject * get_mSavedGameClient_7() const { return ___mSavedGameClient_7; }
	inline Il2CppObject ** get_address_of_mSavedGameClient_7() { return &___mSavedGameClient_7; }
	inline void set_mSavedGameClient_7(Il2CppObject * value)
	{
		___mSavedGameClient_7 = value;
		Il2CppCodeGenWriteBarrier(&___mSavedGameClient_7, value);
	}

	inline static int32_t get_offset_of_mEventsClient_8() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mEventsClient_8)); }
	inline Il2CppObject * get_mEventsClient_8() const { return ___mEventsClient_8; }
	inline Il2CppObject ** get_address_of_mEventsClient_8() { return &___mEventsClient_8; }
	inline void set_mEventsClient_8(Il2CppObject * value)
	{
		___mEventsClient_8 = value;
		Il2CppCodeGenWriteBarrier(&___mEventsClient_8, value);
	}

	inline static int32_t get_offset_of_mQuestsClient_9() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mQuestsClient_9)); }
	inline Il2CppObject * get_mQuestsClient_9() const { return ___mQuestsClient_9; }
	inline Il2CppObject ** get_address_of_mQuestsClient_9() { return &___mQuestsClient_9; }
	inline void set_mQuestsClient_9(Il2CppObject * value)
	{
		___mQuestsClient_9 = value;
		Il2CppCodeGenWriteBarrier(&___mQuestsClient_9, value);
	}

	inline static int32_t get_offset_of_mTokenClient_10() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mTokenClient_10)); }
	inline Il2CppObject * get_mTokenClient_10() const { return ___mTokenClient_10; }
	inline Il2CppObject ** get_address_of_mTokenClient_10() { return &___mTokenClient_10; }
	inline void set_mTokenClient_10(Il2CppObject * value)
	{
		___mTokenClient_10 = value;
		Il2CppCodeGenWriteBarrier(&___mTokenClient_10, value);
	}

	inline static int32_t get_offset_of_mInvitationDelegate_11() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mInvitationDelegate_11)); }
	inline Action_2_t3702216562 * get_mInvitationDelegate_11() const { return ___mInvitationDelegate_11; }
	inline Action_2_t3702216562 ** get_address_of_mInvitationDelegate_11() { return &___mInvitationDelegate_11; }
	inline void set_mInvitationDelegate_11(Action_2_t3702216562 * value)
	{
		___mInvitationDelegate_11 = value;
		Il2CppCodeGenWriteBarrier(&___mInvitationDelegate_11, value);
	}

	inline static int32_t get_offset_of_mAchievements_12() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mAchievements_12)); }
	inline Dictionary_2_t2082065547 * get_mAchievements_12() const { return ___mAchievements_12; }
	inline Dictionary_2_t2082065547 ** get_address_of_mAchievements_12() { return &___mAchievements_12; }
	inline void set_mAchievements_12(Dictionary_2_t2082065547 * value)
	{
		___mAchievements_12 = value;
		Il2CppCodeGenWriteBarrier(&___mAchievements_12, value);
	}

	inline static int32_t get_offset_of_mUser_13() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mUser_13)); }
	inline Player_t3727527619 * get_mUser_13() const { return ___mUser_13; }
	inline Player_t3727527619 ** get_address_of_mUser_13() { return &___mUser_13; }
	inline void set_mUser_13(Player_t3727527619 * value)
	{
		___mUser_13 = value;
		Il2CppCodeGenWriteBarrier(&___mUser_13, value);
	}

	inline static int32_t get_offset_of_mFriends_14() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mFriends_14)); }
	inline List_1_t800745875 * get_mFriends_14() const { return ___mFriends_14; }
	inline List_1_t800745875 ** get_address_of_mFriends_14() { return &___mFriends_14; }
	inline void set_mFriends_14(List_1_t800745875 * value)
	{
		___mFriends_14 = value;
		Il2CppCodeGenWriteBarrier(&___mFriends_14, value);
	}

	inline static int32_t get_offset_of_mPendingAuthCallbacks_15() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mPendingAuthCallbacks_15)); }
	inline Action_1_t872614854 * get_mPendingAuthCallbacks_15() const { return ___mPendingAuthCallbacks_15; }
	inline Action_1_t872614854 ** get_address_of_mPendingAuthCallbacks_15() { return &___mPendingAuthCallbacks_15; }
	inline void set_mPendingAuthCallbacks_15(Action_1_t872614854 * value)
	{
		___mPendingAuthCallbacks_15 = value;
		Il2CppCodeGenWriteBarrier(&___mPendingAuthCallbacks_15, value);
	}

	inline static int32_t get_offset_of_mSilentAuthCallbacks_16() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mSilentAuthCallbacks_16)); }
	inline Action_1_t872614854 * get_mSilentAuthCallbacks_16() const { return ___mSilentAuthCallbacks_16; }
	inline Action_1_t872614854 ** get_address_of_mSilentAuthCallbacks_16() { return &___mSilentAuthCallbacks_16; }
	inline void set_mSilentAuthCallbacks_16(Action_1_t872614854 * value)
	{
		___mSilentAuthCallbacks_16 = value;
		Il2CppCodeGenWriteBarrier(&___mSilentAuthCallbacks_16, value);
	}

	inline static int32_t get_offset_of_mAuthState_17() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mAuthState_17)); }
	inline int32_t get_mAuthState_17() const { return ___mAuthState_17; }
	inline int32_t* get_address_of_mAuthState_17() { return &___mAuthState_17; }
	inline void set_mAuthState_17(int32_t value)
	{
		___mAuthState_17 = value;
	}

	inline static int32_t get_offset_of_mAuthGeneration_18() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mAuthGeneration_18)); }
	inline uint32_t get_mAuthGeneration_18() const { return ___mAuthGeneration_18; }
	inline uint32_t* get_address_of_mAuthGeneration_18() { return &___mAuthGeneration_18; }
	inline void set_mAuthGeneration_18(uint32_t value)
	{
		___mAuthGeneration_18 = value;
	}

	inline static int32_t get_offset_of_mSilentAuthFailed_19() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___mSilentAuthFailed_19)); }
	inline bool get_mSilentAuthFailed_19() const { return ___mSilentAuthFailed_19; }
	inline bool* get_address_of_mSilentAuthFailed_19() { return &___mSilentAuthFailed_19; }
	inline void set_mSilentAuthFailed_19(bool value)
	{
		___mSilentAuthFailed_19 = value;
	}

	inline static int32_t get_offset_of_friendsLoading_20() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___friendsLoading_20)); }
	inline bool get_friendsLoading_20() const { return ___friendsLoading_20; }
	inline bool* get_address_of_friendsLoading_20() { return &___friendsLoading_20; }
	inline void set_friendsLoading_20(bool value)
	{
		___friendsLoading_20 = value;
	}

	inline static int32_t get_offset_of_rationale_21() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___rationale_21)); }
	inline String_t* get_rationale_21() const { return ___rationale_21; }
	inline String_t** get_address_of_rationale_21() { return &___rationale_21; }
	inline void set_rationale_21(String_t* value)
	{
		___rationale_21 = value;
		Il2CppCodeGenWriteBarrier(&___rationale_21, value);
	}

	inline static int32_t get_offset_of_webclientWarningFreq_22() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___webclientWarningFreq_22)); }
	inline int32_t get_webclientWarningFreq_22() const { return ___webclientWarningFreq_22; }
	inline int32_t* get_address_of_webclientWarningFreq_22() { return &___webclientWarningFreq_22; }
	inline void set_webclientWarningFreq_22(int32_t value)
	{
		___webclientWarningFreq_22 = value;
	}

	inline static int32_t get_offset_of_noWebClientIdWarningCount_23() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602, ___noWebClientIdWarningCount_23)); }
	inline int32_t get_noWebClientIdWarningCount_23() const { return ___noWebClientIdWarningCount_23; }
	inline int32_t* get_address_of_noWebClientIdWarningCount_23() { return &___noWebClientIdWarningCount_23; }
	inline void set_noWebClientIdWarningCount_23(int32_t value)
	{
		___noWebClientIdWarningCount_23 = value;
	}
};

struct NativeClient_t3798002602_StaticFields
{
public:
	// System.Predicate`1<GooglePlayGames.BasicApi.Achievement> GooglePlayGames.Native.NativeClient::<>f__am$cache18
	Predicate_1_t872704060 * ___U3CU3Ef__amU24cache18_24;
	// System.Predicate`1<GooglePlayGames.BasicApi.Achievement> GooglePlayGames.Native.NativeClient::<>f__am$cache19
	Predicate_1_t872704060 * ___U3CU3Ef__amU24cache19_25;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache18_24() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602_StaticFields, ___U3CU3Ef__amU24cache18_24)); }
	inline Predicate_1_t872704060 * get_U3CU3Ef__amU24cache18_24() const { return ___U3CU3Ef__amU24cache18_24; }
	inline Predicate_1_t872704060 ** get_address_of_U3CU3Ef__amU24cache18_24() { return &___U3CU3Ef__amU24cache18_24; }
	inline void set_U3CU3Ef__amU24cache18_24(Predicate_1_t872704060 * value)
	{
		___U3CU3Ef__amU24cache18_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache18_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache19_25() { return static_cast<int32_t>(offsetof(NativeClient_t3798002602_StaticFields, ___U3CU3Ef__amU24cache19_25)); }
	inline Predicate_1_t872704060 * get_U3CU3Ef__amU24cache19_25() const { return ___U3CU3Ef__amU24cache19_25; }
	inline Predicate_1_t872704060 ** get_address_of_U3CU3Ef__amU24cache19_25() { return &___U3CU3Ef__amU24cache19_25; }
	inline void set_U3CU3Ef__amU24cache19_25(Predicate_1_t872704060 * value)
	{
		___U3CU3Ef__amU24cache19_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache19_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
