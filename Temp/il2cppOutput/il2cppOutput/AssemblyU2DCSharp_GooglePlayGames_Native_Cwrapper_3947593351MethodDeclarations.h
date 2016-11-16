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

// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback
struct LeaveRoomCallback_t3947593351;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void LeaveRoomCallback__ctor_m1232807854 (LeaveRoomCallback_t3947593351 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus,System.IntPtr)
extern "C"  void LeaveRoomCallback_Invoke_m678727298 (LeaveRoomCallback_t3947593351 * __this, int32_t ___arg00, IntPtr_t ___arg11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LeaveRoomCallback_BeginInvoke_m3176011977 (LeaveRoomCallback_t3947593351 * __this, int32_t ___arg00, IntPtr_t ___arg11, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback::EndInvoke(System.IAsyncResult)
extern "C"  void LeaveRoomCallback_EndInvoke_m2801901758 (LeaveRoomCallback_t3947593351 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
