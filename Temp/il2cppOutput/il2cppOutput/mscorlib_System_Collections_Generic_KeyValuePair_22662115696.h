#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.Native.PInvoke.BaseReferenceHolder
struct BaseReferenceHolder_t2237584300;

#include "mscorlib_System_ValueType1744280289.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.PInvoke.BaseReferenceHolder>
struct  KeyValuePair_2_t2662115696 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	HandleRef_t1780819301  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	BaseReferenceHolder_t2237584300 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2662115696, ___key_0)); }
	inline HandleRef_t1780819301  get_key_0() const { return ___key_0; }
	inline HandleRef_t1780819301 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(HandleRef_t1780819301  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2662115696, ___value_1)); }
	inline BaseReferenceHolder_t2237584300 * get_value_1() const { return ___value_1; }
	inline BaseReferenceHolder_t2237584300 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(BaseReferenceHolder_t2237584300 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
