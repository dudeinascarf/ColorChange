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

// GooglePlayGames.Native.PInvoke.RealtimeManager
struct RealtimeManager_t1839590440;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfig
struct RealtimeRoomConfig_t294375316;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper
struct RealTimeEventListenerHelper_t3078724631;
// System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse>
struct Action_1_t2926756575;
// System.Action`1<GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse>
struct Action_1_t1318217990;
// System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse>
struct Action_1_t1513345976;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t3104490121;
// System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse>
struct Action_1_t3729279445;
// System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse>
struct Action_1_t1211604153;
// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus>
struct Action_1_t150760668;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_t3411188537;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t3337232325;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>
struct Action_1_t3071188627;
// System.Collections.Generic.List`1<GooglePlayGames.Native.PInvoke.MultiplayerParticipant>
struct List_1_t410450581;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_G1862808700.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_Re294375316.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_R3078724631.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_N3104490121.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_M3411188537.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_M3337232325.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2675372491.h"

// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C"  void RealtimeManager__ctor_m3689185539 (RealtimeManager_t1839590440 * __this, GameServices_t1862808700 * ___gameServices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::CreateRoom(GooglePlayGames.Native.PInvoke.RealtimeRoomConfig,GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper,System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse>)
extern "C"  void RealtimeManager_CreateRoom_m3510970681 (RealtimeManager_t1839590440 * __this, RealtimeRoomConfig_t294375316 * ___config0, RealTimeEventListenerHelper_t3078724631 * ___helper1, Action_1_t2926756575 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::ShowPlayerSelectUI(System.UInt32,System.UInt32,System.Boolean,System.Action`1<GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse>)
extern "C"  void RealtimeManager_ShowPlayerSelectUI_m2493884194 (RealtimeManager_t1839590440 * __this, uint32_t ___minimumPlayers0, uint32_t ___maxiumPlayers1, bool ___allowAutomatching2, Action_1_t1318217990 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalPlayerSelectUIcallback(System.IntPtr,System.IntPtr)
extern "C"  void RealtimeManager_InternalPlayerSelectUIcallback_m1314518215 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealtimeManager_InternalPlayerSelectUIcallback_m1314518215(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalRealTimeRoomCallback(System.IntPtr,System.IntPtr)
extern "C"  void RealtimeManager_InternalRealTimeRoomCallback_m4065932882 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealtimeManager_InternalRealTimeRoomCallback_m4065932882(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalRoomInboxUICallback(System.IntPtr,System.IntPtr)
extern "C"  void RealtimeManager_InternalRoomInboxUICallback_m3868060673 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealtimeManager_InternalRoomInboxUICallback_m3868060673(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::ShowRoomInboxUI(System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse>)
extern "C"  void RealtimeManager_ShowRoomInboxUI_m2295100958 (RealtimeManager_t1839590440 * __this, Action_1_t1513345976 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::ShowWaitingRoomUI(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,System.UInt32,System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse>)
extern "C"  void RealtimeManager_ShowWaitingRoomUI_m3333535294 (RealtimeManager_t1839590440 * __this, NativeRealTimeRoom_t3104490121 * ___room0, uint32_t ___minimumParticipantsBeforeStarting1, Action_1_t3729279445 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalWaitingRoomUICallback(System.IntPtr,System.IntPtr)
extern "C"  void RealtimeManager_InternalWaitingRoomUICallback_m232466948 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealtimeManager_InternalWaitingRoomUICallback_m232466948(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalFetchInvitationsCallback(System.IntPtr,System.IntPtr)
extern "C"  void RealtimeManager_InternalFetchInvitationsCallback_m3989413048 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealtimeManager_InternalFetchInvitationsCallback_m3989413048(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::FetchInvitations(System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse>)
extern "C"  void RealtimeManager_FetchInvitations_m1082661253 (RealtimeManager_t1839590440 * __this, Action_1_t1211604153 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalLeaveRoomCallback(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus,System.IntPtr)
extern "C"  void RealtimeManager_InternalLeaveRoomCallback_m2515928942 (Il2CppObject * __this /* static, unused */, int32_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealtimeManager_InternalLeaveRoomCallback_m2515928942(int32_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::LeaveRoom(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus>)
extern "C"  void RealtimeManager_LeaveRoom_m3309898014 (RealtimeManager_t1839590440 * __this, NativeRealTimeRoom_t3104490121 * ___room0, Action_1_t150760668 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::AcceptInvitation(GooglePlayGames.Native.PInvoke.MultiplayerInvitation,GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper,System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse>)
extern "C"  void RealtimeManager_AcceptInvitation_m1974797738 (RealtimeManager_t1839590440 * __this, MultiplayerInvitation_t3411188537 * ___invitation0, RealTimeEventListenerHelper_t3078724631 * ___listener1, Action_1_t2926756575 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::DeclineInvitation(GooglePlayGames.Native.PInvoke.MultiplayerInvitation)
extern "C"  void RealtimeManager_DeclineInvitation_m3477319289 (RealtimeManager_t1839590440 * __this, MultiplayerInvitation_t3411188537 * ___invitation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::SendReliableMessage(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Byte[],System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>)
extern "C"  void RealtimeManager_SendReliableMessage_m4152356167 (RealtimeManager_t1839590440 * __this, NativeRealTimeRoom_t3104490121 * ___room0, MultiplayerParticipant_t3337232325 * ___participant1, ByteU5BU5D_t4260760469* ___data2, Action_1_t3071188627 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::InternalSendReliableMessageCallback(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr)
extern "C"  void RealtimeManager_InternalSendReliableMessageCallback_m496390782 (Il2CppObject * __this /* static, unused */, int32_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RealtimeManager_InternalSendReliableMessageCallback_m496390782(int32_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::SendUnreliableMessageToAll(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,System.Byte[])
extern "C"  void RealtimeManager_SendUnreliableMessageToAll_m1975386627 (RealtimeManager_t1839590440 * __this, NativeRealTimeRoom_t3104490121 * ___room0, ByteU5BU5D_t4260760469* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager::SendUnreliableMessageToSpecificParticipants(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,System.Collections.Generic.List`1<GooglePlayGames.Native.PInvoke.MultiplayerParticipant>,System.Byte[])
extern "C"  void RealtimeManager_SendUnreliableMessageToSpecificParticipants_m3281108826 (RealtimeManager_t1839590440 * __this, NativeRealTimeRoom_t3104490121 * ___room0, List_1_t410450581 * ___recipients1, ByteU5BU5D_t4260760469* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.PInvoke.RealtimeManager::ToCallbackPointer(System.Action`1<GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse>)
extern "C"  IntPtr_t RealtimeManager_ToCallbackPointer_m3818118277 (Il2CppObject * __this /* static, unused */, Action_1_t2926756575 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.PInvoke.RealtimeManager::<SendUnreliableMessageToSpecificParticipants>m__D0(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C"  IntPtr_t RealtimeManager_U3CSendUnreliableMessageToSpecificParticipantsU3Em__D0_m2623687313 (Il2CppObject * __this /* static, unused */, MultiplayerParticipant_t3337232325 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
