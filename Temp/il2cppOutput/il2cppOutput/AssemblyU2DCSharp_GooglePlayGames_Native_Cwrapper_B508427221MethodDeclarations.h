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

// GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback
struct OnLogCallback_t508427221;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3195991383.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnLogCallback__ctor_m1297460524 (OnLogCallback_t508427221 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback::Invoke(GooglePlayGames.Native.Cwrapper.Types/LogLevel,System.String,System.IntPtr)
extern "C"  void OnLogCallback_Invoke_m763351961 (OnLogCallback_t508427221 * __this, int32_t ___arg00, String_t* ___arg11, IntPtr_t ___arg22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.Types/LogLevel,System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnLogCallback_BeginInvoke_m4129920006 (OnLogCallback_t508427221 * __this, int32_t ___arg00, String_t* ___arg11, IntPtr_t ___arg22, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnLogCallback_EndInvoke_m394695996 (OnLogCallback_t508427221 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
