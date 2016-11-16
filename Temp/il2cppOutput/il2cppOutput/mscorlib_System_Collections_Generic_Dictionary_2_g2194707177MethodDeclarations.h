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

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>
struct Dictionary_2_t2194707177;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t666883479;
// System.Collections.Generic.IDictionary`2<System.Object,System.UInt32>
struct IDictionary_2_t1772580522;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t770439062;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t919257968;
// System.Collections.ICollection
struct ICollection_t2643922881;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t310291562;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerator_1_t4005352932;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt32>
struct KeyCollection_t3821466628;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>
struct ValueCollection_t895312890;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22093487883.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3512030569.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor()
extern "C"  void Dictionary_2__ctor_m302700953_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m302700953(__this, method) ((  void (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2__ctor_m302700953_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m4274488720_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m4274488720(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t2194707177 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m4274488720_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m3675857311_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m3675857311(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t2194707177 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3675857311_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m107606378_gshared (Dictionary_2_t2194707177 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m107606378(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t2194707177 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m107606378_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3872990142_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m3872990142(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t2194707177 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3872990142_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m481893587_gshared (Dictionary_2_t2194707177 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m481893587(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t2194707177 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m481893587_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m434463578_gshared (Dictionary_2_t2194707177 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m434463578(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2194707177 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2__ctor_m434463578_gshared)(__this, ___info0, ___context1, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1571339669_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1571339669(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1571339669_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2435788693_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2435788693(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2435788693_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m1159746335_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1159746335(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1159746335_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1687386063_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1687386063(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2194707177 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1687386063_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1089754676_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1089754676(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2194707177 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1089754676_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m400152477_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m400152477(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2194707177 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m400152477_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m1919499449_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1919499449(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2194707177 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1919499449_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m1969338482_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1969338482(__this, ___key0, method) ((  void (*) (Dictionary_2_t2194707177 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1969338482_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1956861243_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1956861243(__this, method) ((  bool (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1956861243_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3370072807_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3370072807(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3370072807_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3500752319_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3500752319(__this, method) ((  bool (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3500752319_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2318992392_gshared (Dictionary_2_t2194707177 * __this, KeyValuePair_2_t2093487883  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2318992392(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t2194707177 *, KeyValuePair_2_t2093487883 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2318992392_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2946507834_gshared (Dictionary_2_t2194707177 * __this, KeyValuePair_2_t2093487883  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2946507834(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2194707177 *, KeyValuePair_2_t2093487883 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2946507834_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2985296364_gshared (Dictionary_2_t2194707177 * __this, KeyValuePair_2U5BU5D_t310291562* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2985296364(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2194707177 *, KeyValuePair_2U5BU5D_t310291562*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2985296364_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3749581279_gshared (Dictionary_2_t2194707177 * __this, KeyValuePair_2_t2093487883  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3749581279(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2194707177 *, KeyValuePair_2_t2093487883 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3749581279_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m315569611_gshared (Dictionary_2_t2194707177 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m315569611(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2194707177 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m315569611_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1298452614_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1298452614(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1298452614_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3859736323_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3859736323(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3859736323_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2873439262_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2873439262(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2873439262_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m4159351937_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m4159351937(__this, method) ((  int32_t (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_get_Count_m4159351937_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::get_Item(TKey)
extern "C"  uint32_t Dictionary_2_get_Item_m2846026826_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m2846026826(__this, ___key0, method) ((  uint32_t (*) (Dictionary_2_t2194707177 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m2846026826_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1236389785_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___key0, uint32_t ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m1236389785(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2194707177 *, Il2CppObject *, uint32_t, const MethodInfo*))Dictionary_2_set_Item_m1236389785_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3932580113_gshared (Dictionary_2_t2194707177 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m3932580113(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t2194707177 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3932580113_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2911667910_gshared (Dictionary_2_t2194707177 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2911667910(__this, ___size0, method) ((  void (*) (Dictionary_2_t2194707177 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2911667910_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m761335874_gshared (Dictionary_2_t2194707177 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m761335874(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2194707177 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m761335874_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2093487883  Dictionary_2_make_pair_m1896522638_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, uint32_t ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m1896522638(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t2093487883  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, uint32_t, const MethodInfo*))Dictionary_2_make_pair_m1896522638_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2517591720_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, uint32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2517591720(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, uint32_t, const MethodInfo*))Dictionary_2_pick_key_m2517591720_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::pick_value(TKey,TValue)
extern "C"  uint32_t Dictionary_2_pick_value_m1979133800_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, uint32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m1979133800(__this /* static, unused */, ___key0, ___value1, method) ((  uint32_t (*) (Il2CppObject * /* static, unused */, Il2CppObject *, uint32_t, const MethodInfo*))Dictionary_2_pick_value_m1979133800_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3323911501_gshared (Dictionary_2_t2194707177 * __this, KeyValuePair_2U5BU5D_t310291562* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3323911501(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2194707177 *, KeyValuePair_2U5BU5D_t310291562*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3323911501_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Resize()
extern "C"  void Dictionary_2_Resize_m851591615_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m851591615(__this, method) ((  void (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_Resize_m851591615_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1174738748_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___key0, uint32_t ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m1174738748(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2194707177 *, Il2CppObject *, uint32_t, const MethodInfo*))Dictionary_2_Add_m1174738748_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Clear()
extern "C"  void Dictionary_2_Clear_m2003801540_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2003801540(__this, method) ((  void (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_Clear_m2003801540_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2785502634_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2785502634(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2194707177 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m2785502634_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3615741098_gshared (Dictionary_2_t2194707177 * __this, uint32_t ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3615741098(__this, ___value0, method) ((  bool (*) (Dictionary_2_t2194707177 *, uint32_t, const MethodInfo*))Dictionary_2_ContainsValue_m3615741098_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2082648247_gshared (Dictionary_2_t2194707177 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2082648247(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2194707177 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2_GetObjectData_m2082648247_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1536284173_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1536284173(__this, ___sender0, method) ((  void (*) (Dictionary_2_t2194707177 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1536284173_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2701553926_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m2701553926(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2194707177 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m2701553926_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m869299203_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___key0, uint32_t* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m869299203(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t2194707177 *, Il2CppObject *, uint32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m869299203_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::get_Keys()
extern "C"  KeyCollection_t3821466628 * Dictionary_2_get_Keys_m2719032540_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m2719032540(__this, method) ((  KeyCollection_t3821466628 * (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_get_Keys_m2719032540_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::get_Values()
extern "C"  ValueCollection_t895312890 * Dictionary_2_get_Values_m2616436316_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2616436316(__this, method) ((  ValueCollection_t895312890 * (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_get_Values_m2616436316_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m1967450627_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1967450627(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2194707177 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m1967450627_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::ToTValue(System.Object)
extern "C"  uint32_t Dictionary_2_ToTValue_m291447939_gshared (Dictionary_2_t2194707177 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m291447939(__this, ___value0, method) ((  uint32_t (*) (Dictionary_2_t2194707177 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m291447939_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m161246953_gshared (Dictionary_2_t2194707177 * __this, KeyValuePair_2_t2093487883  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m161246953(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t2194707177 *, KeyValuePair_2_t2093487883 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m161246953_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::GetEnumerator()
extern "C"  Enumerator_t3512030569  Dictionary_2_GetEnumerator_m266561694_gshared (Dictionary_2_t2194707177 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m266561694(__this, method) ((  Enumerator_t3512030569  (*) (Dictionary_2_t2194707177 *, const MethodInfo*))Dictionary_2_GetEnumerator_m266561694_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t1751606614  Dictionary_2_U3CCopyToU3Em__0_m2612401005_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, uint32_t ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m2612401005(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t1751606614  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, uint32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m2612401005_gshared)(__this /* static, unused */, ___key0, ___value1, method)
