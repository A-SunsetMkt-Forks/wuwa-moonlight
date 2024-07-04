#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RainComponent_CommonDrop

#include "Basic.hpp"

#include "SCommonRainSpawnerConfig_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_RainComponent_CommonDrop.BP_RainComponent_CommonDrop_C.DeactivateRain
// 0x0002 (0x0002 - 0x0000)
struct BP_RainComponent_CommonDrop_C_DeactivateRain final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RainComponent_CommonDrop_C_DeactivateRain) == 0x000001, "Wrong alignment on BP_RainComponent_CommonDrop_C_DeactivateRain");
static_assert(sizeof(BP_RainComponent_CommonDrop_C_DeactivateRain) == 0x000002, "Wrong size on BP_RainComponent_CommonDrop_C_DeactivateRain");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_DeactivateRain, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_RainComponent_CommonDrop_C_DeactivateRain::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_DeactivateRain, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'BP_RainComponent_CommonDrop_C_DeactivateRain::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_RainComponent_CommonDrop.BP_RainComponent_CommonDrop_C.StopRain
// 0x0001 (0x0001 - 0x0000)
struct BP_RainComponent_CommonDrop_C_StopRain final
{
public:
	bool                                          CallFunc_GetIsPlaying_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RainComponent_CommonDrop_C_StopRain) == 0x000001, "Wrong alignment on BP_RainComponent_CommonDrop_C_StopRain");
static_assert(sizeof(BP_RainComponent_CommonDrop_C_StopRain) == 0x000001, "Wrong size on BP_RainComponent_CommonDrop_C_StopRain");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_StopRain, CallFunc_GetIsPlaying_ReturnValue) == 0x000000, "Member 'BP_RainComponent_CommonDrop_C_StopRain::CallFunc_GetIsPlaying_ReturnValue' has a wrong offset!");

// Function BP_RainComponent_CommonDrop.BP_RainComponent_CommonDrop_C.Start Rain
// 0x0040 (0x0040 - 0x0000)
struct BP_RainComponent_CommonDrop_C_Start_Rain final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35AA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> ___delegate_Variable;                              // 0x0004(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35AB[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_GetChildComponent_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35AC[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      K2Node_DynamicCast_AsNiagara____;                  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsPlaying_ReturnValue;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RainComponent_CommonDrop_C_Start_Rain) == 0x000008, "Wrong alignment on BP_RainComponent_CommonDrop_C_Start_Rain");
static_assert(sizeof(BP_RainComponent_CommonDrop_C_Start_Rain) == 0x000040, "Wrong size on BP_RainComponent_CommonDrop_C_Start_Rain");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_Start_Rain, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_RainComponent_CommonDrop_C_Start_Rain::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_Start_Rain, ___delegate_Variable) == 0x000004, "Member 'BP_RainComponent_CommonDrop_C_Start_Rain::___delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_Start_Rain, CallFunc_PostEvent_ReturnValue) == 0x000018, "Member 'BP_RainComponent_CommonDrop_C_Start_Rain::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_Start_Rain, CallFunc_GetChildComponent_ReturnValue) == 0x000020, "Member 'BP_RainComponent_CommonDrop_C_Start_Rain::CallFunc_GetChildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_Start_Rain, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'BP_RainComponent_CommonDrop_C_Start_Rain::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_Start_Rain, K2Node_DynamicCast_AsNiagara____) == 0x000030, "Member 'BP_RainComponent_CommonDrop_C_Start_Rain::K2Node_DynamicCast_AsNiagara____' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_Start_Rain, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_RainComponent_CommonDrop_C_Start_Rain::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_Start_Rain, CallFunc_GetIsPlaying_ReturnValue) == 0x000039, "Member 'BP_RainComponent_CommonDrop_C_Start_Rain::CallFunc_GetIsPlaying_ReturnValue' has a wrong offset!");

// Function BP_RainComponent_CommonDrop.BP_RainComponent_CommonDrop_C.PreSolveRainParticles
// 0x0004 (0x0004 - 0x0000)
struct BP_RainComponent_CommonDrop_C_PreSolveRainParticles final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RainComponent_CommonDrop_C_PreSolveRainParticles) == 0x000004, "Wrong alignment on BP_RainComponent_CommonDrop_C_PreSolveRainParticles");
static_assert(sizeof(BP_RainComponent_CommonDrop_C_PreSolveRainParticles) == 0x000004, "Wrong size on BP_RainComponent_CommonDrop_C_PreSolveRainParticles");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_PreSolveRainParticles, DeltaSeconds) == 0x000000, "Member 'BP_RainComponent_CommonDrop_C_PreSolveRainParticles::DeltaSeconds' has a wrong offset!");

