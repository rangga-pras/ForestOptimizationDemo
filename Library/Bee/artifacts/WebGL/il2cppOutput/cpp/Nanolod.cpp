#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86;
struct AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66;
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct EmptyMetaAttributeList_t0189FEEC9A7EC612AB84FC24BCD1CEB9FEE5809B;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35;
struct SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010;
struct String_t;
struct StringBuilder_t;
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
struct UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EmptyMetaAttributeList_t0189FEEC9A7EC612AB84FC24BCD1CEB9FEE5809B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityConverter_t400BEF09C1F6A71FA8C1A99B481BAAEFB0D6B2EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral8814B186642F845EB7620A3DDACC77D9A5B378E7;
IL2CPP_EXTERN_C const RuntimeMethod* IMetaAttribute_Get_TisBoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333_mB6539EAE3CE7ECBD7DB8C3F8508CBE6B710A8F36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMetaAttribute_Get_TisVector2F_tE1037911E18F4477F23133F475E82A703257CDA0_m3971CA0433163E42D60045A6B11ECA08C305309D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMetaAttribute_Get_TisVector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8_m02D1E71103A59CBC35E64FAA81A7190A78DA2514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMetaAttribute_Set_TisBoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333_m05A550923793CBDD2F73EE0C6649D8D3C517141B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMetaAttribute_Set_TisColor32_t31473C317DAD0CCA9C0813A8E3D546D117F6908B_mA28579832F8484A35A62797B6D7A650BEB8DE5FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMetaAttribute_Set_TisVector2F_tE1037911E18F4477F23133F475E82A703257CDA0_m99403EA3757BB1A8CCFFD71CEC65025BEF5C07C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMetaAttribute_Set_TisVector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8_mB629AA94B0559CA76E6634352DCFD0B772B0187C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mC81397A0C8355067DB74A607CF6960E7A84777CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1595FD0FAF5CA450F48A9780C3009E49B0D2144D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetaAttributeList_AddAttributeType_TisBoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333_m5E3A242EBC1F38E9EFF62C9313702347F35B5C77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetaAttributeList_AddAttributeType_TisColor32_t31473C317DAD0CCA9C0813A8E3D546D117F6908B_m15A54A67590375D52685A6CA901B69DF2D35BCB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetaAttributeList_AddAttributeType_TisVector2F_tE1037911E18F4477F23133F475E82A703257CDA0_mAE2D6619BAA7D7B8E809C2F47D75E7C17C89E301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetaAttributeList_AddAttributeType_TisVector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8_mB261467613903309095AD86D7C3690A694D8B62F_RuntimeMethod_var;

