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

// System.Delegate
struct Delegate_t3310234105;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Delegate3310234105.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3557407943.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_C3660831390.h"
#include "mscorlib_System_UIntPtr3365854250.h"

// System.Void GooglePlayGames.Native.PInvoke.Callbacks::.cctor()
extern "C"  void Callbacks__cctor_m1652395773 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.PInvoke.Callbacks::ToIntPtr(System.Delegate)
extern "C"  IntPtr_t Callbacks_ToIntPtr_m2396808395 (Il2CppObject * __this /* static, unused */, Delegate_t3310234105 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.Callbacks::InternalShowUICallback(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus,System.IntPtr)
extern "C"  void Callbacks_InternalShowUICallback_m3435388686 (Il2CppObject * __this /* static, unused */, int32_t ___status0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Callbacks_InternalShowUICallback_m3435388686(int32_t ___status0, intptr_t ___data1);
// System.Void GooglePlayGames.Native.PInvoke.Callbacks::PerformInternalCallback(System.String,GooglePlayGames.Native.PInvoke.Callbacks/Type,System.IntPtr,System.IntPtr)
extern "C"  void Callbacks_PerformInternalCallback_m2585278875 (Il2CppObject * __this /* static, unused */, String_t* ___callbackName0, int32_t ___callbackType1, IntPtr_t ___response2, IntPtr_t ___userData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.Callbacks::AsCoroutine(System.Collections.IEnumerator)
extern "C"  void Callbacks_AsCoroutine_m2027459935 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___routine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.Native.PInvoke.Callbacks::IntPtrAndSizeToByteArray(System.IntPtr,System.UIntPtr)
extern "C"  ByteU5BU5D_t4260760469* Callbacks_IntPtrAndSizeToByteArray_m3730853240 (Il2CppObject * __this /* static, unused */, IntPtr_t ___data0, UIntPtr_t  ___dataLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.Callbacks::<NoopUICallback>m__9B(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus)
extern "C"  void Callbacks_U3CNoopUICallbackU3Em__9B_m2845344438 (Il2CppObject * __this /* static, unused */, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
