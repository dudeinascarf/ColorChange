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

// GooglePlayGames.OurUtils.Logger
struct Logger_t984534948;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void GooglePlayGames.OurUtils.Logger::.ctor()
extern "C"  void Logger__ctor_m939653068 (Logger_t984534948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::.cctor()
extern "C"  void Logger__cctor_m2877345121 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.OurUtils.Logger::get_DebugLogEnabled()
extern "C"  bool Logger_get_DebugLogEnabled_m3753664069 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::set_DebugLogEnabled(System.Boolean)
extern "C"  void Logger_set_DebugLogEnabled_m2155831124 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.OurUtils.Logger::get_WarningLogEnabled()
extern "C"  bool Logger_get_WarningLogEnabled_m2123552014 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::set_WarningLogEnabled(System.Boolean)
extern "C"  void Logger_set_WarningLogEnabled_m1751977053 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
extern "C"  void Logger_d_m234514644 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
extern "C"  void Logger_w_m3419267169 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
extern "C"  void Logger_e_m4018947763 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.OurUtils.Logger::describe(System.Byte[])
extern "C"  String_t* Logger_describe_m3732005225 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
extern "C"  String_t* Logger_ToLogMessage_m938433255 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, String_t* ___logType1, String_t* ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
