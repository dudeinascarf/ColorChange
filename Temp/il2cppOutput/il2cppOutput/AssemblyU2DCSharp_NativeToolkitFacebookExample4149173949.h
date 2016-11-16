#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.UI.Text
struct Text_t9039225;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t3199167241;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeToolkitFacebookExample
struct  NativeToolkitFacebookExample_t4149173949  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Texture2D NativeToolkitFacebookExample::testImage
	Texture2D_t3884108195 * ___testImage_2;
	// UnityEngine.UI.Image NativeToolkitFacebookExample::profilePic
	Image_t538875265 * ___profilePic_3;
	// UnityEngine.UI.Text NativeToolkitFacebookExample::userName
	Text_t9039225 * ___userName_4;
	// UnityEngine.UI.Text NativeToolkitFacebookExample::Id
	Text_t9039225 * ___Id_5;
	// System.String NativeToolkitFacebookExample::imagePath
	String_t* ___imagePath_6;
	// UnityEngine.Sprite NativeToolkitFacebookExample::defaultImage
	Sprite_t3199167241 * ___defaultImage_7;

public:
	inline static int32_t get_offset_of_testImage_2() { return static_cast<int32_t>(offsetof(NativeToolkitFacebookExample_t4149173949, ___testImage_2)); }
	inline Texture2D_t3884108195 * get_testImage_2() const { return ___testImage_2; }
	inline Texture2D_t3884108195 ** get_address_of_testImage_2() { return &___testImage_2; }
	inline void set_testImage_2(Texture2D_t3884108195 * value)
	{
		___testImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___testImage_2, value);
	}

	inline static int32_t get_offset_of_profilePic_3() { return static_cast<int32_t>(offsetof(NativeToolkitFacebookExample_t4149173949, ___profilePic_3)); }
	inline Image_t538875265 * get_profilePic_3() const { return ___profilePic_3; }
	inline Image_t538875265 ** get_address_of_profilePic_3() { return &___profilePic_3; }
	inline void set_profilePic_3(Image_t538875265 * value)
	{
		___profilePic_3 = value;
		Il2CppCodeGenWriteBarrier(&___profilePic_3, value);
	}

	inline static int32_t get_offset_of_userName_4() { return static_cast<int32_t>(offsetof(NativeToolkitFacebookExample_t4149173949, ___userName_4)); }
	inline Text_t9039225 * get_userName_4() const { return ___userName_4; }
	inline Text_t9039225 ** get_address_of_userName_4() { return &___userName_4; }
	inline void set_userName_4(Text_t9039225 * value)
	{
		___userName_4 = value;
		Il2CppCodeGenWriteBarrier(&___userName_4, value);
	}

	inline static int32_t get_offset_of_Id_5() { return static_cast<int32_t>(offsetof(NativeToolkitFacebookExample_t4149173949, ___Id_5)); }
	inline Text_t9039225 * get_Id_5() const { return ___Id_5; }
	inline Text_t9039225 ** get_address_of_Id_5() { return &___Id_5; }
	inline void set_Id_5(Text_t9039225 * value)
	{
		___Id_5 = value;
		Il2CppCodeGenWriteBarrier(&___Id_5, value);
	}

	inline static int32_t get_offset_of_imagePath_6() { return static_cast<int32_t>(offsetof(NativeToolkitFacebookExample_t4149173949, ___imagePath_6)); }
	inline String_t* get_imagePath_6() const { return ___imagePath_6; }
	inline String_t** get_address_of_imagePath_6() { return &___imagePath_6; }
	inline void set_imagePath_6(String_t* value)
	{
		___imagePath_6 = value;
		Il2CppCodeGenWriteBarrier(&___imagePath_6, value);
	}

	inline static int32_t get_offset_of_defaultImage_7() { return static_cast<int32_t>(offsetof(NativeToolkitFacebookExample_t4149173949, ___defaultImage_7)); }
	inline Sprite_t3199167241 * get_defaultImage_7() const { return ___defaultImage_7; }
	inline Sprite_t3199167241 ** get_address_of_defaultImage_7() { return &___defaultImage_7; }
	inline void set_defaultImage_7(Sprite_t3199167241 * value)
	{
		___defaultImage_7 = value;
		Il2CppCodeGenWriteBarrier(&___defaultImage_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
