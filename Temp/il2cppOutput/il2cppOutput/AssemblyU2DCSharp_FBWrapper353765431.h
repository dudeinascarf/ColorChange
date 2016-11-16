#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FBWrapper
struct FBWrapper_t353765431;
// System.Action
struct Action_t3771233898;
// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Action_1_t1092083581;
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

// FBWrapper
struct  FBWrapper_t353765431  : public MonoBehaviour_t667441552
{
public:
	// System.Action FBWrapper::OnInit
	Action_t3771233898 * ___OnInit_3;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> FBWrapper::OnLogin
	Action_1_t1092083581 * ___OnLogin_4;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> FBWrapper::OnPostToWall
	Action_1_t1092083581 * ___OnPostToWall_5;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> FBWrapper::OnImageUpload
	Action_1_t1092083581 * ___OnImageUpload_6;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> FBWrapper::OnShareWithFriends
	Action_1_t1092083581 * ___OnShareWithFriends_7;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> FBWrapper::OnGetUserDetails
	Action_1_t1092083581 * ___OnGetUserDetails_8;
	// UnityEngine.Texture2D FBWrapper::uploadImage
	Texture2D_t3884108195 * ___uploadImage_9;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> FBWrapper::uploadCallback
	Action_1_t1092083581 * ___uploadCallback_10;
	// System.String FBWrapper::userId
	String_t* ___userId_11;

public:
	inline static int32_t get_offset_of_OnInit_3() { return static_cast<int32_t>(offsetof(FBWrapper_t353765431, ___OnInit_3)); }
	inline Action_t3771233898 * get_OnInit_3() const { return ___OnInit_3; }
	inline Action_t3771233898 ** get_address_of_OnInit_3() { return &___OnInit_3; }
	inline void set_OnInit_3(Action_t3771233898 * value)
	{
		___OnInit_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnInit_3, value);
	}

	inline static int32_t get_offset_of_OnLogin_4() { return static_cast<int32_t>(offsetof(FBWrapper_t353765431, ___OnLogin_4)); }
	inline Action_1_t1092083581 * get_OnLogin_4() const { return ___OnLogin_4; }
	inline Action_1_t1092083581 ** get_address_of_OnLogin_4() { return &___OnLogin_4; }
	inline void set_OnLogin_4(Action_1_t1092083581 * value)
	{
		___OnLogin_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnLogin_4, value);
	}

	inline static int32_t get_offset_of_OnPostToWall_5() { return static_cast<int32_t>(offsetof(FBWrapper_t353765431, ___OnPostToWall_5)); }
	inline Action_1_t1092083581 * get_OnPostToWall_5() const { return ___OnPostToWall_5; }
	inline Action_1_t1092083581 ** get_address_of_OnPostToWall_5() { return &___OnPostToWall_5; }
	inline void set_OnPostToWall_5(Action_1_t1092083581 * value)
	{
		___OnPostToWall_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnPostToWall_5, value);
	}

	inline static int32_t get_offset_of_OnImageUpload_6() { return static_cast<int32_t>(offsetof(FBWrapper_t353765431, ___OnImageUpload_6)); }
	inline Action_1_t1092083581 * get_OnImageUpload_6() const { return ___OnImageUpload_6; }
	inline Action_1_t1092083581 ** get_address_of_OnImageUpload_6() { return &___OnImageUpload_6; }
	inline void set_OnImageUpload_6(Action_1_t1092083581 * value)
	{
		___OnImageUpload_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnImageUpload_6, value);
	}

	inline static int32_t get_offset_of_OnShareWithFriends_7() { return static_cast<int32_t>(offsetof(FBWrapper_t353765431, ___OnShareWithFriends_7)); }
	inline Action_1_t1092083581 * get_OnShareWithFriends_7() const { return ___OnShareWithFriends_7; }
	inline Action_1_t1092083581 ** get_address_of_OnShareWithFriends_7() { return &___OnShareWithFriends_7; }
	inline void set_OnShareWithFriends_7(Action_1_t1092083581 * value)
	{
		___OnShareWithFriends_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnShareWithFriends_7, value);
	}

	inline static int32_t get_offset_of_OnGetUserDetails_8() { return static_cast<int32_t>(offsetof(FBWrapper_t353765431, ___OnGetUserDetails_8)); }
	inline Action_1_t1092083581 * get_OnGetUserDetails_8() const { return ___OnGetUserDetails_8; }
	inline Action_1_t1092083581 ** get_address_of_OnGetUserDetails_8() { return &___OnGetUserDetails_8; }
	inline void set_OnGetUserDetails_8(Action_1_t1092083581 * value)
	{
		___OnGetUserDetails_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnGetUserDetails_8, value);
	}

	inline static int32_t get_offset_of_uploadImage_9() { return static_cast<int32_t>(offsetof(FBWrapper_t353765431, ___uploadImage_9)); }
	inline Texture2D_t3884108195 * get_uploadImage_9() const { return ___uploadImage_9; }
	inline Texture2D_t3884108195 ** get_address_of_uploadImage_9() { return &___uploadImage_9; }
	inline void set_uploadImage_9(Texture2D_t3884108195 * value)
	{
		___uploadImage_9 = value;
		Il2CppCodeGenWriteBarrier(&___uploadImage_9, value);
	}

	inline static int32_t get_offset_of_uploadCallback_10() { return static_cast<int32_t>(offsetof(FBWrapper_t353765431, ___uploadCallback_10)); }
	inline Action_1_t1092083581 * get_uploadCallback_10() const { return ___uploadCallback_10; }
	inline Action_1_t1092083581 ** get_address_of_uploadCallback_10() { return &___uploadCallback_10; }
	inline void set_uploadCallback_10(Action_1_t1092083581 * value)
	{
		___uploadCallback_10 = value;
		Il2CppCodeGenWriteBarrier(&___uploadCallback_10, value);
	}

	inline static int32_t get_offset_of_userId_11() { return static_cast<int32_t>(offsetof(FBWrapper_t353765431, ___userId_11)); }
	inline String_t* get_userId_11() const { return ___userId_11; }
	inline String_t** get_address_of_userId_11() { return &___userId_11; }
	inline void set_userId_11(String_t* value)
	{
		___userId_11 = value;
		Il2CppCodeGenWriteBarrier(&___userId_11, value);
	}
};

struct FBWrapper_t353765431_StaticFields
{
public:
	// FBWrapper FBWrapper::instance
	FBWrapper_t353765431 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(FBWrapper_t353765431_StaticFields, ___instance_2)); }
	inline FBWrapper_t353765431 * get_instance_2() const { return ___instance_2; }
	inline FBWrapper_t353765431 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(FBWrapper_t353765431 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
