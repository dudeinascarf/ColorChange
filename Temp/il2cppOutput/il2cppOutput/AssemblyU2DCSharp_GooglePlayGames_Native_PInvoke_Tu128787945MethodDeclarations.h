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

// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback
struct TurnBasedMatchCallback_t128787945;
// System.Object
struct Il2CppObject;
// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse
struct TurnBasedMatchResponse_t4255652325;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_T4255652325.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void TurnBasedMatchCallback__ctor_m2458752016 (TurnBasedMatchCallback_t128787945 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback::Invoke(GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse)
extern "C"  void TurnBasedMatchCallback_Invoke_m202103397 (TurnBasedMatchCallback_t128787945 * __this, TurnBasedMatchResponse_t4255652325 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback::BeginInvoke(GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TurnBasedMatchCallback_BeginInvoke_m721848842 (TurnBasedMatchCallback_t128787945 * __this, TurnBasedMatchResponse_t4255652325 * ___response0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback::EndInvoke(System.IAsyncResult)
extern "C"  void TurnBasedMatchCallback_EndInvoke_m2355990048 (TurnBasedMatchCallback_t128787945 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
