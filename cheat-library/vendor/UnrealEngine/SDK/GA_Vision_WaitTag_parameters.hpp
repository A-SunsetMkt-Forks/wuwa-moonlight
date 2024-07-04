#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Vision_WaitTag

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "SVisionData_structs.hpp"


namespace SDK::Params
{

// Function GA_Vision_WaitTag.GA_Vision_WaitTag_C.ExecuteUbergraph_GA_Vision_WaitTag
// 0x0198 (0x0198 - 0x0000)
struct GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0014)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           K2Node_CustomEvent_Tag;                            // 0x001C(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable;                                // 0x0028(0x000C)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3910[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ___int_Array_Index_Variable;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3911[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc__________;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3912[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ___int_Array_Index_Variable_1;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable_1;                              // 0x0054(0x000C)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3913[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable_1;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable_2;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable_2;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_1;                          // 0x0078(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseVision_C*                       K2Node_DynamicCast_AsBP_Base_Vision;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3914[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate_1;            // 0x009C(0x0014)(ZeroConstructor, NoDestructor)
	struct FSVisionData                           CallFunc____________;                              // 0x00B0(0x0098)(ContainsInstancedReference, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc_____________1;                            // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_Array_Get_Item_1;                         // 0x0150(0x000C)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3915[0x6];                                     // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3916[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_Array_Get_Item_2;                         // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc___________1;                              // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag) == 0x000008, "Wrong alignment on GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag");
static_assert(sizeof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag) == 0x000198, "Wrong size on GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, EntryPoint) == 0x000000, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, K2Node_CustomEvent_Tag) == 0x00001C, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::K2Node_CustomEvent_Tag' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, ___struct_Variable) == 0x000028, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, K2Node_Event_bWasCancelled) == 0x000034, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, ___int_Array_Index_Variable) == 0x000038, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Array_Get_Item) == 0x000040, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc__________) == 0x000048, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, ___int_Array_Index_Variable_1) == 0x00004C, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::___int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, ___int_Loop_Counter_Variable) == 0x000050, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, ___struct_Variable_1) == 0x000054, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::___struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, ___int_Loop_Counter_Variable_1) == 0x000068, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::___int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, ___int_Array_Index_Variable_2) == 0x00006C, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::___int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, ___int_Loop_Counter_Variable_2) == 0x000074, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::___int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, K2Node_CustomEvent_Tag_1) == 0x000078, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::K2Node_CustomEvent_Tag_1' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Add_IntInt_ReturnValue_2) == 0x000084, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000088, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, K2Node_DynamicCast_AsBP_Base_Vision) == 0x000090, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::K2Node_DynamicCast_AsBP_Base_Vision' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, K2Node_CreateDelegate_OutputDelegate_1) == 0x00009C, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc____________) == 0x0000B0, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc____________' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_____________1) == 0x000148, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_____________1' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Array_Get_Item_1) == 0x000150, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Array_Length_ReturnValue_1) == 0x00015C, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000160, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Less_IntInt_ReturnValue_1) == 0x000168, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_IsValid_ReturnValue) == 0x000169, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x000170, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Array_Add_ReturnValue) == 0x000178, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_IsValid_ReturnValue_1) == 0x00017C, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Array_Add_ReturnValue_1) == 0x000180, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Array_Length_ReturnValue_2) == 0x000184, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Array_Get_Item_2) == 0x000188, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc_Less_IntInt_ReturnValue_2) == 0x000190, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag, CallFunc___________1) == 0x000191, "Member 'GA_Vision_WaitTag_C_ExecuteUbergraph_GA_Vision_WaitTag::CallFunc___________1' has a wrong offset!");

// Function GA_Vision_WaitTag.GA_Vision_WaitTag_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Vision_WaitTag_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Vision_WaitTag_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Vision_WaitTag_C_K2_OnEndAbility");
static_assert(sizeof(GA_Vision_WaitTag_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Vision_WaitTag_C_K2_OnEndAbility");
static_assert(offsetof(GA_Vision_WaitTag_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Vision_WaitTag_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Vision_WaitTag.GA_Vision_WaitTag_C.Added_21071CB943CD992BF8EFD6A338ACB336
// 0x000C (0x000C - 0x0000)
struct GA_Vision_WaitTag_C_Added_21071CB943CD992BF8EFD6A338ACB336 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Vision_WaitTag_C_Added_21071CB943CD992BF8EFD6A338ACB336) == 0x000004, "Wrong alignment on GA_Vision_WaitTag_C_Added_21071CB943CD992BF8EFD6A338ACB336");
static_assert(sizeof(GA_Vision_WaitTag_C_Added_21071CB943CD992BF8EFD6A338ACB336) == 0x00000C, "Wrong size on GA_Vision_WaitTag_C_Added_21071CB943CD992BF8EFD6A338ACB336");
static_assert(offsetof(GA_Vision_WaitTag_C_Added_21071CB943CD992BF8EFD6A338ACB336, Tag) == 0x000000, "Member 'GA_Vision_WaitTag_C_Added_21071CB943CD992BF8EFD6A338ACB336::Tag' has a wrong offset!");

// Function GA_Vision_WaitTag.GA_Vision_WaitTag_C.Removed_DB9F64004F8908FEAD99D3815F1E8945
// 0x000C (0x000C - 0x0000)
struct GA_Vision_WaitTag_C_Removed_DB9F64004F8908FEAD99D3815F1E8945 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Vision_WaitTag_C_Removed_DB9F64004F8908FEAD99D3815F1E8945) == 0x000004, "Wrong alignment on GA_Vision_WaitTag_C_Removed_DB9F64004F8908FEAD99D3815F1E8945");
static_assert(sizeof(GA_Vision_WaitTag_C_Removed_DB9F64004F8908FEAD99D3815F1E8945) == 0x00000C, "Wrong size on GA_Vision_WaitTag_C_Removed_DB9F64004F8908FEAD99D3815F1E8945");
static_assert(offsetof(GA_Vision_WaitTag_C_Removed_DB9F64004F8908FEAD99D3815F1E8945, Tag) == 0x000000, "Member 'GA_Vision_WaitTag_C_Removed_DB9F64004F8908FEAD99D3815F1E8945::Tag' has a wrong offset!");

}

