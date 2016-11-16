#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// FBWrapper
struct FBWrapper_t353765431;
// System.Action
struct Action_t3771233898;
// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Action_1_t1092083581;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t4279924331;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3771233898.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"
#include "mscorlib_System_Nullable_1_gen1237965023.h"

// System.Void FBWrapper::.ctor()
extern "C"  void FBWrapper__ctor_m2283100948 (FBWrapper_t353765431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBWrapper::.cctor()
extern "C"  void FBWrapper__cctor_m1574556441 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBWrapper FBWrapper::get_Instance()
extern "C"  FBWrapper_t353765431 * FBWrapper_get_Instance_m2803474 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBWrapper::Awake()
extern "C"  void FBWrapper_Awake_m2520706167 (FBWrapper_t353765431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBWrapper::Init(System.Action)
extern "C"  void FBWrapper_Init_m279674045 (FBWrapper_t353765431 * __this, Action_t3771233898 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBWrapper::Login(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
extern "C"  void FBWrapper_Login_m3022720592 (FBWrapper_t353765431 * __this, Action_1_t1092083581 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBWrapper::PostToWall(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>,System.String,System.String,System.String,System.String,System.String)
extern "C"  void FBWrapper_PostToWall_m3357353922 (FBWrapper_t353765431 * __this, Action_1_t1092083581 * ___callback0, String_t* ___title1, String_t* ___caption2, String_t* ___description3, String_t* ___image4, String_t* ___link5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBWrapper::PostImageToWall(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>,UnityEngine.Texture2D)
extern "C"  void FBWrapper_PostImageToWall_m16831055 (FBWrapper_t353765431 * __this, Action_1_t1092083581 * ___callback0, Texture2D_t3884108195 * ___image1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBWrapper::UploadImage(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>,UnityEngine.Texture2D,System.String)
extern "C"  void FBWrapper_UploadImage_m3210205969 (FBWrapper_t353765431 * __this, Action_1_t1092083581 * ___callback0, Texture2D_t3884108195 * ___image1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBWrapper::ShareWithFriends(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>,System.String,System.String,System.Boolean,System.Nullable`1<System.Int32>)
extern "C"  void FBWrapper_ShareWithFriends_m4028858914 (FBWrapper_t353765431 * __this, Action_1_t1092083581 * ___callback0, String_t* ___title1, String_t* ___message2, bool ___nonUsers3, Nullable_1_t1237965023  ___maxRecipients4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBWrapper::GetProfilePic(System.Action`1<UnityEngine.Texture2D>)
extern "C"  void FBWrapper_GetProfilePic_m1214576523 (FBWrapper_t353765431 * __this, Action_1_t4279924331 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBWrapper::GetUserDetails(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
extern "C"  void FBWrapper_GetUserDetails_m34685434 (FBWrapper_t353765431 * __this, Action_1_t1092083581 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBWrapper::Logout()
extern "C"  void FBWrapper_Logout_m194480890 (FBWrapper_t353765431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
