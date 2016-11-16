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

// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_t3411188537;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t3337232325;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t2200833403;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2590224534.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl2886292529.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void GooglePlayGames.Native.PInvoke.MultiplayerInvitation::.ctor(System.IntPtr)
extern "C"  void MultiplayerInvitation__ctor_m1420177961 (MultiplayerInvitation_t3411188537 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.MultiplayerInvitation::Inviter()
extern "C"  MultiplayerParticipant_t3337232325 * MultiplayerInvitation_Inviter_m1293527131 (MultiplayerInvitation_t3411188537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.MultiplayerInvitation::Variant()
extern "C"  uint32_t MultiplayerInvitation_Variant_m2324854515 (MultiplayerInvitation_t3411188537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/MultiplayerInvitationType GooglePlayGames.Native.PInvoke.MultiplayerInvitation::Type()
extern "C"  int32_t MultiplayerInvitation_Type_m257999184 (MultiplayerInvitation_t3411188537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.MultiplayerInvitation::Id()
extern "C"  String_t* MultiplayerInvitation_Id_m4239500439 (MultiplayerInvitation_t3411188537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.MultiplayerInvitation::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void MultiplayerInvitation_CallDispose_m2606515367 (MultiplayerInvitation_t3411188537 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.MultiplayerInvitation::AutomatchingSlots()
extern "C"  uint32_t MultiplayerInvitation_AutomatchingSlots_m3814289431 (MultiplayerInvitation_t3411188537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.MultiplayerInvitation::ParticipantCount()
extern "C"  uint32_t MultiplayerInvitation_ParticipantCount_m1700318096 (MultiplayerInvitation_t3411188537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Invitation/InvType GooglePlayGames.Native.PInvoke.MultiplayerInvitation::ToInvType(GooglePlayGames.Native.Cwrapper.Types/MultiplayerInvitationType)
extern "C"  int32_t MultiplayerInvitation_ToInvType_m812002437 (Il2CppObject * __this /* static, unused */, int32_t ___invitationType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Invitation GooglePlayGames.Native.PInvoke.MultiplayerInvitation::AsInvitation()
extern "C"  Invitation_t2200833403 * MultiplayerInvitation_AsInvitation_m1587718818 (MultiplayerInvitation_t3411188537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation GooglePlayGames.Native.PInvoke.MultiplayerInvitation::FromPointer(System.IntPtr)
extern "C"  MultiplayerInvitation_t3411188537 * MultiplayerInvitation_FromPointer_m1214029029 (Il2CppObject * __this /* static, unused */, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.MultiplayerInvitation::<Id>m__A8(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  MultiplayerInvitation_U3CIdU3Em__A8_m1779881541 (MultiplayerInvitation_t3411188537 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
