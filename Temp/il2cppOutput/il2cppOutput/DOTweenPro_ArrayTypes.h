#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// DG.Tweening.Core.ABSAnimationComponent
struct ABSAnimationComponent_t3057707537;

#include "mscorlib_System_Array1146569071.h"
#include "DOTweenPro_DG_Tweening_Core_ABSAnimationComponent3057707537.h"

#pragma once
// DG.Tweening.Core.ABSAnimationComponent[]
struct ABSAnimationComponentU5BU5D_t1849753228  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ABSAnimationComponent_t3057707537 * m_Items[1];

public:
	inline ABSAnimationComponent_t3057707537 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ABSAnimationComponent_t3057707537 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ABSAnimationComponent_t3057707537 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
