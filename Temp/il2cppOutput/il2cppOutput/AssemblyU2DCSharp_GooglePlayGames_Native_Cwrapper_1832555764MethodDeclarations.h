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

// GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowUICallback
struct ShowUICallback_t1832555764;
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

// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowUICallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ShowUICallback__ctor_m1164443339 (ShowUICallback_t1832555764 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowUICallback::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus,System.IntPtr)
extern "C"  void ShowUICallback_Invoke_m1583916300 (ShowUICallback_t1832555764 * __this, int32_t ___arg00, IntPtr_t ___arg11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowUICallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ShowUICallback_BeginInvoke_m1886219025 (ShowUICallback_t1832555764 * __this, int32_t ___arg00, IntPtr_t ___arg11, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowUICallback::EndInvoke(System.IAsyncResult)
extern "C"  void ShowUICallback_EndInvoke_m1099468379 (ShowUICallback_t1832555764 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
