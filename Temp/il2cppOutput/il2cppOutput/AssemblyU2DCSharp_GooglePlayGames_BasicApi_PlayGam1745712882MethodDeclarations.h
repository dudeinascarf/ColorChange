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

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct Builder_t1745712882;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t2409308905;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t1377674964;
// System.String[]
struct StringU5BU5D_t4054002952;
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t2200833403;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t3573041681;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Invitat2409308905.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl1377674964.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGam4135364200.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl2200833403.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl3573041681.h"

// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::.ctor()
extern "C"  void Builder__ctor_m964831929 (Builder_t1745712882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::EnableSavedGames()
extern "C"  Builder_t1745712882 * Builder_EnableSavedGames_m3830798215 (Builder_t1745712882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequireGooglePlus()
extern "C"  Builder_t1745712882 * Builder_RequireGooglePlus_m983627632 (Builder_t1745712882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::AddOauthScope(System.String)
extern "C"  Builder_t1745712882 * Builder_AddOauthScope_m1236962956 (Builder_t1745712882 * __this, String_t* ___scope0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::WithInvitationDelegate(GooglePlayGames.BasicApi.InvitationReceivedDelegate)
extern "C"  Builder_t1745712882 * Builder_WithInvitationDelegate_m395124669 (Builder_t1745712882 * __this, InvitationReceivedDelegate_t2409308905 * ___invitationDelegate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::WithMatchDelegate(GooglePlayGames.BasicApi.Multiplayer.MatchDelegate)
extern "C"  Builder_t1745712882 * Builder_WithMatchDelegate_m1887362318 (Builder_t1745712882 * __this, MatchDelegate_t1377674964 * ___matchDelegate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::WithPermissionRationale(System.String)
extern "C"  Builder_t1745712882 * Builder_WithPermissionRationale_m1754763016 (Builder_t1745712882 * __this, String_t* ___rationale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::Build()
extern "C"  PlayGamesClientConfiguration_t4135364200  Builder_Build_m3779419922 (Builder_t1745712882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::HasEnableSaveGames()
extern "C"  bool Builder_HasEnableSaveGames_m502992894 (Builder_t1745712882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::HasRequireGooglePlus()
extern "C"  bool Builder_HasRequireGooglePlus_m4041029877 (Builder_t1745712882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::getScopes()
extern "C"  StringU5BU5D_t4054002952* Builder_getScopes_m957682253 (Builder_t1745712882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetMatchDelegate()
extern "C"  MatchDelegate_t1377674964 * Builder_GetMatchDelegate_m3448515760 (Builder_t1745712882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetInvitationDelegate()
extern "C"  InvitationReceivedDelegate_t2409308905 * Builder_GetInvitationDelegate_m800321655 (Builder_t1745712882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetPermissionRationale()
extern "C"  String_t* Builder_GetPermissionRationale_m2165481370 (Builder_t1745712882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::<mInvitationDelegate>m__2(GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean)
extern "C"  void Builder_U3CmInvitationDelegateU3Em__2_m3149084075 (Il2CppObject * __this /* static, unused */, Invitation_t2200833403 * p0, bool p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::<mMatchDelegate>m__3(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean)
extern "C"  void Builder_U3CmMatchDelegateU3Em__3_m323383532 (Il2CppObject * __this /* static, unused */, TurnBasedMatch_t3573041681 * p0, bool p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
