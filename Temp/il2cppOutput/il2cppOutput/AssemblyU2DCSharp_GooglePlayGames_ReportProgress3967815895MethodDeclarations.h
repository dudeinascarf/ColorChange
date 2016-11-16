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

// GooglePlayGames.ReportProgress
struct ReportProgress_t3967815895;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.ReportProgress::.ctor(System.Object,System.IntPtr)
extern "C"  void ReportProgress__ctor_m230147170 (ReportProgress_t3967815895 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.ReportProgress::Invoke(System.String,System.Double,System.Action`1<System.Boolean>)
extern "C"  void ReportProgress_Invoke_m485975983 (ReportProgress_t3967815895 * __this, String_t* ___id0, double ___progress1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.ReportProgress::BeginInvoke(System.String,System.Double,System.Action`1<System.Boolean>,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ReportProgress_BeginInvoke_m1945770370 (ReportProgress_t3967815895 * __this, String_t* ___id0, double ___progress1, Action_1_t872614854 * ___callback2, AsyncCallback_t1369114871 * ____callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.ReportProgress::EndInvoke(System.IAsyncResult)
extern "C"  void ReportProgress_EndInvoke_m2865805170 (ReportProgress_t3967815895 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