struct AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66;
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tA3D582561BEE53ACEBE708EAE40A0D69C72FAEB6 
{
};
struct List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86  : public RuntimeObject
{
	AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35  : public RuntimeObject
{
};
struct SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010  : public RuntimeObject
{
	Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74* ___positions;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles;
	GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2* ___groups;
	MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* ___attributes;
	AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* ___attributeDefinitions;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct UnityConverter_t400BEF09C1F6A71FA8C1A99B481BAAEFB0D6B2EC  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 
{
	int32_t ___index0;
	int32_t ___index1;
	int32_t ___index2;
	int32_t ___index3;
	float ___weight0;
	float ___weight1;
	float ___weight2;
	float ___weight3;
};
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	float ___m_Weight0;
	float ___m_Weight1;
	float ___m_Weight2;
	float ___m_Weight3;
	int32_t ___m_BoneIndex0;
	int32_t ___m_BoneIndex1;
	int32_t ___m_BoneIndex2;
	int32_t ___m_BoneIndex3;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color32_t31473C317DAD0CCA9C0813A8E3D546D117F6908B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct EmptyMetaAttributeList_t0189FEEC9A7EC612AB84FC24BCD1CEB9FEE5809B  : public MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35
{
	int32_t ____length;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Group_tEA7FD28DCD2DA5AACE32B07D2F92A695A2BF09AA 
{
	int32_t ___firstIndex;
	int32_t ___indexCount;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine;
	String_t* ___CoreNewLineStr;
	RuntimeObject* ____internalFormatProvider;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 
{
	float ___x;
	float ___y;
};
struct Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679 
{
	double ___x;
	double ___y;
	double ___z;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AttributeType_tA1D5E1A99B3ED22477A7F037DC762DA85BF15213 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct IndexFormat_tE699D38323B3B0887DF054EAFF0CF035DF28E2BB 
{
	int32_t ___value__;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct MeshUpdateFlags_tCCD32DF7F112AE37CA85E45959DC6CDF64444DF6 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	StringBuilder_t* ___buffer;
	RuntimeObject* ____myLockToken;
};
struct AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 
{
	double ___weight;
	int32_t ___type;
	int32_t ___id;
};
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___U3CboundsU3Ek__BackingField;
	int32_t ___U3CtopologyU3Ek__BackingField;
	int32_t ___U3CindexStartU3Ek__BackingField;
	int32_t ___U3CindexCountU3Ek__BackingField;
	int32_t ___U3CbaseVertexU3Ek__BackingField;
	int32_t ___U3CfirstVertexU3Ek__BackingField;
	int32_t ___U3CvertexCountU3Ek__BackingField;
};
struct List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86_StaticFields
{
	AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0_StaticFields
{
	Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 ___zeroVector;
	Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 ___oneVector;
	Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 ___upVector;
	Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 ___downVector;
	Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 ___leftVector;
	Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 ___rightVector;
	Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 ___positiveInfinityVector;
	Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 ___negativeInfinityVector;
};
struct Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679_StaticFields
{
	Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679 ___zeroVector;
	Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679 ___oneVector;
	Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679 ___positiveInfinityVector;
	Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8_StaticFields
{
	Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8 ___zeroVector;
	Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8 ___oneVector;
	Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8 ___positiveInfinityVector;
	Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8 ___negativeInfinityVector;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F m_Items[1];

	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679 m_Items[1];

	inline Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679 value)
	{
		m_Items[index] = value;
	}
};
struct AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66  : public RuntimeArray
{
	ALIGN_FIELD (8) AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 m_Items[1];

	inline AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2  : public RuntimeArray
{
	ALIGN_FIELD (8) Group_tEA7FD28DCD2DA5AACE32B07D2F92A695A2BF09AA m_Items[1];

	inline Group_tEA7FD28DCD2DA5AACE32B07D2F92A695A2BF09AA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Group_tEA7FD28DCD2DA5AACE32B07D2F92A695A2BF09AA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Group_tEA7FD28DCD2DA5AACE32B07D2F92A695A2BF09AA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Group_tEA7FD28DCD2DA5AACE32B07D2F92A695A2BF09AA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Group_tEA7FD28DCD2DA5AACE32B07D2F92A695A2BF09AA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Group_tEA7FD28DCD2DA5AACE32B07D2F92A695A2BF09AA value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1595FD0FAF5CA450F48A9780C3009E49B0D2144D_gshared (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_gshared_inline (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_gshared_inline (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* __this, AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* List_1_ToArray_mC81397A0C8355067DB74A607CF6960E7A84777CA_gshared (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m9E2968734F29D997ECFDAB7E37AE8BF9E959A1FE_gshared (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* __this, AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugWriter__ctor_m6A56C8ABD2A8C357E9653BB090F8D0AA845DA740 (UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_SetOut_mD75C5604C18C440B6C31B4F91B0944E0DD972BA1 (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___0_newOut, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedMesh__ctor_mE442ED67F794406401E4FCE75177A47E0FFE538D (SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyMetaAttributeList__ctor_m949D9EE906EC983CB6C1FBCF981E23295FA9E5A0 (EmptyMetaAttributeList_t0189FEEC9A7EC612AB84FC24BCD1CEB9FEE5809B* __this, int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_mFBBB841866CD2CA452E97DD9523FE64F4CFAF022 (Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679* __this, double ___0_x, double ___1_y, double ___2_z, const RuntimeMethod* method) ;
inline void List_1__ctor_m1595FD0FAF5CA450F48A9780C3009E49B0D2144D (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86*, const RuntimeMethod*))List_1__ctor_m1595FD0FAF5CA450F48A9780C3009E49B0D2144D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_inline (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86*, const RuntimeMethod*))List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeDefinition__ctor_m01FFBF493C6AB068C4A5F14D811476DF471BB3A0 (AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311* __this, int32_t ___0_type, double ___1_weight, const RuntimeMethod* method) ;
inline void List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_inline (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* __this, AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86*, AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311, const RuntimeMethod*))List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3F__ctor_m9D6225036743FC00434C5D264958979A5AF2525D (Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeDefinition__ctor_mF0CFD368B2AF0143B1278E66E696A6C0A1A6917C (AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311* __this, int32_t ___0_type, double ___1_weight, int32_t ___2_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2F__ctor_mB249D0FC9797F9A745C57AC0F76C0C40E428B2B9 (Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Mesh_get_uv2_mBD25DD8C860E10A1D109C9622622D52571F56B6F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Mesh_get_colors32_mA230CB5687CDCCEA5527BD5A0640E9535CB640A2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32__ctor_mD60EF2C0394679EC6CB239AF2DA4E5CB0DDA51E9 (Color32_t31473C317DAD0CCA9C0813A8E3D546D117F6908B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* Mesh_get_boneWeights_m2091E7E793A60853ACC7928BFDC1FF8F0DC4C7E9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight__ctor_mC5D69640FA74CB55BE7F28CE3229C2853B6D9600 (BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333* __this, int32_t ___0_index0, int32_t ___1_index1, int32_t ___2_index2, int32_t ___3_index3, float ___4_weight0, float ___5_weight1, float ___6_weight2, float ___7_weight3, const RuntimeMethod* method) ;
inline AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* List_1_ToArray_mC81397A0C8355067DB74A607CF6960E7A84777CA (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* __this, const RuntimeMethod* method)
{
	return ((  AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* (*) (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86*, const RuntimeMethod*))List_1_ToArray_mC81397A0C8355067DB74A607CF6960E7A84777CA_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 Mesh_GetSubMesh_mCCD903F5382258EA058802F6295B11FEC66A8EE4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_indexStart_m68D7CB754235A9C5F5123A3336D12E3CA478718E_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_indexCount_m28ADC82F4E9F709E400DA16712AAA8A548528EB9_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConverter_ToUnityMesh_mBA16B811A2FA2B1B8F4DD5B7AE3C820F073CB618 (SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* ___0_sharedMesh, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___1_mesh, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_m6AFD5BFC4D7FB9EE57D8F19AB1BECD0675771D48 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___1_uvs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_boneIndex1_m79497EC149074B22E1404E962FB4D2A9E20BD1FF (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_boneIndex2_m5F414DEE2B63845092F41421610A7098DCCB817D (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_boneIndex3_mDF1FAF242DB9CD0D8DFCA91BED5D340BA19C1386 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_weight1_m33C87BA8D869BACF4065458142F4C61DC58D612D (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_weight2_m4CF18FA89EAB0643F17A428CE8F31D11ABAA0044 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_weight3_m59528496063DDE30B28852F29A48DEDDE8566B0E (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubMeshDescriptor__ctor_m5234E625F44FA9B04F41BD9DC013E47C2C628D66 (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, int32_t ___0_indexStart, int32_t ___1_indexCount, int32_t ___2_topology, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetSubMesh_m8ECC394430DD2D521412479314D75C5B89DD4A65 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_index, SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 ___1_desc, int32_t ___2_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateTangents_m92AC413FAF889C5E811D86DCE0C25ED4625825EC (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugWriter_FlushInternal_m5AD9F39984DA842191BB4AF611F7AB8814CB86FA (UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6 (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriter__ctor_mCB798AF418D211569751509FEDEEBEA164907C84 (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* __this, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m9E2968734F29D997ECFDAB7E37AE8BF9E959A1FE (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* __this, AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86*, AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311, const RuntimeMethod*))List_1_AddWithResize_m9E2968734F29D997ECFDAB7E37AE8BF9E959A1FE_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConverter__cctor_m9C51CB7EA65A55F35667B83749F4CBD9022AFB99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74* L_0 = (UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74*)il2cpp_codegen_object_new(UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74_il2cpp_TypeInfo_var);
		UnityDebugWriter__ctor_m6A56C8ABD2A8C357E9653BB090F8D0AA845DA740(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_SetOut_mD75C5604C18C440B6C31B4F91B0944E0DD972BA1(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* UnityConverter_ToSharedMesh_mAC37EEC27F624437757C1A0300D5FD330B7648C8 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyMetaAttributeList_t0189FEEC9A7EC612AB84FC24BCD1CEB9FEE5809B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetaAttribute_Set_TisBoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333_m05A550923793CBDD2F73EE0C6649D8D3C517141B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetaAttribute_Set_TisColor32_t31473C317DAD0CCA9C0813A8E3D546D117F6908B_mA28579832F8484A35A62797B6D7A650BEB8DE5FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetaAttribute_Set_TisVector2F_tE1037911E18F4477F23133F475E82A703257CDA0_m99403EA3757BB1A8CCFFD71CEC65025BEF5C07C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetaAttribute_Set_TisVector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8_mB629AA94B0559CA76E6634352DCFD0B772B0187C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mC81397A0C8355067DB74A607CF6960E7A84777CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1595FD0FAF5CA450F48A9780C3009E49B0D2144D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAttributeList_AddAttributeType_TisBoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333_m5E3A242EBC1F38E9EFF62C9313702347F35B5C77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAttributeList_AddAttributeType_TisColor32_t31473C317DAD0CCA9C0813A8E3D546D117F6908B_m15A54A67590375D52685A6CA901B69DF2D35BCB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAttributeList_AddAttributeType_TisVector2F_tE1037911E18F4477F23133F475E82A703257CDA0_mAE2D6619BAA7D7B8E809C2F47D75E7C17C89E301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAttributeList_AddAttributeType_TisVector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8_mB261467613903309095AD86D7C3690A694D8B62F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8814B186642F845EB7620A3DDACC77D9A5B378E7);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* V_1 = NULL;
	MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* V_2 = NULL;
	List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* V_3 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_5 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_6 = NULL;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_7 = NULL;
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	bool V_30 = false;
	int32_t V_31 = 0;
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 V_32;
	memset((&V_32), 0, sizeof(V_32));
	Group_tEA7FD28DCD2DA5AACE32B07D2F92A695A2BF09AA V_33;
	memset((&V_33), 0, sizeof(V_33));
	bool V_34 = false;
	SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* V_35 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B38_0 = 0;
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___0_mesh;
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_0, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral8814B186642F845EB7620A3DDACC77D9A5B378E7, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(L_4, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = ___0_mesh;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6;
		L_6 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_5, NULL);
		V_0 = L_6;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_7 = (SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010*)il2cpp_codegen_object_new(SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010_il2cpp_TypeInfo_var);
		SharedMesh__ctor_mE442ED67F794406401E4FCE75177A47E0FFE538D(L_7, NULL);
		V_1 = L_7;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_8 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = V_0;
		Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74* L_10 = (Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74*)(Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74*)SZArrayNew(Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)));
		L_8->___positions = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___positions), (void*)L_10);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		EmptyMetaAttributeList_t0189FEEC9A7EC612AB84FC24BCD1CEB9FEE5809B* L_12 = (EmptyMetaAttributeList_t0189FEEC9A7EC612AB84FC24BCD1CEB9FEE5809B*)il2cpp_codegen_object_new(EmptyMetaAttributeList_t0189FEEC9A7EC612AB84FC24BCD1CEB9FEE5809B_il2cpp_TypeInfo_var);
		EmptyMetaAttributeList__ctor_m949D9EE906EC983CB6C1FBCF981E23295FA9E5A0(L_12, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		V_2 = L_12;
		V_9 = 0;
		goto IL_0089;
	}

IL_0045:
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_13 = V_1;
		Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74* L_14 = L_13->___positions;
		int32_t L_15 = V_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = V_0;
		int32_t L_17 = V_9;
		float L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___x;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = V_0;
		int32_t L_20 = V_9;
		float L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___y;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = V_0;
		int32_t L_23 = V_9;
		float L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___z;
		Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_mFBBB841866CD2CA452E97DD9523FE64F4CFAF022((&L_25), ((double)L_18), ((double)L_21), ((double)L_24), NULL);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (Vector3_t96CFB148A02B65D29AC233C6370CD4192D998679)L_25);
		int32_t L_26 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0089:
	{
		int32_t L_27 = V_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = V_0;
		V_10 = (bool)((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))? 1 : 0);
		bool L_29 = V_10;
		if (L_29)
		{
			goto IL_0045;
		}
	}
	{
		List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* L_30 = (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86*)il2cpp_codegen_object_new(List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86_il2cpp_TypeInfo_var);
		List_1__ctor_m1595FD0FAF5CA450F48A9780C3009E49B0D2144D(L_30, List_1__ctor_m1595FD0FAF5CA450F48A9780C3009E49B0D2144D_RuntimeMethod_var);
		V_3 = L_30;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31 = ___0_mesh;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32;
		L_32 = Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62(L_31, NULL);
		V_4 = L_32;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = V_4;
		if (!L_33)
		{
			goto IL_00b0;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = V_4;
		G_B6_0 = ((!(((uint32_t)(((RuntimeArray*)L_34)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B6_0 = 0;
	}

IL_00b1:
	{
		V_11 = (bool)G_B6_0;
		bool L_35 = V_11;
		if (!L_35)
		{
			goto IL_0143;
		}
	}
	{
		List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* L_36 = V_3;
		int32_t L_37;
		L_37 = List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_inline(L_36, List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_RuntimeMethod_var);
		V_12 = L_37;
		List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* L_38 = V_3;
		AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 L_39;
		memset((&L_39), 0, sizeof(L_39));
		AttributeDefinition__ctor_m01FFBF493C6AB068C4A5F14D811476DF471BB3A0((&L_39), 0, (222.01939392089844), NULL);
		List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_inline(L_38, L_39, List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_RuntimeMethod_var);
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_40 = V_2;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_41;
		L_41 = GenericVirtualFuncInvoker0< MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* >::Invoke(MetaAttributeList_AddAttributeType_TisVector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8_mB261467613903309095AD86D7C3690A694D8B62F_RuntimeMethod_var, L_40);
		V_2 = L_41;
		V_13 = 0;
		goto IL_0134;
	}

IL_00e5:
	{
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_42 = V_2;
		int32_t L_43 = V_13;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_44 = V_2;
		int32_t L_45 = V_13;
		RuntimeObject* L_46;
		L_46 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(4, L_44, L_45);
		int32_t L_47 = V_12;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = V_4;
		int32_t L_49 = V_13;
		float L_50 = ((L_48)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_49)))->___x;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_51 = V_4;
		int32_t L_52 = V_13;
		float L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___y;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_54 = V_4;
		int32_t L_55 = V_13;
		float L_56 = ((L_54)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_55)))->___z;
		Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3F__ctor_m9D6225036743FC00434C5D264958979A5AF2525D((&L_57), L_50, L_53, L_56, NULL);
		RuntimeObject* L_58;
		L_58 = GenericInterfaceFuncInvoker2< RuntimeObject*, int32_t, Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8 >::Invoke(IMetaAttribute_Set_TisVector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8_mB629AA94B0559CA76E6634352DCFD0B772B0187C_RuntimeMethod_var, L_46, L_47, L_57);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(5, L_42, L_43, L_58);
		int32_t L_59 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0134:
	{
		int32_t L_60 = V_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_61 = V_4;
		V_14 = (bool)((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length))))? 1 : 0);
		bool L_62 = V_14;
		if (L_62)
		{
			goto IL_00e5;
		}
	}
	{
	}

IL_0143:
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_63 = ___0_mesh;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_64;
		L_64 = Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F(L_63, NULL);
		V_5 = L_64;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_65 = V_5;
		if (!L_65)
		{
			goto IL_0157;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_66 = V_5;
		G_B14_0 = ((!(((uint32_t)(((RuntimeArray*)L_66)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0158;
	}

IL_0157:
	{
		G_B14_0 = 0;
	}

IL_0158:
	{
		V_15 = (bool)G_B14_0;
		bool L_67 = V_15;
		if (!L_67)
		{
			goto IL_01da;
		}
	}
	{
		List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* L_68 = V_3;
		int32_t L_69;
		L_69 = List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_inline(L_68, List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_RuntimeMethod_var);
		V_16 = L_69;
		List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* L_70 = V_3;
		AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 L_71;
		memset((&L_71), 0, sizeof(L_71));
		AttributeDefinition__ctor_mF0CFD368B2AF0143B1278E66E696A6C0A1A6917C((&L_71), 1, (90.21234130859375), 0, NULL);
		List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_inline(L_70, L_71, List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_RuntimeMethod_var);
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_72 = V_2;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_73;
		L_73 = GenericVirtualFuncInvoker0< MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* >::Invoke(MetaAttributeList_AddAttributeType_TisVector2F_tE1037911E18F4477F23133F475E82A703257CDA0_mAE2D6619BAA7D7B8E809C2F47D75E7C17C89E301_RuntimeMethod_var, L_72);
		V_2 = L_73;
		V_17 = 0;
		goto IL_01cb;
	}

IL_018a:
	{
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_74 = V_2;
		int32_t L_75 = V_17;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_76 = V_2;
		int32_t L_77 = V_17;
		RuntimeObject* L_78;
		L_78 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(4, L_76, L_77);
		int32_t L_79 = V_16;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_80 = V_5;
		int32_t L_81 = V_17;
		float L_82 = ((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_81)))->___x;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_83 = V_5;
		int32_t L_84 = V_17;
		float L_85 = ((L_83)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_84)))->___y;
		Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 L_86;
		memset((&L_86), 0, sizeof(L_86));
		Vector2F__ctor_mB249D0FC9797F9A745C57AC0F76C0C40E428B2B9((&L_86), L_82, L_85, NULL);
		RuntimeObject* L_87;
		L_87 = GenericInterfaceFuncInvoker2< RuntimeObject*, int32_t, Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 >::Invoke(IMetaAttribute_Set_TisVector2F_tE1037911E18F4477F23133F475E82A703257CDA0_m99403EA3757BB1A8CCFFD71CEC65025BEF5C07C2_RuntimeMethod_var, L_78, L_79, L_86);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(5, L_74, L_75, L_87);
		int32_t L_88 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_01cb:
	{
		int32_t L_89 = V_17;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_90 = V_5;
		V_18 = (bool)((((int32_t)L_89) < ((int32_t)((int32_t)(((RuntimeArray*)L_90)->max_length))))? 1 : 0);
		bool L_91 = V_18;
		if (L_91)
		{
			goto IL_018a;
		}
	}
	{
	}

IL_01da:
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_92 = ___0_mesh;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_93;
		L_93 = Mesh_get_uv2_mBD25DD8C860E10A1D109C9622622D52571F56B6F(L_92, NULL);
		V_6 = L_93;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_94 = V_6;
		if (!L_94)
		{
			goto IL_01ee;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_95 = V_6;
		G_B22_0 = ((!(((uint32_t)(((RuntimeArray*)L_95)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_01ef;
	}

IL_01ee:
	{
		G_B22_0 = 0;
	}

IL_01ef:
	{
		V_19 = (bool)G_B22_0;
		bool L_96 = V_19;
		if (!L_96)
		{
			goto IL_0271;
		}
	}
	{
		List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* L_97 = V_3;
		int32_t L_98;
		L_98 = List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_inline(L_97, List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_RuntimeMethod_var);
		V_20 = L_98;
		List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* L_99 = V_3;
		AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 L_100;
		memset((&L_100), 0, sizeof(L_100));
		AttributeDefinition__ctor_mF0CFD368B2AF0143B1278E66E696A6C0A1A6917C((&L_100), 1, (9.0212335586547852), 1, NULL);
		List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_inline(L_99, L_100, List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_RuntimeMethod_var);
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_101 = V_2;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_102;
		L_102 = GenericVirtualFuncInvoker0< MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* >::Invoke(MetaAttributeList_AddAttributeType_TisVector2F_tE1037911E18F4477F23133F475E82A703257CDA0_mAE2D6619BAA7D7B8E809C2F47D75E7C17C89E301_RuntimeMethod_var, L_101);
		V_2 = L_102;
		V_21 = 0;
		goto IL_0262;
	}

IL_0221:
	{
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_103 = V_2;
		int32_t L_104 = V_21;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_105 = V_2;
		int32_t L_106 = V_21;
		RuntimeObject* L_107;
		L_107 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(4, L_105, L_106);
		int32_t L_108 = V_20;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_109 = V_6;
		int32_t L_110 = V_21;
		float L_111 = ((L_109)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_110)))->___x;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_112 = V_6;
		int32_t L_113 = V_21;
		float L_114 = ((L_112)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_113)))->___y;
		Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 L_115;
		memset((&L_115), 0, sizeof(L_115));
		Vector2F__ctor_mB249D0FC9797F9A745C57AC0F76C0C40E428B2B9((&L_115), L_111, L_114, NULL);
		RuntimeObject* L_116;
		L_116 = GenericInterfaceFuncInvoker2< RuntimeObject*, int32_t, Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 >::Invoke(IMetaAttribute_Set_TisVector2F_tE1037911E18F4477F23133F475E82A703257CDA0_m99403EA3757BB1A8CCFFD71CEC65025BEF5C07C2_RuntimeMethod_var, L_107, L_108, L_115);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(5, L_103, L_104, L_116);
		int32_t L_117 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_117, 1));
	}

IL_0262:
	{
		int32_t L_118 = V_21;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_119 = V_6;
		V_22 = (bool)((((int32_t)L_118) < ((int32_t)((int32_t)(((RuntimeArray*)L_119)->max_length))))? 1 : 0);
		bool L_120 = V_22;
		if (L_120)
		{
			goto IL_0221;
		}
	}
	{
	}

IL_0271:
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_121 = ___0_mesh;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_122;
		L_122 = Mesh_get_colors32_mA230CB5687CDCCEA5527BD5A0640E9535CB640A2(L_121, NULL);
		V_7 = L_122;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_123 = V_7;
		if (!L_123)
		{
			goto IL_0285;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_124 = V_7;
		G_B30_0 = ((!(((uint32_t)(((RuntimeArray*)L_124)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0286;
	}

IL_0285:
	{
		G_B30_0 = 0;
	}

IL_0286:
	{
		V_23 = (bool)G_B30_0;
		bool L_125 = V_23;
		if (!L_125)
		{
			goto IL_0326;
		}
	}
	{
		List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* L_126 = V_3;
		int32_t L_127;
		L_127 = List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_inline(L_126, List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_RuntimeMethod_var);
		V_24 = L_127;
		List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* L_128 = V_3;
		AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 L_129;
		memset((&L_129), 0, sizeof(L_129));
		AttributeDefinition__ctor_m01FFBF493C6AB068C4A5F14D811476DF471BB3A0((&L_129), 3, (0.0001), NULL);
		List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_inline(L_128, L_129, List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_RuntimeMethod_var);
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_130 = V_2;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_131;
		L_131 = GenericVirtualFuncInvoker0< MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* >::Invoke(MetaAttributeList_AddAttributeType_TisColor32_t31473C317DAD0CCA9C0813A8E3D546D117F6908B_m15A54A67590375D52685A6CA901B69DF2D35BCB8_RuntimeMethod_var, L_130);
		V_2 = L_131;
		V_25 = 0;
		goto IL_0317;
	}

IL_02ba:
	{
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_132 = V_2;
		int32_t L_133 = V_25;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_134 = V_2;
		int32_t L_135 = V_25;
		RuntimeObject* L_136;
		L_136 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(4, L_134, L_135);
		int32_t L_137 = V_24;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_138 = V_7;
		int32_t L_139 = V_25;
		uint8_t L_140 = ((L_138)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_139)))->___r;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_141 = V_7;
		int32_t L_142 = V_25;
		uint8_t L_143 = ((L_141)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_142)))->___g;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_144 = V_7;
		int32_t L_145 = V_25;
		uint8_t L_146 = ((L_144)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_145)))->___b;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_147 = V_7;
		int32_t L_148 = V_25;
		uint8_t L_149 = ((L_147)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_148)))->___a;
		Color32_t31473C317DAD0CCA9C0813A8E3D546D117F6908B L_150;
		memset((&L_150), 0, sizeof(L_150));
		Color32__ctor_mD60EF2C0394679EC6CB239AF2DA4E5CB0DDA51E9((&L_150), L_140, L_143, L_146, L_149, NULL);
		RuntimeObject* L_151;
		L_151 = GenericInterfaceFuncInvoker2< RuntimeObject*, int32_t, Color32_t31473C317DAD0CCA9C0813A8E3D546D117F6908B >::Invoke(IMetaAttribute_Set_TisColor32_t31473C317DAD0CCA9C0813A8E3D546D117F6908B_mA28579832F8484A35A62797B6D7A650BEB8DE5FF_RuntimeMethod_var, L_136, L_137, L_150);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(5, L_132, L_133, L_151);
		int32_t L_152 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_152, 1));
	}

IL_0317:
	{
		int32_t L_153 = V_25;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_154 = V_7;
		V_26 = (bool)((((int32_t)L_153) < ((int32_t)((int32_t)(((RuntimeArray*)L_154)->max_length))))? 1 : 0);
		bool L_155 = V_26;
		if (L_155)
		{
			goto IL_02ba;
		}
	}
	{
	}

IL_0326:
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_156 = ___0_mesh;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_157;
		L_157 = Mesh_get_boneWeights_m2091E7E793A60853ACC7928BFDC1FF8F0DC4C7E9(L_156, NULL);
		V_8 = L_157;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_158 = V_8;
		if (!L_158)
		{
			goto IL_033a;
		}
	}
	{
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_159 = V_8;
		G_B38_0 = ((!(((uint32_t)(((RuntimeArray*)L_159)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_033b;
	}

IL_033a:
	{
		G_B38_0 = 0;
	}

IL_033b:
	{
		V_27 = (bool)G_B38_0;
		bool L_160 = V_27;
		if (!L_160)
		{
			goto IL_0419;
		}
	}
	{
		List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* L_161 = V_3;
		int32_t L_162;
		L_162 = List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_inline(L_161, List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_RuntimeMethod_var);
		V_28 = L_162;
		List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* L_163 = V_3;
		AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 L_164;
		memset((&L_164), 0, sizeof(L_164));
		AttributeDefinition__ctor_m01FFBF493C6AB068C4A5F14D811476DF471BB3A0((&L_164), 2, (1.0), NULL);
		List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_inline(L_163, L_164, List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_RuntimeMethod_var);
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_165 = V_2;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_166;
		L_166 = GenericVirtualFuncInvoker0< MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* >::Invoke(MetaAttributeList_AddAttributeType_TisBoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333_m5E3A242EBC1F38E9EFF62C9313702347F35B5C77_RuntimeMethod_var, L_165);
		V_2 = L_166;
		V_29 = 0;
		goto IL_0407;
	}

IL_0372:
	{
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_167 = V_2;
		int32_t L_168 = V_29;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_169 = V_2;
		int32_t L_170 = V_29;
		RuntimeObject* L_171;
		L_171 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(4, L_169, L_170);
		int32_t L_172 = V_28;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_173 = V_8;
		int32_t L_174 = V_29;
		int32_t L_175;
		L_175 = BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612(((L_173)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_174))), NULL);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_176 = V_8;
		int32_t L_177 = V_29;
		int32_t L_178;
		L_178 = BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18(((L_176)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_177))), NULL);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_179 = V_8;
		int32_t L_180 = V_29;
		int32_t L_181;
		L_181 = BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310(((L_179)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_180))), NULL);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_182 = V_8;
		int32_t L_183 = V_29;
		int32_t L_184;
		L_184 = BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F(((L_182)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_183))), NULL);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_185 = V_8;
		int32_t L_186 = V_29;
		float L_187;
		L_187 = BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9(((L_185)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_186))), NULL);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_188 = V_8;
		int32_t L_189 = V_29;
		float L_190;
		L_190 = BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504(((L_188)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_189))), NULL);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_191 = V_8;
		int32_t L_192 = V_29;
		float L_193;
		L_193 = BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E(((L_191)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_192))), NULL);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_194 = V_8;
		int32_t L_195 = V_29;
		float L_196;
		L_196 = BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1(((L_194)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_195))), NULL);
		BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 L_197;
		memset((&L_197), 0, sizeof(L_197));
		BoneWeight__ctor_mC5D69640FA74CB55BE7F28CE3229C2853B6D9600((&L_197), L_175, L_178, L_181, L_184, L_187, L_190, L_193, L_196, NULL);
		RuntimeObject* L_198;
		L_198 = GenericInterfaceFuncInvoker2< RuntimeObject*, int32_t, BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 >::Invoke(IMetaAttribute_Set_TisBoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333_m05A550923793CBDD2F73EE0C6649D8D3C517141B_RuntimeMethod_var, L_171, L_172, L_197);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(5, L_167, L_168, L_198);
		int32_t L_199 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_199, 1));
	}

IL_0407:
	{
		int32_t L_200 = V_29;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_201 = V_8;
		V_30 = (bool)((((int32_t)L_200) < ((int32_t)((int32_t)(((RuntimeArray*)L_201)->max_length))))? 1 : 0);
		bool L_202 = V_30;
		if (L_202)
		{
			goto IL_0372;
		}
	}
	{
	}

IL_0419:
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_203 = V_1;
		List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* L_204 = V_3;
		AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* L_205;
		L_205 = List_1_ToArray_mC81397A0C8355067DB74A607CF6960E7A84777CA(L_204, List_1_ToArray_mC81397A0C8355067DB74A607CF6960E7A84777CA_RuntimeMethod_var);
		L_203->___attributeDefinitions = L_205;
		Il2CppCodeGenWriteBarrier((void**)(&L_203->___attributeDefinitions), (void*)L_205);
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_206 = V_1;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_207 = V_2;
		L_206->___attributes = L_207;
		Il2CppCodeGenWriteBarrier((void**)(&L_206->___attributes), (void*)L_207);
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_208 = V_1;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_209 = ___0_mesh;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210;
		L_210 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_209, NULL);
		L_208->___triangles = L_210;
		Il2CppCodeGenWriteBarrier((void**)(&L_208->___triangles), (void*)L_210);
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_211 = V_1;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_212 = ___0_mesh;
		int32_t L_213;
		L_213 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_212, NULL);
		GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2* L_214 = (GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2*)(GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2*)SZArrayNew(GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2_il2cpp_TypeInfo_var, (uint32_t)L_213);
		L_211->___groups = L_214;
		Il2CppCodeGenWriteBarrier((void**)(&L_211->___groups), (void*)L_214);
		V_31 = 0;
		goto IL_0493;
	}

IL_044e:
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_215 = ___0_mesh;
		int32_t L_216 = V_31;
		SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 L_217;
		L_217 = Mesh_GetSubMesh_mCCD903F5382258EA058802F6295B11FEC66A8EE4(L_215, L_216, NULL);
		V_32 = L_217;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_218 = V_1;
		GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2* L_219 = L_218->___groups;
		int32_t L_220 = V_31;
		il2cpp_codegen_initobj((&V_33), sizeof(Group_tEA7FD28DCD2DA5AACE32B07D2F92A695A2BF09AA));
		int32_t L_221;
		L_221 = SubMeshDescriptor_get_indexStart_m68D7CB754235A9C5F5123A3336D12E3CA478718E_inline((&V_32), NULL);
		(&V_33)->___firstIndex = L_221;
		int32_t L_222;
		L_222 = SubMeshDescriptor_get_indexCount_m28ADC82F4E9F709E400DA16712AAA8A548528EB9_inline((&V_32), NULL);
		(&V_33)->___indexCount = L_222;
		Group_tEA7FD28DCD2DA5AACE32B07D2F92A695A2BF09AA L_223 = V_33;
		(L_219)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_220), (Group_tEA7FD28DCD2DA5AACE32B07D2F92A695A2BF09AA)L_223);
		int32_t L_224 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_224, 1));
	}

