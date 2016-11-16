#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenuBall
struct  MainMenuBall_t2188557559  : public MonoBehaviour_t667441552
{
public:
	// System.Single MainMenuBall::forceY
	float ___forceY_2;
	// UnityEngine.Rigidbody2D MainMenuBall::rb2d
	Rigidbody2D_t1743771669 * ___rb2d_3;

public:
	inline static int32_t get_offset_of_forceY_2() { return static_cast<int32_t>(offsetof(MainMenuBall_t2188557559, ___forceY_2)); }
	inline float get_forceY_2() const { return ___forceY_2; }
	inline float* get_address_of_forceY_2() { return &___forceY_2; }
	inline void set_forceY_2(float value)
	{
		___forceY_2 = value;
	}

	inline static int32_t get_offset_of_rb2d_3() { return static_cast<int32_t>(offsetof(MainMenuBall_t2188557559, ___rb2d_3)); }
	inline Rigidbody2D_t1743771669 * get_rb2d_3() const { return ___rb2d_3; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb2d_3() { return &___rb2d_3; }
	inline void set_rb2d_3(Rigidbody2D_t1743771669 * value)
	{
		___rb2d_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
