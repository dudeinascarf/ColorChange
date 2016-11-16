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

// GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback
struct AuthFinishedCallback_t563494438;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1624738888.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_C803408059.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AuthFinishedCallback__ctor_m1354532093 (AuthFinishedCallback_t563494438 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback::Invoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,GooglePlayGames.Native.Cwrapper.CommonErrorStatus/AuthStatus)
extern "C"  void AuthFinishedCallback_Invoke_m3325799384 (AuthFinishedCallback_t563494438 * __this, int32_t ___operation0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,GooglePlayGames.Native.Cwrapper.CommonErrorStatus/AuthStatus,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AuthFinishedCallback_BeginInvoke_m1816959337 (AuthFinishedCallback_t563494438 * __this, int32_t ___operation0, int32_t ___status1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback::EndInvoke(System.IAsyncResult)
extern "C"  void AuthFinishedCallback_EndInvoke_m3614178701 (AuthFinishedCallback_t563494438 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
