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

// GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback
struct OnMultiplayerInvitationEventCallback_t3993607552;
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
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2613789975.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnMultiplayerInvitationEventCallback__ctor_m239009319 (OnMultiplayerInvitationEventCallback_t3993607552 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback::Invoke(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,System.IntPtr,System.IntPtr)
extern "C"  void OnMultiplayerInvitationEventCallback_Invoke_m1142193506 (OnMultiplayerInvitationEventCallback_t3993607552 * __this, int32_t ___arg00, String_t* ___arg11, IntPtr_t ___arg22, IntPtr_t ___arg33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnMultiplayerInvitationEventCallback_BeginInvoke_m3175198395 (OnMultiplayerInvitationEventCallback_t3993607552 * __this, int32_t ___arg00, String_t* ___arg11, IntPtr_t ___arg22, IntPtr_t ___arg33, AsyncCallback_t1369114871 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnMultiplayerInvitationEventCallback_EndInvoke_m3768425399 (OnMultiplayerInvitationEventCallback_t3993607552 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
