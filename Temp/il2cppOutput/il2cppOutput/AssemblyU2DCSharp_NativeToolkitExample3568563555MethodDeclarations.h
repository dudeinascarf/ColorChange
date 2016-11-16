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

// NativeToolkitExample
struct NativeToolkitExample_t3568563555;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"

// System.Void NativeToolkitExample::.ctor()
extern "C"  void NativeToolkitExample__ctor_m2642330776 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::Start()
extern "C"  void NativeToolkitExample_Start_m1589468568 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnEnable()
extern "C"  void NativeToolkitExample_OnEnable_m1587125230 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnDisable()
extern "C"  void NativeToolkitExample_OnDisable_m2397179135 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnSaveScreenshotPress()
extern "C"  void NativeToolkitExample_OnSaveScreenshotPress_m3143372375 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnSaveImagePress()
extern "C"  void NativeToolkitExample_OnSaveImagePress_m1205740784 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnPickImagePress()
extern "C"  void NativeToolkitExample_OnPickImagePress_m1168117140 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnEmailSharePress()
extern "C"  void NativeToolkitExample_OnEmailSharePress_m1310376567 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnCameraPress()
extern "C"  void NativeToolkitExample_OnCameraPress_m624957877 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnPickContactPress()
extern "C"  void NativeToolkitExample_OnPickContactPress_m2311048303 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnShowAlertPress()
extern "C"  void NativeToolkitExample_OnShowAlertPress_m3369749327 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnShowDialogPress()
extern "C"  void NativeToolkitExample_OnShowDialogPress_m2018746165 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnLocalNotificationPress()
extern "C"  void NativeToolkitExample_OnLocalNotificationPress_m3257612760 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnClearNotificationsPress()
extern "C"  void NativeToolkitExample_OnClearNotificationsPress_m203270015 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnGetLocationPress()
extern "C"  void NativeToolkitExample_OnGetLocationPress_m3712213635 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::OnRateAppPress()
extern "C"  void NativeToolkitExample_OnRateAppPress_m3985496781 (NativeToolkitExample_t3568563555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::ScreenshotSaved(System.String)
extern "C"  void NativeToolkitExample_ScreenshotSaved_m2478751851 (NativeToolkitExample_t3568563555 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::ImageSaved(System.String)
extern "C"  void NativeToolkitExample_ImageSaved_m4150802858 (NativeToolkitExample_t3568563555 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::ImagePicked(UnityEngine.Texture2D,System.String)
extern "C"  void NativeToolkitExample_ImagePicked_m2649178823 (NativeToolkitExample_t3568563555 * __this, Texture2D_t3884108195 * ___img0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::CameraShotComplete(UnityEngine.Texture2D,System.String)
extern "C"  void NativeToolkitExample_CameraShotComplete_m3551515732 (NativeToolkitExample_t3568563555 * __this, Texture2D_t3884108195 * ___img0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::DialogFinished(System.Boolean)
extern "C"  void NativeToolkitExample_DialogFinished_m663300669 (NativeToolkitExample_t3568563555 * __this, bool ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::AppRated(System.String)
extern "C"  void NativeToolkitExample_AppRated_m2148215315 (NativeToolkitExample_t3568563555 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkitExample::ContactPicked(System.String,System.String,System.String)
extern "C"  void NativeToolkitExample_ContactPicked_m1587758788 (NativeToolkitExample_t3568563555 * __this, String_t* ___name0, String_t* ___number1, String_t* ___email2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
