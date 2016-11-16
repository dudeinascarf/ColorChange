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

// GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback
struct AuthStartedCallback_t2497315511;
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
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AuthStartedCallback__ctor_m76063198 (AuthStartedCallback_t2497315511 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback::Invoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation)
extern "C"  void AuthStartedCallback_Invoke_m337899762 (AuthStartedCallback_t2497315511 * __this, int32_t ___operation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AuthStartedCallback_BeginInvoke_m305654503 (AuthStartedCallback_t2497315511 * __this, int32_t ___operation0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback::EndInvoke(System.IAsyncResult)
extern "C"  void AuthStartedCallback_EndInvoke_m314815214 (AuthStartedCallback_t2497315511 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
