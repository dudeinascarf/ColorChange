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

// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t2409308905;
// System.Object
struct Il2CppObject;
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t2200833403;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl2200833403.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.BasicApi.InvitationReceivedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InvitationReceivedDelegate__ctor_m2519022430 (InvitationReceivedDelegate_t2409308905 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.InvitationReceivedDelegate::Invoke(GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean)
extern "C"  void InvitationReceivedDelegate_Invoke_m1733041304 (InvitationReceivedDelegate_t2409308905 * __this, Invitation_t2200833403 * ___invitation0, bool ___shouldAutoAccept1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.BasicApi.InvitationReceivedDelegate::BeginInvoke(GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InvitationReceivedDelegate_BeginInvoke_m111700683 (InvitationReceivedDelegate_t2409308905 * __this, Invitation_t2200833403 * ___invitation0, bool ___shouldAutoAccept1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.InvitationReceivedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void InvitationReceivedDelegate_EndInvoke_m2980645998 (InvitationReceivedDelegate_t2409308905 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
