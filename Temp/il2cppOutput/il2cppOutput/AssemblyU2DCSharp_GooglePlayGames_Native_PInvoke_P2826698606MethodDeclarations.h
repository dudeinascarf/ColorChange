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

// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod
struct OutStringMethod_t1062451542;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_P1062451542.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void GooglePlayGames.Native.PInvoke.PInvokeUtilities::.cctor()
extern "C"  void PInvokeUtilities__cctor_m3584295975 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.HandleRef GooglePlayGames.Native.PInvoke.PInvokeUtilities::CheckNonNull(System.Runtime.InteropServices.HandleRef)
extern "C"  HandleRef_t1780819301  PInvokeUtilities_CheckNonNull_m2700748045 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___reference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.PInvokeUtilities::IsNull(System.Runtime.InteropServices.HandleRef)
extern "C"  bool PInvokeUtilities_IsNull_m2833889592 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___reference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.PInvokeUtilities::IsNull(System.IntPtr)
extern "C"  bool PInvokeUtilities_IsNull_m516106713 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GooglePlayGames.Native.PInvoke.PInvokeUtilities::FromMillisSinceUnixEpoch(System.Int64)
extern "C"  DateTime_t4283661327  PInvokeUtilities_FromMillisSinceUnixEpoch_m3028958926 (Il2CppObject * __this /* static, unused */, int64_t ___millisSinceEpoch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.PInvokeUtilities::OutParamsToString(GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod)
extern "C"  String_t* PInvokeUtilities_OutParamsToString_m1562371957 (Il2CppObject * __this /* static, unused */, OutStringMethod_t1062451542 * ___outStringMethod0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GooglePlayGames.Native.PInvoke.PInvokeUtilities::ToMilliseconds(System.TimeSpan)
extern "C"  int64_t PInvokeUtilities_ToMilliseconds_m4263216352 (Il2CppObject * __this /* static, unused */, TimeSpan_t413522987  ___span0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
