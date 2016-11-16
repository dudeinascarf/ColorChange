#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ES2AutoSaveVariableInfo>
struct List_1_t2529592682;
// System.Collections.Generic.List`1<ES2AutoSaveComponentInfo>
struct List_1_t3401193163;
// ES2AutoSaveVariableInfo
struct ES2AutoSaveVariableInfo_t1161407130;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2AutoSave
struct  ES2AutoSave_t2758578480  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<ES2AutoSaveVariableInfo> ES2AutoSave::variableCache
	List_1_t2529592682 * ___variableCache_2;
	// System.Collections.Generic.List`1<ES2AutoSaveComponentInfo> ES2AutoSave::components
	List_1_t3401193163 * ___components_3;
	// ES2AutoSaveVariableInfo ES2AutoSave::activeSelfVariable
	ES2AutoSaveVariableInfo_t1161407130 * ___activeSelfVariable_4;
	// ES2AutoSaveVariableInfo ES2AutoSave::nameVariable
	ES2AutoSaveVariableInfo_t1161407130 * ___nameVariable_5;
	// ES2AutoSaveVariableInfo ES2AutoSave::tagVariable
	ES2AutoSaveVariableInfo_t1161407130 * ___tagVariable_6;
	// ES2AutoSaveVariableInfo ES2AutoSave::layerVariable
	ES2AutoSaveVariableInfo_t1161407130 * ___layerVariable_7;
	// ES2AutoSaveVariableInfo ES2AutoSave::parentVariable
	ES2AutoSaveVariableInfo_t1161407130 * ___parentVariable_8;
	// System.String ES2AutoSave::id
	String_t* ___id_9;
	// System.String ES2AutoSave::prefabID
	String_t* ___prefabID_10;
	// System.Boolean ES2AutoSave::_selected
	bool ____selected_11;
	// System.Boolean ES2AutoSave::<selectionChanged>k__BackingField
	bool ___U3CselectionChangedU3Ek__BackingField_12;
	// System.Boolean ES2AutoSave::saveButtonSelected
	bool ___saveButtonSelected_13;
	// System.Boolean ES2AutoSave::<buttonSelectionChanged>k__BackingField
	bool ___U3CbuttonSelectionChangedU3Ek__BackingField_14;
	// UnityEngine.Color ES2AutoSave::color
	Color_t4194546905  ___color_15;
	// UnityEngine.Transform ES2AutoSave::transform
	Transform_t1659122786 * ___transform_16;

