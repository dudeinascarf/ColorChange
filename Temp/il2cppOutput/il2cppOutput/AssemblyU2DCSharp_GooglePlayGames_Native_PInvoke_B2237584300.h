#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.PInvoke.BaseReferenceHolder>
struct Dictionary_2_t2763334990;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.BaseReferenceHolder
struct  BaseReferenceHolder_t2237584300  : public Il2CppObject
{
public:
	// System.Runtime.InteropServices.HandleRef GooglePlayGames.Native.PInvoke.BaseReferenceHolder::mSelfPointer
	HandleRef_t1780819301  ___mSelfPointer_1;

public:
	inline static int32_t get_offset_of_mSelfPointer_1() { return static_cast<int32_t>(offsetof(BaseReferenceHolder_t2237584300, ___mSelfPointer_1)); }
	inline HandleRef_t1780819301  get_mSelfPointer_1() const { return ___mSelfPointer_1; }
	inline HandleRef_t1780819301 * get_address_of_mSelfPointer_1() { return &___mSelfPointer_1; }
	inline void set_mSelfPointer_1(HandleRef_t1780819301  value)
	{
		___mSelfPointer_1 = value;
	}
};

struct BaseReferenceHolder_t2237584300_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.PInvoke.BaseReferenceHolder> GooglePlayGames.Native.PInvoke.BaseReferenceHolder::_refs
	Dictionary_2_t2763334990 * ____refs_0;

public:
	inline static int32_t get_offset_of__refs_0() { return static_cast<int32_t>(offsetof(BaseReferenceHolder_t2237584300_StaticFields, ____refs_0)); }
	inline Dictionary_2_t2763334990 * get__refs_0() const { return ____refs_0; }
	inline Dictionary_2_t2763334990 ** get_address_of__refs_0() { return &____refs_0; }
	inline void set__refs_0(Dictionary_2_t2763334990 * value)
	{
		____refs_0 = value;
		Il2CppCodeGenWriteBarrier(&____refs_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
