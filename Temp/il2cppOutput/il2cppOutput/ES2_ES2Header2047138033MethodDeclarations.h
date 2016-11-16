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

// ES2Settings
struct ES2Settings_t2754521479;
// ES2Header
struct ES2Header_t2047138033;
struct ES2Header_t2047138033_marshaled_pinvoke;
struct ES2Header_t2047138033_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "ES2_ES2Header2047138033.h"
#include "ES2_ES2Keys_Key1837401352.h"
#include "ES2_ES2Settings2754521479.h"

// System.Void ES2Header::.ctor(ES2Keys/Key,System.Int32,System.Int32,ES2Settings)
extern "C"  void ES2Header__ctor_m2408567723 (ES2Header_t2047138033 * __this, uint8_t ___collectionType0, int32_t ___keyType1, int32_t ___valueType2, ES2Settings_t2754521479 * ___settings3, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ES2Header_t2047138033;
struct ES2Header_t2047138033_marshaled_pinvoke;

extern "C" void ES2Header_t2047138033_marshal_pinvoke(const ES2Header_t2047138033& unmarshaled, ES2Header_t2047138033_marshaled_pinvoke& marshaled);
extern "C" void ES2Header_t2047138033_marshal_pinvoke_back(const ES2Header_t2047138033_marshaled_pinvoke& marshaled, ES2Header_t2047138033& unmarshaled);
extern "C" void ES2Header_t2047138033_marshal_pinvoke_cleanup(ES2Header_t2047138033_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ES2Header_t2047138033;
struct ES2Header_t2047138033_marshaled_com;

extern "C" void ES2Header_t2047138033_marshal_com(const ES2Header_t2047138033& unmarshaled, ES2Header_t2047138033_marshaled_com& marshaled);
extern "C" void ES2Header_t2047138033_marshal_com_back(const ES2Header_t2047138033_marshaled_com& marshaled, ES2Header_t2047138033& unmarshaled);
extern "C" void ES2Header_t2047138033_marshal_com_cleanup(ES2Header_t2047138033_marshaled_com& marshaled);
