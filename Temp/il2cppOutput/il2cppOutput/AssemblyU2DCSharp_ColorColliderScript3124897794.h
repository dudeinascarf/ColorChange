#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorColliderScript
struct  ColorColliderScript_t3124897794  : public MonoBehaviour_t667441552
{
public:
	// System.String ColorColliderScript::ballTag
	String_t* ___ballTag_2;

public:
	inline static int32_t get_offset_of_ballTag_2() { return static_cast<int32_t>(offsetof(ColorColliderScript_t3124897794, ___ballTag_2)); }
	inline String_t* get_ballTag_2() const { return ___ballTag_2; }
	inline String_t** get_address_of_ballTag_2() { return &___ballTag_2; }
	inline void set_ballTag_2(String_t* value)
	{
		___ballTag_2 = value;
		Il2CppCodeGenWriteBarrier(&___ballTag_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
