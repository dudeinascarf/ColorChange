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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.InteropServices.HandleRef,System.Object,System.Runtime.InteropServices.HandleRef>
struct Transform_1_t4183788117;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.InteropServices.HandleRef,System.Object,System.Runtime.InteropServices.HandleRef>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2142939051_gshared (Transform_1_t4183788117 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2142939051(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t4183788117 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2142939051_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.InteropServices.HandleRef,System.Object,System.Runtime.InteropServices.HandleRef>::Invoke(TKey,TValue)
extern "C"  HandleRef_t1780819301  Transform_1_Invoke_m272629105_gshared (Transform_1_t4183788117 * __this, HandleRef_t1780819301  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m272629105(__this, ___key0, ___value1, method) ((  HandleRef_t1780819301  (*) (Transform_1_t4183788117 *, HandleRef_t1780819301 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m272629105_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.InteropServices.HandleRef,System.Object,System.Runtime.InteropServices.HandleRef>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m277087568_gshared (Transform_1_t4183788117 * __this, HandleRef_t1780819301  ___key0, Il2CppObject * ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m277087568(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t4183788117 *, HandleRef_t1780819301 , Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m277087568_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.InteropServices.HandleRef,System.Object,System.Runtime.InteropServices.HandleRef>::EndInvoke(System.IAsyncResult)
extern "C"  HandleRef_t1780819301  Transform_1_EndInvoke_m2732884601_gshared (Transform_1_t4183788117 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2732884601(__this, ___result0, method) ((  HandleRef_t1780819301  (*) (Transform_1_t4183788117 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2732884601_gshared)(__this, ___result0, method)
