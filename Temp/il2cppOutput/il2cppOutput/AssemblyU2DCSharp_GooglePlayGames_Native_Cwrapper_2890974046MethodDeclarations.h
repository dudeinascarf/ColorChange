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

// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback
struct RealTimeRoomCallback_t3285480827;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback
struct LeaveRoomCallback_t3947593351;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback
struct WaitingRoomUICallback_t206291377;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/PlayerSelectUICallback
struct PlayerSelectUICallback_t2633669638;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback
struct SendReliableMessageCallback_t2145488650;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/FetchInvitationsCallback
struct FetchInvitationsCallback_t1518378837;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RoomInboxUICallback
struct RoomInboxUICallback_t3659854740;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3285480827.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3947593351.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_R206291377.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2633669638.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2145488650.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1518378837.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3659854740.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2675372491.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3557407943.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"

// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_CreateRealTimeRoom(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback,System.IntPtr)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_CreateRealTimeRoom_m2316364501 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___config1, IntPtr_t ___helper2, RealTimeRoomCallback_t3285480827 * ___callback3, IntPtr_t ___callback_arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_LeaveRoom(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback,System.IntPtr)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_LeaveRoom_m585026857 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___room1, LeaveRoomCallback_t3947593351 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_SendUnreliableMessage(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr[],System.UIntPtr,System.Byte[],System.UIntPtr)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_SendUnreliableMessage_m3812210231 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___room1, IntPtrU5BU5D_t3228729122* ___participants2, UIntPtr_t  ___participants_size3, ByteU5BU5D_t4260760469* ___data4, UIntPtr_t  ___data_size5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_ShowWaitingRoomUI(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.UInt32,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback,System.IntPtr)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_ShowWaitingRoomUI_m3577746302 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___room1, uint32_t ___min_participants_to_start2, WaitingRoomUICallback_t206291377 * ___callback3, IntPtr_t ___callback_arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_ShowPlayerSelectUI(System.Runtime.InteropServices.HandleRef,System.UInt32,System.UInt32,System.Boolean,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/PlayerSelectUICallback,System.IntPtr)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_ShowPlayerSelectUI_m3976382691 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, uint32_t ___minimum_players1, uint32_t ___maximum_players2, bool ___allow_automatch3, PlayerSelectUICallback_t2633669638 * ___callback4, IntPtr_t ___callback_arg5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_DismissInvitation(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_DismissInvitation_m677533589 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___invitation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_DeclineInvitation(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_DeclineInvitation_m2699115777 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___invitation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_SendReliableMessage(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr,System.Byte[],System.UIntPtr,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback,System.IntPtr)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_SendReliableMessage_m3417015793 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___room1, IntPtr_t ___participant2, ByteU5BU5D_t4260760469* ___data3, UIntPtr_t  ___data_size4, SendReliableMessageCallback_t2145488650 * ___callback5, IntPtr_t ___callback_arg6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_AcceptInvitation(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback,System.IntPtr)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_AcceptInvitation_m2298327156 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___invitation1, IntPtr_t ___helper2, RealTimeRoomCallback_t3285480827 * ___callback3, IntPtr_t ___callback_arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitations(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/FetchInvitationsCallback,System.IntPtr)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitations_m3427673821 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, FetchInvitationsCallback_t1518378837 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_SendUnreliableMessageToOthers(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.Byte[],System.UIntPtr)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_SendUnreliableMessageToOthers_m1764273218 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___room1, ByteU5BU5D_t4260760469* ___data2, UIntPtr_t  ___data_size3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_ShowRoomInboxUI(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RoomInboxUICallback,System.IntPtr)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_ShowRoomInboxUI_m4162965050 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, RoomInboxUICallback_t3659854740 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RealTimeRoomResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_RealTimeRoomResponse_Dispose_m2471590943 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RealTimeRoomResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_RealTimeRoomResponse_GetStatus_m3770438144 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RealTimeRoomResponse_GetRoom(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_RealTimeRoomResponse_GetRoom_m1954218364 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RoomInboxUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_RoomInboxUIResponse_Dispose_m4003242276 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RoomInboxUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_RoomInboxUIResponse_GetStatus_m1024620547 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RoomInboxUIResponse_GetInvitation(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_RoomInboxUIResponse_GetInvitation_m2624710537 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_WaitingRoomUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_WaitingRoomUIResponse_Dispose_m2884528257 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_WaitingRoomUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_WaitingRoomUIResponse_GetStatus_m2818535072 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_WaitingRoomUIResponse_GetRoom(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_WaitingRoomUIResponse_GetRoom_m3859300840 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitationsResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_Dispose_m3411527289 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitationsResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_GetStatus_m972465209 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_Length(System.Runtime.InteropServices.HandleRef)
extern "C"  UIntPtr_t  RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_Length_m1965771187 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C"  IntPtr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_GetElement_m3992910475 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, UIntPtr_t  ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
