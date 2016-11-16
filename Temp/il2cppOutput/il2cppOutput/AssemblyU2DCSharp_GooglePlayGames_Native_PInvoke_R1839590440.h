#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.IntPtr>
struct Func_2_t2753664159;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.RealtimeManager
struct  RealtimeManager_t1839590440  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.PInvoke.RealtimeManager::mGameServices
	GameServices_t1862808700 * ___mGameServices_0;

public:
	inline static int32_t get_offset_of_mGameServices_0() { return static_cast<int32_t>(offsetof(RealtimeManager_t1839590440, ___mGameServices_0)); }
	inline GameServices_t1862808700 * get_mGameServices_0() const { return ___mGameServices_0; }
	inline GameServices_t1862808700 ** get_address_of_mGameServices_0() { return &___mGameServices_0; }
	inline void set_mGameServices_0(GameServices_t1862808700 * value)
	{
		___mGameServices_0 = value;
		Il2CppCodeGenWriteBarrier(&___mGameServices_0, value);
	}
};

struct RealtimeManager_t1839590440_StaticFields
{
public:
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.IntPtr> GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__am$cache1
	Func_2_t2753664159 * ___U3CU3Ef__amU24cache1_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(RealtimeManager_t1839590440_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline Func_2_t2753664159 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline Func_2_t2753664159 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(Func_2_t2753664159 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
