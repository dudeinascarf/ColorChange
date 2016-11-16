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

// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t1377674964;
// System.Object
struct Il2CppObject;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t3573041681;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl3573041681.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void MatchDelegate__ctor_m2906510997 (MatchDelegate_t1377674964 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchDelegate::Invoke(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean)
extern "C"  void MatchDelegate_Invoke_m753288677 (MatchDelegate_t1377674964 * __this, TurnBasedMatch_t3573041681 * ___match0, bool ___shouldAutoLaunch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.BasicApi.Multiplayer.MatchDelegate::BeginInvoke(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MatchDelegate_BeginInvoke_m328937268 (MatchDelegate_t1377674964 * __this, TurnBasedMatch_t3573041681 * ___match0, bool ___shouldAutoLaunch1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void MatchDelegate_EndInvoke_m3586513701 (MatchDelegate_t1377674964 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
