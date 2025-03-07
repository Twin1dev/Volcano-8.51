#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2F0 - 0x2B0)
// BlueprintGeneratedClass GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C
class AGC_NPC_Elemental_Lightning_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Husk_Elemental_Electric_AuxObjs;                 // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Lightning_Elemental_FX;                            // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Elemental_Material;                                // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     Elemental_Physical_Material;                       // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delay_Time_for_Restore_Previous_Material;          // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFeedbackBank*                     Elemental_Feedback;                                // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_NPC_Elemental_Lightning_C");
		return Clss;
	}

	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UObject* CallFunc_Array_Get_Item, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_2, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_3, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue);
	void Death_FX_Setup(bool Remove, class AEnemyPawn_Parent_C* Pawn);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UParticleSystemComponent* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void Rerun();
	void ExecuteUbergraph_GC_NPC_Elemental_Lightning(int32 EntryPoint, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Array_Get_Item, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_3, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