IL_0493:
	{
		int32_t L_225 = V_31;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_226 = ___0_mesh;
		int32_t L_227;
		L_227 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_226, NULL);
		V_34 = (bool)((((int32_t)L_225) < ((int32_t)L_227))? 1 : 0);
		bool L_228 = V_34;
		if (L_228)
		{
			goto IL_044e;
		}
	}
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_229 = V_1;
		V_35 = L_229;
		goto IL_04a8;
	}

IL_04a8:
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_230 = V_35;
		return L_230;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* UnityConverter_ToUnityMesh_m242BF9625B5AE3D5D62DC16F51E627BEAE56CF51 (SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* ___0_sharedMesh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConverter_t400BEF09C1F6A71FA8C1A99B481BAAEFB0D6B2EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_1 = NULL;
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_1 = ___0_sharedMesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UnityConverter_t400BEF09C1F6A71FA8C1A99B481BAAEFB0D6B2EC_il2cpp_TypeInfo_var);
		UnityConverter_ToUnityMesh_mBA16B811A2FA2B1B8F4DD5B7AE3C820F073CB618(L_1, L_2, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = V_0;
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConverter_ToUnityMesh_mBA16B811A2FA2B1B8F4DD5B7AE3C820F073CB618 (SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* ___0_sharedMesh, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___1_mesh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetaAttribute_Get_TisBoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333_mB6539EAE3CE7ECBD7DB8C3F8508CBE6B710A8F36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetaAttribute_Get_TisVector2F_tE1037911E18F4477F23133F475E82A703257CDA0_m3971CA0433163E42D60045A6B11ECA08C305309D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetaAttribute_Get_TisVector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8_m02D1E71103A59CBC35E64FAA81A7190A78DA2514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_6 = NULL;
	int32_t V_7 = 0;
	Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_11 = NULL;
	int32_t V_12 = 0;
	Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	bool V_15 = false;
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* V_16 = NULL;
	int32_t V_17 = 0;
	BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 V_18;
	memset((&V_18), 0, sizeof(V_18));
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	bool V_21 = false;
	int32_t V_22 = 0;
	bool V_23 = false;
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___1_mesh;
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_0, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = ___1_mesh;
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_1, 1, NULL);
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_2 = ___0_sharedMesh;
		Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74* L_3 = L_2->___positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_0 = L_4;
		V_1 = 0;
		goto IL_006a;
	}

