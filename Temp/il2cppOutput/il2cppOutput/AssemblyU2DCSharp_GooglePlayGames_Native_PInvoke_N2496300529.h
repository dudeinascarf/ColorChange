#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.Native.PInvoke.NativeQuestMilestone
struct NativeQuestMilestone_t2033850801;

#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_B2237584300.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.NativeQuest
struct  NativeQuest_t2496300529  : public BaseReferenceHolder_t2237584300
{
public:
	// GooglePlayGames.Native.PInvoke.NativeQuestMilestone modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.PInvoke.NativeQuest::mCachedMilestone
	NativeQuestMilestone_t2033850801 * ___mCachedMilestone_2;

public:
	inline static int32_t get_offset_of_mCachedMilestone_2() { return static_cast<int32_t>(offsetof(NativeQuest_t2496300529, ___mCachedMilestone_2)); }
	inline NativeQuestMilestone_t2033850801 * get_mCachedMilestone_2() const { return ___mCachedMilestone_2; }
	inline NativeQuestMilestone_t2033850801 ** get_address_of_mCachedMilestone_2() { return &___mCachedMilestone_2; }
	inline void set_mCachedMilestone_2(NativeQuestMilestone_t2033850801 * value)
	{
		___mCachedMilestone_2 = value;
		Il2CppCodeGenWriteBarrier(&___mCachedMilestone_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
