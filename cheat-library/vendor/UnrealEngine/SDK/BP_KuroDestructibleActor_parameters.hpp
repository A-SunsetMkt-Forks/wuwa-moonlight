#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KuroDestructibleActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_KuroDestructibleActor.BP_KuroDestructibleActor_C.ExecuteUbergraph_BP_KuroDestructibleActor
// 0x00F0 (0x00F0 - 0x0000)
struct BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_HitPoint;                       // 0x0004(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_HitDirection;                   // 0x0010(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_300D[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_300E[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_SoftObjectReferenceToString_ReturnValue; // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_SpawnEffect_ReturnValue;                  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_HurtOrigin;                     // 0x007C(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Impluse;                        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsZeroImpluse;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_300F[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_QuickInitAndAddDataWithMeshComponent_ReturnValue; // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCollisionProfileName_ReturnValue;      // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDestructibleMesh*                      CallFunc_GetDestructibleMesh_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FVector& HitPoint, struct FVector& HitDirection)> K2Node_CreateDelegate_OutputDelegate;              // 0x00A8(0x0014)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3010[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobile_ReturnValue;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3011[0x2];                                     // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor) == 0x000010, "Wrong alignment on BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor");
static_assert(sizeof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor) == 0x0000F0, "Wrong size on BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, EntryPoint) == 0x000000, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, K2Node_CustomEvent_HitPoint) == 0x000004, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::K2Node_CustomEvent_HitPoint' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, K2Node_CustomEvent_HitDirection) == 0x000010, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::K2Node_CustomEvent_HitDirection' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_MakeRotFromX_ReturnValue) == 0x00001C, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000060, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_Conv_SoftObjectReferenceToString_ReturnValue) == 0x000068, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_Conv_SoftObjectReferenceToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_SpawnEffect_ReturnValue) == 0x000078, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_SpawnEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, K2Node_CustomEvent_HurtOrigin) == 0x00007C, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::K2Node_CustomEvent_HurtOrigin' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, K2Node_CustomEvent_Impluse) == 0x000088, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::K2Node_CustomEvent_Impluse' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, K2Node_CustomEvent_IsZeroImpluse) == 0x00008C, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::K2Node_CustomEvent_IsZeroImpluse' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_IsValid_ReturnValue) == 0x00008D, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_QuickInitAndAddDataWithMeshComponent_ReturnValue) == 0x000090, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_QuickInitAndAddDataWithMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_GetCollisionProfileName_ReturnValue) == 0x000094, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_GetCollisionProfileName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_GetDestructibleMesh_ReturnValue) == 0x0000A0, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_GetDestructibleMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, K2Node_CreateDelegate_OutputDelegate) == 0x0000A8, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_IsValid_ReturnValue_1) == 0x0000BC, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_Add_VectorVector_ReturnValue) == 0x0000C0, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000CC, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_IsMobile_ReturnValue) == 0x0000D0, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_IsMobile_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_SetStaticMesh_ReturnValue) == 0x0000D1, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000D4, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000E0, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor, CallFunc_BooleanOR_ReturnValue) == 0x0000EC, "Member 'BP_KuroDestructibleActor_C_ExecuteUbergraph_BP_KuroDestructibleActor::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_KuroDestructibleActor.BP_KuroDestructibleActor_C.PlayDestruction
// 0x0014 (0x0014 - 0x0000)
struct BP_KuroDestructibleActor_C_PlayDestruction final
{
public:
	struct FVector                                Param_HurtOrigin;                                  // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_Impluse;                                     // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsZeroImpluse;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroDestructibleActor_C_PlayDestruction) == 0x000004, "Wrong alignment on BP_KuroDestructibleActor_C_PlayDestruction");
static_assert(sizeof(BP_KuroDestructibleActor_C_PlayDestruction) == 0x000014, "Wrong size on BP_KuroDestructibleActor_C_PlayDestruction");
static_assert(offsetof(BP_KuroDestructibleActor_C_PlayDestruction, Param_HurtOrigin) == 0x000000, "Member 'BP_KuroDestructibleActor_C_PlayDestruction::Param_HurtOrigin' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_PlayDestruction, Param_Impluse) == 0x00000C, "Member 'BP_KuroDestructibleActor_C_PlayDestruction::Param_Impluse' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_PlayDestruction, IsZeroImpluse) == 0x000010, "Member 'BP_KuroDestructibleActor_C_PlayDestruction::IsZeroImpluse' has a wrong offset!");

