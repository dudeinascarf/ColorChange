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

// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback
struct MultiplayerStatusCallback_t994271114;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2675372491.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void MultiplayerStatusCallback__ctor_m2373958241 (MultiplayerStatusCallback_t994271114 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr)
extern "C"  void MultiplayerStatusCallback_Invoke_m2585600314 (MultiplayerStatusCallback_t994271114 * __this, int32_t ___arg00, IntPtr_t ___arg11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MultiplayerStatusCallback_BeginInvoke_m2049778241 (MultiplayerStatusCallback_t994271114 * __this, int32_t ___arg00, IntPtr_t ___arg11, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback::EndInvoke(System.IAsyncResult)
extern "C"  void MultiplayerStatusCallback_EndInvoke_m2529789169 (MultiplayerStatusCallback_t994271114 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
