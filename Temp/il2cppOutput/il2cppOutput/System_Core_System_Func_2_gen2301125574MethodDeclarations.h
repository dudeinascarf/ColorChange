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

// System.Func`2<System.UIntPtr,System.Object>
struct Func_2_t2301125574;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Func`2<System.UIntPtr,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m161237399_gshared (Func_2_t2301125574 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m161237399(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t2301125574 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m161237399_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.UIntPtr,System.Object>::Invoke(T)
extern "C"  Il2CppObject * Func_2_Invoke_m527793903_gshared (Func_2_t2301125574 * __this, UIntPtr_t  ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m527793903(__this, ___arg10, method) ((  Il2CppObject * (*) (Func_2_t2301125574 *, UIntPtr_t , const MethodInfo*))Func_2_Invoke_m527793903_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.UIntPtr,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m3185104162_gshared (Func_2_t2301125574 * __this, UIntPtr_t  ___arg10, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m3185104162(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t2301125574 *, UIntPtr_t , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m3185104162_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.UIntPtr,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_2_EndInvoke_m858964037_gshared (Func_2_t2301125574 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m858964037(__this, ___result0, method) ((  Il2CppObject * (*) (Func_2_t2301125574 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m858964037_gshared)(__this, ___result0, method)
