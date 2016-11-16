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

// GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback
struct OnAuthActionFinishedCallback_t1172336457;
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

// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnAuthActionFinishedCallback__ctor_m4069508976 (OnAuthActionFinishedCallback_t1172336457 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback::Invoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,GooglePlayGames.Native.Cwrapper.CommonErrorStatus/AuthStatus,System.IntPtr)
extern "C"  void OnAuthActionFinishedCallback_Invoke_m1598155865 (OnAuthActionFinishedCallback_t1172336457 * __this, int32_t ___arg00, int32_t ___arg11, IntPtr_t ___arg22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,GooglePlayGames.Native.Cwrapper.CommonErrorStatus/AuthStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnAuthActionFinishedCallback_BeginInvoke_m2438696022 (OnAuthActionFinishedCallback_t1172336457 * __this, int32_t ___arg00, int32_t ___arg11, IntPtr_t ___arg22, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnAuthActionFinishedCallback_EndInvoke_m2840621440 (OnAuthActionFinishedCallback_t1172336457 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
