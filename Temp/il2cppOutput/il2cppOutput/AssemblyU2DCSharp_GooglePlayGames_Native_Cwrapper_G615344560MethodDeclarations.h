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

// GooglePlayGames.Native.Cwrapper.GameServices/FlushCallback
struct FlushCallback_t3126222379;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.GameServices/FetchServerAuthCodeCallback
struct FetchServerAuthCodeCallback_t1082452761;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3126222379.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1082452761.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void GooglePlayGames.Native.Cwrapper.GameServices::GameServices_Flush(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.GameServices/FlushCallback,System.IntPtr)
extern "C"  void GameServices_GameServices_Flush_m3275566173 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, FlushCallback_t3126222379 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.GameServices::GameServices_FetchServerAuthCode(System.Runtime.InteropServices.HandleRef,System.String,GooglePlayGames.Native.Cwrapper.GameServices/FetchServerAuthCodeCallback,System.IntPtr)
extern "C"  void GameServices_GameServices_FetchServerAuthCode_m2919126661 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, String_t* ___server_client_id1, FetchServerAuthCodeCallback_t1082452761 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.Cwrapper.GameServices::GameServices_IsAuthorized(System.Runtime.InteropServices.HandleRef)
extern "C"  bool GameServices_GameServices_IsAuthorized_m4258229637 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.GameServices::GameServices_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void GameServices_GameServices_Dispose_m2353921991 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.GameServices::GameServices_SignOut(System.Runtime.InteropServices.HandleRef)
extern "C"  void GameServices_GameServices_SignOut_m827006841 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.GameServices::GameServices_StartAuthorizationUI(System.Runtime.InteropServices.HandleRef)
extern "C"  void GameServices_GameServices_StartAuthorizationUI_m1226951135 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.GameServices::GameServices_FetchServerAuthCodeResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void GameServices_GameServices_FetchServerAuthCodeResponse_Dispose_m1129664315 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.GameServices::GameServices_FetchServerAuthCodeResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t GameServices_GameServices_FetchServerAuthCodeResponse_GetStatus_m766129709 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.GameServices::GameServices_FetchServerAuthCodeResponse_GetCode(System.Runtime.InteropServices.HandleRef,System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  GameServices_GameServices_FetchServerAuthCodeResponse_GetCode_m1905169286 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, StringBuilder_t243639308 * ___out_arg1, UIntPtr_t  ___out_size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
