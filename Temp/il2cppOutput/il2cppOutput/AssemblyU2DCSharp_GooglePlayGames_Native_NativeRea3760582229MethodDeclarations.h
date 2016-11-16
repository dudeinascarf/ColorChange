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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener
struct OnGameThreadForwardingListener_t3760582229;
// GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener
struct RealTimeMultiplayerListener_t8218125;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t1804230813;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl1804230813.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::.ctor(GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C"  void OnGameThreadForwardingListener__ctor_m848721263 (OnGameThreadForwardingListener_t3760582229 * __this, Il2CppObject * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::RoomSetupProgress(System.Single)
extern "C"  void OnGameThreadForwardingListener_RoomSetupProgress_m3239074888 (OnGameThreadForwardingListener_t3760582229 * __this, float ___percent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::RoomConnected(System.Boolean)
extern "C"  void OnGameThreadForwardingListener_RoomConnected_m164522937 (OnGameThreadForwardingListener_t3760582229 * __this, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::LeftRoom()
extern "C"  void OnGameThreadForwardingListener_LeftRoom_m4260501072 (OnGameThreadForwardingListener_t3760582229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::PeersConnected(System.String[])
extern "C"  void OnGameThreadForwardingListener_PeersConnected_m2112101530 (OnGameThreadForwardingListener_t3760582229 * __this, StringU5BU5D_t4054002952* ___participantIds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::PeersDisconnected(System.String[])
extern "C"  void OnGameThreadForwardingListener_PeersDisconnected_m1762939168 (OnGameThreadForwardingListener_t3760582229 * __this, StringU5BU5D_t4054002952* ___participantIds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::RealTimeMessageReceived(System.Boolean,System.String,System.Byte[])
extern "C"  void OnGameThreadForwardingListener_RealTimeMessageReceived_m1246690247 (OnGameThreadForwardingListener_t3760582229 * __this, bool ___isReliable0, String_t* ___senderId1, ByteU5BU5D_t4260760469* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::ParticipantLeft(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C"  void OnGameThreadForwardingListener_ParticipantLeft_m3104740247 (OnGameThreadForwardingListener_t3760582229 * __this, Participant_t1804230813 * ___participant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::<LeftRoom>m__52()
extern "C"  void OnGameThreadForwardingListener_U3CLeftRoomU3Em__52_m946470910 (OnGameThreadForwardingListener_t3760582229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
