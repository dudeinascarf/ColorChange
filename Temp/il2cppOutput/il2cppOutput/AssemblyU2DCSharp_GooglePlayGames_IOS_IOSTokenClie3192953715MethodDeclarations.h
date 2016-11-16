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

// GooglePlayGames.IOS.IOSTokenClient
struct IOSTokenClient_t3192953715;
// System.String
struct String_t;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String>
struct Action_2_t1860405393;
// System.Action`1<System.String>
struct Action_1_t403047693;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void GooglePlayGames.IOS.IOSTokenClient::.ctor()
extern "C"  void IOSTokenClient__ctor_m4242322729 (IOSTokenClient_t3192953715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.IOS.IOSTokenClient::_GooglePlayGetIdToken()
extern "C"  String_t* IOSTokenClient__GooglePlayGetIdToken_m2363444920 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.IOS.IOSTokenClient::_GooglePlayGetAccessToken()
extern "C"  String_t* IOSTokenClient__GooglePlayGetAccessToken_m2071133647 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.IOS.IOSTokenClient::_GooglePlayGetUserEmail()
extern "C"  String_t* IOSTokenClient__GooglePlayGetUserEmail_m1616690347 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.IOS.IOSTokenClient::SetRationale(System.String)
extern "C"  void IOSTokenClient_SetRationale_m1725979282 (IOSTokenClient_t3192953715 * __this, String_t* ___rationale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.IOS.IOSTokenClient::GetEmail()
extern "C"  String_t* IOSTokenClient_GetEmail_m1027221316 (IOSTokenClient_t3192953715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.IOS.IOSTokenClient::GetEmail(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,System.String>)
extern "C"  void IOSTokenClient_GetEmail_m385483661 (IOSTokenClient_t3192953715 * __this, Action_2_t1860405393 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.IOS.IOSTokenClient::GetAccessToken()
extern "C"  String_t* IOSTokenClient_GetAccessToken_m2123375389 (IOSTokenClient_t3192953715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.IOS.IOSTokenClient::GetIdToken(System.String,System.Action`1<System.String>)
extern "C"  void IOSTokenClient_GetIdToken_m2432625859 (IOSTokenClient_t3192953715 * __this, String_t* ___serverClientID0, Action_1_t403047693 * ___idTokenCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
