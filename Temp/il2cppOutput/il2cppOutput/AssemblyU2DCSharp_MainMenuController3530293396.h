#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MainMenuController
struct MainMenuController_t3530293396;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenuController
struct  MainMenuController_t3530293396  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 MainMenuController::bestScore
	int32_t ___bestScore_3;
	// UnityEngine.UI.Text MainMenuController::bestScoreText
	Text_t9039225 * ___bestScoreText_4;

public:
	inline static int32_t get_offset_of_bestScore_3() { return static_cast<int32_t>(offsetof(MainMenuController_t3530293396, ___bestScore_3)); }
	inline int32_t get_bestScore_3() const { return ___bestScore_3; }
	inline int32_t* get_address_of_bestScore_3() { return &___bestScore_3; }
	inline void set_bestScore_3(int32_t value)
	{
		___bestScore_3 = value;
	}

	inline static int32_t get_offset_of_bestScoreText_4() { return static_cast<int32_t>(offsetof(MainMenuController_t3530293396, ___bestScoreText_4)); }
	inline Text_t9039225 * get_bestScoreText_4() const { return ___bestScoreText_4; }
	inline Text_t9039225 ** get_address_of_bestScoreText_4() { return &___bestScoreText_4; }
	inline void set_bestScoreText_4(Text_t9039225 * value)
	{
		___bestScoreText_4 = value;
		Il2CppCodeGenWriteBarrier(&___bestScoreText_4, value);
	}
};

struct MainMenuController_t3530293396_StaticFields
{
public:
	// MainMenuController MainMenuController::instance
	MainMenuController_t3530293396 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MainMenuController_t3530293396_StaticFields, ___instance_2)); }
	inline MainMenuController_t3530293396 * get_instance_2() const { return ___instance_2; }
	inline MainMenuController_t3530293396 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MainMenuController_t3530293396 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
