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

// System.String
struct String_t;
// GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t68742423;
struct AdvertisingResult_t68742423_marshaled_pinvoke;
struct AdvertisingResult_t68742423_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_Ad68742423.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Response419677757.h"
#include "mscorlib_System_String7231557.h"

// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
extern "C"  void AdvertisingResult__ctor_m3962435266 (AdvertisingResult_t68742423 * __this, int32_t ___status0, String_t* ___localEndpointName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
extern "C"  bool AdvertisingResult_get_Succeeded_m3713665243 (AdvertisingResult_t68742423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
extern "C"  int32_t AdvertisingResult_get_Status_m1729075062 (AdvertisingResult_t68742423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
extern "C"  String_t* AdvertisingResult_get_LocalEndpointName_m3599877236 (AdvertisingResult_t68742423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AdvertisingResult_t68742423;
struct AdvertisingResult_t68742423_marshaled_pinvoke;

extern "C" void AdvertisingResult_t68742423_marshal_pinvoke(const AdvertisingResult_t68742423& unmarshaled, AdvertisingResult_t68742423_marshaled_pinvoke& marshaled);
extern "C" void AdvertisingResult_t68742423_marshal_pinvoke_back(const AdvertisingResult_t68742423_marshaled_pinvoke& marshaled, AdvertisingResult_t68742423& unmarshaled);
extern "C" void AdvertisingResult_t68742423_marshal_pinvoke_cleanup(AdvertisingResult_t68742423_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AdvertisingResult_t68742423;
struct AdvertisingResult_t68742423_marshaled_com;

extern "C" void AdvertisingResult_t68742423_marshal_com(const AdvertisingResult_t68742423& unmarshaled, AdvertisingResult_t68742423_marshaled_com& marshaled);
extern "C" void AdvertisingResult_t68742423_marshal_com_back(const AdvertisingResult_t68742423_marshaled_com& marshaled, AdvertisingResult_t68742423& unmarshaled);
extern "C" void AdvertisingResult_t68742423_marshal_com_cleanup(AdvertisingResult_t68742423_marshaled_com& marshaled);