IL_0022:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = V_0;
		int32_t L_6 = V_1;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_7 = ___0_sharedMesh;
		Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74* L_8 = L_7->___positions;
		int32_t L_9 = V_1;
		double L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___x;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_11 = ___0_sharedMesh;
		Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74* L_12 = L_11->___positions;
		int32_t L_13 = V_1;
		double L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___y;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_15 = ___0_sharedMesh;
		Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74* L_16 = L_15->___positions;
		int32_t L_17 = V_1;
		double L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), ((float)L_10), ((float)L_14), ((float)L_18), NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_19);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006a:
	{
		int32_t L_21 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = V_0;
		V_2 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_2;
		if (L_23)
		{
			goto IL_0022;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_24 = ___1_mesh;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = V_0;
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_24, L_25, NULL);
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_26 = ___0_sharedMesh;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_27 = L_26->___attributes;
		V_3 = (bool)((!(((RuntimeObject*)(MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35*)L_27) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_02ec;
		}
	}
	{
		V_4 = 0;
		goto IL_02d6;
	}

IL_0095:
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_29 = ___0_sharedMesh;
		AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* L_30 = L_29->___attributeDefinitions;
		int32_t L_31 = V_4;
		int32_t L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___type;
		V_5 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_012b;
		}
	}
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_34 = ___0_sharedMesh;
		Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74* L_35 = L_34->___positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_36 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)));
		V_6 = L_36;
		V_7 = 0;
		goto IL_0107;
	}

