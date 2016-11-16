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

// GooglePlayGames.Native.PInvoke.Callbacks/ShowUICallbackInternal
struct ShowUICallbackInternal_t1108446455;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3557407943.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.PInvoke.Callbacks/ShowUICallbackInternal::.ctor(System.Object,System.IntPtr)
extern "C"  void ShowUICallbackInternal__ctor_m2061637454 (ShowUICallbackInternal_t1108446455 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.Callbacks/ShowUICallbackInternal::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus,System.IntPtr)
extern "C"  void ShowUICallbackInternal_Invoke_m2675593295 (ShowUICallbackInternal_t1108446455 * __this, int32_t ___status0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.PInvoke.Callbacks/ShowUICallbackInternal::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ShowUICallbackInternal_BeginInvoke_m1463723604 (ShowUICallbackInternal_t1108446455 * __this, int32_t ___status0, IntPtr_t ___data1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.Callbacks/ShowUICallbackInternal::EndInvoke(System.IAsyncResult)
extern "C"  void ShowUICallbackInternal_EndInvoke_m730947678 (ShowUICallbackInternal_t1108446455 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
