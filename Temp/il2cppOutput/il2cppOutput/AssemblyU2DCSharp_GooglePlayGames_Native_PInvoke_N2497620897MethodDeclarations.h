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

// GooglePlayGames.Native.PInvoke.NativeScore
struct NativeScore_t2497620897;
// System.String
struct String_t;
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

// System.Void GooglePlayGames.Native.PInvoke.NativeScore::.ctor(System.IntPtr)
extern "C"  void NativeScore__ctor_m2272659089 (NativeScore_t2497620897 * __this, IntPtr_t ___selfPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.NativeScore::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void NativeScore_CallDispose_m1639882047 (NativeScore_t2497620897 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GooglePlayGames.Native.PInvoke.NativeScore::GetDate()
extern "C"  uint64_t NativeScore_GetDate_m2053162185 (NativeScore_t2497620897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeScore::GetMetadata()
extern "C"  String_t* NativeScore_GetMetadata_m2088527459 (NativeScore_t2497620897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GooglePlayGames.Native.PInvoke.NativeScore::GetRank()
extern "C"  uint64_t NativeScore_GetRank_m2453797319 (NativeScore_t2497620897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GooglePlayGames.Native.PInvoke.NativeScore::GetValue()
extern "C"  uint64_t NativeScore_GetValue_m2306829784 (NativeScore_t2497620897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.PlayGamesScore GooglePlayGames.Native.PInvoke.NativeScore::AsScore(System.String,System.String)
extern "C"  PlayGamesScore_t486124539 * NativeScore_AsScore_m323450459 (NativeScore_t2497620897 * __this, String_t* ___leaderboardId0, String_t* ___selfPlayerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeScore GooglePlayGames.Native.PInvoke.NativeScore::FromPointer(System.IntPtr)
extern "C"  NativeScore_t2497620897 * NativeScore_FromPointer_m3549172837 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeScore::<GetMetadata>m__BE(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativeScore_U3CGetMetadataU3Em__BE_m3310605739 (NativeScore_t2497620897 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
