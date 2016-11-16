#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GooglePlayGames.Native.PInvoke.NativePlayer>
struct List_1_t4005071540;
// System.Action`1<GooglePlayGames.Native.PInvoke.NativePlayer[]>
struct Action_1_t3857542357;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector
struct  FetchResponseCollector_t4033649688  : public Il2CppObject
{
public:
	// System.Int32 GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector::pendingCount
	int32_t ___pendingCount_0;
	// System.Collections.Generic.List`1<GooglePlayGames.Native.PInvoke.NativePlayer> GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector::results
	List_1_t4005071540 * ___results_1;
	// System.Action`1<GooglePlayGames.Native.PInvoke.NativePlayer[]> GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector::callback
	Action_1_t3857542357 * ___callback_2;

public:
	inline static int32_t get_offset_of_pendingCount_0() { return static_cast<int32_t>(offsetof(FetchResponseCollector_t4033649688, ___pendingCount_0)); }
	inline int32_t get_pendingCount_0() const { return ___pendingCount_0; }
	inline int32_t* get_address_of_pendingCount_0() { return &___pendingCount_0; }
	inline void set_pendingCount_0(int32_t value)
	{
		___pendingCount_0 = value;
	}

	inline static int32_t get_offset_of_results_1() { return static_cast<int32_t>(offsetof(FetchResponseCollector_t4033649688, ___results_1)); }
	inline List_1_t4005071540 * get_results_1() const { return ___results_1; }
	inline List_1_t4005071540 ** get_address_of_results_1() { return &___results_1; }
	inline void set_results_1(List_1_t4005071540 * value)
	{
		___results_1 = value;
		Il2CppCodeGenWriteBarrier(&___results_1, value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(FetchResponseCollector_t4033649688, ___callback_2)); }
	inline Action_1_t3857542357 * get_callback_2() const { return ___callback_2; }
	inline Action_1_t3857542357 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_t3857542357 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier(&___callback_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
