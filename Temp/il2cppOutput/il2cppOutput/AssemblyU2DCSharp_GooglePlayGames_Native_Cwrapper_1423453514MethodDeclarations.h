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

// GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScorePageCallback
struct FetchScorePageCallback_t1423453514;
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

// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScorePageCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void FetchScorePageCallback__ctor_m3167423521 (FetchScorePageCallback_t1423453514 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScorePageCallback::Invoke(System.IntPtr,System.IntPtr)
extern "C"  void FetchScorePageCallback_Invoke_m702845511 (FetchScorePageCallback_t1423453514 * __this, IntPtr_t ___arg00, IntPtr_t ___arg11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScorePageCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FetchScorePageCallback_BeginInvoke_m3377207636 (FetchScorePageCallback_t1423453514 * __this, IntPtr_t ___arg00, IntPtr_t ___arg11, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScorePageCallback::EndInvoke(System.IAsyncResult)
extern "C"  void FetchScorePageCallback_EndInvoke_m906213041 (FetchScorePageCallback_t1423453514 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