// Function BP_KuroDestructibleActor.BP_KuroDestructibleActor_C.OnFractureEvent
// 0x0018 (0x0018 - 0x0000)
struct BP_KuroDestructibleActor_C_OnFractureEvent final
{
public:
	struct FVector                                HitPoint;                                          // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitDirection;                                      // 0x000C(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroDestructibleActor_C_OnFractureEvent) == 0x000004, "Wrong alignment on BP_KuroDestructibleActor_C_OnFractureEvent");
static_assert(sizeof(BP_KuroDestructibleActor_C_OnFractureEvent) == 0x000018, "Wrong size on BP_KuroDestructibleActor_C_OnFractureEvent");
static_assert(offsetof(BP_KuroDestructibleActor_C_OnFractureEvent, HitPoint) == 0x000000, "Member 'BP_KuroDestructibleActor_C_OnFractureEvent::HitPoint' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_OnFractureEvent, HitDirection) == 0x00000C, "Member 'BP_KuroDestructibleActor_C_OnFractureEvent::HitDirection' has a wrong offset!");

// Function BP_KuroDestructibleActor.BP_KuroDestructibleActor_C.ApplyDamage
// 0x0034 (0x0034 - 0x0000)
struct BP_KuroDestructibleActor_C_ApplyDamage final
{
public:
	struct FVector                                Param_HurtOrigin;                                  // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SpeedDirection;                                    // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp;                                              // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_Impluse;                                     // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Vector_IsNearlyZero_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3012[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3013[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroDestructibleActor_C_ApplyDamage) == 0x000004, "Wrong alignment on BP_KuroDestructibleActor_C_ApplyDamage");
static_assert(sizeof(BP_KuroDestructibleActor_C_ApplyDamage) == 0x000034, "Wrong size on BP_KuroDestructibleActor_C_ApplyDamage");
static_assert(offsetof(BP_KuroDestructibleActor_C_ApplyDamage, Param_HurtOrigin) == 0x000000, "Member 'BP_KuroDestructibleActor_C_ApplyDamage::Param_HurtOrigin' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ApplyDamage, SpeedDirection) == 0x00000C, "Member 'BP_KuroDestructibleActor_C_ApplyDamage::SpeedDirection' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ApplyDamage, Temp) == 0x000018, "Member 'BP_KuroDestructibleActor_C_ApplyDamage::Temp' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ApplyDamage, Param_Impluse) == 0x00001C, "Member 'BP_KuroDestructibleActor_C_ApplyDamage::Param_Impluse' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ApplyDamage, CallFunc_Vector_IsNearlyZero_ReturnValue) == 0x000020, "Member 'BP_KuroDestructibleActor_C_ApplyDamage::CallFunc_Vector_IsNearlyZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ApplyDamage, CallFunc_VSize_ReturnValue) == 0x000024, "Member 'BP_KuroDestructibleActor_C_ApplyDamage::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ApplyDamage, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_KuroDestructibleActor_C_ApplyDamage::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ApplyDamage, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'BP_KuroDestructibleActor_C_ApplyDamage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ApplyDamage, CallFunc_BooleanAND_ReturnValue) == 0x00002A, "Member 'BP_KuroDestructibleActor_C_ApplyDamage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ApplyDamage, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00002C, "Member 'BP_KuroDestructibleActor_C_ApplyDamage::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_ApplyDamage, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000030, "Member 'BP_KuroDestructibleActor_C_ApplyDamage::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function BP_KuroDestructibleActor.BP_KuroDestructibleActor_C.IsMobile
// 0x0020 (0x0020 - 0x0000)
struct BP_KuroDestructibleActor_C_IsMobile final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3014[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlatformName_ReturnValue;              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroDestructibleActor_C_IsMobile) == 0x000008, "Wrong alignment on BP_KuroDestructibleActor_C_IsMobile");
static_assert(sizeof(BP_KuroDestructibleActor_C_IsMobile) == 0x000020, "Wrong size on BP_KuroDestructibleActor_C_IsMobile");
static_assert(offsetof(BP_KuroDestructibleActor_C_IsMobile, ReturnValue) == 0x000000, "Member 'BP_KuroDestructibleActor_C_IsMobile::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_IsMobile, CallFunc_GetPlatformName_ReturnValue) == 0x000008, "Member 'BP_KuroDestructibleActor_C_IsMobile::CallFunc_GetPlatformName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_IsMobile, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000018, "Member 'BP_KuroDestructibleActor_C_IsMobile::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_IsMobile, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000019, "Member 'BP_KuroDestructibleActor_C_IsMobile::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_KuroDestructibleActor_C_IsMobile, CallFunc_BooleanOR_ReturnValue) == 0x00001A, "Member 'BP_KuroDestructibleActor_C_IsMobile::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