IL_00c6:
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_37 = ___0_sharedMesh;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_38 = L_37->___attributes;
		int32_t L_39 = V_7;
		RuntimeObject* L_40;
		L_40 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(4, L_38, L_39);
		int32_t L_41 = V_4;
		Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8 L_42;
		L_42 = GenericInterfaceFuncInvoker1< Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8, int32_t >::Invoke(IMetaAttribute_Get_TisVector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8_m02D1E71103A59CBC35E64FAA81A7190A78DA2514_RuntimeMethod_var, L_40, L_41);
		V_8 = L_42;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = V_6;
		int32_t L_44 = V_7;
		Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8 L_45 = V_8;
		float L_46 = L_45.___x;
		Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8 L_47 = V_8;
		float L_48 = L_47.___y;
		Vector3F_t8F973AB71DC40B92778183BBF9F94124A902D4F8 L_49 = V_8;
		float L_50 = L_49.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_51), L_46, L_48, L_50, NULL);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_51);
		int32_t L_52 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0107:
	{
		int32_t L_53 = V_7;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_54 = ___0_sharedMesh;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_55 = L_54->___attributes;
		int32_t L_56;
		L_56 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_55);
		V_9 = (bool)((((int32_t)L_53) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_9;
		if (L_57)
		{
			goto IL_00c6;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_58 = ___1_mesh;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = V_6;
		Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_58, L_59, NULL);
		goto IL_02cf;
	}

IL_012b:
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_60 = ___0_sharedMesh;
		AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* L_61 = L_60->___attributeDefinitions;
		int32_t L_62 = V_4;
		int32_t L_63 = ((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___type;
		V_10 = (bool)((((int32_t)L_63) == ((int32_t)1))? 1 : 0);
		bool L_64 = V_10;
		if (!L_64)
		{
			goto IL_01ce;
		}
	}
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_65 = ___0_sharedMesh;
		Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74* L_66 = L_65->___positions;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_67 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_66)->max_length)));
		V_11 = L_67;
		V_12 = 0;
		goto IL_0198;
	}

