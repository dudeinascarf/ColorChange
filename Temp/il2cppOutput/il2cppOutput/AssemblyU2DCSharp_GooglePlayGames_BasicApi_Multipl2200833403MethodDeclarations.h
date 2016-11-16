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

// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t2200833403;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t1804230813;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl2886292529.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl1804230813.h"

// System.Void GooglePlayGames.BasicApi.Multiplayer.Invitation::.ctor(GooglePlayGames.BasicApi.Multiplayer.Invitation/InvType,System.String,GooglePlayGames.BasicApi.Multiplayer.Participant,System.Int32)
extern "C"  void Invitation__ctor_m908744047 (Invitation_t2200833403 * __this, int32_t ___invType0, String_t* ___invId1, Participant_t1804230813 * ___inviter2, int32_t ___variant3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Invitation/InvType GooglePlayGames.BasicApi.Multiplayer.Invitation::get_InvitationType()
extern "C"  int32_t Invitation_get_InvitationType_m3086816776 (Invitation_t2200833403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Invitation::get_InvitationId()
extern "C"  String_t* Invitation_get_InvitationId_m1904660008 (Invitation_t2200833403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.BasicApi.Multiplayer.Invitation::get_Inviter()
extern "C"  Participant_t1804230813 * Invitation_get_Inviter_m2597767770 (Invitation_t2200833403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.Multiplayer.Invitation::get_Variant()
extern "C"  int32_t Invitation_get_Variant_m3901343614 (Invitation_t2200833403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Invitation::ToString()
extern "C"  String_t* Invitation_ToString_m867573239 (Invitation_t2200833403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
