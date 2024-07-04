#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CloudCards

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CloudCards.BP_CloudCards_C.UserConstructionScript
// 0x0080 (0x0080 - 0x0000)
struct BP_CloudCards_C_UserConstructionScript final
{
public:
	struct FTransform                             ___struct_Variable;                                // 0x0000(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	int32                                         ___int_Array_Index_Variable;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_283B[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_283C[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          CallFunc_MakeRandomStream_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CloudCards_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_CloudCards_C_UserConstructionScript");
static_assert(sizeof(BP_CloudCards_C_UserConstructionScript) == 0x000080, "Wrong size on BP_CloudCards_C_UserConstructionScript");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, ___struct_Variable) == 0x000000, "Member 'BP_CloudCards_C_UserConstructionScript::___struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, ___int_Array_Index_Variable) == 0x000030, "Member 'BP_CloudCards_C_UserConstructionScript::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000038, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_Multiply_IntInt_ReturnValue) == 0x000040, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, ___int_Loop_Counter_Variable) == 0x000044, "Member 'BP_CloudCards_C_UserConstructionScript::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_MakeRandomStream_ReturnValue) == 0x000060, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_MakeRandomStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x000068, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00006C, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue) == 0x000070, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000074, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UserConstructionScript, CallFunc_Add_FloatFloat_ReturnValue) == 0x000078, "Member 'BP_CloudCards_C_UserConstructionScript::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_CloudCards.BP_CloudCards_C.UpdateCloudPos
// 0x0128 (0x0128 - 0x0000)
struct BP_CloudCards_C_UpdateCloudPos final
{
public:
	float                                         TimeOfDay;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SunDir;                                            // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_283D[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RotatorFromAxisAndAngle_ReturnValue;      // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_283E[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0094(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_CloudCards_C_UpdateCloudPos) == 0x000008, "Wrong alignment on BP_CloudCards_C_UpdateCloudPos");
static_assert(sizeof(BP_CloudCards_C_UpdateCloudPos) == 0x000128, "Wrong size on BP_CloudCards_C_UpdateCloudPos");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, TimeOfDay) == 0x000000, "Member 'BP_CloudCards_C_UpdateCloudPos::TimeOfDay' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, SunDir) == 0x000004, "Member 'BP_CloudCards_C_UpdateCloudPos::SunDir' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, ___int_Array_Index_Variable) == 0x000010, "Member 'BP_CloudCards_C_UpdateCloudPos::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, ___int_Loop_Counter_Variable) == 0x000014, "Member 'BP_CloudCards_C_UpdateCloudPos::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_MakeVector_ReturnValue) == 0x000028, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000034, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00003C, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_Add_FloatFloat_ReturnValue) == 0x000040, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_RotatorFromAxisAndAngle_ReturnValue) == 0x000050, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_RotatorFromAxisAndAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x00005C, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_ComposeRotators_ReturnValue) == 0x000068, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000074, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_Add_VectorVector_ReturnValue) == 0x000084, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_UpdateCloudPos, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000094, "Member 'BP_CloudCards_C_UpdateCloudPos::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");

// Function BP_CloudCards.BP_CloudCards_C.SetupCloudMesh
// 0x01B8 (0x01B8 - 0x0000)
struct BP_CloudCards_C_SetupCloudMesh final
{
public:
	class UStaticMeshComponent*                   MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CloudTex;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotAngle;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandSeed;                                          // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               LocalMID;                                          // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             ___object_Variable;                                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          CallFunc_MakeRandomStream_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RotatorFromAxisAndAngle_ReturnValue;      // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_283F[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Multiply_LinearColorFloat_ReturnValue_1;  // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Multiply_LinearColorFloat_ReturnValue_2;  // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_Variable;                                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2840[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0108(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x01A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CloudCards_C_SetupCloudMesh) == 0x000008, "Wrong alignment on BP_CloudCards_C_SetupCloudMesh");
static_assert(sizeof(BP_CloudCards_C_SetupCloudMesh) == 0x0001B8, "Wrong size on BP_CloudCards_C_SetupCloudMesh");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, MeshComp) == 0x000000, "Member 'BP_CloudCards_C_SetupCloudMesh::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CloudTex) == 0x000008, "Member 'BP_CloudCards_C_SetupCloudMesh::CloudTex' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, RotAngle) == 0x000010, "Member 'BP_CloudCards_C_SetupCloudMesh::RotAngle' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, RandSeed) == 0x000014, "Member 'BP_CloudCards_C_SetupCloudMesh::RandSeed' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, LocalMID) == 0x000018, "Member 'BP_CloudCards_C_SetupCloudMesh::LocalMID' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, ___object_Variable) == 0x000020, "Member 'BP_CloudCards_C_SetupCloudMesh::___object_Variable' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_MakeRandomStream_ReturnValue) == 0x000028, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_MakeRandomStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x000030, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_RotatorFromAxisAndAngle_ReturnValue) == 0x000034, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_RotatorFromAxisAndAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000048, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_BreakVector2D_X) == 0x000050, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_BreakVector2D_Y) == 0x000054, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_Multiply_LinearColorFloat_ReturnValue) == 0x000058, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_Multiply_LinearColorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_Multiply_LinearColorFloat_ReturnValue_1) == 0x000068, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_Multiply_LinearColorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_Multiply_LinearColorFloat_ReturnValue_2) == 0x000078, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_Multiply_LinearColorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_BreakVector2D_X_1) == 0x000088, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_BreakVector2D_Y_1) == 0x00008C, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, K2Node_MakeStruct_LinearColor) == 0x000090, "Member 'BP_CloudCards_C_SetupCloudMesh::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, ___bool_Variable) == 0x0000A0, "Member 'BP_CloudCards_C_SetupCloudMesh::___bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, K2Node_Select_Default) == 0x0000A8, "Member 'BP_CloudCards_C_SetupCloudMesh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_Array_Add_ReturnValue) == 0x0000B0, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B4, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_MakeVector_ReturnValue) == 0x0000C0, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_ComposeRotators_ReturnValue) == 0x0000CC, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x0000D8, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000E4, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000E8, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000F4, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_Add_VectorVector_ReturnValue) == 0x0000F8, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000104, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000108, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x00019C, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_Multiply_FloatFloat_ReturnValue_4) == 0x0001A0, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_Multiply_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_MakeVector_ReturnValue_1) == 0x0001A4, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CloudCards_C_SetupCloudMesh, CallFunc_Array_Add_ReturnValue_1) == 0x0001B0, "Member 'BP_CloudCards_C_SetupCloudMesh::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

}

