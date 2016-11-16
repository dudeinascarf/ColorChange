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

// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t1804230813;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Multiplayer.Player
struct Player_t3727527619;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl4028684685.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl3727527619.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl1804230813.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void GooglePlayGames.BasicApi.Multiplayer.Participant::.ctor(System.String,System.String,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Player,System.Boolean)
extern "C"  void Participant__ctor_m1933985327 (Participant_t1804230813 * __this, String_t* ___displayName0, String_t* ___participantId1, int32_t ___status2, Player_t3727527619 * ___player3, bool ___connectedToRoom4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::get_DisplayName()
extern "C"  String_t* Participant_get_DisplayName_m875896995 (Participant_t1804230813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::get_ParticipantId()
extern "C"  String_t* Participant_get_ParticipantId_m120302692 (Participant_t1804230813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus GooglePlayGames.BasicApi.Multiplayer.Participant::get_Status()
extern "C"  int32_t Participant_get_Status_m133331083 (Participant_t1804230813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Player GooglePlayGames.BasicApi.Multiplayer.Participant::get_Player()
extern "C"  Player_t3727527619 * Participant_get_Player_m3279857920 (Participant_t1804230813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Multiplayer.Participant::get_IsConnectedToRoom()
extern "C"  bool Participant_get_IsConnectedToRoom_m1323990746 (Participant_t1804230813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Multiplayer.Participant::get_IsAutomatch()
extern "C"  bool Participant_get_IsAutomatch_m2882058161 (Participant_t1804230813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::ToString()
extern "C"  String_t* Participant_ToString_m650279055 (Participant_t1804230813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.Multiplayer.Participant::CompareTo(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C"  int32_t Participant_CompareTo_m1763014525 (Participant_t1804230813 * __this, Participant_t1804230813 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Multiplayer.Participant::Equals(System.Object)
extern "C"  bool Participant_Equals_m3275618689 (Participant_t1804230813 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.Multiplayer.Participant::GetHashCode()
extern "C"  int32_t Participant_GetHashCode_m3612409253 (Participant_t1804230813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
