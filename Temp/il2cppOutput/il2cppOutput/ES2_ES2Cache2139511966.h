#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,ES2CachedFile>
struct Dictionary_2_t2251949412;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2Cache
struct  ES2Cache_t2139511966  : public Il2CppObject
{
public:

public:
};

struct ES2Cache_t2139511966_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,ES2CachedFile> ES2Cache::fileCaches
	Dictionary_2_t2251949412 * ___fileCaches_0;

public:
	inline static int32_t get_offset_of_fileCaches_0() { return static_cast<int32_t>(offsetof(ES2Cache_t2139511966_StaticFields, ___fileCaches_0)); }
	inline Dictionary_2_t2251949412 * get_fileCaches_0() const { return ___fileCaches_0; }
	inline Dictionary_2_t2251949412 ** get_address_of_fileCaches_0() { return &___fileCaches_0; }
	inline void set_fileCaches_0(Dictionary_2_t2251949412 * value)
	{
		___fileCaches_0 = value;
		Il2CppCodeGenWriteBarrier(&___fileCaches_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