// Function BP_RainComponent_CommonDrop.BP_RainComponent_CommonDrop_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_RainComponent_CommonDrop_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RainComponent_CommonDrop_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_RainComponent_CommonDrop_C_ReceiveEndPlay");
static_assert(sizeof(BP_RainComponent_CommonDrop_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_RainComponent_CommonDrop_C_ReceiveEndPlay");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_RainComponent_CommonDrop_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_RainComponent_CommonDrop.BP_RainComponent_CommonDrop_C.ExecuteUbergraph_BP_RainComponent_CommonDrop
// 0x0200 (0x0200 - 0x0000)
struct BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable_1;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddCycleBoxProcessor_ReturnValue;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSCommonRainSpawnerConfig              CallFunc_Array_Get_Item;                           // 0x001C(0x0044)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddRandomSpawner_ReturnValue;             // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddArraySpawner_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable_1;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35AD[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddCustomRandomByNormalizedAgeProcessor_ReturnValue; // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddCustomRandomByVelocityProcessor_ReturnValue; // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddLinearForceProcessor_ReturnValue;      // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddWindProcessor_ReturnValue;             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSCommonRainSpawnerConfig              CallFunc_Array_Get_Item_1;                         // 0x0088(0x0044)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35AE[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value;                           // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35AF[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value_1;                         // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35B0[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDragProcessor_ReturnValue;             // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;           // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0168(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop) == 0x000004, "Wrong alignment on BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop");
static_assert(sizeof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop) == 0x000200, "Wrong size on BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, EntryPoint) == 0x000000, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, ___int_Loop_Counter_Variable) == 0x000004, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, ___int_Array_Index_Variable) == 0x00000C, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, ___int_Array_Index_Variable_1) == 0x000010, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::___int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, K2Node_Event_DeltaSeconds) == 0x000014, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_AddCycleBoxProcessor_ReturnValue) == 0x000018, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_AddCycleBoxProcessor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Array_Get_Item) == 0x00001C, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_AddRandomSpawner_ReturnValue) == 0x000064, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_AddRandomSpawner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_AddArraySpawner_ReturnValue) == 0x000068, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_AddArraySpawner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, ___int_Loop_Counter_Variable_1) == 0x00006C, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::___int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Add_IntInt_ReturnValue_1) == 0x000074, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_AddCustomRandomByNormalizedAgeProcessor_ReturnValue) == 0x000078, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_AddCustomRandomByNormalizedAgeProcessor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_AddCustomRandomByVelocityProcessor_ReturnValue) == 0x00007C, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_AddCustomRandomByVelocityProcessor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_AddLinearForceProcessor_ReturnValue) == 0x000080, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_AddLinearForceProcessor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_AddWindProcessor_ReturnValue) == 0x000084, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_AddWindProcessor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Array_Length_ReturnValue_1) == 0x0000CC, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000D0, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Map_Find_Value) == 0x0000D4, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Map_Find_ReturnValue) == 0x0000D8, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Map_Find_Value_1) == 0x0000DC, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Map_Find_ReturnValue_1) == 0x0000E0, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000E4, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000E8, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000EC, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_MakeVector_ReturnValue) == 0x0000F0, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_AddDragProcessor_ReturnValue) == 0x0000FC, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_AddDragProcessor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Add_VectorVector_ReturnValue) == 0x000100, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_MakeVector_ReturnValue_1) == 0x00010C, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000118, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000124, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_MakeVector_ReturnValue_2) == 0x000130, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Add_VectorVector_ReturnValue_1) == 0x00013C, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Divide_VectorFloat_ReturnValue) == 0x000148, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Divide_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000154, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000158, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x000164, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000168, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop, K2Node_Event_EndPlayReason) == 0x0001FC, "Member 'BP_RainComponent_CommonDrop_C_ExecuteUbergraph_BP_RainComponent_CommonDrop::K2Node_Event_EndPlayReason' has a wrong offset!");

}

