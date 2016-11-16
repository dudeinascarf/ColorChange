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

// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t3573041681;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_t3172416365;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t1804230813;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl3119174256.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl2965598227.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl1804230813.h"

// System.Void GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::.ctor(System.String,System.Byte[],System.Boolean,System.String,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>,System.UInt32,System.String,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchTurnStatus,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchStatus,System.UInt32,System.UInt32)
extern "C"  void TurnBasedMatch__ctor_m2716123044 (TurnBasedMatch_t3573041681 * __this, String_t* ___matchId0, ByteU5BU5D_t4260760469* ___data1, bool ___canRematch2, String_t* ___selfParticipantId3, List_1_t3172416365 * ___participants4, uint32_t ___availableAutomatchSlots5, String_t* ___pendingParticipantId6, int32_t ___turnStatus7, int32_t ___matchStatus8, uint32_t ___variant9, uint32_t ___version10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_MatchId()
extern "C"  String_t* TurnBasedMatch_get_MatchId_m3105141368 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_Data()
extern "C"  ByteU5BU5D_t4260760469* TurnBasedMatch_get_Data_m4087459885 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_CanRematch()
extern "C"  bool TurnBasedMatch_get_CanRematch_m2191281403 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_SelfParticipantId()
extern "C"  String_t* TurnBasedMatch_get_SelfParticipantId_m419319610 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_Self()
extern "C"  Participant_t1804230813 * TurnBasedMatch_get_Self_m3269278931 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::GetParticipant(System.String)
extern "C"  Participant_t1804230813 * TurnBasedMatch_GetParticipant_m3197109863 (TurnBasedMatch_t3573041681 * __this, String_t* ___participantId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_Participants()
extern "C"  List_1_t3172416365 * TurnBasedMatch_get_Participants_m4135323075 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_PendingParticipantId()
extern "C"  String_t* TurnBasedMatch_get_PendingParticipantId_m3038814273 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_PendingParticipant()
extern "C"  Participant_t1804230813 * TurnBasedMatch_get_PendingParticipant_m3989737507 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchTurnStatus GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_TurnStatus()
extern "C"  int32_t TurnBasedMatch_get_TurnStatus_m3991208185 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchStatus GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_Status()
extern "C"  int32_t TurnBasedMatch_get_Status_m3014506815 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_Variant()
extern "C"  uint32_t TurnBasedMatch_get_Variant_m529208309 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_Version()
extern "C"  uint32_t TurnBasedMatch_get_Version_m3499186056 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_AvailableAutomatchSlots()
extern "C"  uint32_t TurnBasedMatch_get_AvailableAutomatchSlots_m3133964856 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::ToString()
extern "C"  String_t* TurnBasedMatch_ToString_m270407437 (TurnBasedMatch_t3573041681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::<ToString>m__1(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C"  String_t* TurnBasedMatch_U3CToStringU3Em__1_m1009691492 (Il2CppObject * __this /* static, unused */, Participant_t1804230813 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
