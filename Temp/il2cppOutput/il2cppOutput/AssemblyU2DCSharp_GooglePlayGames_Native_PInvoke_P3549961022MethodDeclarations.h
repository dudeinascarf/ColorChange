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

// GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.IntPtr>
struct OutMethod_1_t3549961022;
// System.Object
struct Il2CppObject;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C"  void OutMethod_1__ctor_m2700608397_gshared (OutMethod_1_t3549961022 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define OutMethod_1__ctor_m2700608397(__this, ___object0, ___method1, method) ((  void (*) (OutMethod_1_t3549961022 *, Il2CppObject *, IntPtr_t, const MethodInfo*))OutMethod_1__ctor_m2700608397_gshared)(__this, ___object0, ___method1, method)
// System.UIntPtr GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.IntPtr>::Invoke(T[],System.UIntPtr)
extern "C"  UIntPtr_t  OutMethod_1_Invoke_m817607364_gshared (OutMethod_1_t3549961022 * __this, IntPtrU5BU5D_t3228729122* ___out_bytes0, UIntPtr_t  ___out_size1, const MethodInfo* method);
#define OutMethod_1_Invoke_m817607364(__this, ___out_bytes0, ___out_size1, method) ((  UIntPtr_t  (*) (OutMethod_1_t3549961022 *, IntPtrU5BU5D_t3228729122*, UIntPtr_t , const MethodInfo*))OutMethod_1_Invoke_m817607364_gshared)(__this, ___out_bytes0, ___out_size1, method)
// System.IAsyncResult GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.IntPtr>::BeginInvoke(T[],System.UIntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OutMethod_1_BeginInvoke_m2321473261_gshared (OutMethod_1_t3549961022 * __this, IntPtrU5BU5D_t3228729122* ___out_bytes0, UIntPtr_t  ___out_size1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define OutMethod_1_BeginInvoke_m2321473261(__this, ___out_bytes0, ___out_size1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (OutMethod_1_t3549961022 *, IntPtrU5BU5D_t3228729122*, UIntPtr_t , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))OutMethod_1_BeginInvoke_m2321473261_gshared)(__this, ___out_bytes0, ___out_size1, ___callback2, ___object3, method)
// System.UIntPtr GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.IntPtr>::EndInvoke(System.IAsyncResult)
extern "C"  UIntPtr_t  OutMethod_1_EndInvoke_m3863859493_gshared (OutMethod_1_t3549961022 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define OutMethod_1_EndInvoke_m3863859493(__this, ___result0, method) ((  UIntPtr_t  (*) (OutMethod_1_t3549961022 *, Il2CppObject *, const MethodInfo*))OutMethod_1_EndInvoke_m3863859493_gshared)(__this, ___result0, method)
