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

// GooglePlayGames.Native.PInvoke.NativePlayer
struct NativePlayer_t2636885988;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Multiplayer.Player
struct Player_t3727527619;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void GooglePlayGames.Native.PInvoke.NativePlayer::.ctor(System.IntPtr)
extern "C"  void NativePlayer__ctor_m1284347332 (NativePlayer_t2636885988 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativePlayer::Id()
extern "C"  String_t* NativePlayer_Id_m3377242636 (NativePlayer_t2636885988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativePlayer::Name()
extern "C"  String_t* NativePlayer_Name_m2972354428 (NativePlayer_t2636885988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativePlayer::AvatarURL()
extern "C"  String_t* NativePlayer_AvatarURL_m2432275495 (NativePlayer_t2636885988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.NativePlayer::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void NativePlayer_CallDispose_m3345547372 (NativePlayer_t2636885988 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Player GooglePlayGames.Native.PInvoke.NativePlayer::AsPlayer()
extern "C"  Player_t3727527619 * NativePlayer_AsPlayer_m477211921 (NativePlayer_t2636885988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativePlayer::<Id>m__B0(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativePlayer_U3CIdU3Em__B0_m1597552561 (NativePlayer_t2636885988 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativePlayer::<Name>m__B1(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativePlayer_U3CNameU3Em__B1_m4220406690 (NativePlayer_t2636885988 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativePlayer::<AvatarURL>m__B2(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativePlayer_U3CAvatarURLU3Em__B2_m3581144812 (NativePlayer_t2636885988 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
