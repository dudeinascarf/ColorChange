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
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t4203839645;

#include "DOTweenPro_DG_Tweening_Core_ABSAnimationComponent3057707537.h"
#include "DOTween_DG_Tweening_Ease1564688304.h"
#include "DOTween_DG_Tweening_LoopType430828992.h"
#include "DOTween_DG_Tweening_Plugins_Options_OrientType3818937237.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "DOTween_DG_Tweening_PathMode3702492458.h"
#include "DOTween_DG_Tweening_AxisConstraint334106912.h"
#include "DOTweenPro_DG_Tweening_DOTweenInspectorMode2466835484.h"
#include "DOTween_DG_Tweening_PathType3702710977.h"
#include "DOTweenPro_DG_Tweening_HandlesType1805851599.h"
#include "DOTweenPro_DG_Tweening_HandlesDrawMode1072741916.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.DOTweenPath
struct  DOTweenPath_t521481135  : public ABSAnimationComponent_t3057707537
{
public:
	// System.Single DG.Tweening.DOTweenPath::delay
	float ___delay_17;
	// System.Single DG.Tweening.DOTweenPath::duration
	float ___duration_18;
	// DG.Tweening.Ease DG.Tweening.DOTweenPath::easeType
	int32_t ___easeType_19;
	// UnityEngine.AnimationCurve DG.Tweening.DOTweenPath::easeCurve
	AnimationCurve_t3667593487 * ___easeCurve_20;
	// System.Int32 DG.Tweening.DOTweenPath::loops
	int32_t ___loops_21;
	// DG.Tweening.LoopType DG.Tweening.DOTweenPath::loopType
	int32_t ___loopType_22;
	// DG.Tweening.Plugins.Options.OrientType DG.Tweening.DOTweenPath::orientType
	int32_t ___orientType_23;
	// UnityEngine.Transform DG.Tweening.DOTweenPath::lookAtTransform
	Transform_t1659122786 * ___lookAtTransform_24;
	// UnityEngine.Vector3 DG.Tweening.DOTweenPath::lookAtPosition
	Vector3_t4282066566  ___lookAtPosition_25;
	// System.Single DG.Tweening.DOTweenPath::lookAhead
	float ___lookAhead_26;
	// System.Boolean DG.Tweening.DOTweenPath::autoPlay
	bool ___autoPlay_27;
	// System.Boolean DG.Tweening.DOTweenPath::autoKill
	bool ___autoKill_28;
	// System.Boolean DG.Tweening.DOTweenPath::relative
	bool ___relative_29;
	// System.Boolean DG.Tweening.DOTweenPath::isLocal
	bool ___isLocal_30;
	// System.Boolean DG.Tweening.DOTweenPath::isClosedPath
	bool ___isClosedPath_31;
	// System.Int32 DG.Tweening.DOTweenPath::pathResolution
	int32_t ___pathResolution_32;
	// DG.Tweening.PathMode DG.Tweening.DOTweenPath::pathMode
	int32_t ___pathMode_33;
	// DG.Tweening.AxisConstraint DG.Tweening.DOTweenPath::lockRotation
	int32_t ___lockRotation_34;
	// System.Boolean DG.Tweening.DOTweenPath::assignForwardAndUp
	bool ___assignForwardAndUp_35;
	// UnityEngine.Vector3 DG.Tweening.DOTweenPath::forwardDirection
	Vector3_t4282066566  ___forwardDirection_36;
	// UnityEngine.Vector3 DG.Tweening.DOTweenPath::upDirection
	Vector3_t4282066566  ___upDirection_37;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> DG.Tweening.DOTweenPath::wps
	List_1_t1355284822 * ___wps_38;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> DG.Tweening.DOTweenPath::fullWps
	List_1_t1355284822 * ___fullWps_39;
	// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.DOTweenPath::path
	Path_t4203839645 * ___path_40;
	// DG.Tweening.DOTweenInspectorMode DG.Tweening.DOTweenPath::inspectorMode
	int32_t ___inspectorMode_41;
	// DG.Tweening.PathType DG.Tweening.DOTweenPath::pathType
	int32_t ___pathType_42;
	// DG.Tweening.HandlesType DG.Tweening.DOTweenPath::handlesType
	int32_t ___handlesType_43;
	// System.Boolean DG.Tweening.DOTweenPath::livePreview
	bool ___livePreview_44;
	// DG.Tweening.HandlesDrawMode DG.Tweening.DOTweenPath::handlesDrawMode
	int32_t ___handlesDrawMode_45;
	// System.Single DG.Tweening.DOTweenPath::perspectiveHandleSize
	float ___perspectiveHandleSize_46;
	// System.Boolean DG.Tweening.DOTweenPath::showIndexes
	bool ___showIndexes_47;
	// UnityEngine.Color DG.Tweening.DOTweenPath::pathColor
	Color_t4194546905  ___pathColor_48;
	// UnityEngine.Vector3 DG.Tweening.DOTweenPath::lastSrcPosition
	Vector3_t4282066566  ___lastSrcPosition_49;
	// System.Boolean DG.Tweening.DOTweenPath::wpsDropdown
	bool ___wpsDropdown_50;

public:
	inline static int32_t get_offset_of_delay_17() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___delay_17)); }
	inline float get_delay_17() const { return ___delay_17; }
	inline float* get_address_of_delay_17() { return &___delay_17; }
	inline void set_delay_17(float value)
	{
		___delay_17 = value;
	}

	inline static int32_t get_offset_of_duration_18() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___duration_18)); }
	inline float get_duration_18() const { return ___duration_18; }
	inline float* get_address_of_duration_18() { return &___duration_18; }
	inline void set_duration_18(float value)
	{
		___duration_18 = value;
	}

	inline static int32_t get_offset_of_easeType_19() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___easeType_19)); }
	inline int32_t get_easeType_19() const { return ___easeType_19; }
	inline int32_t* get_address_of_easeType_19() { return &___easeType_19; }
	inline void set_easeType_19(int32_t value)
	{
		___easeType_19 = value;
	}

	inline static int32_t get_offset_of_easeCurve_20() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___easeCurve_20)); }
	inline AnimationCurve_t3667593487 * get_easeCurve_20() const { return ___easeCurve_20; }
	inline AnimationCurve_t3667593487 ** get_address_of_easeCurve_20() { return &___easeCurve_20; }
	inline void set_easeCurve_20(AnimationCurve_t3667593487 * value)
	{
		___easeCurve_20 = value;
		Il2CppCodeGenWriteBarrier(&___easeCurve_20, value);
	}

	inline static int32_t get_offset_of_loops_21() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___loops_21)); }
	inline int32_t get_loops_21() const { return ___loops_21; }
	inline int32_t* get_address_of_loops_21() { return &___loops_21; }
	inline void set_loops_21(int32_t value)
	{
		___loops_21 = value;
	}

	inline static int32_t get_offset_of_loopType_22() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___loopType_22)); }
	inline int32_t get_loopType_22() const { return ___loopType_22; }
	inline int32_t* get_address_of_loopType_22() { return &___loopType_22; }
	inline void set_loopType_22(int32_t value)
	{
		___loopType_22 = value;
	}

	inline static int32_t get_offset_of_orientType_23() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___orientType_23)); }
	inline int32_t get_orientType_23() const { return ___orientType_23; }
	inline int32_t* get_address_of_orientType_23() { return &___orientType_23; }
	inline void set_orientType_23(int32_t value)
	{
		___orientType_23 = value;
	}

	inline static int32_t get_offset_of_lookAtTransform_24() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___lookAtTransform_24)); }
	inline Transform_t1659122786 * get_lookAtTransform_24() const { return ___lookAtTransform_24; }
	inline Transform_t1659122786 ** get_address_of_lookAtTransform_24() { return &___lookAtTransform_24; }
	inline void set_lookAtTransform_24(Transform_t1659122786 * value)
	{
		___lookAtTransform_24 = value;
		Il2CppCodeGenWriteBarrier(&___lookAtTransform_24, value);
	}

	inline static int32_t get_offset_of_lookAtPosition_25() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___lookAtPosition_25)); }
	inline Vector3_t4282066566  get_lookAtPosition_25() const { return ___lookAtPosition_25; }
	inline Vector3_t4282066566 * get_address_of_lookAtPosition_25() { return &___lookAtPosition_25; }
	inline void set_lookAtPosition_25(Vector3_t4282066566  value)
	{
		___lookAtPosition_25 = value;
	}

	inline static int32_t get_offset_of_lookAhead_26() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___lookAhead_26)); }
	inline float get_lookAhead_26() const { return ___lookAhead_26; }
	inline float* get_address_of_lookAhead_26() { return &___lookAhead_26; }
	inline void set_lookAhead_26(float value)
	{
		___lookAhead_26 = value;
	}

	inline static int32_t get_offset_of_autoPlay_27() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___autoPlay_27)); }
	inline bool get_autoPlay_27() const { return ___autoPlay_27; }
	inline bool* get_address_of_autoPlay_27() { return &___autoPlay_27; }
	inline void set_autoPlay_27(bool value)
	{
		___autoPlay_27 = value;
	}

	inline static int32_t get_offset_of_autoKill_28() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___autoKill_28)); }
	inline bool get_autoKill_28() const { return ___autoKill_28; }
	inline bool* get_address_of_autoKill_28() { return &___autoKill_28; }
	inline void set_autoKill_28(bool value)
	{
		___autoKill_28 = value;
	}

	inline static int32_t get_offset_of_relative_29() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___relative_29)); }
	inline bool get_relative_29() const { return ___relative_29; }
	inline bool* get_address_of_relative_29() { return &___relative_29; }
	inline void set_relative_29(bool value)
	{
		___relative_29 = value;
	}

	inline static int32_t get_offset_of_isLocal_30() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___isLocal_30)); }
	inline bool get_isLocal_30() const { return ___isLocal_30; }
	inline bool* get_address_of_isLocal_30() { return &___isLocal_30; }
	inline void set_isLocal_30(bool value)
	{
		___isLocal_30 = value;
	}

	inline static int32_t get_offset_of_isClosedPath_31() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___isClosedPath_31)); }
	inline bool get_isClosedPath_31() const { return ___isClosedPath_31; }
	inline bool* get_address_of_isClosedPath_31() { return &___isClosedPath_31; }
	inline void set_isClosedPath_31(bool value)
	{
		___isClosedPath_31 = value;
	}

	inline static int32_t get_offset_of_pathResolution_32() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___pathResolution_32)); }
	inline int32_t get_pathResolution_32() const { return ___pathResolution_32; }
	inline int32_t* get_address_of_pathResolution_32() { return &___pathResolution_32; }
	inline void set_pathResolution_32(int32_t value)
	{
		___pathResolution_32 = value;
	}

	inline static int32_t get_offset_of_pathMode_33() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___pathMode_33)); }
	inline int32_t get_pathMode_33() const { return ___pathMode_33; }
	inline int32_t* get_address_of_pathMode_33() { return &___pathMode_33; }
	inline void set_pathMode_33(int32_t value)
	{
		___pathMode_33 = value;
	}

	inline static int32_t get_offset_of_lockRotation_34() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___lockRotation_34)); }
	inline int32_t get_lockRotation_34() const { return ___lockRotation_34; }
	inline int32_t* get_address_of_lockRotation_34() { return &___lockRotation_34; }
	inline void set_lockRotation_34(int32_t value)
	{
		___lockRotation_34 = value;
	}

	inline static int32_t get_offset_of_assignForwardAndUp_35() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___assignForwardAndUp_35)); }
	inline bool get_assignForwardAndUp_35() const { return ___assignForwardAndUp_35; }
	inline bool* get_address_of_assignForwardAndUp_35() { return &___assignForwardAndUp_35; }
	inline void set_assignForwardAndUp_35(bool value)
	{
		___assignForwardAndUp_35 = value;
	}

	inline static int32_t get_offset_of_forwardDirection_36() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___forwardDirection_36)); }
	inline Vector3_t4282066566  get_forwardDirection_36() const { return ___forwardDirection_36; }
	inline Vector3_t4282066566 * get_address_of_forwardDirection_36() { return &___forwardDirection_36; }
	inline void set_forwardDirection_36(Vector3_t4282066566  value)
	{
		___forwardDirection_36 = value;
	}

	inline static int32_t get_offset_of_upDirection_37() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___upDirection_37)); }
	inline Vector3_t4282066566  get_upDirection_37() const { return ___upDirection_37; }
	inline Vector3_t4282066566 * get_address_of_upDirection_37() { return &___upDirection_37; }
	inline void set_upDirection_37(Vector3_t4282066566  value)
	{
		___upDirection_37 = value;
	}

	inline static int32_t get_offset_of_wps_38() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___wps_38)); }
	inline List_1_t1355284822 * get_wps_38() const { return ___wps_38; }
	inline List_1_t1355284822 ** get_address_of_wps_38() { return &___wps_38; }
	inline void set_wps_38(List_1_t1355284822 * value)
	{
		___wps_38 = value;
		Il2CppCodeGenWriteBarrier(&___wps_38, value);
	}

	inline static int32_t get_offset_of_fullWps_39() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___fullWps_39)); }
	inline List_1_t1355284822 * get_fullWps_39() const { return ___fullWps_39; }
	inline List_1_t1355284822 ** get_address_of_fullWps_39() { return &___fullWps_39; }
	inline void set_fullWps_39(List_1_t1355284822 * value)
	{
		___fullWps_39 = value;
		Il2CppCodeGenWriteBarrier(&___fullWps_39, value);
	}

	inline static int32_t get_offset_of_path_40() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___path_40)); }
	inline Path_t4203839645 * get_path_40() const { return ___path_40; }
	inline Path_t4203839645 ** get_address_of_path_40() { return &___path_40; }
	inline void set_path_40(Path_t4203839645 * value)
	{
		___path_40 = value;
		Il2CppCodeGenWriteBarrier(&___path_40, value);
	}

	inline static int32_t get_offset_of_inspectorMode_41() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___inspectorMode_41)); }
	inline int32_t get_inspectorMode_41() const { return ___inspectorMode_41; }
	inline int32_t* get_address_of_inspectorMode_41() { return &___inspectorMode_41; }
	inline void set_inspectorMode_41(int32_t value)
	{
		___inspectorMode_41 = value;
	}

	inline static int32_t get_offset_of_pathType_42() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___pathType_42)); }
	inline int32_t get_pathType_42() const { return ___pathType_42; }
	inline int32_t* get_address_of_pathType_42() { return &___pathType_42; }
	inline void set_pathType_42(int32_t value)
	{
		___pathType_42 = value;
	}

	inline static int32_t get_offset_of_handlesType_43() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___handlesType_43)); }
	inline int32_t get_handlesType_43() const { return ___handlesType_43; }
	inline int32_t* get_address_of_handlesType_43() { return &___handlesType_43; }
	inline void set_handlesType_43(int32_t value)
	{
		___handlesType_43 = value;
	}

	inline static int32_t get_offset_of_livePreview_44() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___livePreview_44)); }
	inline bool get_livePreview_44() const { return ___livePreview_44; }
	inline bool* get_address_of_livePreview_44() { return &___livePreview_44; }
	inline void set_livePreview_44(bool value)
	{
		___livePreview_44 = value;
	}

	inline static int32_t get_offset_of_handlesDrawMode_45() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___handlesDrawMode_45)); }
	inline int32_t get_handlesDrawMode_45() const { return ___handlesDrawMode_45; }
	inline int32_t* get_address_of_handlesDrawMode_45() { return &___handlesDrawMode_45; }
	inline void set_handlesDrawMode_45(int32_t value)
	{
		___handlesDrawMode_45 = value;
	}

	inline static int32_t get_offset_of_perspectiveHandleSize_46() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___perspectiveHandleSize_46)); }
	inline float get_perspectiveHandleSize_46() const { return ___perspectiveHandleSize_46; }
	inline float* get_address_of_perspectiveHandleSize_46() { return &___perspectiveHandleSize_46; }
	inline void set_perspectiveHandleSize_46(float value)
	{
		___perspectiveHandleSize_46 = value;
	}

	inline static int32_t get_offset_of_showIndexes_47() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___showIndexes_47)); }
	inline bool get_showIndexes_47() const { return ___showIndexes_47; }
	inline bool* get_address_of_showIndexes_47() { return &___showIndexes_47; }
	inline void set_showIndexes_47(bool value)
	{
		___showIndexes_47 = value;
	}

	inline static int32_t get_offset_of_pathColor_48() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___pathColor_48)); }
	inline Color_t4194546905  get_pathColor_48() const { return ___pathColor_48; }
	inline Color_t4194546905 * get_address_of_pathColor_48() { return &___pathColor_48; }
	inline void set_pathColor_48(Color_t4194546905  value)
	{
		___pathColor_48 = value;
	}

	inline static int32_t get_offset_of_lastSrcPosition_49() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___lastSrcPosition_49)); }
	inline Vector3_t4282066566  get_lastSrcPosition_49() const { return ___lastSrcPosition_49; }
	inline Vector3_t4282066566 * get_address_of_lastSrcPosition_49() { return &___lastSrcPosition_49; }
	inline void set_lastSrcPosition_49(Vector3_t4282066566  value)
	{
		___lastSrcPosition_49 = value;
	}

	inline static int32_t get_offset_of_wpsDropdown_50() { return static_cast<int32_t>(offsetof(DOTweenPath_t521481135, ___wpsDropdown_50)); }
	inline bool get_wpsDropdown_50() const { return ___wpsDropdown_50; }
	inline bool* get_address_of_wpsDropdown_50() { return &___wpsDropdown_50; }
	inline void set_wpsDropdown_50(bool value)
	{
		___wpsDropdown_50 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
