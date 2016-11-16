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

// GooglePlayGames.Native.Cwrapper.QuestManager/QuestUICallback
struct QuestUICallback_t3097297816;
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

// System.Void GooglePlayGames.Native.Cwrapper.QuestManager/QuestUICallback::.ctor(System.Object,System.IntPtr)
extern "C"  void QuestUICallback__ctor_m1330513983 (QuestUICallback_t3097297816 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager/QuestUICallback::Invoke(System.IntPtr,System.IntPtr)
extern "C"  void QuestUICallback_Invoke_m3888191977 (QuestUICallback_t3097297816 * __this, IntPtr_t ___arg00, IntPtr_t ___arg11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.QuestManager/QuestUICallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * QuestUICallback_BeginInvoke_m2533697390 (QuestUICallback_t3097297816 * __this, IntPtr_t ___arg00, IntPtr_t ___arg11, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager/QuestUICallback::EndInvoke(System.IAsyncResult)
extern "C"  void QuestUICallback_EndInvoke_m4231360975 (QuestUICallback_t3097297816 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
