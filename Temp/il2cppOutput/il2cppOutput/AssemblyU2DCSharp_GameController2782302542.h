#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameController
struct GameController_t2782302542;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_GameController_PaletteState1549932055.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// GameController/PaletteState GameController::currentState
	int32_t ___currentState_3;
	// UnityEngine.GameObject[] GameController::palettes
	GameObjectU5BU5D_t2662109048* ___palettes_4;
	// System.Int32 GameController::secondChanceCount
	int32_t ___secondChanceCount_5;
	// System.Int32 GameController::score
	int32_t ___score_6;
	// System.Int32 GameController::bestScore
	int32_t ___bestScore_7;
	// UnityEngine.GameObject GameController::gameOverPanel
	GameObject_t3674682005 * ___gameOverPanel_8;
	// UnityEngine.GameObject GameController::secondChancePanel
	GameObject_t3674682005 * ___secondChancePanel_9;
	// UnityEngine.UI.Text GameController::scoreText
	Text_t9039225 * ___scoreText_10;
	// UnityEngine.UI.Text GameController::bestScoreText
	Text_t9039225 * ___bestScoreText_11;
	// System.Single GameController::ballDecreaseForce
	float ___ballDecreaseForce_12;
	// System.Int32 GameController::losseCounter
	int32_t ___losseCounter_13;

public:
	inline static int32_t get_offset_of_currentState_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___currentState_3)); }
	inline int32_t get_currentState_3() const { return ___currentState_3; }
	inline int32_t* get_address_of_currentState_3() { return &___currentState_3; }
	inline void set_currentState_3(int32_t value)
	{
		___currentState_3 = value;
	}

	inline static int32_t get_offset_of_palettes_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___palettes_4)); }
	inline GameObjectU5BU5D_t2662109048* get_palettes_4() const { return ___palettes_4; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_palettes_4() { return &___palettes_4; }
	inline void set_palettes_4(GameObjectU5BU5D_t2662109048* value)
	{
		___palettes_4 = value;
		Il2CppCodeGenWriteBarrier(&___palettes_4, value);
	}

	inline static int32_t get_offset_of_secondChanceCount_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___secondChanceCount_5)); }
	inline int32_t get_secondChanceCount_5() const { return ___secondChanceCount_5; }
	inline int32_t* get_address_of_secondChanceCount_5() { return &___secondChanceCount_5; }
	inline void set_secondChanceCount_5(int32_t value)
	{
		___secondChanceCount_5 = value;
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___score_6)); }
	inline int32_t get_score_6() const { return ___score_6; }
	inline int32_t* get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(int32_t value)
	{
		___score_6 = value;
	}

	inline static int32_t get_offset_of_bestScore_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___bestScore_7)); }
	inline int32_t get_bestScore_7() const { return ___bestScore_7; }
	inline int32_t* get_address_of_bestScore_7() { return &___bestScore_7; }
	inline void set_bestScore_7(int32_t value)
	{
		___bestScore_7 = value;
	}

	inline static int32_t get_offset_of_gameOverPanel_8() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameOverPanel_8)); }
	inline GameObject_t3674682005 * get_gameOverPanel_8() const { return ___gameOverPanel_8; }
	inline GameObject_t3674682005 ** get_address_of_gameOverPanel_8() { return &___gameOverPanel_8; }
	inline void set_gameOverPanel_8(GameObject_t3674682005 * value)
	{
		___gameOverPanel_8 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverPanel_8, value);
	}

	inline static int32_t get_offset_of_secondChancePanel_9() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___secondChancePanel_9)); }
	inline GameObject_t3674682005 * get_secondChancePanel_9() const { return ___secondChancePanel_9; }
	inline GameObject_t3674682005 ** get_address_of_secondChancePanel_9() { return &___secondChancePanel_9; }
	inline void set_secondChancePanel_9(GameObject_t3674682005 * value)
	{
		___secondChancePanel_9 = value;
		Il2CppCodeGenWriteBarrier(&___secondChancePanel_9, value);
	}

	inline static int32_t get_offset_of_scoreText_10() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___scoreText_10)); }
	inline Text_t9039225 * get_scoreText_10() const { return ___scoreText_10; }
	inline Text_t9039225 ** get_address_of_scoreText_10() { return &___scoreText_10; }
	inline void set_scoreText_10(Text_t9039225 * value)
	{
		___scoreText_10 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_10, value);
	}

	inline static int32_t get_offset_of_bestScoreText_11() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___bestScoreText_11)); }
	inline Text_t9039225 * get_bestScoreText_11() const { return ___bestScoreText_11; }
	inline Text_t9039225 ** get_address_of_bestScoreText_11() { return &___bestScoreText_11; }
	inline void set_bestScoreText_11(Text_t9039225 * value)
	{
		___bestScoreText_11 = value;
		Il2CppCodeGenWriteBarrier(&___bestScoreText_11, value);
	}

	inline static int32_t get_offset_of_ballDecreaseForce_12() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___ballDecreaseForce_12)); }
	inline float get_ballDecreaseForce_12() const { return ___ballDecreaseForce_12; }
	inline float* get_address_of_ballDecreaseForce_12() { return &___ballDecreaseForce_12; }
	inline void set_ballDecreaseForce_12(float value)
	{
		___ballDecreaseForce_12 = value;
	}

	inline static int32_t get_offset_of_losseCounter_13() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___losseCounter_13)); }
	inline int32_t get_losseCounter_13() const { return ___losseCounter_13; }
	inline int32_t* get_address_of_losseCounter_13() { return &___losseCounter_13; }
	inline void set_losseCounter_13(int32_t value)
	{
		___losseCounter_13 = value;
	}
};

struct GameController_t2782302542_StaticFields
{
public:
	// GameController GameController::instance
	GameController_t2782302542 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542_StaticFields, ___instance_2)); }
	inline GameController_t2782302542 * get_instance_2() const { return ___instance_2; }
	inline GameController_t2782302542 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameController_t2782302542 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
