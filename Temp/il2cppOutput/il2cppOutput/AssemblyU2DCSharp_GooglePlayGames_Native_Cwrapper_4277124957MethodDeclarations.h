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

// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback
struct PlayerSelectUICallback_t4277124957;
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

// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback::.ctor(System.Object,System.IntPtr)
extern "C"  void PlayerSelectUICallback__ctor_m788752260 (PlayerSelectUICallback_t4277124957 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback::Invoke(System.IntPtr,System.IntPtr)
extern "C"  void PlayerSelectUICallback_Invoke_m4273447748 (PlayerSelectUICallback_t4277124957 * __this, IntPtr_t ___arg00, IntPtr_t ___arg11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PlayerSelectUICallback_BeginInvoke_m4109227209 (PlayerSelectUICallback_t4277124957 * __this, IntPtr_t ___arg00, IntPtr_t ___arg11, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback::EndInvoke(System.IAsyncResult)
extern "C"  void PlayerSelectUICallback_EndInvoke_m1562327956 (PlayerSelectUICallback_t4277124957 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
