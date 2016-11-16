#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Byte[]>
struct Action_2_t2751370656;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeSavedGameClient/<ReadBinaryData>c__AnonStorey5A
struct  U3CReadBinaryDataU3Ec__AnonStorey5A_t529588723  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Byte[]> GooglePlayGames.Native.NativeSavedGameClient/<ReadBinaryData>c__AnonStorey5A::completedCallback
	Action_2_t2751370656 * ___completedCallback_0;

public:
	inline static int32_t get_offset_of_completedCallback_0() { return static_cast<int32_t>(offsetof(U3CReadBinaryDataU3Ec__AnonStorey5A_t529588723, ___completedCallback_0)); }
	inline Action_2_t2751370656 * get_completedCallback_0() const { return ___completedCallback_0; }
	inline Action_2_t2751370656 ** get_address_of_completedCallback_0() { return &___completedCallback_0; }
	inline void set_completedCallback_0(Action_2_t2751370656 * value)
	{
		___completedCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___completedCallback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
