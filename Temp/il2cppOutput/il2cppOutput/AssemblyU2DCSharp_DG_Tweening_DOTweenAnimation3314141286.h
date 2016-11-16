#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t3501516275;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "DOTweenPro_DG_Tweening_Core_ABSAnimationComponent3057707537.h"
#include "DOTween_DG_Tweening_Ease1564688304.h"
#include "DOTween_DG_Tweening_LoopType430828992.h"
#include "DOTweenPro_DG_Tweening_Core_DOTweenAnimationType3667065162.h"
#include "DOTweenPro_DG_Tweening_Core_TargetType4145673591.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "DOTween_DG_Tweening_RotateMode3413588064.h"
#include "DOTween_DG_Tweening_ScrambleMode903891410.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.DOTweenAnimation
struct  DOTweenAnimation_t3314141286  : public ABSAnimationComponent_t3057707537
{
public:
	// System.Single DG.Tweening.DOTweenAnimation::delay
	float ___delay_17;
	// System.Single DG.Tweening.DOTweenAnimation::duration
	float ___duration_18;
	// DG.Tweening.Ease DG.Tweening.DOTweenAnimation::easeType
	int32_t ___easeType_19;
	// UnityEngine.AnimationCurve DG.Tweening.DOTweenAnimation::easeCurve
	AnimationCurve_t3667593487 * ___easeCurve_20;
	// DG.Tweening.LoopType DG.Tweening.DOTweenAnimation::loopType
	int32_t ___loopType_21;
	// System.Int32 DG.Tweening.DOTweenAnimation::loops
	int32_t ___loops_22;
	// System.String DG.Tweening.DOTweenAnimation::id
	String_t* ___id_23;
	// System.Boolean DG.Tweening.DOTweenAnimation::isRelative
	bool ___isRelative_24;
	// System.Boolean DG.Tweening.DOTweenAnimation::isFrom
	bool ___isFrom_25;
	// System.Boolean DG.Tweening.DOTweenAnimation::isIndependentUpdate
	bool ___isIndependentUpdate_26;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoKill
	bool ___autoKill_27;
	// System.Boolean DG.Tweening.DOTweenAnimation::isActive
	bool ___isActive_28;
	// System.Boolean DG.Tweening.DOTweenAnimation::isValid
	bool ___isValid_29;
	// UnityEngine.Component DG.Tweening.DOTweenAnimation::target
	Component_t3501516275 * ___target_30;
	// DG.Tweening.Core.DOTweenAnimationType DG.Tweening.DOTweenAnimation::animationType
	int32_t ___animationType_31;
	// DG.Tweening.Core.TargetType DG.Tweening.DOTweenAnimation::targetType
	int32_t ___targetType_32;
	// DG.Tweening.Core.TargetType DG.Tweening.DOTweenAnimation::forcedTargetType
	int32_t ___forcedTargetType_33;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoPlay
	bool ___autoPlay_34;
	// System.Boolean DG.Tweening.DOTweenAnimation::useTargetAsV3
	bool ___useTargetAsV3_35;
	// System.Single DG.Tweening.DOTweenAnimation::endValueFloat
	float ___endValueFloat_36;
	// UnityEngine.Vector3 DG.Tweening.DOTweenAnimation::endValueV3
	Vector3_t4282066566  ___endValueV3_37;
	// UnityEngine.Vector2 DG.Tweening.DOTweenAnimation::endValueV2
	Vector2_t4282066565  ___endValueV2_38;
	// UnityEngine.Color DG.Tweening.DOTweenAnimation::endValueColor
	Color_t4194546905  ___endValueColor_39;
	// System.String DG.Tweening.DOTweenAnimation::endValueString
	String_t* ___endValueString_40;
	// UnityEngine.Rect DG.Tweening.DOTweenAnimation::endValueRect
	Rect_t4241904616  ___endValueRect_41;
	// UnityEngine.Transform DG.Tweening.DOTweenAnimation::endValueTransform
	Transform_t1659122786 * ___endValueTransform_42;
	// System.Boolean DG.Tweening.DOTweenAnimation::optionalBool0
	bool ___optionalBool0_43;
	// System.Single DG.Tweening.DOTweenAnimation::optionalFloat0
	float ___optionalFloat0_44;
	// System.Int32 DG.Tweening.DOTweenAnimation::optionalInt0
	int32_t ___optionalInt0_45;
	// DG.Tweening.RotateMode DG.Tweening.DOTweenAnimation::optionalRotationMode
	int32_t ___optionalRotationMode_46;
	// DG.Tweening.ScrambleMode DG.Tweening.DOTweenAnimation::optionalScrambleMode
	int32_t ___optionalScrambleMode_47;
	// System.String DG.Tweening.DOTweenAnimation::optionalString
	String_t* ___optionalString_48;
	// System.Boolean DG.Tweening.DOTweenAnimation::_tweenCreated
	bool ____tweenCreated_49;
	// System.Int32 DG.Tweening.DOTweenAnimation::_playCount
	int32_t ____playCount_50;

public:
	inline static int32_t get_offset_of_delay_17() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___delay_17)); }
	inline float get_delay_17() const { return ___delay_17; }
	inline float* get_address_of_delay_17() { return &___delay_17; }
	inline void set_delay_17(float value)
	{
		___delay_17 = value;
	}

	inline static int32_t get_offset_of_duration_18() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___duration_18)); }
	inline float get_duration_18() const { return ___duration_18; }
	inline float* get_address_of_duration_18() { return &___duration_18; }
	inline void set_duration_18(float value)
	{
		___duration_18 = value;
	}

	inline static int32_t get_offset_of_easeType_19() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___easeType_19)); }
	inline int32_t get_easeType_19() const { return ___easeType_19; }
	inline int32_t* get_address_of_easeType_19() { return &___easeType_19; }
	inline void set_easeType_19(int32_t value)
	{
		___easeType_19 = value;
	}

	inline static int32_t get_offset_of_easeCurve_20() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___easeCurve_20)); }
	inline AnimationCurve_t3667593487 * get_easeCurve_20() const { return ___easeCurve_20; }
	inline AnimationCurve_t3667593487 ** get_address_of_easeCurve_20() { return &___easeCurve_20; }
	inline void set_easeCurve_20(AnimationCurve_t3667593487 * value)
	{
		___easeCurve_20 = value;
		Il2CppCodeGenWriteBarrier(&___easeCurve_20, value);
	}

	inline static int32_t get_offset_of_loopType_21() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___loopType_21)); }
	inline int32_t get_loopType_21() const { return ___loopType_21; }
	inline int32_t* get_address_of_loopType_21() { return &___loopType_21; }
	inline void set_loopType_21(int32_t value)
	{
		___loopType_21 = value;
	}

	inline static int32_t get_offset_of_loops_22() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___loops_22)); }
	inline int32_t get_loops_22() const { return ___loops_22; }
	inline int32_t* get_address_of_loops_22() { return &___loops_22; }
	inline void set_loops_22(int32_t value)
	{
		___loops_22 = value;
	}

	inline static int32_t get_offset_of_id_23() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___id_23)); }
	inline String_t* get_id_23() const { return ___id_23; }
	inline String_t** get_address_of_id_23() { return &___id_23; }
	inline void set_id_23(String_t* value)
	{
		___id_23 = value;
		Il2CppCodeGenWriteBarrier(&___id_23, value);
	}

	inline static int32_t get_offset_of_isRelative_24() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___isRelative_24)); }
	inline bool get_isRelative_24() const { return ___isRelative_24; }
	inline bool* get_address_of_isRelative_24() { return &___isRelative_24; }
	inline void set_isRelative_24(bool value)
	{
		___isRelative_24 = value;
	}

	inline static int32_t get_offset_of_isFrom_25() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___isFrom_25)); }
	inline bool get_isFrom_25() const { return ___isFrom_25; }
	inline bool* get_address_of_isFrom_25() { return &___isFrom_25; }
	inline void set_isFrom_25(bool value)
	{
		___isFrom_25 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_26() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___isIndependentUpdate_26)); }
	inline bool get_isIndependentUpdate_26() const { return ___isIndependentUpdate_26; }
	inline bool* get_address_of_isIndependentUpdate_26() { return &___isIndependentUpdate_26; }
	inline void set_isIndependentUpdate_26(bool value)
	{
		___isIndependentUpdate_26 = value;
	}

	inline static int32_t get_offset_of_autoKill_27() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___autoKill_27)); }
	inline bool get_autoKill_27() const { return ___autoKill_27; }
	inline bool* get_address_of_autoKill_27() { return &___autoKill_27; }
	inline void set_autoKill_27(bool value)
	{
		___autoKill_27 = value;
	}

	inline static int32_t get_offset_of_isActive_28() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___isActive_28)); }
	inline bool get_isActive_28() const { return ___isActive_28; }
	inline bool* get_address_of_isActive_28() { return &___isActive_28; }
	inline void set_isActive_28(bool value)
	{
		___isActive_28 = value;
	}

	inline static int32_t get_offset_of_isValid_29() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___isValid_29)); }
	inline bool get_isValid_29() const { return ___isValid_29; }
	inline bool* get_address_of_isValid_29() { return &___isValid_29; }
	inline void set_isValid_29(bool value)
	{
		___isValid_29 = value;
	}

	inline static int32_t get_offset_of_target_30() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___target_30)); }
	inline Component_t3501516275 * get_target_30() const { return ___target_30; }
	inline Component_t3501516275 ** get_address_of_target_30() { return &___target_30; }
	inline void set_target_30(Component_t3501516275 * value)
	{
		___target_30 = value;
		Il2CppCodeGenWriteBarrier(&___target_30, value);
	}

	inline static int32_t get_offset_of_animationType_31() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___animationType_31)); }
	inline int32_t get_animationType_31() const { return ___animationType_31; }
	inline int32_t* get_address_of_animationType_31() { return &___animationType_31; }
	inline void set_animationType_31(int32_t value)
	{
		___animationType_31 = value;
	}

	inline static int32_t get_offset_of_targetType_32() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___targetType_32)); }
	inline int32_t get_targetType_32() const { return ___targetType_32; }
	inline int32_t* get_address_of_targetType_32() { return &___targetType_32; }
	inline void set_targetType_32(int32_t value)
	{
		___targetType_32 = value;
	}

	inline static int32_t get_offset_of_forcedTargetType_33() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___forcedTargetType_33)); }
	inline int32_t get_forcedTargetType_33() const { return ___forcedTargetType_33; }
	inline int32_t* get_address_of_forcedTargetType_33() { return &___forcedTargetType_33; }
	inline void set_forcedTargetType_33(int32_t value)
	{
		___forcedTargetType_33 = value;
	}

	inline static int32_t get_offset_of_autoPlay_34() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___autoPlay_34)); }
	inline bool get_autoPlay_34() const { return ___autoPlay_34; }
	inline bool* get_address_of_autoPlay_34() { return &___autoPlay_34; }
	inline void set_autoPlay_34(bool value)
	{
		___autoPlay_34 = value;
	}

	inline static int32_t get_offset_of_useTargetAsV3_35() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___useTargetAsV3_35)); }
	inline bool get_useTargetAsV3_35() const { return ___useTargetAsV3_35; }
	inline bool* get_address_of_useTargetAsV3_35() { return &___useTargetAsV3_35; }
	inline void set_useTargetAsV3_35(bool value)
	{
		___useTargetAsV3_35 = value;
	}

	inline static int32_t get_offset_of_endValueFloat_36() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___endValueFloat_36)); }
	inline float get_endValueFloat_36() const { return ___endValueFloat_36; }
	inline float* get_address_of_endValueFloat_36() { return &___endValueFloat_36; }
	inline void set_endValueFloat_36(float value)
	{
		___endValueFloat_36 = value;
	}

	inline static int32_t get_offset_of_endValueV3_37() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___endValueV3_37)); }
	inline Vector3_t4282066566  get_endValueV3_37() const { return ___endValueV3_37; }
	inline Vector3_t4282066566 * get_address_of_endValueV3_37() { return &___endValueV3_37; }
	inline void set_endValueV3_37(Vector3_t4282066566  value)
	{
		___endValueV3_37 = value;
	}

	inline static int32_t get_offset_of_endValueV2_38() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___endValueV2_38)); }
	inline Vector2_t4282066565  get_endValueV2_38() const { return ___endValueV2_38; }
	inline Vector2_t4282066565 * get_address_of_endValueV2_38() { return &___endValueV2_38; }
	inline void set_endValueV2_38(Vector2_t4282066565  value)
	{
		___endValueV2_38 = value;
	}

	inline static int32_t get_offset_of_endValueColor_39() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___endValueColor_39)); }
	inline Color_t4194546905  get_endValueColor_39() const { return ___endValueColor_39; }
	inline Color_t4194546905 * get_address_of_endValueColor_39() { return &___endValueColor_39; }
	inline void set_endValueColor_39(Color_t4194546905  value)
	{
		___endValueColor_39 = value;
	}

	inline static int32_t get_offset_of_endValueString_40() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___endValueString_40)); }
	inline String_t* get_endValueString_40() const { return ___endValueString_40; }
	inline String_t** get_address_of_endValueString_40() { return &___endValueString_40; }
	inline void set_endValueString_40(String_t* value)
	{
		___endValueString_40 = value;
		Il2CppCodeGenWriteBarrier(&___endValueString_40, value);
	}

	inline static int32_t get_offset_of_endValueRect_41() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___endValueRect_41)); }
	inline Rect_t4241904616  get_endValueRect_41() const { return ___endValueRect_41; }
	inline Rect_t4241904616 * get_address_of_endValueRect_41() { return &___endValueRect_41; }
	inline void set_endValueRect_41(Rect_t4241904616  value)
	{
		___endValueRect_41 = value;
	}

	inline static int32_t get_offset_of_endValueTransform_42() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___endValueTransform_42)); }
	inline Transform_t1659122786 * get_endValueTransform_42() const { return ___endValueTransform_42; }
	inline Transform_t1659122786 ** get_address_of_endValueTransform_42() { return &___endValueTransform_42; }
	inline void set_endValueTransform_42(Transform_t1659122786 * value)
	{
		___endValueTransform_42 = value;
		Il2CppCodeGenWriteBarrier(&___endValueTransform_42, value);
	}

	inline static int32_t get_offset_of_optionalBool0_43() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___optionalBool0_43)); }
	inline bool get_optionalBool0_43() const { return ___optionalBool0_43; }
	inline bool* get_address_of_optionalBool0_43() { return &___optionalBool0_43; }
	inline void set_optionalBool0_43(bool value)
	{
		___optionalBool0_43 = value;
	}

	inline static int32_t get_offset_of_optionalFloat0_44() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___optionalFloat0_44)); }
	inline float get_optionalFloat0_44() const { return ___optionalFloat0_44; }
	inline float* get_address_of_optionalFloat0_44() { return &___optionalFloat0_44; }
	inline void set_optionalFloat0_44(float value)
	{
		___optionalFloat0_44 = value;
	}

	inline static int32_t get_offset_of_optionalInt0_45() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___optionalInt0_45)); }
	inline int32_t get_optionalInt0_45() const { return ___optionalInt0_45; }
	inline int32_t* get_address_of_optionalInt0_45() { return &___optionalInt0_45; }
	inline void set_optionalInt0_45(int32_t value)
	{
		___optionalInt0_45 = value;
	}

	inline static int32_t get_offset_of_optionalRotationMode_46() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___optionalRotationMode_46)); }
	inline int32_t get_optionalRotationMode_46() const { return ___optionalRotationMode_46; }
	inline int32_t* get_address_of_optionalRotationMode_46() { return &___optionalRotationMode_46; }
	inline void set_optionalRotationMode_46(int32_t value)
	{
		___optionalRotationMode_46 = value;
	}

	inline static int32_t get_offset_of_optionalScrambleMode_47() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___optionalScrambleMode_47)); }
	inline int32_t get_optionalScrambleMode_47() const { return ___optionalScrambleMode_47; }
	inline int32_t* get_address_of_optionalScrambleMode_47() { return &___optionalScrambleMode_47; }
	inline void set_optionalScrambleMode_47(int32_t value)
	{
		___optionalScrambleMode_47 = value;
	}

	inline static int32_t get_offset_of_optionalString_48() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ___optionalString_48)); }
	inline String_t* get_optionalString_48() const { return ___optionalString_48; }
	inline String_t** get_address_of_optionalString_48() { return &___optionalString_48; }
	inline void set_optionalString_48(String_t* value)
	{
		___optionalString_48 = value;
		Il2CppCodeGenWriteBarrier(&___optionalString_48, value);
	}

	inline static int32_t get_offset_of__tweenCreated_49() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ____tweenCreated_49)); }
	inline bool get__tweenCreated_49() const { return ____tweenCreated_49; }
	inline bool* get_address_of__tweenCreated_49() { return &____tweenCreated_49; }
	inline void set__tweenCreated_49(bool value)
	{
		____tweenCreated_49 = value;
	}

	inline static int32_t get_offset_of__playCount_50() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t3314141286, ____playCount_50)); }
	inline int32_t get__playCount_50() const { return ____playCount_50; }
	inline int32_t* get_address_of__playCount_50() { return &____playCount_50; }
	inline void set__playCount_50(int32_t value)
	{
		____playCount_50 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
