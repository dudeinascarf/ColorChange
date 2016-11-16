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

// GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Object>
struct OutMethod_1_t3710375422;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void OutMethod_1__ctor_m3096051917_gshared (OutMethod_1_t3710375422 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define OutMethod_1__ctor_m3096051917(__this, ___object0, ___method1, method) ((  void (*) (OutMethod_1_t3710375422 *, Il2CppObject *, IntPtr_t, const MethodInfo*))OutMethod_1__ctor_m3096051917_gshared)(__this, ___object0, ___method1, method)
// System.UIntPtr GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Object>::Invoke(T[],System.UIntPtr)
extern "C"  UIntPtr_t  OutMethod_1_Invoke_m2612981764_gshared (OutMethod_1_t3710375422 * __this, ObjectU5BU5D_t1108656482* ___out_bytes0, UIntPtr_t  ___out_size1, const MethodInfo* method);
#define OutMethod_1_Invoke_m2612981764(__this, ___out_bytes0, ___out_size1, method) ((  UIntPtr_t  (*) (OutMethod_1_t3710375422 *, ObjectU5BU5D_t1108656482*, UIntPtr_t , const MethodInfo*))OutMethod_1_Invoke_m2612981764_gshared)(__this, ___out_bytes0, ___out_size1, method)
// System.IAsyncResult GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Object>::BeginInvoke(T[],System.UIntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OutMethod_1_BeginInvoke_m3366706221_gshared (OutMethod_1_t3710375422 * __this, ObjectU5BU5D_t1108656482* ___out_bytes0, UIntPtr_t  ___out_size1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define OutMethod_1_BeginInvoke_m3366706221(__this, ___out_bytes0, ___out_size1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (OutMethod_1_t3710375422 *, ObjectU5BU5D_t1108656482*, UIntPtr_t , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))OutMethod_1_BeginInvoke_m3366706221_gshared)(__this, ___out_bytes0, ___out_size1, ___callback2, ___object3, method)
// System.UIntPtr GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  UIntPtr_t  OutMethod_1_EndInvoke_m1995468389_gshared (OutMethod_1_t3710375422 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define OutMethod_1_EndInvoke_m1995468389(__this, ___result0, method) ((  UIntPtr_t  (*) (OutMethod_1_t3710375422 *, Il2CppObject *, const MethodInfo*))OutMethod_1_EndInvoke_m1995468389_gshared)(__this, ___result0, method)
