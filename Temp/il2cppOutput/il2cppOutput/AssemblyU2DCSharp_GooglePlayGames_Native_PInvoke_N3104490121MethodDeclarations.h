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

// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t3104490121;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerParticipant>
struct IEnumerable_1_t2343177986;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t3337232325;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3582821007.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::.ctor(System.IntPtr)
extern "C"  void NativeRealTimeRoom__ctor_m2079063209 (NativeRealTimeRoom_t3104490121 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::Id()
extern "C"  String_t* NativeRealTimeRoom_Id_m4057370929 (NativeRealTimeRoom_t3104490121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerParticipant> GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::Participants()
extern "C"  Il2CppObject* NativeRealTimeRoom_Participants_m836548881 (NativeRealTimeRoom_t3104490121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::ParticipantCount()
extern "C"  uint32_t NativeRealTimeRoom_ParticipantCount_m2105569722 (NativeRealTimeRoom_t3104490121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/RealTimeRoomStatus GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::Status()
extern "C"  int32_t NativeRealTimeRoom_Status_m3695252733 (NativeRealTimeRoom_t3104490121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void NativeRealTimeRoom_CallDispose_m3512322599 (NativeRealTimeRoom_t3104490121 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::FromPointer(System.IntPtr)
extern "C"  NativeRealTimeRoom_t3104490121 * NativeRealTimeRoom_FromPointer_m2670229029 (Il2CppObject * __this /* static, unused */, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::<Id>m__BC(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativeRealTimeRoom_U3CIdU3Em__BC_m2245953151 (NativeRealTimeRoom_t3104490121 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::<Participants>m__BD(System.UIntPtr)
extern "C"  MultiplayerParticipant_t3337232325 * NativeRealTimeRoom_U3CParticipantsU3Em__BD_m791119704 (NativeRealTimeRoom_t3104490121 * __this, UIntPtr_t  ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