IL_015e:
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_68 = ___0_sharedMesh;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_69 = L_68->___attributes;
		int32_t L_70 = V_12;
		RuntimeObject* L_71;
		L_71 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(4, L_69, L_70);
		int32_t L_72 = V_4;
		Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 L_73;
		L_73 = GenericInterfaceFuncInvoker1< Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0, int32_t >::Invoke(IMetaAttribute_Get_TisVector2F_tE1037911E18F4477F23133F475E82A703257CDA0_m3971CA0433163E42D60045A6B11ECA08C305309D_RuntimeMethod_var, L_71, L_72);
		V_13 = L_73;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_74 = V_11;
		int32_t L_75 = V_12;
		Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 L_76 = V_13;
		float L_77 = L_76.___x;
		Vector2F_tE1037911E18F4477F23133F475E82A703257CDA0 L_78 = V_13;
		float L_79 = L_78.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_80), L_77, L_79, NULL);
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_80);
		int32_t L_81 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_0198:
	{
		int32_t L_82 = V_12;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_83 = ___0_sharedMesh;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_84 = L_83->___attributes;
		int32_t L_85;
		L_85 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_84);
		V_14 = (bool)((((int32_t)L_82) < ((int32_t)L_85))? 1 : 0);
		bool L_86 = V_14;
		if (L_86)
		{
			goto IL_015e;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_87 = ___1_mesh;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_88 = ___0_sharedMesh;
		AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* L_89 = L_88->___attributeDefinitions;
		int32_t L_90 = V_4;
		int32_t L_91 = ((L_89)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_90)))->___id;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_92 = V_11;
		Mesh_SetUVs_m6AFD5BFC4D7FB9EE57D8F19AB1BECD0675771D48(L_87, L_91, L_92, NULL);
		goto IL_02cf;
	}

