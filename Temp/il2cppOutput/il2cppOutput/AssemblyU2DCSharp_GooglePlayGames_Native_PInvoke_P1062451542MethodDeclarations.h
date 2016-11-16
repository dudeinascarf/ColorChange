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

// GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod
struct OutStringMethod_t1062451542;
// System.Object
struct Il2CppObject;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void OutStringMethod__ctor_m2730868781 (OutStringMethod_t1062451542 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod::Invoke(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  OutStringMethod_Invoke_m1759385702 (OutStringMethod_t1062451542 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod::BeginInvoke(System.Text.StringBuilder,System.UIntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OutStringMethod_BeginInvoke_m4157640307 (OutStringMethod_t1062451542 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod::EndInvoke(System.IAsyncResult)
extern "C"  UIntPtr_t  OutStringMethod_EndInvoke_m3783760053 (OutStringMethod_t1062451542 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
