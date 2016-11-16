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

// GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback
struct FetchForPlayerCallback_t1995639285;
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

// System.Void GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void FetchForPlayerCallback__ctor_m2851840332 (FetchForPlayerCallback_t1995639285 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback::Invoke(System.IntPtr,System.IntPtr)
extern "C"  void FetchForPlayerCallback_Invoke_m3804668540 (FetchForPlayerCallback_t1995639285 * __this, IntPtr_t ___arg00, IntPtr_t ___arg11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FetchForPlayerCallback_BeginInvoke_m2968634249 (FetchForPlayerCallback_t1995639285 * __this, IntPtr_t ___arg00, IntPtr_t ___arg11, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback::EndInvoke(System.IAsyncResult)
extern "C"  void FetchForPlayerCallback_EndInvoke_m1149999452 (FetchForPlayerCallback_t1995639285 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
