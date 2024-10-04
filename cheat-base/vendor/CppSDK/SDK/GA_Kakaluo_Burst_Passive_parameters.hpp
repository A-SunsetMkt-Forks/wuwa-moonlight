#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Kakaluo_Burst_Passive

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Kakaluo_Burst_Passive.GA_Kakaluo_Burst_Passive_C.ExecuteUbergraph_GA_Kakaluo_Burst_Passive
// 0x0098 (0x0098 - 0x0000)
struct GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0028)(ZeroConstructor)
	struct FGameplayTag                           K2Node_CustomEvent_Tag;                            // 0x0038(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable;                                // 0x0044(0x000C)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________3;                              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________4;                              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive) == 0x000008, "Wrong alignment on GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive");
static_assert(sizeof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive) == 0x000098, "Wrong size on GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, EntryPoint) == 0x000000, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, CallFunc__________) == 0x000008, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, K2Node_CustomEvent_Tag) == 0x000038, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::K2Node_CustomEvent_Tag' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, ___struct_Variable) == 0x000044, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, K2Node_Event_bWasCancelled) == 0x000050, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, CallFunc___________1) == 0x000058, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, CallFunc___________2) == 0x000060, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, CallFunc___________3) == 0x000068, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, CallFunc___________4) == 0x000070, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000078, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, CallFunc___________5) == 0x000088, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive, CallFunc___________6) == 0x000090, "Member 'GA_Kakaluo_Burst_Passive_C_ExecuteUbergraph_GA_Kakaluo_Burst_Passive::CallFunc___________6' has a wrong offset!");

// Function GA_Kakaluo_Burst_Passive.GA_Kakaluo_Burst_Passive_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Kakaluo_Burst_Passive_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Kakaluo_Burst_Passive_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Kakaluo_Burst_Passive_C_K2_OnEndAbility");
static_assert(sizeof(GA_Kakaluo_Burst_Passive_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Kakaluo_Burst_Passive_C_K2_OnEndAbility");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Kakaluo_Burst_Passive_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Kakaluo_Burst_Passive.GA_Kakaluo_Burst_Passive_C.Added_21071CB943CD992BF8EFD6A39E8555B1
// 0x000C (0x000C - 0x0000)
struct GA_Kakaluo_Burst_Passive_C_Added_21071CB943CD992BF8EFD6A39E8555B1 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Kakaluo_Burst_Passive_C_Added_21071CB943CD992BF8EFD6A39E8555B1) == 0x000004, "Wrong alignment on GA_Kakaluo_Burst_Passive_C_Added_21071CB943CD992BF8EFD6A39E8555B1");
static_assert(sizeof(GA_Kakaluo_Burst_Passive_C_Added_21071CB943CD992BF8EFD6A39E8555B1) == 0x00000C, "Wrong size on GA_Kakaluo_Burst_Passive_C_Added_21071CB943CD992BF8EFD6A39E8555B1");
static_assert(offsetof(GA_Kakaluo_Burst_Passive_C_Added_21071CB943CD992BF8EFD6A39E8555B1, Tag) == 0x000000, "Member 'GA_Kakaluo_Burst_Passive_C_Added_21071CB943CD992BF8EFD6A39E8555B1::Tag' has a wrong offset!");

}
