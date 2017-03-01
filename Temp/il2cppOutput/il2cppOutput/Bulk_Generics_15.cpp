#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1612828713;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1235855446;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4056035046;
// System.Object
struct Il2CppObject;
// WWWLoader/<loadCoroutine>c__Iterator0`1<System.Object>
struct U3CloadCoroutineU3Ec__Iterator0_1_t2354637797;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen1096682397.h"
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen1096682397MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1612828713.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen159234864.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen159234864MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen2979414464.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen2979414464MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1612828713MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen1235855446.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen1235855446MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen4056035046.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "System_System_Collections_Generic_Stack_1_gen3777177449.h"
#include "System_System_Collections_Generic_Stack_1_gen3777177449MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Activator1850728717MethodDeclarations.h"
#include "mscorlib_System_Activator1850728717.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen4056035046MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_WWWLoader_U3CloadCoroutineU3Ec__2354637797.h"
#include "AssemblyU2DCSharp_WWWLoader_U3CloadCoroutineU3Ec__2354637797MethodDeclarations.h"
#include "AssemblyU2DCSharp_ServiceLocator953918367MethodDeclarations.h"
#include "mscorlib_System_Type1303803226MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WWW2919945039MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1793819818MethodDeclarations.h"
#include "mscorlib_System_UInt322149682021.h"
#include "UnityEngine_UnityEngine_AudioType4076847944.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "AssemblyU2DCSharp_LogType3220848642.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"
#include "AssemblyU2DCSharp_Reference_1_gen2181976982.h"
#include "AssemblyU2DCSharp_Reference_1_gen2181976982MethodDeclarations.h"
#include "mscorlib_System_Byte3683104436.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "mscorlib_System_NotSupportedException1793819818.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"

