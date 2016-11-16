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

// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch
struct NativeTurnBasedMatch_t302853426;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerParticipant>
struct IEnumerable_1_t2343177986;
// GooglePlayGames.Native.PInvoke.ParticipantResults
struct ParticipantResults_t1948656911;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t3337232325;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t3573041681;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2980502528.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl3119174256.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl2965598227.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::.ctor(System.IntPtr)
extern "C"  void NativeTurnBasedMatch__ctor_m2483317906 (NativeTurnBasedMatch_t302853426 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::AvailableAutomatchSlots()
extern "C"  uint32_t NativeTurnBasedMatch_AvailableAutomatchSlots_m3969957571 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::CreationTime()
extern "C"  uint64_t NativeTurnBasedMatch_CreationTime_m1307420466 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerParticipant> GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Participants()
extern "C"  Il2CppObject* NativeTurnBasedMatch_Participants_m4102890938 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Version()
extern "C"  uint32_t NativeTurnBasedMatch_Version_m298715667 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Variant()
extern "C"  uint32_t NativeTurnBasedMatch_Variant_m1623705216 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.ParticipantResults GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Results()
extern "C"  ParticipantResults_t1948656911 * NativeTurnBasedMatch_Results_m3731659715 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::ParticipantWithId(System.String)
extern "C"  MultiplayerParticipant_t3337232325 * NativeTurnBasedMatch_ParticipantWithId_m158948727 (NativeTurnBasedMatch_t302853426 * __this, String_t* ___participantId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::PendingParticipant()
extern "C"  MultiplayerParticipant_t3337232325 * NativeTurnBasedMatch_PendingParticipant_m2816275463 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/MatchStatus GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::MatchStatus()
extern "C"  int32_t NativeTurnBasedMatch_MatchStatus_m3710264266 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Description()
extern "C"  String_t* NativeTurnBasedMatch_Description_m3125024575 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::HasRematchId()
extern "C"  bool NativeTurnBasedMatch_HasRematchId_m455274433 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::RematchId()
extern "C"  String_t* NativeTurnBasedMatch_RematchId_m4130298800 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Data()
extern "C"  ByteU5BU5D_t4260760469* NativeTurnBasedMatch_Data_m1160139266 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::Id()
extern "C"  String_t* NativeTurnBasedMatch_Id_m1309231066 (NativeTurnBasedMatch_t302853426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void NativeTurnBasedMatch_CallDispose_m2218048350 (NativeTurnBasedMatch_t302853426 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::AsTurnBasedMatch(System.String)
extern "C"  TurnBasedMatch_t3573041681 * NativeTurnBasedMatch_AsTurnBasedMatch_m1723491431 (NativeTurnBasedMatch_t302853426 * __this, String_t* ___selfPlayerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchTurnStatus GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::ToTurnStatus(GooglePlayGames.Native.Cwrapper.Types/MatchStatus)
extern "C"  int32_t NativeTurnBasedMatch_ToTurnStatus_m2856120105 (Il2CppObject * __this /* static, unused */, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchStatus GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::ToMatchStatus(System.String,GooglePlayGames.Native.Cwrapper.Types/MatchStatus)
extern "C"  int32_t NativeTurnBasedMatch_ToMatchStatus_m3152766802 (Il2CppObject * __this /* static, unused */, String_t* ___pendingParticipantId0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::FromPointer(System.IntPtr)
extern "C"  NativeTurnBasedMatch_t302853426 * NativeTurnBasedMatch_FromPointer_m3962933111 (Il2CppObject * __this /* static, unused */, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::<Participants>m__C5(System.UIntPtr)
extern "C"  MultiplayerParticipant_t3337232325 * NativeTurnBasedMatch_U3CParticipantsU3Em__C5_m4073498271 (NativeTurnBasedMatch_t302853426 * __this, UIntPtr_t  ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::<Description>m__C6(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativeTurnBasedMatch_U3CDescriptionU3Em__C6_m2369421059 (NativeTurnBasedMatch_t302853426 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::<RematchId>m__C7(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativeTurnBasedMatch_U3CRematchIdU3Em__C7_m3442538293 (NativeTurnBasedMatch_t302853426 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::<Data>m__C8(System.Byte[],System.UIntPtr)
extern "C"  UIntPtr_t  NativeTurnBasedMatch_U3CDataU3Em__C8_m410627994 (NativeTurnBasedMatch_t302853426 * __this, ByteU5BU5D_t4260760469* ___bytes0, UIntPtr_t  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::<Id>m__C9(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativeTurnBasedMatch_U3CIdU3Em__C9_m4059057483 (NativeTurnBasedMatch_t302853426 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
