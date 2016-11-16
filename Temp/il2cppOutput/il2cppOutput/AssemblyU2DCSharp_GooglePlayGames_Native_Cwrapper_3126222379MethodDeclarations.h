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

// GooglePlayGames.Native.Cwrapper.GameServices/FlushCallback
struct FlushCallback_t3126222379;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1223161653.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.Cwrapper.GameServices/FlushCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void FlushCallback__ctor_m3989401426 (FlushCallback_t3126222379 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.GameServices/FlushCallback::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/FlushStatus,System.IntPtr)
extern "C"  void FlushCallback_Invoke_m2939810879 (FlushCallback_t3126222379 * __this, int32_t ___arg00, IntPtr_t ___arg11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.GameServices/FlushCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/FlushStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FlushCallback_BeginInvoke_m793985810 (FlushCallback_t3126222379 * __this, int32_t ___arg00, IntPtr_t ___arg11, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.GameServices/FlushCallback::EndInvoke(System.IAsyncResult)
extern "C"  void FlushCallback_EndInvoke_m4039989858 (FlushCallback_t3126222379 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
