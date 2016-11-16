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

// System.Action`2<System.Object,System.IntPtr>
struct Action_2_t4132650063;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Action`2<System.Object,System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m3776211162_gshared (Action_2_t4132650063 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_2__ctor_m3776211162(__this, ___object0, ___method1, method) ((  void (*) (Action_2_t4132650063 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m3776211162_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`2<System.Object,System.IntPtr>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m2324013841_gshared (Action_2_t4132650063 * __this, Il2CppObject * ___arg10, IntPtr_t ___arg21, const MethodInfo* method);
#define Action_2_Invoke_m2324013841(__this, ___arg10, ___arg21, method) ((  void (*) (Action_2_t4132650063 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2_Invoke_m2324013841_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Action`2<System.Object,System.IntPtr>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m4250389808_gshared (Action_2_t4132650063 * __this, Il2CppObject * ___arg10, IntPtr_t ___arg21, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Action_2_BeginInvoke_m4250389808(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Action_2_t4132650063 *, Il2CppObject *, IntPtr_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m4250389808_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// System.Void System.Action`2<System.Object,System.IntPtr>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m1499617258_gshared (Action_2_t4132650063 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_2_EndInvoke_m1499617258(__this, ___result0, method) ((  void (*) (Action_2_t4132650063 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m1499617258_gshared)(__this, ___result0, method)
