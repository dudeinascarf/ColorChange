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

// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper
struct RealTimeEventListenerHelper_t3078724631;
// System.Action`1<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom>
struct Action_1_t3500306257;
// System.Action`2<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant>
struct Action_2_t2637682483;
// System.String
struct String_t;
// System.Action`4<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Byte[],System.Boolean>
struct Action_4_t2045751174;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_UIntPtr3365854250.h"

// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::.ctor(System.IntPtr)
extern "C"  void RealTimeEventListenerHelper__ctor_m1776732807 (RealTimeEventListenerHelper_t3078724631 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void RealTimeEventListenerHelper_CallDispose_m2084089865 (RealTimeEventListenerHelper_t3078724631 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::SetOnRoomStatusChangedCallback(System.Action`1<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom>)
extern "C"  RealTimeEventListenerHelper_t3078724631 * RealTimeEventListenerHelper_SetOnRoomStatusChangedCallback_m1631139229 (RealTimeEventListenerHelper_t3078724631 * __this, Action_1_t3500306257 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::InternalOnRoomStatusChangedCallback(System.IntPtr,System.IntPtr)
extern "C"  void RealTimeEventListenerHelper_InternalOnRoomStatusChangedCallback_m875487975 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealTimeEventListenerHelper_InternalOnRoomStatusChangedCallback_m875487975(intptr_t ___arg00, intptr_t ___arg11);
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::SetOnRoomConnectedSetChangedCallback(System.Action`1<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom>)
extern "C"  RealTimeEventListenerHelper_t3078724631 * RealTimeEventListenerHelper_SetOnRoomConnectedSetChangedCallback_m2687578838 (RealTimeEventListenerHelper_t3078724631 * __this, Action_1_t3500306257 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::InternalOnRoomConnectedSetChangedCallback(System.IntPtr,System.IntPtr)
extern "C"  void RealTimeEventListenerHelper_InternalOnRoomConnectedSetChangedCallback_m966967118 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealTimeEventListenerHelper_InternalOnRoomConnectedSetChangedCallback_m966967118(intptr_t ___arg00, intptr_t ___arg11);
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::SetOnP2PConnectedCallback(System.Action`2<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant>)
extern "C"  RealTimeEventListenerHelper_t3078724631 * RealTimeEventListenerHelper_SetOnP2PConnectedCallback_m3628485786 (RealTimeEventListenerHelper_t3078724631 * __this, Action_2_t2637682483 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::InternalOnP2PConnectedCallback(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void RealTimeEventListenerHelper_InternalOnP2PConnectedCallback_m1995858749 (Il2CppObject * __this /* static, unused */, IntPtr_t ___room0, IntPtr_t ___participant1, IntPtr_t ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealTimeEventListenerHelper_InternalOnP2PConnectedCallback_m1995858749(intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22);
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::SetOnP2PDisconnectedCallback(System.Action`2<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant>)
extern "C"  RealTimeEventListenerHelper_t3078724631 * RealTimeEventListenerHelper_SetOnP2PDisconnectedCallback_m2637266608 (RealTimeEventListenerHelper_t3078724631 * __this, Action_2_t2637682483 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::InternalOnP2PDisconnectedCallback(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void RealTimeEventListenerHelper_InternalOnP2PDisconnectedCallback_m3566313107 (Il2CppObject * __this /* static, unused */, IntPtr_t ___room0, IntPtr_t ___participant1, IntPtr_t ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealTimeEventListenerHelper_InternalOnP2PDisconnectedCallback_m3566313107(intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22);
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::SetOnParticipantStatusChangedCallback(System.Action`2<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant>)
extern "C"  RealTimeEventListenerHelper_t3078724631 * RealTimeEventListenerHelper_SetOnParticipantStatusChangedCallback_m3431702446 (RealTimeEventListenerHelper_t3078724631 * __this, Action_2_t2637682483 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::InternalOnParticipantStatusChangedCallback(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void RealTimeEventListenerHelper_InternalOnParticipantStatusChangedCallback_m1071360937 (Il2CppObject * __this /* static, unused */, IntPtr_t ___room0, IntPtr_t ___participant1, IntPtr_t ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealTimeEventListenerHelper_InternalOnParticipantStatusChangedCallback_m1071360937(intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22);
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::PerformRoomAndParticipantCallback(System.String,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void RealTimeEventListenerHelper_PerformRoomAndParticipantCallback_m801727652 (Il2CppObject * __this /* static, unused */, String_t* ___callbackName0, IntPtr_t ___room1, IntPtr_t ___participant2, IntPtr_t ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::SetOnDataReceivedCallback(System.Action`4<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Byte[],System.Boolean>)
extern "C"  RealTimeEventListenerHelper_t3078724631 * RealTimeEventListenerHelper_SetOnDataReceivedCallback_m288327074 (RealTimeEventListenerHelper_t3078724631 * __this, Action_4_t2045751174 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::InternalOnDataReceived(System.IntPtr,System.IntPtr,System.IntPtr,System.UIntPtr,System.Boolean,System.IntPtr)
extern "C"  void RealTimeEventListenerHelper_InternalOnDataReceived_m3865260812 (Il2CppObject * __this /* static, unused */, IntPtr_t ___room0, IntPtr_t ___participant1, IntPtr_t ___data2, UIntPtr_t  ___dataLength3, bool ___isReliable4, IntPtr_t ___userData5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealTimeEventListenerHelper_InternalOnDataReceived_m3865260812(intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, uintptr_t ___arg33, int8_t ___arg44, intptr_t ___arg55);
// System.IntPtr GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::ToCallbackPointer(System.Action`1<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom>)
extern "C"  IntPtr_t RealTimeEventListenerHelper_ToCallbackPointer_m1521846655 (Il2CppObject * __this /* static, unused */, Action_1_t3500306257 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper::Create()
extern "C"  RealTimeEventListenerHelper_t3078724631 * RealTimeEventListenerHelper_Create_m3283463042 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
