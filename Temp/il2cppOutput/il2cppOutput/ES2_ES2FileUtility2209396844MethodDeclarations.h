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
// System.IO.Stream
struct Stream_t1561764144;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "ES2_ES2Settings_ES2FileMode2717935131.h"

// System.Void ES2FileUtility::Delete(System.String)
extern "C"  void ES2FileUtility_Delete_m3093663000 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2FileUtility::Exists(System.String)
extern "C"  bool ES2FileUtility_Exists_m2092241127 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2FileUtility::Move(System.String,System.String)
extern "C"  void ES2FileUtility_Move_m2197964654 (Il2CppObject * __this /* static, unused */, String_t* ___from0, String_t* ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2FileUtility::ReadAllBytes(System.String)
extern "C"  ByteU5BU5D_t4260760469* ES2FileUtility_ReadAllBytes_m3697425145 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ES2FileUtility::CreateFileStream(System.String,ES2Settings/ES2FileMode)
extern "C"  Stream_t1561764144 * ES2FileUtility_CreateFileStream_m21389404 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___filemode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