// !!0 System.Activator::CreateInstance<System.Object>()
extern "C"  Il2CppObject * Activator_CreateInstance_TisIl2CppObject_m1022768098_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define Activator_CreateInstance_TisIl2CppObject_m1022768098(__this /* static, unused */, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Activator_CreateInstance_TisIl2CppObject_m1022768098_gshared)(__this /* static, unused */, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
extern "C"  List_1_t1612828713 * ListPool_1_Get_m3009093805_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	List_1_t1612828713 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t159234864 * L_0 = ((ListPool_1_t1096682397_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t159234864 *)L_0);
		List_1_t1612828713 * L_1 = ((  List_1_t1612828713 * (*) (ObjectPool_1_t159234864 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->methodPointer)((ObjectPool_1_t159234864 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t1612828713 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t1612828713 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m1119005941_gshared (Il2CppObject * __this /* static, unused */, List_1_t1612828713 * ___toRelease0, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t159234864 * L_0 = ((ListPool_1_t1096682397_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		List_1_t1612828713 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t159234864 *)L_0);
		((  void (*) (ObjectPool_1_t159234864 *, List_1_t1612828713 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t159234864 *)L_0, (List_1_t1612828713 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
extern "C"  void ListPool_1__cctor_m1474516473_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		IntPtr_t L_0;
		L_0.set_m_value_0((void*)(void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		UnityAction_1_t2979414464 * L_1 = (UnityAction_1_t2979414464 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		((  void (*) (UnityAction_1_t2979414464 *, Il2CppObject *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->methodPointer)(L_1, (Il2CppObject *)NULL, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		ObjectPool_1_t159234864 * L_2 = (ObjectPool_1_t159234864 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		((  void (*) (ObjectPool_1_t159234864 *, UnityAction_1_t2979414464 *, UnityAction_1_t2979414464 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->methodPointer)(L_2, (UnityAction_1_t2979414464 *)NULL, (UnityAction_1_t2979414464 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		((ListPool_1_t1096682397_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->set_s_ListPool_0(L_2);
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::<s_ListPool>m__0(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_U3Cs_ListPoolU3Em__0_m3090281341_gshared (Il2CppObject * __this /* static, unused */, List_1_t1612828713 * ___l0, const MethodInfo* method)
{
	{
		List_1_t1612828713 * L_0 = ___l0;
		NullCheck((List_1_t1612828713 *)L_0);
		((  void (*) (List_1_t1612828713 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->methodPointer)((List_1_t1612828713 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C"  void ObjectPool_1__ctor_m1532275833_gshared (ObjectPool_1_t1235855446 * __this, UnityAction_1_t4056035046 * ___actionOnGet0, UnityAction_1_t4056035046 * ___actionOnRelease1, const MethodInfo* method)
{
	{
		Stack_1_t3777177449 * L_0 = (Stack_1_t3777177449 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0));
		((  void (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		__this->set_m_Stack_0(L_0);
		NullCheck((Il2CppObject *)__this);
		Object__ctor_m2551263788((Il2CppObject *)__this, /*hidden argument*/NULL);
		UnityAction_1_t4056035046 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		UnityAction_1_t4056035046 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C"  int32_t ObjectPool_1_get_countAll_m4217365918_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		V_0 = (int32_t)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C"  void ObjectPool_1_set_countAll_m1742773675_gshared (ObjectPool_1_t1235855446 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C"  Il2CppObject * ObjectPool_1_Get_m3724675538_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	{
		Stack_1_t3777177449 * L_0 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3777177449 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((Stack_1_t3777177449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		Il2CppObject * L_2 = ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		V_0 = (Il2CppObject *)L_2;
		NullCheck((ObjectPool_1_t1235855446 *)__this);
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t1235855446 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((ObjectPool_1_t1235855446 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		NullCheck((ObjectPool_1_t1235855446 *)__this);
		((  void (*) (ObjectPool_1_t1235855446 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->methodPointer)((ObjectPool_1_t1235855446 *)__this, (int32_t)((int32_t)((int32_t)L_3+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		goto IL_003a;
	}

IL_002c:
	{
		Stack_1_t3777177449 * L_4 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3777177449 *)L_4);
		Il2CppObject * L_5 = ((  Il2CppObject * (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)((Stack_1_t3777177449 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		V_0 = (Il2CppObject *)L_5;
	}

IL_003a:
	{
		UnityAction_1_t4056035046 * L_6 = (UnityAction_1_t4056035046 *)__this->get_m_ActionOnGet_1();
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		UnityAction_1_t4056035046 * L_7 = (UnityAction_1_t4056035046 *)__this->get_m_ActionOnGet_1();
		Il2CppObject * L_8 = V_0;
		NullCheck((UnityAction_1_t4056035046 *)L_7);
		((  void (*) (UnityAction_1_t4056035046 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->methodPointer)((UnityAction_1_t4056035046 *)L_7, (Il2CppObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
	}

IL_0051:
	{
		Il2CppObject * L_9 = V_0;
		V_1 = (Il2CppObject *)L_9;
		goto IL_0058;
	}

IL_0058:
	{
		Il2CppObject * L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral273729679;
extern const uint32_t ObjectPool_1_Release_m1615270002_MetadataUsageId;
extern "C"  void ObjectPool_1_Release_m1615270002_gshared (ObjectPool_1_t1235855446 * __this, Il2CppObject * ___element0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_m1615270002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t3777177449 * L_0 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3777177449 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((Stack_1_t3777177449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Stack_1_t3777177449 * L_2 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3777177449 *)L_2);
		Il2CppObject * L_3 = ((  Il2CppObject * (*) (Stack_1_t3777177449 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->methodPointer)((Stack_1_t3777177449 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		Il2CppObject * L_4 = ___element0;
		bool L_5 = Object_ReferenceEquals_m3900584722(NULL /*static, unused*/, (Il2CppObject *)L_3, (Il2CppObject *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogError_m3715728798(NULL /*static, unused*/, (Il2CppObject *)_stringLiteral273729679, /*hidden argument*/NULL);
	}

IL_003c:
	{
		UnityAction_1_t4056035046 * L_6 = (UnityAction_1_t4056035046 *)__this->get_m_ActionOnRelease_2();
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		UnityAction_1_t4056035046 * L_7 = (UnityAction_1_t4056035046 *)__this->get_m_ActionOnRelease_2();
		Il2CppObject * L_8 = ___element0;
		NullCheck((UnityAction_1_t4056035046 *)L_7);
		((  void (*) (UnityAction_1_t4056035046 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->methodPointer)((UnityAction_1_t4056035046 *)L_7, (Il2CppObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
	}

IL_0053:
	{
		Stack_1_t3777177449 * L_9 = (Stack_1_t3777177449 *)__this->get_m_Stack_0();
		Il2CppObject * L_10 = ___element0;
		NullCheck((Stack_1_t3777177449 *)L_9);
		((  void (*) (Stack_1_t3777177449 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10)->methodPointer)((Stack_1_t3777177449 *)L_9, (Il2CppObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10));
		return;
	}
}
// System.Void WWWLoader/<loadCoroutine>c__Iterator0`1<System.Object>::.ctor()
extern "C"  void U3CloadCoroutineU3Ec__Iterator0_1__ctor_m1574031620_gshared (U3CloadCoroutineU3Ec__Iterator0_1_t2354637797 * __this, const MethodInfo* method)
{
	{
		NullCheck((Il2CppObject *)__this);
		Object__ctor_m2551263788((Il2CppObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WWWLoader/<loadCoroutine>c__Iterator0`1<System.Object>::MoveNext()
extern const Il2CppType* ByteU5BU5D_t3397334013_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Texture2D_t3542995729_0_0_0_var;
extern const Il2CppType* AudioClip_t1932558630_0_0_0_var;
extern Il2CppClass* ServiceLocator_t953918367_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ILog_t767237811_il2cpp_TypeInfo_var;
extern Il2CppClass* WWW_t2919945039_il2cpp_TypeInfo_var;
extern Il2CppClass* NotSupportedException_t1793819818_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3268419366;
extern Il2CppCodeGenString* _stringLiteral1763872980;
extern Il2CppCodeGenString* _stringLiteral2468604162;
extern Il2CppCodeGenString* _stringLiteral4042121757;
extern Il2CppCodeGenString* _stringLiteral3387526396;
extern Il2CppCodeGenString* _stringLiteral4282831874;
extern Il2CppCodeGenString* _stringLiteral2852719102;
extern Il2CppCodeGenString* _stringLiteral2577042317;
extern Il2CppCodeGenString* _stringLiteral137132194;
extern Il2CppCodeGenString* _stringLiteral3162538911;
extern const uint32_t U3CloadCoroutineU3Ec__Iterator0_1_MoveNext_m831321732_MetadataUsageId;
extern "C"  bool U3CloadCoroutineU3Ec__Iterator0_1_MoveNext_m831321732_gshared (U3CloadCoroutineU3Ec__Iterator0_1_t2354637797 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CloadCoroutineU3Ec__Iterator0_1_MoveNext_m831321732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_6();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_0289;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ServiceLocator_t953918367_il2cpp_TypeInfo_var);
		Il2CppObject * L_2 = ServiceLocator_getILog_m3546691519(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t3614634134* L_3 = (ObjectU5BU5D_t3614634134*)((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3268419366);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3268419366);
		ObjectU5BU5D_t3614634134* L_4 = (ObjectU5BU5D_t3614634134*)L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_5);
		ObjectU5BU5D_t3614634134* L_6 = (ObjectU5BU5D_t3614634134*)L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1763872980);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1763872980);
		ObjectU5BU5D_t3614634134* L_7 = (ObjectU5BU5D_t3614634134*)L_6;
		String_t* L_8 = (String_t*)__this->get_path_0();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_8);
		ObjectU5BU5D_t3614634134* L_9 = (ObjectU5BU5D_t3614634134*)L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral2468604162);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral2468604162);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3881798623(NULL /*static, unused*/, (ObjectU5BU5D_t3614634134*)L_9, /*hidden argument*/NULL);
		NullCheck((Il2CppObject *)L_2);
		InterfaceActionInvoker2< int32_t, Il2CppObject * >::Invoke(2 /* System.Void ILog::println(LogType,System.Object) */, ILog_t767237811_il2cpp_TypeInfo_var, (Il2CppObject *)L_2, (int32_t)1, (Il2CppObject *)L_10);
		String_t* L_11 = (String_t*)__this->get_path_0();
		WWW_t2919945039 * L_12 = (WWW_t2919945039 *)il2cpp_codegen_object_new(WWW_t2919945039_il2cpp_TypeInfo_var);
		WWW__ctor_m2024029190(L_12, (String_t*)L_11, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__0_1(L_12);
		Reference_1_t2181976982 * L_13 = (Reference_1_t2181976982 *)__this->get_reference_2();
		WWW_t2919945039 * L_14 = (WWW_t2919945039 *)__this->get_U3CwwwU3E__0_1();
		NullCheck((Reference_1_t2181976982 *)L_13);
		((  void (*) (Reference_1_t2181976982 *, WWW_t2919945039 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->methodPointer)((Reference_1_t2181976982 *)L_13, (WWW_t2919945039 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		WWW_t2919945039 * L_15 = (WWW_t2919945039 *)__this->get_U3CwwwU3E__0_1();
		__this->set_U24current_4(L_15);
		bool L_16 = (bool)__this->get_U24disposing_5();
		if (L_16)
		{
			goto IL_00a3;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_00a3:
	{
		goto IL_028b;
	}

IL_00a8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->declaring_type->rgctx_data, 0)), /*hidden argument*/NULL);
		__this->set_U3CtypeU3E__1_3(L_17);
		Type_t * L_18 = (Type_t *)__this->get_U3CtypeU3E__1_3();
		Type_t * L_19 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(ByteU5BU5D_t3397334013_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_18) == ((Il2CppObject*)(Type_t *)L_19))))
		{
			goto IL_010f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ServiceLocator_t953918367_il2cpp_TypeInfo_var);
		Il2CppObject * L_20 = ServiceLocator_getILog_m3546691519(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((Il2CppObject *)L_20);
		InterfaceActionInvoker2< int32_t, Il2CppObject * >::Invoke(2 /* System.Void ILog::println(LogType,System.Object) */, ILog_t767237811_il2cpp_TypeInfo_var, (Il2CppObject *)L_20, (int32_t)1, (Il2CppObject *)_stringLiteral4042121757);
		Reference_1_t2181976982 * L_21 = (Reference_1_t2181976982 *)__this->get_reference_2();
		WWW_t2919945039 * L_22 = (WWW_t2919945039 *)__this->get_U3CwwwU3E__0_1();
		NullCheck((WWW_t2919945039 *)L_22);
		ByteU5BU5D_t3397334013* L_23 = WWW_get_bytes_m420718112((WWW_t2919945039 *)L_22, /*hidden argument*/NULL);
		WWW_t2919945039 * L_24 = (WWW_t2919945039 *)__this->get_U3CwwwU3E__0_1();
		NullCheck((WWW_t2919945039 *)L_24);
		ByteU5BU5D_t3397334013* L_25 = WWW_get_bytes_m420718112((WWW_t2919945039 *)L_24, /*hidden argument*/NULL);
		NullCheck((Reference_1_t2181976982 *)L_21);
		((  void (*) (Reference_1_t2181976982 *, Il2CppObject *, ByteU5BU5D_t3397334013*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)((Reference_1_t2181976982 *)L_21, (Il2CppObject *)((Il2CppObject *)Castclass(((Il2CppObject *)IsInst(L_23, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2))), IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2))), (ByteU5BU5D_t3397334013*)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
	}

IL_010f:
	{
		Type_t * L_26 = (Type_t *)__this->get_U3CtypeU3E__1_3();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_26) == ((Il2CppObject*)(Type_t *)L_27))))
		{
			goto IL_016b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ServiceLocator_t953918367_il2cpp_TypeInfo_var);
		Il2CppObject * L_28 = ServiceLocator_getILog_m3546691519(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((Il2CppObject *)L_28);
		InterfaceActionInvoker2< int32_t, Il2CppObject * >::Invoke(2 /* System.Void ILog::println(LogType,System.Object) */, ILog_t767237811_il2cpp_TypeInfo_var, (Il2CppObject *)L_28, (int32_t)1, (Il2CppObject *)_stringLiteral3387526396);
		Reference_1_t2181976982 * L_29 = (Reference_1_t2181976982 *)__this->get_reference_2();
		WWW_t2919945039 * L_30 = (WWW_t2919945039 *)__this->get_U3CwwwU3E__0_1();
		NullCheck((WWW_t2919945039 *)L_30);
		String_t* L_31 = WWW_get_text_m1558985139((WWW_t2919945039 *)L_30, /*hidden argument*/NULL);
		WWW_t2919945039 * L_32 = (WWW_t2919945039 *)__this->get_U3CwwwU3E__0_1();
		NullCheck((WWW_t2919945039 *)L_32);
		ByteU5BU5D_t3397334013* L_33 = WWW_get_bytes_m420718112((WWW_t2919945039 *)L_32, /*hidden argument*/NULL);
		NullCheck((Reference_1_t2181976982 *)L_29);
		((  void (*) (Reference_1_t2181976982 *, Il2CppObject *, ByteU5BU5D_t3397334013*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)((Reference_1_t2181976982 *)L_29, (Il2CppObject *)((Il2CppObject *)Castclass(((Il2CppObject *)IsInst(L_31, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2))), IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2))), (ByteU5BU5D_t3397334013*)L_33, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		goto IL_0282;
	}

IL_016b:
	{
		Type_t * L_34 = (Type_t *)__this->get_U3CtypeU3E__1_3();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_35 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(Texture2D_t3542995729_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_34) == ((Il2CppObject*)(Type_t *)L_35))))
		{
			goto IL_01c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ServiceLocator_t953918367_il2cpp_TypeInfo_var);
		Il2CppObject * L_36 = ServiceLocator_getILog_m3546691519(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((Il2CppObject *)L_36);
		InterfaceActionInvoker2< int32_t, Il2CppObject * >::Invoke(2 /* System.Void ILog::println(LogType,System.Object) */, ILog_t767237811_il2cpp_TypeInfo_var, (Il2CppObject *)L_36, (int32_t)1, (Il2CppObject *)_stringLiteral4282831874);
		Reference_1_t2181976982 * L_37 = (Reference_1_t2181976982 *)__this->get_reference_2();
		WWW_t2919945039 * L_38 = (WWW_t2919945039 *)__this->get_U3CwwwU3E__0_1();
		NullCheck((WWW_t2919945039 *)L_38);
		Texture2D_t3542995729 * L_39 = WWW_get_texture_m1121178301((WWW_t2919945039 *)L_38, /*hidden argument*/NULL);
		WWW_t2919945039 * L_40 = (WWW_t2919945039 *)__this->get_U3CwwwU3E__0_1();
		NullCheck((WWW_t2919945039 *)L_40);
		ByteU5BU5D_t3397334013* L_41 = WWW_get_bytes_m420718112((WWW_t2919945039 *)L_40, /*hidden argument*/NULL);
		NullCheck((Reference_1_t2181976982 *)L_37);
		((  void (*) (Reference_1_t2181976982 *, Il2CppObject *, ByteU5BU5D_t3397334013*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)((Reference_1_t2181976982 *)L_37, (Il2CppObject *)((Il2CppObject *)Castclass(((Il2CppObject *)IsInst(L_39, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2))), IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2))), (ByteU5BU5D_t3397334013*)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		goto IL_0282;
	}

IL_01c7:
	{
		Type_t * L_42 = (Type_t *)__this->get_U3CtypeU3E__1_3();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, (RuntimeTypeHandle_t2330101084 )LoadTypeToken(AudioClip_t1932558630_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_42) == ((Il2CppObject*)(Type_t *)L_43))))
		{
			goto IL_0282;
		}
	}
	{
		WWW_t2919945039 * L_44 = (WWW_t2919945039 *)__this->get_U3CwwwU3E__0_1();
		NullCheck((WWW_t2919945039 *)L_44);
		String_t* L_45 = WWW_get_url_m1007081849((WWW_t2919945039 *)L_44, /*hidden argument*/NULL);
		V_2 = (String_t*)L_45;
		String_t* L_46 = V_2;
		NullCheck((String_t*)L_46);
		bool L_47 = String_EndsWith_m568509976((String_t*)L_46, (String_t*)_stringLiteral2852719102, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0203;
		}
	}
	{
		V_1 = (int32_t)((int32_t)20);
		goto IL_023e;
	}

IL_0203:
	{
		String_t* L_48 = V_2;
		NullCheck((String_t*)L_48);
		bool L_49 = String_EndsWith_m568509976((String_t*)L_48, (String_t*)_stringLiteral2577042317, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_021d;
		}
	}
	{
		V_1 = (int32_t)((int32_t)14);
		goto IL_023e;
	}

IL_021d:
	{
		String_t* L_50 = V_2;
		NullCheck((String_t*)L_50);
		bool L_51 = String_EndsWith_m568509976((String_t*)L_50, (String_t*)_stringLiteral137132194, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0237;
		}
	}
	{
		V_1 = (int32_t)((int32_t)13);
		goto IL_023e;
	}

IL_0237:
	{
		NotSupportedException_t1793819818 * L_52 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_52, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52);
	}

IL_023e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ServiceLocator_t953918367_il2cpp_TypeInfo_var);
		Il2CppObject * L_53 = ServiceLocator_getILog_m3546691519(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((Il2CppObject *)L_53);
		InterfaceActionInvoker2< int32_t, Il2CppObject * >::Invoke(2 /* System.Void ILog::println(LogType,System.Object) */, ILog_t767237811_il2cpp_TypeInfo_var, (Il2CppObject *)L_53, (int32_t)1, (Il2CppObject *)_stringLiteral3162538911);
		Reference_1_t2181976982 * L_54 = (Reference_1_t2181976982 *)__this->get_reference_2();
		WWW_t2919945039 * L_55 = (WWW_t2919945039 *)__this->get_U3CwwwU3E__0_1();
		int32_t L_56 = V_1;
		NullCheck((WWW_t2919945039 *)L_55);
		AudioClip_t1932558630 * L_57 = WWW_GetAudioClip_m1164495521((WWW_t2919945039 *)L_55, (bool)0, (bool)0, (int32_t)L_56, /*hidden argument*/NULL);
		WWW_t2919945039 * L_58 = (WWW_t2919945039 *)__this->get_U3CwwwU3E__0_1();
		NullCheck((WWW_t2919945039 *)L_58);
		ByteU5BU5D_t3397334013* L_59 = WWW_get_bytes_m420718112((WWW_t2919945039 *)L_58, /*hidden argument*/NULL);
		NullCheck((Reference_1_t2181976982 *)L_54);
		((  void (*) (Reference_1_t2181976982 *, Il2CppObject *, ByteU5BU5D_t3397334013*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)((Reference_1_t2181976982 *)L_54, (Il2CppObject *)((Il2CppObject *)Castclass(((Il2CppObject *)IsInst(L_57, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2))), IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2))), (ByteU5BU5D_t3397334013*)L_59, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
	}

IL_0282:
	{
		__this->set_U24PC_6((-1));
	}

IL_0289:
	{
		return (bool)0;
	}

IL_028b:
	{
		return (bool)1;
	}
}
// System.Object WWWLoader/<loadCoroutine>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CloadCoroutineU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3171794976_gshared (U3CloadCoroutineU3Ec__Iterator0_1_t2354637797 * __this, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_U24current_4();
		V_0 = (Il2CppObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Il2CppObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object WWWLoader/<loadCoroutine>c__Iterator0`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CloadCoroutineU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m609516184_gshared (U3CloadCoroutineU3Ec__Iterator0_1_t2354637797 * __this, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_U24current_4();
		V_0 = (Il2CppObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Il2CppObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void WWWLoader/<loadCoroutine>c__Iterator0`1<System.Object>::Dispose()
extern "C"  void U3CloadCoroutineU3Ec__Iterator0_1_Dispose_m3341917007_gshared (U3CloadCoroutineU3Ec__Iterator0_1_t2354637797 * __this, const MethodInfo* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void WWWLoader/<loadCoroutine>c__Iterator0`1<System.Object>::Reset()
extern Il2CppClass* NotSupportedException_t1793819818_il2cpp_TypeInfo_var;
extern const uint32_t U3CloadCoroutineU3Ec__Iterator0_1_Reset_m2366430901_MetadataUsageId;
extern "C"  void U3CloadCoroutineU3Ec__Iterator0_1_Reset_m2366430901_gshared (U3CloadCoroutineU3Ec__Iterator0_1_t2354637797 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CloadCoroutineU3Ec__Iterator0_1_Reset_m2366430901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
