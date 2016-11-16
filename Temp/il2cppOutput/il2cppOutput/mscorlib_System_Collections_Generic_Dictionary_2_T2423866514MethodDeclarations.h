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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Object>
struct Transform_1_t2423866514;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "ES2_ES2Tag2053637046.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2409175039_gshared (Transform_1_t2423866514 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2409175039(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2423866514 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2409175039_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m4165704025_gshared (Transform_1_t2423866514 * __this, Il2CppObject * ___key0, ES2Tag_t2053637046  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m4165704025(__this, ___key0, ___value1, method) ((  Il2CppObject * (*) (Transform_1_t2423866514 *, Il2CppObject *, ES2Tag_t2053637046 , const MethodInfo*))Transform_1_Invoke_m4165704025_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1551558148_gshared (Transform_1_t2423866514 * __this, Il2CppObject * ___key0, ES2Tag_t2053637046  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1551558148(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2423866514 *, Il2CppObject *, ES2Tag_t2053637046 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1551558148_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m1578624401_gshared (Transform_1_t2423866514 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1578624401(__this, ___result0, method) ((  Il2CppObject * (*) (Transform_1_t2423866514 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1578624401_gshared)(__this, ___result0, method)
