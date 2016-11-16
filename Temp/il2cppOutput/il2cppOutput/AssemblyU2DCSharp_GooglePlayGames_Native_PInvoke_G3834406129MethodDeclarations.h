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

// GooglePlayGames.Native.PInvoke.GameServicesBuilder
struct GameServicesBuilder_t3834406129;
// GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback
struct AuthFinishedCallback_t563494438;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback
struct AuthStartedCallback_t2497315511;
// System.Action`3<GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Action_3_t3317244834;
// System.Action`3<GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.MultiplayerInvitation>
struct Action_3_t2130612649;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// GooglePlayGames.Native.PInvoke.PlatformConfiguration
struct PlatformConfiguration_t2784665065;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_Ga563494438.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1624738888.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_C803408059.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_G2497315511.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2613789975.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_P2784665065.h"

// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::.ctor(System.IntPtr)
extern "C"  void GameServicesBuilder__ctor_m3457252321 (GameServicesBuilder_t3834406129 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::SetOnAuthFinishedCallback(GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback)
extern "C"  void GameServicesBuilder_SetOnAuthFinishedCallback_m3985744219 (GameServicesBuilder_t3834406129 * __this, AuthFinishedCallback_t563494438 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::EnableSnapshots()
extern "C"  void GameServicesBuilder_EnableSnapshots_m51975773 (GameServicesBuilder_t3834406129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::RequireGooglePlus()
extern "C"  void GameServicesBuilder_RequireGooglePlus_m2211976489 (GameServicesBuilder_t3834406129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::AddOauthScope(System.String)
extern "C"  void GameServicesBuilder_AddOauthScope_m1229377779 (GameServicesBuilder_t3834406129 * __this, String_t* ___scope0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::InternalAuthFinishedCallback(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,GooglePlayGames.Native.Cwrapper.CommonErrorStatus/AuthStatus,System.IntPtr)
extern "C"  void GameServicesBuilder_InternalAuthFinishedCallback_m2298659036 (Il2CppObject * __this /* static, unused */, int32_t ___op0, int32_t ___status1, IntPtr_t ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_GameServicesBuilder_InternalAuthFinishedCallback_m2298659036(int32_t ___arg00, int32_t ___arg11, intptr_t ___arg22);
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::SetOnAuthStartedCallback(GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback)
extern "C"  void GameServicesBuilder_SetOnAuthStartedCallback_m2167389751 (GameServicesBuilder_t3834406129 * __this, AuthStartedCallback_t2497315511 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::InternalAuthStartedCallback(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,System.IntPtr)
extern "C"  void GameServicesBuilder_InternalAuthStartedCallback_m459789990 (Il2CppObject * __this /* static, unused */, int32_t ___op0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_GameServicesBuilder_InternalAuthStartedCallback_m459789990(int32_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void GameServicesBuilder_CallDispose_m957551087 (GameServicesBuilder_t3834406129 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::InternalOnTurnBasedMatchEventCallback(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,System.IntPtr,System.IntPtr)
extern "C"  void GameServicesBuilder_InternalOnTurnBasedMatchEventCallback_m3351413638 (Il2CppObject * __this /* static, unused */, int32_t ___eventType0, String_t* ___matchId1, IntPtr_t ___match2, IntPtr_t ___userData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_GameServicesBuilder_InternalOnTurnBasedMatchEventCallback_m3351413638(int32_t ___arg00, char* ___arg11, intptr_t ___arg22, intptr_t ___arg33);
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::SetOnTurnBasedMatchEventCallback(System.Action`3<GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>)
extern "C"  void GameServicesBuilder_SetOnTurnBasedMatchEventCallback_m3384888960 (GameServicesBuilder_t3834406129 * __this, Action_3_t3317244834 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::InternalOnMultiplayerInvitationEventCallback(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,System.IntPtr,System.IntPtr)
extern "C"  void GameServicesBuilder_InternalOnMultiplayerInvitationEventCallback_m570611578 (Il2CppObject * __this /* static, unused */, int32_t ___eventType0, String_t* ___matchId1, IntPtr_t ___match2, IntPtr_t ___userData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_GameServicesBuilder_InternalOnMultiplayerInvitationEventCallback_m570611578(int32_t ___arg00, char* ___arg11, intptr_t ___arg22, intptr_t ___arg33);
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::SetOnMultiplayerInvitationEventCallback(System.Action`3<GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.MultiplayerInvitation>)
extern "C"  void GameServicesBuilder_SetOnMultiplayerInvitationEventCallback_m2624397 (GameServicesBuilder_t3834406129 * __this, Action_3_t2130612649 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.PInvoke.GameServicesBuilder::Build(GooglePlayGames.Native.PInvoke.PlatformConfiguration)
extern "C"  GameServices_t1862808700 * GameServicesBuilder_Build_m3648311551 (GameServicesBuilder_t3834406129 * __this, PlatformConfiguration_t2784665065 * ___configRef0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.GameServicesBuilder GooglePlayGames.Native.PInvoke.GameServicesBuilder::Create()
extern "C"  GameServicesBuilder_t3834406129 * GameServicesBuilder_Create_m2638064962 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
