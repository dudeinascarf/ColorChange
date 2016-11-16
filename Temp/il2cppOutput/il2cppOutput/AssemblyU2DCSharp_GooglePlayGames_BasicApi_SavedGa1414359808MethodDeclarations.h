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
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_t1414359808;
struct Builder_t1414359808_marshaled_pinvoke;
struct Builder_t1414359808_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGa1414359808.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGa4052853983.h"

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
extern "C"  Builder_t1414359808  Builder_WithUpdatedDescription_m100494325 (Builder_t1414359808 * __this, String_t* ___description0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
extern "C"  Builder_t1414359808  Builder_WithUpdatedPngCoverImage_m409300395 (Builder_t1414359808 * __this, ByteU5BU5D_t4260760469* ___newPngCoverImage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
extern "C"  Builder_t1414359808  Builder_WithUpdatedPlayedTime_m3971838059 (Builder_t1414359808 * __this, TimeSpan_t413522987  ___newPlayedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
extern "C"  SavedGameMetadataUpdate_t4052853983  Builder_Build_m643199134 (Builder_t1414359808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Builder_t1414359808;
struct Builder_t1414359808_marshaled_pinvoke;

extern "C" void Builder_t1414359808_marshal_pinvoke(const Builder_t1414359808& unmarshaled, Builder_t1414359808_marshaled_pinvoke& marshaled);
extern "C" void Builder_t1414359808_marshal_pinvoke_back(const Builder_t1414359808_marshaled_pinvoke& marshaled, Builder_t1414359808& unmarshaled);
extern "C" void Builder_t1414359808_marshal_pinvoke_cleanup(Builder_t1414359808_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Builder_t1414359808;
struct Builder_t1414359808_marshaled_com;

extern "C" void Builder_t1414359808_marshal_com(const Builder_t1414359808& unmarshaled, Builder_t1414359808_marshaled_com& marshaled);
extern "C" void Builder_t1414359808_marshal_com_back(const Builder_t1414359808_marshaled_com& marshaled, Builder_t1414359808& unmarshaled);
extern "C" void Builder_t1414359808_marshal_com_cleanup(Builder_t1414359808_marshaled_com& marshaled);
