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

// GooglePlayGames.Native.PInvoke.NativeScoreEntry
struct NativeScoreEntry_t3997924611;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.NativeScore
struct NativeScore_t2497620897;
// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_t486124539;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void GooglePlayGames.Native.PInvoke.NativeScoreEntry::.ctor(System.IntPtr)
extern "C"  void NativeScoreEntry__ctor_m1219913123 (NativeScoreEntry_t3997924611 * __this, IntPtr_t ___selfPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.NativeScoreEntry::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void NativeScoreEntry_CallDispose_m3733055597 (NativeScoreEntry_t3997924611 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GooglePlayGames.Native.PInvoke.NativeScoreEntry::GetLastModifiedTime()
extern "C"  uint64_t NativeScoreEntry_GetLastModifiedTime_m1244935021 (NativeScoreEntry_t3997924611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeScoreEntry::GetPlayerId()
extern "C"  String_t* NativeScoreEntry_GetPlayerId_m2752648356 (NativeScoreEntry_t3997924611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeScore GooglePlayGames.Native.PInvoke.NativeScoreEntry::GetScore()
extern "C"  NativeScore_t2497620897 * NativeScoreEntry_GetScore_m1296738570 (NativeScoreEntry_t3997924611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.PlayGamesScore GooglePlayGames.Native.PInvoke.NativeScoreEntry::AsScore(System.String)
extern "C"  PlayGamesScore_t486124539 * NativeScoreEntry_AsScore_m418580405 (NativeScoreEntry_t3997924611 * __this, String_t* ___leaderboardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeScoreEntry::<GetPlayerId>m__BF(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativeScoreEntry_U3CGetPlayerIdU3Em__BF_m2926868251 (NativeScoreEntry_t3997924611 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
