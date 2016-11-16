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
// System.String[]
struct StringU5BU5D_t4054002952;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t2409308905;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t1377674964;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t4135364200;
struct PlayGamesClientConfiguration_t4135364200_marshaled_pinvoke;
struct PlayGamesClientConfiguration_t4135364200_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGam4135364200.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGam1745712882.h"

// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder)
extern "C"  void PlayGamesClientConfiguration__ctor_m67953019 (PlayGamesClientConfiguration_t4135364200 * __this, Builder_t1745712882 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.cctor()
extern "C"  void PlayGamesClientConfiguration__cctor_m3831285928 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_EnableSavedGames()
extern "C"  bool PlayGamesClientConfiguration_get_EnableSavedGames_m2725869937 (PlayGamesClientConfiguration_t4135364200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_RequireGooglePlus()
extern "C"  bool PlayGamesClientConfiguration_get_RequireGooglePlus_m1090589382 (PlayGamesClientConfiguration_t4135364200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_Scopes()
extern "C"  StringU5BU5D_t4054002952* PlayGamesClientConfiguration_get_Scopes_m823636550 (PlayGamesClientConfiguration_t4135364200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_InvitationDelegate()
extern "C"  InvitationReceivedDelegate_t2409308905 * PlayGamesClientConfiguration_get_InvitationDelegate_m2304162202 (PlayGamesClientConfiguration_t4135364200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_MatchDelegate()
extern "C"  MatchDelegate_t1377674964 * PlayGamesClientConfiguration_get_MatchDelegate_m1536379219 (PlayGamesClientConfiguration_t4135364200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_PermissionRationale()
extern "C"  String_t* PlayGamesClientConfiguration_get_PermissionRationale_m4247784997 (PlayGamesClientConfiguration_t4135364200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct PlayGamesClientConfiguration_t4135364200;
struct PlayGamesClientConfiguration_t4135364200_marshaled_pinvoke;

extern "C" void PlayGamesClientConfiguration_t4135364200_marshal_pinvoke(const PlayGamesClientConfiguration_t4135364200& unmarshaled, PlayGamesClientConfiguration_t4135364200_marshaled_pinvoke& marshaled);
extern "C" void PlayGamesClientConfiguration_t4135364200_marshal_pinvoke_back(const PlayGamesClientConfiguration_t4135364200_marshaled_pinvoke& marshaled, PlayGamesClientConfiguration_t4135364200& unmarshaled);
extern "C" void PlayGamesClientConfiguration_t4135364200_marshal_pinvoke_cleanup(PlayGamesClientConfiguration_t4135364200_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct PlayGamesClientConfiguration_t4135364200;
struct PlayGamesClientConfiguration_t4135364200_marshaled_com;

extern "C" void PlayGamesClientConfiguration_t4135364200_marshal_com(const PlayGamesClientConfiguration_t4135364200& unmarshaled, PlayGamesClientConfiguration_t4135364200_marshaled_com& marshaled);
extern "C" void PlayGamesClientConfiguration_t4135364200_marshal_com_back(const PlayGamesClientConfiguration_t4135364200_marshaled_com& marshaled, PlayGamesClientConfiguration_t4135364200& unmarshaled);
extern "C" void PlayGamesClientConfiguration_t4135364200_marshal_com_cleanup(PlayGamesClientConfiguration_t4135364200_marshaled_com& marshaled);