IL_01ce:
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_93 = ___0_sharedMesh;
		AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* L_94 = L_93->___attributeDefinitions;
		int32_t L_95 = V_4;
		int32_t L_96 = ((L_94)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_95)))->___type;
		V_15 = (bool)((((int32_t)L_96) == ((int32_t)2))? 1 : 0);
		bool L_97 = V_15;
		if (!L_97)
		{
			goto IL_02cf;
		}
	}
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_98 = ___0_sharedMesh;
		Vector3U5BU5D_tFCED9F41F9071C7AE652D5F01ACCC553B3EAEC74* L_99 = L_98->___positions;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_100 = (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)SZArrayNew(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_99)->max_length)));
		V_16 = L_100;
		V_17 = 0;
		goto IL_02ad;
	}

IL_0204:
	{
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_101 = ___0_sharedMesh;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_102 = L_101->___attributes;
		int32_t L_103 = V_17;
		RuntimeObject* L_104;
		L_104 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(4, L_102, L_103);
		int32_t L_105 = V_4;
		BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 L_106;
		L_106 = GenericInterfaceFuncInvoker1< BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333, int32_t >::Invoke(IMetaAttribute_Get_TisBoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333_mB6539EAE3CE7ECBD7DB8C3F8508CBE6B710A8F36_RuntimeMethod_var, L_104, L_105);
		V_18 = L_106;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_107 = V_16;
		int32_t L_108 = V_17;
		il2cpp_codegen_initobj((&V_19), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 L_109 = V_18;
		int32_t L_110 = L_109.___index0;
		BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC((&V_19), L_110, NULL);
		BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 L_111 = V_18;
		int32_t L_112 = L_111.___index1;
		BoneWeight_set_boneIndex1_m79497EC149074B22E1404E962FB4D2A9E20BD1FF((&V_19), L_112, NULL);
		BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 L_113 = V_18;
		int32_t L_114 = L_113.___index2;
		BoneWeight_set_boneIndex2_m5F414DEE2B63845092F41421610A7098DCCB817D((&V_19), L_114, NULL);
		BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 L_115 = V_18;
		int32_t L_116 = L_115.___index3;
		BoneWeight_set_boneIndex3_mDF1FAF242DB9CD0D8DFCA91BED5D340BA19C1386((&V_19), L_116, NULL);
		BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 L_117 = V_18;
		float L_118 = L_117.___weight0;
		BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7((&V_19), L_118, NULL);
		BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 L_119 = V_18;
		float L_120 = L_119.___weight1;
		BoneWeight_set_weight1_m33C87BA8D869BACF4065458142F4C61DC58D612D((&V_19), L_120, NULL);
		BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 L_121 = V_18;
		float L_122 = L_121.___weight2;
		BoneWeight_set_weight2_m4CF18FA89EAB0643F17A428CE8F31D11ABAA0044((&V_19), L_122, NULL);
		BoneWeight_tECDCA0C69D3C0ABD042806B216FF005213C3D333 L_123 = V_18;
		float L_124 = L_123.___weight3;
		BoneWeight_set_weight3_m59528496063DDE30B28852F29A48DEDDE8566B0E((&V_19), L_124, NULL);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_125 = V_19;
		(L_107)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108), (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F)L_125);
		int32_t L_126 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_02ad:
	{
		int32_t L_127 = V_17;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_128 = ___0_sharedMesh;
		MetaAttributeList_tE09316C9364B85F1BFD06E53F919C31B8A98FA35* L_129 = L_128->___attributes;
		int32_t L_130;
		L_130 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_129);
		V_20 = (bool)((((int32_t)L_127) < ((int32_t)L_130))? 1 : 0);
		bool L_131 = V_20;
		if (L_131)
		{
			goto IL_0204;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_132 = ___1_mesh;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_133 = V_16;
		Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7(L_132, L_133, NULL);
	}

IL_02cf:
	{
		int32_t L_134 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_134, 1));
	}

