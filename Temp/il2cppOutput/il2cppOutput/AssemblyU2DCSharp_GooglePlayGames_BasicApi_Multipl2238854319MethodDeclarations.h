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

// GooglePlayGames.BasicApi.Multiplayer.MatchOutcome
struct MatchOutcome_t2238854319;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl2327217482.h"

// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::.ctor()
extern "C"  void MatchOutcome__ctor_m2741112514 (MatchOutcome_t2238854319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::SetParticipantResult(System.String,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult,System.UInt32)
extern "C"  void MatchOutcome_SetParticipantResult_m3480324136 (MatchOutcome_t2238854319 * __this, String_t* ___participantId0, int32_t ___result1, uint32_t ___placement2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::SetParticipantResult(System.String,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult)
extern "C"  void MatchOutcome_SetParticipantResult_m3799861492 (MatchOutcome_t2238854319 * __this, String_t* ___participantId0, int32_t ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::SetParticipantResult(System.String,System.UInt32)
extern "C"  void MatchOutcome_SetParticipantResult_m2548875782 (MatchOutcome_t2238854319 * __this, String_t* ___participantId0, uint32_t ___placement1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::get_ParticipantIds()
extern "C"  List_1_t1375417109 * MatchOutcome_get_ParticipantIds_m1802407039 (MatchOutcome_t2238854319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::GetResultFor(System.String)
extern "C"  int32_t MatchOutcome_GetResultFor_m3669754963 (MatchOutcome_t2238854319 * __this, String_t* ___participantId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::GetPlacementFor(System.String)
extern "C"  uint32_t MatchOutcome_GetPlacementFor_m1738951117 (MatchOutcome_t2238854319 * __this, String_t* ___participantId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::ToString()
extern "C"  String_t* MatchOutcome_ToString_m3729417707 (MatchOutcome_t2238854319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
