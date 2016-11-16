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

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_t260648783;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_4159799943.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m843564858_gshared (Action_1_t260648783 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m843564858(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t260648783 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m843564858_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>::Invoke(T)
extern "C"  void Action_1_Invoke_m1153105866_gshared (Action_1_t260648783 * __this, ConnectionRequest_t4159799943  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m1153105866(__this, ___obj0, method) ((  void (*) (Action_1_t260648783 *, ConnectionRequest_t4159799943 , const MethodInfo*))Action_1_Invoke_m1153105866_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m685527191_gshared (Action_1_t260648783 * __this, ConnectionRequest_t4159799943  ___obj0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m685527191(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t260648783 *, ConnectionRequest_t4159799943 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m685527191_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1824777802_gshared (Action_1_t260648783 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m1824777802(__this, ___result0, method) ((  void (*) (Action_1_t260648783 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m1824777802_gshared)(__this, ___result0, method)
