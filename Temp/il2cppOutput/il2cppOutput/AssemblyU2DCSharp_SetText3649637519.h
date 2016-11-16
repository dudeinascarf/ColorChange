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

// SetText
struct  SetText_t3649637519  : public MonoBehaviour_t667441552
{
public:
	// System.String SetText::iOSText
	String_t* ___iOSText_2;
	// System.String SetText::AndroidText
	String_t* ___AndroidText_3;

public:
	inline static int32_t get_offset_of_iOSText_2() { return static_cast<int32_t>(offsetof(SetText_t3649637519, ___iOSText_2)); }
	inline String_t* get_iOSText_2() const { return ___iOSText_2; }
	inline String_t** get_address_of_iOSText_2() { return &___iOSText_2; }
	inline void set_iOSText_2(String_t* value)
	{
		___iOSText_2 = value;
		Il2CppCodeGenWriteBarrier(&___iOSText_2, value);
	}

	inline static int32_t get_offset_of_AndroidText_3() { return static_cast<int32_t>(offsetof(SetText_t3649637519, ___AndroidText_3)); }
	inline String_t* get_AndroidText_3() const { return ___AndroidText_3; }
	inline String_t** get_address_of_AndroidText_3() { return &___AndroidText_3; }
	inline void set_AndroidText_3(String_t* value)
	{
		___AndroidText_3 = value;
		Il2CppCodeGenWriteBarrier(&___AndroidText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
