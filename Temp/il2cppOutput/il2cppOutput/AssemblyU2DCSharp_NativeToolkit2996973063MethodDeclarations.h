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

// NativeToolkit
struct NativeToolkit_t2996973063;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t4279924331;
// System.Action`1<System.String>
struct Action_1_t403047693;
// System.Action`2<UnityEngine.Texture2D,System.String>
struct Action_2_t1397528305;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.Action`3<System.String,System.String,System.String>
struct Action_3_t4284513203;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Action
struct Action_t3771233898;
// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Action_1_t1092083581;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"
#include "AssemblyU2DCSharp_NativeToolkit_ImageType2534931725.h"
#include "System_Core_System_Action3771233898.h"
#include "mscorlib_System_Nullable_1_gen1237965023.h"

// System.Void NativeToolkit::.ctor()
extern "C"  void NativeToolkit__ctor_m3937274692 (NativeToolkit_t2996973063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::.cctor()
extern "C"  void NativeToolkit__cctor_m1314334953 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::add_OnScreenshotTaken(System.Action`1<UnityEngine.Texture2D>)
extern "C"  void NativeToolkit_add_OnScreenshotTaken_m2858437032 (Il2CppObject * __this /* static, unused */, Action_1_t4279924331 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::remove_OnScreenshotTaken(System.Action`1<UnityEngine.Texture2D>)
extern "C"  void NativeToolkit_remove_OnScreenshotTaken_m3529851561 (Il2CppObject * __this /* static, unused */, Action_1_t4279924331 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::add_OnScreenshotSaved(System.Action`1<System.String>)
extern "C"  void NativeToolkit_add_OnScreenshotSaved_m900483906 (Il2CppObject * __this /* static, unused */, Action_1_t403047693 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::remove_OnScreenshotSaved(System.Action`1<System.String>)
extern "C"  void NativeToolkit_remove_OnScreenshotSaved_m1872155971 (Il2CppObject * __this /* static, unused */, Action_1_t403047693 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::add_OnImageSaved(System.Action`1<System.String>)
extern "C"  void NativeToolkit_add_OnImageSaved_m3749216933 (Il2CppObject * __this /* static, unused */, Action_1_t403047693 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::remove_OnImageSaved(System.Action`1<System.String>)
extern "C"  void NativeToolkit_remove_OnImageSaved_m3408788484 (Il2CppObject * __this /* static, unused */, Action_1_t403047693 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::add_OnImagePicked(System.Action`2<UnityEngine.Texture2D,System.String>)
extern "C"  void NativeToolkit_add_OnImagePicked_m3299466855 (Il2CppObject * __this /* static, unused */, Action_2_t1397528305 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::remove_OnImagePicked(System.Action`2<UnityEngine.Texture2D,System.String>)
extern "C"  void NativeToolkit_remove_OnImagePicked_m3195030056 (Il2CppObject * __this /* static, unused */, Action_2_t1397528305 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::add_OnDialogComplete(System.Action`1<System.Boolean>)
extern "C"  void NativeToolkit_add_OnDialogComplete_m1482618805 (Il2CppObject * __this /* static, unused */, Action_1_t872614854 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::remove_OnDialogComplete(System.Action`1<System.Boolean>)
extern "C"  void NativeToolkit_remove_OnDialogComplete_m2454290870 (Il2CppObject * __this /* static, unused */, Action_1_t872614854 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::add_OnRateComplete(System.Action`1<System.String>)
extern "C"  void NativeToolkit_add_OnRateComplete_m2413958130 (Il2CppObject * __this /* static, unused */, Action_1_t403047693 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::remove_OnRateComplete(System.Action`1<System.String>)
extern "C"  void NativeToolkit_remove_OnRateComplete_m1679733137 (Il2CppObject * __this /* static, unused */, Action_1_t403047693 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::add_OnCameraShotComplete(System.Action`2<UnityEngine.Texture2D,System.String>)
extern "C"  void NativeToolkit_add_OnCameraShotComplete_m3119863100 (Il2CppObject * __this /* static, unused */, Action_2_t1397528305 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::remove_OnCameraShotComplete(System.Action`2<UnityEngine.Texture2D,System.String>)
extern "C"  void NativeToolkit_remove_OnCameraShotComplete_m3287506523 (Il2CppObject * __this /* static, unused */, Action_2_t1397528305 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::add_OnContactPicked(System.Action`3<System.String,System.String,System.String>)
extern "C"  void NativeToolkit_add_OnContactPicked_m3016972107 (Il2CppObject * __this /* static, unused */, Action_3_t4284513203 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::remove_OnContactPicked(System.Action`3<System.String,System.String,System.String>)
extern "C"  void NativeToolkit_remove_OnContactPicked_m3918950924 (Il2CppObject * __this /* static, unused */, Action_3_t4284513203 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NativeToolkit::saveToGallery(System.String)
extern "C"  int32_t NativeToolkit_saveToGallery_m416944472 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::pickImage()
extern "C"  void NativeToolkit_pickImage_m657575740 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::openCamera()
extern "C"  void NativeToolkit_openCamera_m2571790447 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::pickContact()
extern "C"  void NativeToolkit_pickContact_m1038501057 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NativeToolkit::getLocale()
extern "C"  String_t* NativeToolkit_getLocale_m3309162933 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::sendEmail(System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void NativeToolkit_sendEmail_m3883606264 (Il2CppObject * __this /* static, unused */, String_t* ___to0, String_t* ___cc1, String_t* ___bcc2, String_t* ___subject3, String_t* ___body4, String_t* ___imagePath5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::scheduleLocalNotification(System.String,System.String,System.String,System.Int32,System.String)
extern "C"  void NativeToolkit_scheduleLocalNotification_m868821242 (Il2CppObject * __this /* static, unused */, String_t* ___id0, String_t* ___title1, String_t* ___message2, int32_t ___delayInMinutes3, String_t* ___sound4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::clearLocalNotification(System.String)
extern "C"  void NativeToolkit_clearLocalNotification_m3924371225 (Il2CppObject * __this /* static, unused */, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::clearAllLocalNotifications()
extern "C"  void NativeToolkit_clearAllLocalNotifications_m437303889 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NativeToolkit::wasLaunchedFromNotification()
extern "C"  bool NativeToolkit_wasLaunchedFromNotification_m477601766 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::rateApp(System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void NativeToolkit_rateApp_m3118209707 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___positiveBtnText2, String_t* ___neutralBtnText3, String_t* ___negativeBtnText4, String_t* ___appleId5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::showConfirm(System.String,System.String,System.String,System.String)
extern "C"  void NativeToolkit_showConfirm_m1308019857 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___positiveBtnText2, String_t* ___negativeBtnText3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::showAlert(System.String,System.String,System.String)
extern "C"  void NativeToolkit_showAlert_m3396919289 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___confirmBtnText2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NativeToolkit NativeToolkit::get_Instance()
extern "C"  NativeToolkit_t2996973063 * NativeToolkit_get_Instance_m3566980658 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::Awake()
extern "C"  void NativeToolkit_Awake_m4174879911 (NativeToolkit_t2996973063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::SaveScreenshot(System.String,System.String,System.String,UnityEngine.Rect)
extern "C"  void NativeToolkit_SaveScreenshot_m4157767956 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, String_t* ___albumName1, String_t* ___fileType2, Rect_t4241904616  ___screenArea3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NativeToolkit::GrabScreenshot(System.String,System.String,System.String,UnityEngine.Rect)
extern "C"  Il2CppObject * NativeToolkit_GrabScreenshot_m2545425755 (NativeToolkit_t2996973063 * __this, String_t* ___fileName0, String_t* ___albumName1, String_t* ___fileType2, Rect_t4241904616  ___screenArea3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::SaveImage(UnityEngine.Texture2D,System.String,System.String)
extern "C"  void NativeToolkit_SaveImage_m1392290132 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, String_t* ___fileName1, String_t* ___fileType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NativeToolkit::Save(System.Byte[],System.String,System.String,NativeToolkit/ImageType)
extern "C"  Il2CppObject * NativeToolkit_Save_m2763419819 (NativeToolkit_t2996973063 * __this, ByteU5BU5D_t4260760469* ___bytes0, String_t* ___fileName1, String_t* ___path2, int32_t ___imageType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::PickImage()
extern "C"  void NativeToolkit_PickImage_m2325444380 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::OnPickImage(System.String)
extern "C"  void NativeToolkit_OnPickImage_m2932745893 (NativeToolkit_t2996973063 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NativeToolkit::LoadPickImage(System.String)
extern "C"  Il2CppObject * NativeToolkit_LoadPickImage_m2267847076 (NativeToolkit_t2996973063 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::TakeCameraShot()
extern "C"  void NativeToolkit_TakeCameraShot_m3411595494 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::OnCameraFinished(System.String)
extern "C"  void NativeToolkit_OnCameraFinished_m3029763788 (NativeToolkit_t2996973063 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NativeToolkit::LoadCameraImage(System.String)
extern "C"  Il2CppObject * NativeToolkit_LoadCameraImage_m1296590696 (NativeToolkit_t2996973063 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::PickContact()
extern "C"  void NativeToolkit_PickContact_m1837462689 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::OnPickContactFinished(System.String)
extern "C"  void NativeToolkit_OnPickContactFinished_m2102283182 (NativeToolkit_t2996973063 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::SendEmail(System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void NativeToolkit_SendEmail_m4017401112 (Il2CppObject * __this /* static, unused */, String_t* ___subject0, String_t* ___body1, String_t* ___pathToImageAttachment2, String_t* ___to3, String_t* ___cc4, String_t* ___bcc5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::ShowConfirm(System.String,System.String,System.Action`1<System.Boolean>,System.String,System.String)
extern "C"  void NativeToolkit_ShowConfirm_m2876074910 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, Action_1_t872614854 * ___callback2, String_t* ___positiveBtnText3, String_t* ___negativeBtnText4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::ShowAlert(System.String,System.String,System.Action`1<System.Boolean>,System.String)
extern "C"  void NativeToolkit_ShowAlert_m327623110 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, Action_1_t872614854 * ___callback2, String_t* ___btnText3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::OnDialogPress(System.String)
extern "C"  void NativeToolkit_OnDialogPress_m2942065380 (NativeToolkit_t2996973063 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::RateApp(System.String,System.String,System.String,System.String,System.String,System.String,System.Action`1<System.String>)
extern "C"  void NativeToolkit_RateApp_m881830263 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___positiveBtnText2, String_t* ___neutralBtnText3, String_t* ___negativeBtnText4, String_t* ___appleId5, Action_1_t403047693 * ___callback6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::OnRatePress(System.String)
extern "C"  void NativeToolkit_OnRatePress_m2190013948 (NativeToolkit_t2996973063 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NativeToolkit::StartLocation()
extern "C"  bool NativeToolkit_StartLocation_m4282994573 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NativeToolkit::GetLongitude()
extern "C"  float NativeToolkit_GetLongitude_m2969829869 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NativeToolkit::GetLatitude()
extern "C"  float NativeToolkit_GetLatitude_m1232326608 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NativeToolkit::GetCountryCode()
extern "C"  String_t* NativeToolkit_GetCountryCode_m4121359978 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::FacebookInit(System.Action)
extern "C"  void NativeToolkit_FacebookInit_m4262833991 (Il2CppObject * __this /* static, unused */, Action_t3771233898 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::FacebookLogin(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
extern "C"  void NativeToolkit_FacebookLogin_m3750717190 (Il2CppObject * __this /* static, unused */, Action_1_t1092083581 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::FacebookPostToWall(System.String,System.String,System.String,System.String,System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
extern "C"  void NativeToolkit_FacebookPostToWall_m2184005644 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___caption1, String_t* ___description2, String_t* ___image3, String_t* ___link4, Action_1_t1092083581 * ___callback5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::FacebookUploadImage(UnityEngine.Texture2D,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
extern "C"  void NativeToolkit_FacebookUploadImage_m1839264907 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___image0, Action_1_t1092083581 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::FacebookShareWithFriends(System.String,System.String,System.Boolean,System.Nullable`1<System.Int32>,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
extern "C"  void NativeToolkit_FacebookShareWithFriends_m1316670402 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, bool ___nonUsers2, Nullable_1_t1237965023  ___maxRecipients3, Action_1_t1092083581 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::FacebookGetProfilePic(System.Action`1<UnityEngine.Texture2D>)
extern "C"  void NativeToolkit_FacebookGetProfilePic_m563742613 (Il2CppObject * __this /* static, unused */, Action_1_t4279924331 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::FacebookGetUserDetails(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
extern "C"  void NativeToolkit_FacebookGetUserDetails_m1380341252 (Il2CppObject * __this /* static, unused */, Action_1_t1092083581 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::FacebookLogout()
extern "C"  void NativeToolkit_FacebookLogout_m2001963696 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::ScheduleLocalNotification(System.String,System.String,System.Int32,System.Int32,System.String,System.Boolean,System.String,System.String)
extern "C"  void NativeToolkit_ScheduleLocalNotification_m3986147420 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, int32_t ___id2, int32_t ___delayInMinutes3, String_t* ___sound4, bool ___vibrate5, String_t* ___smallIcon6, String_t* ___largeIcon7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::ClearLocalNotification(System.Int32)
extern "C"  void NativeToolkit_ClearLocalNotification_m3096593018 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeToolkit::ClearAllLocalNotifications()
extern "C"  void NativeToolkit_ClearAllLocalNotifications_m4293906033 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NativeToolkit::WasLaunchedFromNotification()
extern "C"  bool NativeToolkit_WasLaunchedFromNotification_m4068151238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D NativeToolkit::LoadImageFromFile(System.String)
extern "C"  Texture2D_t3884108195 * NativeToolkit_LoadImageFromFile_m2628676008 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NativeToolkit::Wait(System.Single)
extern "C"  Il2CppObject * NativeToolkit_Wait_m2293295710 (NativeToolkit_t2996973063 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
