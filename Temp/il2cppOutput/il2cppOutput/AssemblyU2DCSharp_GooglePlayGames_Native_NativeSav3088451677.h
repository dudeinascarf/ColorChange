﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t942269343;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeSavedGameClient/<ToOnGameThread>c__AnonStorey56
struct  U3CToOnGameThreadU3Ec__AnonStorey56_t3088451677  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.SavedGame.ConflictCallback GooglePlayGames.Native.NativeSavedGameClient/<ToOnGameThread>c__AnonStorey56::conflictCallback
	ConflictCallback_t942269343 * ___conflictCallback_0;

public:
	inline static int32_t get_offset_of_conflictCallback_0() { return static_cast<int32_t>(offsetof(U3CToOnGameThreadU3Ec__AnonStorey56_t3088451677, ___conflictCallback_0)); }
	inline ConflictCallback_t942269343 * get_conflictCallback_0() const { return ___conflictCallback_0; }
	inline ConflictCallback_t942269343 ** get_address_of_conflictCallback_0() { return &___conflictCallback_0; }
	inline void set_conflictCallback_0(ConflictCallback_t942269343 * value)
	{
		___conflictCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___conflictCallback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
