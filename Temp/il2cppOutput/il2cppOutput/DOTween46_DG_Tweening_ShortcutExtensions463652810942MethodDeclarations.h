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

// DG.Tweening.Tweener
struct Tweener_t3057794306;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.UI.Text
struct Text_t9039225;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_CanvasGroup3702418109.h"
#include "UnityEngine_UI_UnityEngine_UI_Image538875265.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_RectTransform972643934.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"
#include "mscorlib_System_String7231557.h"
#include "DOTween_DG_Tweening_ScrambleMode903891410.h"

// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
extern "C"  Tweener_t3057794306 * ShortcutExtensions46_DOFade_m1775798945 (Il2CppObject * __this /* static, unused */, CanvasGroup_t3702418109 * ___target0, float ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOColor(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
extern "C"  Tweener_t3057794306 * ShortcutExtensions46_DOColor_m852833955 (Il2CppObject * __this /* static, unused */, Image_t538875265 * ___target0, Color_t4194546905  ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOFade(UnityEngine.UI.Image,System.Single,System.Single)
extern "C"  Tweener_t3057794306 * ShortcutExtensions46_DOFade_m3953805469 (Il2CppObject * __this /* static, unused */, Image_t538875265 * ___target0, float ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOAnchorPos3D(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Boolean)
extern "C"  Tweener_t3057794306 * ShortcutExtensions46_DOAnchorPos3D_m2464261031 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___target0, Vector3_t4282066566  ___endValue1, float ___duration2, bool ___snapping3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOSizeDelta(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
extern "C"  Tweener_t3057794306 * ShortcutExtensions46_DOSizeDelta_m1827520397 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___target0, Vector2_t4282066565  ___endValue1, float ___duration2, bool ___snapping3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOPunchAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
extern "C"  Tweener_t3057794306 * ShortcutExtensions46_DOPunchAnchorPos_m1433858363 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___target0, Vector2_t4282066565  ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, bool ___snapping5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOShakeAnchorPos(UnityEngine.RectTransform,System.Single,UnityEngine.Vector2,System.Int32,System.Single,System.Boolean)
extern "C"  Tweener_t3057794306 * ShortcutExtensions46_DOShakeAnchorPos_m2765317523 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___target0, float ___duration1, Vector2_t4282066565  ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___snapping5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOColor(UnityEngine.UI.Text,UnityEngine.Color,System.Single)
extern "C"  Tweener_t3057794306 * ShortcutExtensions46_DOColor_m1529245873 (Il2CppObject * __this /* static, unused */, Text_t9039225 * ___target0, Color_t4194546905  ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOFade(UnityEngine.UI.Text,System.Single,System.Single)
extern "C"  Tweener_t3057794306 * ShortcutExtensions46_DOFade_m3857336481 (Il2CppObject * __this /* static, unused */, Text_t9039225 * ___target0, float ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOText(UnityEngine.UI.Text,System.String,System.Single,System.Boolean,DG.Tweening.ScrambleMode,System.String)
extern "C"  Tweener_t3057794306 * ShortcutExtensions46_DOText_m2791408560 (Il2CppObject * __this /* static, unused */, Text_t9039225 * ___target0, String_t* ___endValue1, float ___duration2, bool ___richTextEnabled3, int32_t ___scrambleMode4, String_t* ___scrambleChars5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
