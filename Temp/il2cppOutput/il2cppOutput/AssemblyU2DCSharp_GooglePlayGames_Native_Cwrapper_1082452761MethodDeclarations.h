﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GooglePlayGames.Native.Cwrapper.GameServices/FetchServerAuthCodeCallback
struct FetchServerAuthCodeCallback_t1082452761;
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

// System.Void GooglePlayGames.Native.Cwrapper.GameServices/FetchServerAuthCodeCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void FetchServerAuthCodeCallback__ctor_m2142037824 (FetchServerAuthCodeCallback_t1082452761 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.GameServices/FetchServerAuthCodeCallback::Invoke(System.IntPtr,System.IntPtr)
extern "C"  void FetchServerAuthCodeCallback_Invoke_m3275627272 (FetchServerAuthCodeCallback_t1082452761 * __this, IntPtr_t ___arg00, IntPtr_t ___arg11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.GameServices/FetchServerAuthCodeCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FetchServerAuthCodeCallback_BeginInvoke_m3593913229 (FetchServerAuthCodeCallback_t1082452761 * __this, IntPtr_t ___arg00, IntPtr_t ___arg11, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.GameServices/FetchServerAuthCodeCallback::EndInvoke(System.IAsyncResult)
extern "C"  void FetchServerAuthCodeCallback_EndInvoke_m655751504 (FetchServerAuthCodeCallback_t1082452761 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;