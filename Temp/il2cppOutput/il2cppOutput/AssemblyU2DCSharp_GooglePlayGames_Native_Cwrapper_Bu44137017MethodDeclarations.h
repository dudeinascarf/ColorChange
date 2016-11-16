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

// GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionStartedCallback
struct OnAuthActionStartedCallback_t2378408244;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback
struct OnLogCallback_t508427221;
// GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback
struct OnAuthActionFinishedCallback_t1172336457;
// GooglePlayGames.Native.Cwrapper.Builder/OnTurnBasedMatchEventCallback
struct OnTurnBasedMatchEventCallback_t2064424764;
// GooglePlayGames.Native.Cwrapper.Builder/OnQuestCompletedCallback
struct OnQuestCompletedCallback_t2055592770;
// GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback
struct OnMultiplayerInvitationEventCallback_t3993607552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2378408244.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_B508427221.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3195991383.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1172336457.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2064424764.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2055592770.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3993607552.h"

// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetOnAuthActionStarted(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionStartedCallback,System.IntPtr)
extern "C"  void Builder_GameServices_Builder_SetOnAuthActionStarted_m4187361799 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, OnAuthActionStartedCallback_t2378408244 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_AddOauthScope(System.Runtime.InteropServices.HandleRef,System.String)
extern "C"  void Builder_GameServices_Builder_AddOauthScope_m2987098391 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetLogging(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback,System.IntPtr,GooglePlayGames.Native.Cwrapper.Types/LogLevel)
extern "C"  void Builder_GameServices_Builder_SetLogging_m2472601294 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, OnLogCallback_t508427221 * ___callback1, IntPtr_t ___callback_arg2, int32_t ___min_level3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_Construct()
extern "C"  IntPtr_t Builder_GameServices_Builder_Construct_m4217393154 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_EnableSnapshots(System.Runtime.InteropServices.HandleRef)
extern "C"  void Builder_GameServices_Builder_EnableSnapshots_m465060425 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_RequireGooglePlus(System.Runtime.InteropServices.HandleRef)
extern "C"  void Builder_GameServices_Builder_RequireGooglePlus_m896466261 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetOnLog(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback,System.IntPtr,GooglePlayGames.Native.Cwrapper.Types/LogLevel)
extern "C"  void Builder_GameServices_Builder_SetOnLog_m3808896840 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, OnLogCallback_t508427221 * ___callback1, IntPtr_t ___callback_arg2, int32_t ___min_level3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetDefaultOnLog(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/LogLevel)
extern "C"  void Builder_GameServices_Builder_SetDefaultOnLog_m152428 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___min_level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetOnAuthActionFinished(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback,System.IntPtr)
extern "C"  void Builder_GameServices_Builder_SetOnAuthActionFinished_m2576883581 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, OnAuthActionFinishedCallback_t1172336457 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetOnTurnBasedMatchEvent(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnTurnBasedMatchEventCallback,System.IntPtr)
extern "C"  void Builder_GameServices_Builder_SetOnTurnBasedMatchEvent_m3955139847 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, OnTurnBasedMatchEventCallback_t2064424764 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetOnQuestCompleted(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnQuestCompletedCallback,System.IntPtr)
extern "C"  void Builder_GameServices_Builder_SetOnQuestCompleted_m2611432715 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, OnQuestCompletedCallback_t2055592770 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetOnMultiplayerInvitationEvent(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback,System.IntPtr)
extern "C"  void Builder_GameServices_Builder_SetOnMultiplayerInvitationEvent_m4175376015 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, OnMultiplayerInvitationEventCallback_t3993607552 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_Create(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C"  IntPtr_t Builder_GameServices_Builder_Create_m2942984894 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___platform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void Builder_GameServices_Builder_Dispose_m4050568892 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
