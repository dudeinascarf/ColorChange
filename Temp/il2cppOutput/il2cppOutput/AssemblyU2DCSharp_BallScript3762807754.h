#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BallScript
struct BallScript_t3762807754;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Material
struct Material_t3870600107;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallScript
struct  BallScript_t3762807754  : public MonoBehaviour_t667441552
{
public:
	// System.Single BallScript::forceY
	float ___forceY_3;
	// UnityEngine.Color[] BallScript::colors
	ColorU5BU5D_t2441545636* ___colors_4;
	// UnityEngine.Rigidbody2D BallScript::rb2d
	Rigidbody2D_t1743771669 * ___rb2d_5;
	// UnityEngine.Material BallScript::ballMat
	Material_t3870600107 * ___ballMat_6;

public:
	inline static int32_t get_offset_of_forceY_3() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___forceY_3)); }
	inline float get_forceY_3() const { return ___forceY_3; }
	inline float* get_address_of_forceY_3() { return &___forceY_3; }
	inline void set_forceY_3(float value)
	{
		___forceY_3 = value;
	}

	inline static int32_t get_offset_of_colors_4() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___colors_4)); }
	inline ColorU5BU5D_t2441545636* get_colors_4() const { return ___colors_4; }
	inline ColorU5BU5D_t2441545636** get_address_of_colors_4() { return &___colors_4; }
	inline void set_colors_4(ColorU5BU5D_t2441545636* value)
	{
		___colors_4 = value;
		Il2CppCodeGenWriteBarrier(&___colors_4, value);
	}

	inline static int32_t get_offset_of_rb2d_5() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___rb2d_5)); }
	inline Rigidbody2D_t1743771669 * get_rb2d_5() const { return ___rb2d_5; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb2d_5() { return &___rb2d_5; }
	inline void set_rb2d_5(Rigidbody2D_t1743771669 * value)
	{
		___rb2d_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_5, value);
	}

	inline static int32_t get_offset_of_ballMat_6() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___ballMat_6)); }
	inline Material_t3870600107 * get_ballMat_6() const { return ___ballMat_6; }
	inline Material_t3870600107 ** get_address_of_ballMat_6() { return &___ballMat_6; }
	inline void set_ballMat_6(Material_t3870600107 * value)
	{
		___ballMat_6 = value;
		Il2CppCodeGenWriteBarrier(&___ballMat_6, value);
	}
};

struct BallScript_t3762807754_StaticFields
{
public:
	// BallScript BallScript::instance
	BallScript_t3762807754 * ___instance_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> BallScript::<>f__switch$map1
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map1_7;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(BallScript_t3762807754_StaticFields, ___instance_2)); }
	inline BallScript_t3762807754 * get_instance_2() const { return ___instance_2; }
	inline BallScript_t3762807754 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(BallScript_t3762807754 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_7() { return static_cast<int32_t>(offsetof(BallScript_t3762807754_StaticFields, ___U3CU3Ef__switchU24map1_7)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map1_7() const { return ___U3CU3Ef__switchU24map1_7; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map1_7() { return &___U3CU3Ef__switchU24map1_7; }
	inline void set_U3CU3Ef__switchU24map1_7(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map1_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
