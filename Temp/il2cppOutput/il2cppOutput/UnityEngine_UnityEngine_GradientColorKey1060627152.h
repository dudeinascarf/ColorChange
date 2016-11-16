#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GradientColorKey
struct  GradientColorKey_t1060627152 
{
public:
	// UnityEngine.Color UnityEngine.GradientColorKey::color
	Color_t4194546905  ___color_0;
	// System.Single UnityEngine.GradientColorKey::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(GradientColorKey_t1060627152, ___color_0)); }
	inline Color_t4194546905  get_color_0() const { return ___color_0; }
	inline Color_t4194546905 * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color_t4194546905  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(GradientColorKey_t1060627152, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.GradientColorKey
struct GradientColorKey_t1060627152_marshaled_pinvoke
{
	Color_t4194546905_marshaled_pinvoke ___color_0;
	float ___time_1;
};
// Native definition for marshalling of: UnityEngine.GradientColorKey
struct GradientColorKey_t1060627152_marshaled_com
{
	Color_t4194546905_marshaled_com ___color_0;
	float ___time_1;
};
