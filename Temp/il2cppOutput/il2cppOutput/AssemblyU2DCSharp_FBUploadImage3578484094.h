#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t609046876;
// UnityEngine.UI.Image
struct Image_t538875265;
// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Action_1_t1092083581;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t1858258760;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FBUploadImage
struct  FBUploadImage_t3578484094  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.InputField FBUploadImage::messageField
	InputField_t609046876 * ___messageField_2;
	// UnityEngine.UI.Image FBUploadImage::uploadImage
	Image_t538875265 * ___uploadImage_3;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> FBUploadImage::callback
	Action_1_t1092083581 * ___callback_4;
	// UnityEngine.Texture2D FBUploadImage::image
	Texture2D_t3884108195 * ___image_5;
	// UnityEngine.GameObject FBUploadImage::eventSystem
	GameObject_t3674682005 * ___eventSystem_6;
	// UnityEngine.TouchScreenKeyboard FBUploadImage::keyboard
	TouchScreenKeyboard_t1858258760 * ___keyboard_7;

public:
	inline static int32_t get_offset_of_messageField_2() { return static_cast<int32_t>(offsetof(FBUploadImage_t3578484094, ___messageField_2)); }
	inline InputField_t609046876 * get_messageField_2() const { return ___messageField_2; }
	inline InputField_t609046876 ** get_address_of_messageField_2() { return &___messageField_2; }
	inline void set_messageField_2(InputField_t609046876 * value)
	{
		___messageField_2 = value;
		Il2CppCodeGenWriteBarrier(&___messageField_2, value);
	}

	inline static int32_t get_offset_of_uploadImage_3() { return static_cast<int32_t>(offsetof(FBUploadImage_t3578484094, ___uploadImage_3)); }
	inline Image_t538875265 * get_uploadImage_3() const { return ___uploadImage_3; }
	inline Image_t538875265 ** get_address_of_uploadImage_3() { return &___uploadImage_3; }
	inline void set_uploadImage_3(Image_t538875265 * value)
	{
		___uploadImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___uploadImage_3, value);
	}

	inline static int32_t get_offset_of_callback_4() { return static_cast<int32_t>(offsetof(FBUploadImage_t3578484094, ___callback_4)); }
	inline Action_1_t1092083581 * get_callback_4() const { return ___callback_4; }
	inline Action_1_t1092083581 ** get_address_of_callback_4() { return &___callback_4; }
	inline void set_callback_4(Action_1_t1092083581 * value)
	{
		___callback_4 = value;
		Il2CppCodeGenWriteBarrier(&___callback_4, value);
	}

	inline static int32_t get_offset_of_image_5() { return static_cast<int32_t>(offsetof(FBUploadImage_t3578484094, ___image_5)); }
	inline Texture2D_t3884108195 * get_image_5() const { return ___image_5; }
	inline Texture2D_t3884108195 ** get_address_of_image_5() { return &___image_5; }
	inline void set_image_5(Texture2D_t3884108195 * value)
	{
		___image_5 = value;
		Il2CppCodeGenWriteBarrier(&___image_5, value);
	}

	inline static int32_t get_offset_of_eventSystem_6() { return static_cast<int32_t>(offsetof(FBUploadImage_t3578484094, ___eventSystem_6)); }
	inline GameObject_t3674682005 * get_eventSystem_6() const { return ___eventSystem_6; }
	inline GameObject_t3674682005 ** get_address_of_eventSystem_6() { return &___eventSystem_6; }
	inline void set_eventSystem_6(GameObject_t3674682005 * value)
	{
		___eventSystem_6 = value;
		Il2CppCodeGenWriteBarrier(&___eventSystem_6, value);
	}

	inline static int32_t get_offset_of_keyboard_7() { return static_cast<int32_t>(offsetof(FBUploadImage_t3578484094, ___keyboard_7)); }
	inline TouchScreenKeyboard_t1858258760 * get_keyboard_7() const { return ___keyboard_7; }
	inline TouchScreenKeyboard_t1858258760 ** get_address_of_keyboard_7() { return &___keyboard_7; }
	inline void set_keyboard_7(TouchScreenKeyboard_t1858258760 * value)
	{
		___keyboard_7 = value;
		Il2CppCodeGenWriteBarrier(&___keyboard_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
