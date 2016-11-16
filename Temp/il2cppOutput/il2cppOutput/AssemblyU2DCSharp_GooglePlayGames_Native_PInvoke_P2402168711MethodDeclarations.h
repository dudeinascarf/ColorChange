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

// GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Byte>
struct OutMethod_1_t2402168711;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C"  void OutMethod_1__ctor_m2423716964_gshared (OutMethod_1_t2402168711 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define OutMethod_1__ctor_m2423716964(__this, ___object0, ___method1, method) ((  void (*) (OutMethod_1_t2402168711 *, Il2CppObject *, IntPtr_t, const MethodInfo*))OutMethod_1__ctor_m2423716964_gshared)(__this, ___object0, ___method1, method)
// System.UIntPtr GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Byte>::Invoke(T[],System.UIntPtr)
extern "C"  UIntPtr_t  OutMethod_1_Invoke_m2153845915_gshared (OutMethod_1_t2402168711 * __this, ByteU5BU5D_t4260760469* ___out_bytes0, UIntPtr_t  ___out_size1, const MethodInfo* method);
#define OutMethod_1_Invoke_m2153845915(__this, ___out_bytes0, ___out_size1, method) ((  UIntPtr_t  (*) (OutMethod_1_t2402168711 *, ByteU5BU5D_t4260760469*, UIntPtr_t , const MethodInfo*))OutMethod_1_Invoke_m2153845915_gshared)(__this, ___out_bytes0, ___out_size1, method)
// System.IAsyncResult GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Byte>::BeginInvoke(T[],System.UIntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OutMethod_1_BeginInvoke_m1214319812_gshared (OutMethod_1_t2402168711 * __this, ByteU5BU5D_t4260760469* ___out_bytes0, UIntPtr_t  ___out_size1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define OutMethod_1_BeginInvoke_m1214319812(__this, ___out_bytes0, ___out_size1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (OutMethod_1_t2402168711 *, ByteU5BU5D_t4260760469*, UIntPtr_t , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))OutMethod_1_BeginInvoke_m1214319812_gshared)(__this, ___out_bytes0, ___out_size1, ___callback2, ___object3, method)
// System.UIntPtr GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C"  UIntPtr_t  OutMethod_1_EndInvoke_m1043361660_gshared (OutMethod_1_t2402168711 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define OutMethod_1_EndInvoke_m1043361660(__this, ___result0, method) ((  UIntPtr_t  (*) (OutMethod_1_t2402168711 *, Il2CppObject *, const MethodInfo*))OutMethod_1_EndInvoke_m1043361660_gshared)(__this, ___result0, method)
