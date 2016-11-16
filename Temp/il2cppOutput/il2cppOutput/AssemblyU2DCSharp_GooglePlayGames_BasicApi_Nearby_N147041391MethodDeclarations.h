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

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t914279838;
// GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t147041391;
struct NearbyConnectionConfiguration_t147041391_marshaled_pinvoke;
struct NearbyConnectionConfiguration_t147041391_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_N147041391.h"

// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
extern "C"  void NearbyConnectionConfiguration__ctor_m3290610126 (NearbyConnectionConfiguration_t147041391 * __this, Action_1_t914279838 * ___callback0, int64_t ___localClientId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
extern "C"  int64_t NearbyConnectionConfiguration_get_LocalClientId_m90638478 (NearbyConnectionConfiguration_t147041391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
extern "C"  Action_1_t914279838 * NearbyConnectionConfiguration_get_InitializationCallback_m1335358069 (NearbyConnectionConfiguration_t147041391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NearbyConnectionConfiguration_t147041391;
struct NearbyConnectionConfiguration_t147041391_marshaled_pinvoke;

extern "C" void NearbyConnectionConfiguration_t147041391_marshal_pinvoke(const NearbyConnectionConfiguration_t147041391& unmarshaled, NearbyConnectionConfiguration_t147041391_marshaled_pinvoke& marshaled);
extern "C" void NearbyConnectionConfiguration_t147041391_marshal_pinvoke_back(const NearbyConnectionConfiguration_t147041391_marshaled_pinvoke& marshaled, NearbyConnectionConfiguration_t147041391& unmarshaled);
extern "C" void NearbyConnectionConfiguration_t147041391_marshal_pinvoke_cleanup(NearbyConnectionConfiguration_t147041391_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NearbyConnectionConfiguration_t147041391;
struct NearbyConnectionConfiguration_t147041391_marshaled_com;

extern "C" void NearbyConnectionConfiguration_t147041391_marshal_com(const NearbyConnectionConfiguration_t147041391& unmarshaled, NearbyConnectionConfiguration_t147041391_marshaled_com& marshaled);
extern "C" void NearbyConnectionConfiguration_t147041391_marshal_com_back(const NearbyConnectionConfiguration_t147041391_marshaled_com& marshaled, NearbyConnectionConfiguration_t147041391& unmarshaled);
extern "C" void NearbyConnectionConfiguration_t147041391_marshal_com_cleanup(NearbyConnectionConfiguration_t147041391_marshaled_com& marshaled);
