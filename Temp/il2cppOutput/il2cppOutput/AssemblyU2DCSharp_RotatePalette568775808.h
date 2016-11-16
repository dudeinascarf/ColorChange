#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotatePalette
struct  RotatePalette_t568775808  : public MonoBehaviour_t667441552
{
public:
	// System.Single RotatePalette::minSwipeDistX
	float ___minSwipeDistX_2;
	// System.Single RotatePalette::speed
	float ___speed_3;
	// System.Single RotatePalette::rotationAngle
	float ___rotationAngle_4;
	// System.Single RotatePalette::rotation
	float ___rotation_5;
	// UnityEngine.Quaternion RotatePalette::qTo
	Quaternion_t1553702882  ___qTo_6;
	// UnityEngine.Vector3 RotatePalette::targetAngles
	Vector3_t4282066566  ___targetAngles_7;
	// UnityEngine.Vector2 RotatePalette::startPos
	Vector2_t4282066565  ___startPos_8;
	// System.Single RotatePalette::timeRandomRotate
	float ___timeRandomRotate_9;

public:
	inline static int32_t get_offset_of_minSwipeDistX_2() { return static_cast<int32_t>(offsetof(RotatePalette_t568775808, ___minSwipeDistX_2)); }
	inline float get_minSwipeDistX_2() const { return ___minSwipeDistX_2; }
	inline float* get_address_of_minSwipeDistX_2() { return &___minSwipeDistX_2; }
	inline void set_minSwipeDistX_2(float value)
	{
		___minSwipeDistX_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(RotatePalette_t568775808, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_rotationAngle_4() { return static_cast<int32_t>(offsetof(RotatePalette_t568775808, ___rotationAngle_4)); }
	inline float get_rotationAngle_4() const { return ___rotationAngle_4; }
	inline float* get_address_of_rotationAngle_4() { return &___rotationAngle_4; }
	inline void set_rotationAngle_4(float value)
	{
		___rotationAngle_4 = value;
	}

	inline static int32_t get_offset_of_rotation_5() { return static_cast<int32_t>(offsetof(RotatePalette_t568775808, ___rotation_5)); }
	inline float get_rotation_5() const { return ___rotation_5; }
	inline float* get_address_of_rotation_5() { return &___rotation_5; }
	inline void set_rotation_5(float value)
	{
		___rotation_5 = value;
	}

	inline static int32_t get_offset_of_qTo_6() { return static_cast<int32_t>(offsetof(RotatePalette_t568775808, ___qTo_6)); }
	inline Quaternion_t1553702882  get_qTo_6() const { return ___qTo_6; }
	inline Quaternion_t1553702882 * get_address_of_qTo_6() { return &___qTo_6; }
	inline void set_qTo_6(Quaternion_t1553702882  value)
	{
		___qTo_6 = value;
	}

	inline static int32_t get_offset_of_targetAngles_7() { return static_cast<int32_t>(offsetof(RotatePalette_t568775808, ___targetAngles_7)); }
	inline Vector3_t4282066566  get_targetAngles_7() const { return ___targetAngles_7; }
	inline Vector3_t4282066566 * get_address_of_targetAngles_7() { return &___targetAngles_7; }
	inline void set_targetAngles_7(Vector3_t4282066566  value)
	{
		___targetAngles_7 = value;
	}

	inline static int32_t get_offset_of_startPos_8() { return static_cast<int32_t>(offsetof(RotatePalette_t568775808, ___startPos_8)); }
	inline Vector2_t4282066565  get_startPos_8() const { return ___startPos_8; }
	inline Vector2_t4282066565 * get_address_of_startPos_8() { return &___startPos_8; }
	inline void set_startPos_8(Vector2_t4282066565  value)
	{
		___startPos_8 = value;
	}

	inline static int32_t get_offset_of_timeRandomRotate_9() { return static_cast<int32_t>(offsetof(RotatePalette_t568775808, ___timeRandomRotate_9)); }
	inline float get_timeRandomRotate_9() const { return ___timeRandomRotate_9; }
	inline float* get_address_of_timeRandomRotate_9() { return &___timeRandomRotate_9; }
	inline void set_timeRandomRotate_9(float value)
	{
		___timeRandomRotate_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