public:
	inline static int32_t get_offset_of_variableCache_2() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___variableCache_2)); }
	inline List_1_t2529592682 * get_variableCache_2() const { return ___variableCache_2; }
	inline List_1_t2529592682 ** get_address_of_variableCache_2() { return &___variableCache_2; }
	inline void set_variableCache_2(List_1_t2529592682 * value)
	{
		___variableCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___variableCache_2, value);
	}

	inline static int32_t get_offset_of_components_3() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___components_3)); }
	inline List_1_t3401193163 * get_components_3() const { return ___components_3; }
	inline List_1_t3401193163 ** get_address_of_components_3() { return &___components_3; }
	inline void set_components_3(List_1_t3401193163 * value)
	{
		___components_3 = value;
		Il2CppCodeGenWriteBarrier(&___components_3, value);
	}

	inline static int32_t get_offset_of_activeSelfVariable_4() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___activeSelfVariable_4)); }
	inline ES2AutoSaveVariableInfo_t1161407130 * get_activeSelfVariable_4() const { return ___activeSelfVariable_4; }
	inline ES2AutoSaveVariableInfo_t1161407130 ** get_address_of_activeSelfVariable_4() { return &___activeSelfVariable_4; }
	inline void set_activeSelfVariable_4(ES2AutoSaveVariableInfo_t1161407130 * value)
	{
		___activeSelfVariable_4 = value;
		Il2CppCodeGenWriteBarrier(&___activeSelfVariable_4, value);
	}

	inline static int32_t get_offset_of_nameVariable_5() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___nameVariable_5)); }
	inline ES2AutoSaveVariableInfo_t1161407130 * get_nameVariable_5() const { return ___nameVariable_5; }
	inline ES2AutoSaveVariableInfo_t1161407130 ** get_address_of_nameVariable_5() { return &___nameVariable_5; }
	inline void set_nameVariable_5(ES2AutoSaveVariableInfo_t1161407130 * value)
	{
		___nameVariable_5 = value;
		Il2CppCodeGenWriteBarrier(&___nameVariable_5, value);
	}

	inline static int32_t get_offset_of_tagVariable_6() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___tagVariable_6)); }
	inline ES2AutoSaveVariableInfo_t1161407130 * get_tagVariable_6() const { return ___tagVariable_6; }
	inline ES2AutoSaveVariableInfo_t1161407130 ** get_address_of_tagVariable_6() { return &___tagVariable_6; }
	inline void set_tagVariable_6(ES2AutoSaveVariableInfo_t1161407130 * value)
	{
		___tagVariable_6 = value;
		Il2CppCodeGenWriteBarrier(&___tagVariable_6, value);
	}

	inline static int32_t get_offset_of_layerVariable_7() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___layerVariable_7)); }
	inline ES2AutoSaveVariableInfo_t1161407130 * get_layerVariable_7() const { return ___layerVariable_7; }
	inline ES2AutoSaveVariableInfo_t1161407130 ** get_address_of_layerVariable_7() { return &___layerVariable_7; }
	inline void set_layerVariable_7(ES2AutoSaveVariableInfo_t1161407130 * value)
	{
		___layerVariable_7 = value;
		Il2CppCodeGenWriteBarrier(&___layerVariable_7, value);
	}

	inline static int32_t get_offset_of_parentVariable_8() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___parentVariable_8)); }
	inline ES2AutoSaveVariableInfo_t1161407130 * get_parentVariable_8() const { return ___parentVariable_8; }
	inline ES2AutoSaveVariableInfo_t1161407130 ** get_address_of_parentVariable_8() { return &___parentVariable_8; }
	inline void set_parentVariable_8(ES2AutoSaveVariableInfo_t1161407130 * value)
	{
		___parentVariable_8 = value;
		Il2CppCodeGenWriteBarrier(&___parentVariable_8, value);
	}

	inline static int32_t get_offset_of_id_9() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___id_9)); }
	inline String_t* get_id_9() const { return ___id_9; }
	inline String_t** get_address_of_id_9() { return &___id_9; }
	inline void set_id_9(String_t* value)
	{
		___id_9 = value;
		Il2CppCodeGenWriteBarrier(&___id_9, value);
	}

	inline static int32_t get_offset_of_prefabID_10() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___prefabID_10)); }
	inline String_t* get_prefabID_10() const { return ___prefabID_10; }
	inline String_t** get_address_of_prefabID_10() { return &___prefabID_10; }
	inline void set_prefabID_10(String_t* value)
	{
		___prefabID_10 = value;
		Il2CppCodeGenWriteBarrier(&___prefabID_10, value);
	}

	inline static int32_t get_offset_of__selected_11() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ____selected_11)); }
	inline bool get__selected_11() const { return ____selected_11; }
	inline bool* get_address_of__selected_11() { return &____selected_11; }
	inline void set__selected_11(bool value)
	{
		____selected_11 = value;
	}

	inline static int32_t get_offset_of_U3CselectionChangedU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___U3CselectionChangedU3Ek__BackingField_12)); }
	inline bool get_U3CselectionChangedU3Ek__BackingField_12() const { return ___U3CselectionChangedU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CselectionChangedU3Ek__BackingField_12() { return &___U3CselectionChangedU3Ek__BackingField_12; }
	inline void set_U3CselectionChangedU3Ek__BackingField_12(bool value)
	{
		___U3CselectionChangedU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_saveButtonSelected_13() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___saveButtonSelected_13)); }
	inline bool get_saveButtonSelected_13() const { return ___saveButtonSelected_13; }
	inline bool* get_address_of_saveButtonSelected_13() { return &___saveButtonSelected_13; }
	inline void set_saveButtonSelected_13(bool value)
	{
		___saveButtonSelected_13 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonSelectionChangedU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___U3CbuttonSelectionChangedU3Ek__BackingField_14)); }
	inline bool get_U3CbuttonSelectionChangedU3Ek__BackingField_14() const { return ___U3CbuttonSelectionChangedU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CbuttonSelectionChangedU3Ek__BackingField_14() { return &___U3CbuttonSelectionChangedU3Ek__BackingField_14; }
	inline void set_U3CbuttonSelectionChangedU3Ek__BackingField_14(bool value)
	{
		___U3CbuttonSelectionChangedU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_color_15() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___color_15)); }
	inline Color_t4194546905  get_color_15() const { return ___color_15; }
	inline Color_t4194546905 * get_address_of_color_15() { return &___color_15; }
	inline void set_color_15(Color_t4194546905  value)
	{
		___color_15 = value;
	}

	inline static int32_t get_offset_of_transform_16() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___transform_16)); }
	inline Transform_t1659122786 * get_transform_16() const { return ___transform_16; }
	inline Transform_t1659122786 ** get_address_of_transform_16() { return &___transform_16; }
	inline void set_transform_16(Transform_t1659122786 * value)
	{
		___transform_16 = value;
		Il2CppCodeGenWriteBarrier(&___transform_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
