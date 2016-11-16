#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeToolkitExample
struct  NativeToolkitExample_t3568563555  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text NativeToolkitExample::console
	Text_t9039225 * ___console_2;
	// UnityEngine.Texture2D NativeToolkitExample::texture
	Texture2D_t3884108195 * ___texture_3;
	// System.String NativeToolkitExample::imagePath
	String_t* ___imagePath_4;

public:
	inline static int32_t get_offset_of_console_2() { return static_cast<int32_t>(offsetof(NativeToolkitExample_t3568563555, ___console_2)); }
	inline Text_t9039225 * get_console_2() const { return ___console_2; }
	inline Text_t9039225 ** get_address_of_console_2() { return &___console_2; }
	inline void set_console_2(Text_t9039225 * value)
	{
		___console_2 = value;
		Il2CppCodeGenWriteBarrier(&___console_2, value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(NativeToolkitExample_t3568563555, ___texture_3)); }
	inline Texture2D_t3884108195 * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t3884108195 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t3884108195 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier(&___texture_3, value);
	}

	inline static int32_t get_offset_of_imagePath_4() { return static_cast<int32_t>(offsetof(NativeToolkitExample_t3568563555, ___imagePath_4)); }
	inline String_t* get_imagePath_4() const { return ___imagePath_4; }
	inline String_t** get_address_of_imagePath_4() { return &___imagePath_4; }
	inline void set_imagePath_4(String_t* value)
	{
		___imagePath_4 = value;
		Il2CppCodeGenWriteBarrier(&___imagePath_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
