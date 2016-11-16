#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Regex
struct Regex_t2161232213;
// GooglePlayGames.Native.PInvoke.SnapshotManager
struct SnapshotManager_t2359319983;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeSavedGameClient
struct  NativeSavedGameClient_t419666555  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.SnapshotManager GooglePlayGames.Native.NativeSavedGameClient::mSnapshotManager
	SnapshotManager_t2359319983 * ___mSnapshotManager_1;

public:
	inline static int32_t get_offset_of_mSnapshotManager_1() { return static_cast<int32_t>(offsetof(NativeSavedGameClient_t419666555, ___mSnapshotManager_1)); }
	inline SnapshotManager_t2359319983 * get_mSnapshotManager_1() const { return ___mSnapshotManager_1; }
	inline SnapshotManager_t2359319983 ** get_address_of_mSnapshotManager_1() { return &___mSnapshotManager_1; }
	inline void set_mSnapshotManager_1(SnapshotManager_t2359319983 * value)
	{
		___mSnapshotManager_1 = value;
		Il2CppCodeGenWriteBarrier(&___mSnapshotManager_1, value);
	}
};

struct NativeSavedGameClient_t419666555_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex GooglePlayGames.Native.NativeSavedGameClient::ValidFilenameRegex
	Regex_t2161232213 * ___ValidFilenameRegex_0;

public:
	inline static int32_t get_offset_of_ValidFilenameRegex_0() { return static_cast<int32_t>(offsetof(NativeSavedGameClient_t419666555_StaticFields, ___ValidFilenameRegex_0)); }
	inline Regex_t2161232213 * get_ValidFilenameRegex_0() const { return ___ValidFilenameRegex_0; }
	inline Regex_t2161232213 ** get_address_of_ValidFilenameRegex_0() { return &___ValidFilenameRegex_0; }
	inline void set_ValidFilenameRegex_0(Regex_t2161232213 * value)
	{
		___ValidFilenameRegex_0 = value;
		Il2CppCodeGenWriteBarrier(&___ValidFilenameRegex_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
