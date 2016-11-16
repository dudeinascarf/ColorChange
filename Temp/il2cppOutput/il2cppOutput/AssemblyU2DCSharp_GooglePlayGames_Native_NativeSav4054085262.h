#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.Native.PInvoke.SnapshotManager
struct SnapshotManager_t2359319983;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata
struct NativeSnapshotMetadata_t3479575958;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t2072880178;
// System.Action
struct Action_t3771233898;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver
struct  NativeConflictResolver_t4054085262  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.SnapshotManager GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mManager
	SnapshotManager_t2359319983 * ___mManager_0;
	// System.String GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mConflictId
	String_t* ___mConflictId_1;
	// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mOriginal
	NativeSnapshotMetadata_t3479575958 * ___mOriginal_2;
	// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mUnmerged
	NativeSnapshotMetadata_t3479575958 * ___mUnmerged_3;
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mCompleteCallback
	Action_2_t2072880178 * ___mCompleteCallback_4;
	// System.Action GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mRetryFileOpen
	Action_t3771233898 * ___mRetryFileOpen_5;

public:
	inline static int32_t get_offset_of_mManager_0() { return static_cast<int32_t>(offsetof(NativeConflictResolver_t4054085262, ___mManager_0)); }
	inline SnapshotManager_t2359319983 * get_mManager_0() const { return ___mManager_0; }
	inline SnapshotManager_t2359319983 ** get_address_of_mManager_0() { return &___mManager_0; }
	inline void set_mManager_0(SnapshotManager_t2359319983 * value)
	{
		___mManager_0 = value;
		Il2CppCodeGenWriteBarrier(&___mManager_0, value);
	}

	inline static int32_t get_offset_of_mConflictId_1() { return static_cast<int32_t>(offsetof(NativeConflictResolver_t4054085262, ___mConflictId_1)); }
	inline String_t* get_mConflictId_1() const { return ___mConflictId_1; }
	inline String_t** get_address_of_mConflictId_1() { return &___mConflictId_1; }
	inline void set_mConflictId_1(String_t* value)
	{
		___mConflictId_1 = value;
		Il2CppCodeGenWriteBarrier(&___mConflictId_1, value);
	}

	inline static int32_t get_offset_of_mOriginal_2() { return static_cast<int32_t>(offsetof(NativeConflictResolver_t4054085262, ___mOriginal_2)); }
	inline NativeSnapshotMetadata_t3479575958 * get_mOriginal_2() const { return ___mOriginal_2; }
	inline NativeSnapshotMetadata_t3479575958 ** get_address_of_mOriginal_2() { return &___mOriginal_2; }
	inline void set_mOriginal_2(NativeSnapshotMetadata_t3479575958 * value)
	{
		___mOriginal_2 = value;
		Il2CppCodeGenWriteBarrier(&___mOriginal_2, value);
	}

	inline static int32_t get_offset_of_mUnmerged_3() { return static_cast<int32_t>(offsetof(NativeConflictResolver_t4054085262, ___mUnmerged_3)); }
	inline NativeSnapshotMetadata_t3479575958 * get_mUnmerged_3() const { return ___mUnmerged_3; }
	inline NativeSnapshotMetadata_t3479575958 ** get_address_of_mUnmerged_3() { return &___mUnmerged_3; }
	inline void set_mUnmerged_3(NativeSnapshotMetadata_t3479575958 * value)
	{
		___mUnmerged_3 = value;
		Il2CppCodeGenWriteBarrier(&___mUnmerged_3, value);
	}

	inline static int32_t get_offset_of_mCompleteCallback_4() { return static_cast<int32_t>(offsetof(NativeConflictResolver_t4054085262, ___mCompleteCallback_4)); }
	inline Action_2_t2072880178 * get_mCompleteCallback_4() const { return ___mCompleteCallback_4; }
	inline Action_2_t2072880178 ** get_address_of_mCompleteCallback_4() { return &___mCompleteCallback_4; }
	inline void set_mCompleteCallback_4(Action_2_t2072880178 * value)
	{
		___mCompleteCallback_4 = value;
		Il2CppCodeGenWriteBarrier(&___mCompleteCallback_4, value);
	}

	inline static int32_t get_offset_of_mRetryFileOpen_5() { return static_cast<int32_t>(offsetof(NativeConflictResolver_t4054085262, ___mRetryFileOpen_5)); }
	inline Action_t3771233898 * get_mRetryFileOpen_5() const { return ___mRetryFileOpen_5; }
	inline Action_t3771233898 ** get_address_of_mRetryFileOpen_5() { return &___mRetryFileOpen_5; }
	inline void set_mRetryFileOpen_5(Action_t3771233898 * value)
	{
		___mRetryFileOpen_5 = value;
		Il2CppCodeGenWriteBarrier(&___mRetryFileOpen_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
