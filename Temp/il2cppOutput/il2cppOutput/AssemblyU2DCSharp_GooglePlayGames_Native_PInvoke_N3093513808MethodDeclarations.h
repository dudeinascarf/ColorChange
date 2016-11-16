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

// GooglePlayGames.Native.PInvoke.NativeScorePage
struct NativeScorePage_t3093513808;
// GooglePlayGames.Native.PInvoke.NativeScoreEntry
struct NativeScoreEntry_t3997924611;
// System.Collections.Generic.IEnumerator`1<GooglePlayGames.Native.PInvoke.NativeScoreEntry>
struct IEnumerator_1_t1614822364;
// GooglePlayGames.Native.PInvoke.NativeScorePageToken
struct NativeScorePageToken_t1393223995;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3906033828.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2241332029.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4146228892.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void GooglePlayGames.Native.PInvoke.NativeScorePage::.ctor(System.IntPtr)
extern "C"  void NativeScorePage__ctor_m2899128320 (NativeScorePage_t3093513808 * __this, IntPtr_t ___selfPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.NativeScorePage::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void NativeScorePage_CallDispose_m443981232 (NativeScorePage_t3093513808 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/LeaderboardCollection GooglePlayGames.Native.PInvoke.NativeScorePage::GetCollection()
extern "C"  int32_t NativeScorePage_GetCollection_m2150366007 (NativeScorePage_t3093513808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeScorePage::Length()
extern "C"  UIntPtr_t  NativeScorePage_Length_m2278182558 (NativeScorePage_t3093513808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeScoreEntry GooglePlayGames.Native.PInvoke.NativeScorePage::GetElement(System.UIntPtr)
extern "C"  NativeScoreEntry_t3997924611 * NativeScorePage_GetElement_m3970516730 (NativeScorePage_t3093513808 * __this, UIntPtr_t  ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<GooglePlayGames.Native.PInvoke.NativeScoreEntry> GooglePlayGames.Native.PInvoke.NativeScorePage::GetEnumerator()
extern "C"  Il2CppObject* NativeScorePage_GetEnumerator_m177945290 (NativeScorePage_t3093513808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.NativeScorePage::HasNextScorePage()
extern "C"  bool NativeScorePage_HasNextScorePage_m3573710392 (NativeScorePage_t3093513808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.NativeScorePage::HasPrevScorePage()
extern "C"  bool NativeScorePage_HasPrevScorePage_m1554407160 (NativeScorePage_t3093513808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeScorePageToken GooglePlayGames.Native.PInvoke.NativeScorePage::GetNextScorePageToken()
extern "C"  NativeScorePageToken_t1393223995 * NativeScorePage_GetNextScorePageToken_m1098308178 (NativeScorePage_t3093513808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeScorePageToken GooglePlayGames.Native.PInvoke.NativeScorePage::GetPreviousScorePageToken()
extern "C"  NativeScorePageToken_t1393223995 * NativeScorePage_GetPreviousScorePageToken_m1920798550 (NativeScorePage_t3093513808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.NativeScorePage::Valid()
extern "C"  bool NativeScorePage_Valid_m4063029690 (NativeScorePage_t3093513808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/LeaderboardTimeSpan GooglePlayGames.Native.PInvoke.NativeScorePage::GetTimeSpan()
extern "C"  int32_t NativeScorePage_GetTimeSpan_m198029865 (NativeScorePage_t3093513808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/LeaderboardStart GooglePlayGames.Native.PInvoke.NativeScorePage::GetStart()
extern "C"  int32_t NativeScorePage_GetStart_m107240381 (NativeScorePage_t3093513808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeScorePage::GetLeaderboardId()
extern "C"  String_t* NativeScorePage_GetLeaderboardId_m3477759509 (NativeScorePage_t3093513808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeScorePage GooglePlayGames.Native.PInvoke.NativeScorePage::FromPointer(System.IntPtr)
extern "C"  NativeScorePage_t3093513808 * NativeScorePage_FromPointer_m2710135685 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeScoreEntry GooglePlayGames.Native.PInvoke.NativeScorePage::<GetEnumerator>m__C0(System.UIntPtr)
extern "C"  NativeScoreEntry_t3997924611 * NativeScorePage_U3CGetEnumeratorU3Em__C0_m4242978062 (NativeScorePage_t3093513808 * __this, UIntPtr_t  ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeScorePage::<GetLeaderboardId>m__C1(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativeScorePage_U3CGetLeaderboardIdU3Em__C1_m1191983340 (NativeScorePage_t3093513808 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
