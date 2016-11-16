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

// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t3337232325;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.NativePlayer
struct NativePlayer_t2636885988;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t1804230813;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3137786926.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void GooglePlayGames.Native.PInvoke.MultiplayerParticipant::.ctor(System.IntPtr)
extern "C"  void MultiplayerParticipant__ctor_m3056580837 (MultiplayerParticipant_t3337232325 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.MultiplayerParticipant::.cctor()
extern "C"  void MultiplayerParticipant__cctor_m2576478654 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus GooglePlayGames.Native.PInvoke.MultiplayerParticipant::Status()
extern "C"  int32_t MultiplayerParticipant_Status_m3602258114 (MultiplayerParticipant_t3337232325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.MultiplayerParticipant::IsConnectedToRoom()
extern "C"  bool MultiplayerParticipant_IsConnectedToRoom_m2339211062 (MultiplayerParticipant_t3337232325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.MultiplayerParticipant::DisplayName()
extern "C"  String_t* MultiplayerParticipant_DisplayName_m508256189 (MultiplayerParticipant_t3337232325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativePlayer GooglePlayGames.Native.PInvoke.MultiplayerParticipant::Player()
extern "C"  NativePlayer_t2636885988 * MultiplayerParticipant_Player_m1300036734 (MultiplayerParticipant_t3337232325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.MultiplayerParticipant::Id()
extern "C"  String_t* MultiplayerParticipant_Id_m2656485101 (MultiplayerParticipant_t3337232325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.MultiplayerParticipant::Valid()
extern "C"  bool MultiplayerParticipant_Valid_m455517597 (MultiplayerParticipant_t3337232325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.MultiplayerParticipant::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void MultiplayerParticipant_CallDispose_m3538912619 (MultiplayerParticipant_t3337232325 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.PInvoke.MultiplayerParticipant::AsParticipant()
extern "C"  Participant_t1804230813 * MultiplayerParticipant_AsParticipant_m1252977076 (MultiplayerParticipant_t3337232325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.MultiplayerParticipant::FromPointer(System.IntPtr)
extern "C"  MultiplayerParticipant_t3337232325 * MultiplayerParticipant_FromPointer_m3731460765 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.MultiplayerParticipant::AutomatchingSentinel()
extern "C"  MultiplayerParticipant_t3337232325 * MultiplayerParticipant_AutomatchingSentinel_m60922798 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.MultiplayerParticipant::<DisplayName>m__A9(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  MultiplayerParticipant_U3CDisplayNameU3Em__A9_m3487818828 (MultiplayerParticipant_t3337232325 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.MultiplayerParticipant::<Id>m__AA(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  MultiplayerParticipant_U3CIdU3Em__AA_m3051567074 (MultiplayerParticipant_t3337232325 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
