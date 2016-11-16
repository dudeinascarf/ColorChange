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

// GooglePlayGames.Native.PInvoke.ParticipantResults
struct ParticipantResults_t1948656911;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2938557483.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"

// System.Void GooglePlayGames.Native.PInvoke.ParticipantResults::.ctor(System.IntPtr)
extern "C"  void ParticipantResults__ctor_m4083685039 (ParticipantResults_t1948656911 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.ParticipantResults::HasResultsForParticipant(System.String)
extern "C"  bool ParticipantResults_HasResultsForParticipant_m1665809585 (ParticipantResults_t1948656911 * __this, String_t* ___participantId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.ParticipantResults::PlacingForParticipant(System.String)
extern "C"  uint32_t ParticipantResults_PlacingForParticipant_m3282030838 (ParticipantResults_t1948656911 * __this, String_t* ___participantId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/MatchResult GooglePlayGames.Native.PInvoke.ParticipantResults::ResultsForParticipant(System.String)
extern "C"  int32_t ParticipantResults_ResultsForParticipant_m2184133431 (ParticipantResults_t1948656911 * __this, String_t* ___participantId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.ParticipantResults GooglePlayGames.Native.PInvoke.ParticipantResults::WithResult(System.String,System.UInt32,GooglePlayGames.Native.Cwrapper.Types/MatchResult)
extern "C"  ParticipantResults_t1948656911 * ParticipantResults_WithResult_m2416040994 (ParticipantResults_t1948656911 * __this, String_t* ___participantId0, uint32_t ___placing1, int32_t ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.ParticipantResults::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void ParticipantResults_CallDispose_m3792144609 (ParticipantResults_t1948656911 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