IL_02d6:
	{
		int32_t L_135 = V_4;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_136 = ___0_sharedMesh;
		AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* L_137 = L_136->___attributeDefinitions;
		V_21 = (bool)((((int32_t)L_135) < ((int32_t)((int32_t)(((RuntimeArray*)L_137)->max_length))))? 1 : 0);
		bool L_138 = V_21;
		if (L_138)
		{
			goto IL_0095;
		}
	}
	{
	}

IL_02ec:
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_139 = ___1_mesh;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_140 = ___0_sharedMesh;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = L_140->___triangles;
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_139, L_141, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_142 = ___1_mesh;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_143 = ___0_sharedMesh;
		GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2* L_144 = L_143->___groups;
		Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28(L_142, ((int32_t)(((RuntimeArray*)L_144)->max_length)), NULL);
		V_22 = 0;
		goto IL_0349;
	}

IL_030d:
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_145 = ___1_mesh;
		int32_t L_146 = V_22;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_147 = ___0_sharedMesh;
		GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2* L_148 = L_147->___groups;
		int32_t L_149 = V_22;
		int32_t L_150 = ((L_148)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_149)))->___firstIndex;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_151 = ___0_sharedMesh;
		GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2* L_152 = L_151->___groups;
		int32_t L_153 = V_22;
		int32_t L_154 = ((L_152)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_153)))->___indexCount;
		SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 L_155;
		memset((&L_155), 0, sizeof(L_155));
		SubMeshDescriptor__ctor_m5234E625F44FA9B04F41BD9DC013E47C2C628D66((&L_155), L_150, L_154, 0, NULL);
		Mesh_SetSubMesh_m8ECC394430DD2D521412479314D75C5B89DD4A65(L_145, L_146, L_155, 0, NULL);
		int32_t L_156 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_156, 1));
	}

IL_0349:
	{
		int32_t L_157 = V_22;
		SharedMesh_tE3CBB67FD74D8EB8EDDDD71B5E2D5A7CF3874010* L_158 = ___0_sharedMesh;
		GroupU5BU5D_tA717C159BDE242EF7C6F32230EAE108C92CE1EA2* L_159 = L_158->___groups;
		V_23 = (bool)((((int32_t)L_157) < ((int32_t)((int32_t)(((RuntimeArray*)L_159)->max_length))))? 1 : 0);
		bool L_160 = V_23;
		if (L_160)
		{
			goto IL_030d;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_161 = ___1_mesh;
		Mesh_RecalculateTangents_m92AC413FAF889C5E811D86DCE0C25ED4625825EC(L_161, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugWriter_Flush_m614CFD4C360C01864A056B62563C1A4CAEF76918 (UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->____myLockToken;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			UnityDebugWriter_FlushInternal_m5AD9F39984DA842191BB4AF611F7AB8814CB86FA(__this, NULL);
			goto IL_0029;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugWriter_FlushInternal_m5AD9F39984DA842191BB4AF611F7AB8814CB86FA (UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = __this->___buffer;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		StringBuilder_t* L_2 = __this->___buffer;
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugWriter_Write_mF019D0C5FB2F9C8AB37F440A215A6EB740D702A1 (UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	Il2CppChar V_5 = 0x0;
	bool V_6 = false;
	{
		RuntimeObject* L_0 = __this->____myLockToken;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_006b;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_006b:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				StringBuilder_t* L_4 = __this->___buffer;
				String_t* L_5 = ___0_value;
				StringBuilder_t* L_6;
				L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_5, NULL);
				String_t* L_7 = ___0_value;
				V_2 = (bool)((!(((RuntimeObject*)(String_t*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				String_t* L_9 = ___0_value;
				int32_t L_10;
				L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
				V_3 = L_10;
				int32_t L_11 = V_3;
				V_4 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
				bool L_12 = V_4;
				if (!L_12)
				{
					goto IL_005d_1;
				}
			}
			{
				String_t* L_13 = ___0_value;
				int32_t L_14 = V_3;
				Il2CppChar L_15;
				L_15 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), NULL);
				V_5 = L_15;
				Il2CppChar L_16 = V_5;
				V_6 = (bool)((((int32_t)L_16) == ((int32_t)((int32_t)10)))? 1 : 0);
				bool L_17 = V_6;
				if (!L_17)
				{
					goto IL_005c_1;
				}
			}
			{
				UnityDebugWriter_FlushInternal_m5AD9F39984DA842191BB4AF611F7AB8814CB86FA(__this, NULL);
			}

IL_005c_1:
			{
			}

IL_005d_1:
			{
			}

IL_005e_1:
			{
				goto IL_006c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugWriter_Write_mD3A82B391BB1A3546A462A19F7712A08CC5613AE (UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = __this->____myLockToken;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0040;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0040:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				StringBuilder_t* L_4 = __this->___buffer;
				Il2CppChar L_5 = ___0_value;
				StringBuilder_t* L_6;
				L_6 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, L_5, NULL);
				Il2CppChar L_7 = ___0_value;
				V_2 = (bool)((((int32_t)L_7) == ((int32_t)((int32_t)10)))? 1 : 0);
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0033_1;
				}
			}
			{
				UnityDebugWriter_FlushInternal_m5AD9F39984DA842191BB4AF611F7AB8814CB86FA(__this, NULL);
			}

IL_0033_1:
			{
				goto IL_0041;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugWriter_Write_m259D56DC996B71DF959464BBFBE9C82D0A8D5E3C (UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_value;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		String_t* L_3;
		L_3 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_0, L_1, L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(14, __this, L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugWriter__ctor_m6A56C8ABD2A8C357E9653BB090F8D0AA845DA740 (UnityDebugWriter_t69B2DCA57E56853EB124613E6F4D07F728A3EA74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->____myLockToken = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myLockToken), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_il2cpp_TypeInfo_var);
		TextWriter__ctor_mCB798AF418D211569751509FEDEEBEA164907C84(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_indexStart_m68D7CB754235A9C5F5123A3336D12E3CA478718E_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CindexStartU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SubMeshDescriptor_get_indexCount_m28ADC82F4E9F709E400DA16712AAA8A548528EB9_inline (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CindexCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAABD607F5E508A2E55B3C6F93E4E389475BE983E_gshared_inline (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m68158726FD6F62B3B0838A9B6372F2EF00A5ED56_gshared_inline (List_1_t3C1C44FBA195482BE7E87306544F4E5E1038DC86* __this, AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 ___0_item, const RuntimeMethod* method) 
{
	AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		AttributeDefinitionU5BU5D_tFCA8B4B6D61AA574BE83B5F4BC56394882250B66* L_6 = V_0;
		int32_t L_7 = V_1;
		AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311)L_8);
		return;
	}

IL_0034:
	{
		AttributeDefinition_tDDF08F4D03A99EEDF90408904C48BA660506C311 L_9 = ___0_item;
		List_1_AddWithResize_m9E2968734F29D997ECFDAB7E37AE8BF9E959A1FE(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
