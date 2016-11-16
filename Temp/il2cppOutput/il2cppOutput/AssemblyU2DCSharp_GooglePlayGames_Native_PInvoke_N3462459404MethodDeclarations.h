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

// GooglePlayGames.Native.PInvoke.NativeLeaderboard
struct NativeLeaderboard_t3462459404;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void GooglePlayGames.Native.PInvoke.NativeLeaderboard::.ctor(System.IntPtr)
extern "C"  void NativeLeaderboard__ctor_m1368230588 (NativeLeaderboard_t3462459404 * __this, IntPtr_t ___selfPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.NativeLeaderboard::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void NativeLeaderboard_CallDispose_m469600884 (NativeLeaderboard_t3462459404 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeLeaderboard::Title()
extern "C"  String_t* NativeLeaderboard_Title_m1671778635 (NativeLeaderboard_t3462459404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeLeaderboard GooglePlayGames.Native.PInvoke.NativeLeaderboard::FromPointer(System.IntPtr)
extern "C"  NativeLeaderboard_t3462459404 * NativeLeaderboard_FromPointer_m556979781 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeLeaderboard::<Title>m__AF(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativeLeaderboard_U3CTitleU3Em__AF_m1127771947 (NativeLeaderboard_t3462459404 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
