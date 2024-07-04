#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Move_F_Net

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Role_Move_F_Net.GA_Role_Move_F_Net_C.ExecuteUbergraph_GA_Role_Move_F_Net
// 0x0198 (0x0198 - 0x0000)
struct GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0040(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2A58[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A59[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A5A[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0084(0x0014)(ZeroConstructor, NoDestructor)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A5B[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________2;                              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A5C[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ___struct_Variable;                                // 0x00CC(0x000C)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag;                            // 0x00D8(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A5D[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_____GA______________;                     // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate_5;            // 0x00F8(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2A5E[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_1;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable_1;                              // 0x0128(0x000C)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A5F[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________3;                              // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A60[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_CustomEvent_Tag_1;                          // 0x0144(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________4;                              // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate_6;            // 0x0158(0x0014)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_______________1;                          // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A61[0x2];                                     // 0x016E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________2;                          // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsKeyDown_ReturnValue;                    // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A62[0x2];                                     // 0x0182(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc__________SpeedRatio;                      // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net) == 0x000008, "Wrong alignment on GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net");
static_assert(sizeof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net) == 0x000198, "Wrong size on GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, EntryPoint) == 0x000000, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, K2Node_CreateDelegate_OutputDelegate_3) == 0x000040, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc__________) == 0x000058, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc___________1) == 0x000060, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc______________) == 0x000068, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000070, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, K2Node_DynamicCast_AsTs_Base_Character) == 0x000078, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, K2Node_CreateDelegate_OutputDelegate_4) == 0x000084, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000098, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000A0, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_IsValid_ReturnValue) == 0x0000A4, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc___________2) == 0x0000A8, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_GetDisplayName_ReturnValue) == 0x0000B0, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_GetObjectClass_ReturnValue) == 0x0000C0, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x0000C8, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, ___struct_Variable) == 0x0000CC, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, K2Node_CustomEvent_Tag) == 0x0000D8, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::K2Node_CustomEvent_Tag' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_____GA______________) == 0x0000E8, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000F8, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_Conv_NameToString_ReturnValue) == 0x000110, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_WaitGameplayTagAdd_ReturnValue_1) == 0x000120, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_WaitGameplayTagAdd_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, ___struct_Variable_1) == 0x000128, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::___struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_IsValid_ReturnValue_1) == 0x000134, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc___________3) == 0x000138, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_IsValid_ReturnValue_2) == 0x000140, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, K2Node_CustomEvent_Tag_1) == 0x000144, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::K2Node_CustomEvent_Tag_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc___________4) == 0x000150, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, K2Node_CreateDelegate_OutputDelegate_6) == 0x000158, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_______________1) == 0x00016C, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, K2Node_Event_bWasCancelled) == 0x00016D, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc___________5) == 0x000170, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc___________6) == 0x000178, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc___________6' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_______________2) == 0x000180, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_______________2' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_IsKeyDown_ReturnValue) == 0x000181, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_IsKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc__________SpeedRatio) == 0x000184, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000188, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net, CallFunc_IsValid_ReturnValue_3) == 0x000190, "Member 'GA_Role_Move_F_Net_C_ExecuteUbergraph_GA_Role_Move_F_Net::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function GA_Role_Move_F_Net.GA_Role_Move_F_Net_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Role_Move_F_Net_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Role_Move_F_Net_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Role_Move_F_Net_C_K2_OnEndAbility");
static_assert(sizeof(GA_Role_Move_F_Net_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Role_Move_F_Net_C_K2_OnEndAbility");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Role_Move_F_Net_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Role_Move_F_Net.GA_Role_Move_F_Net_C.Added_21071CB943CD992BF8EFD6A382AFCAE1
// 0x000C (0x000C - 0x0000)
struct GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A382AFCAE1 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A382AFCAE1) == 0x000004, "Wrong alignment on GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A382AFCAE1");
static_assert(sizeof(GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A382AFCAE1) == 0x00000C, "Wrong size on GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A382AFCAE1");
static_assert(offsetof(GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A382AFCAE1, Tag) == 0x000000, "Member 'GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A382AFCAE1::Tag' has a wrong offset!");

// Function GA_Role_Move_F_Net.GA_Role_Move_F_Net_C.Added_21071CB943CD992BF8EFD6A3DAFC9936
// 0x000C (0x000C - 0x0000)
struct GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A3DAFC9936 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A3DAFC9936) == 0x000004, "Wrong alignment on GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A3DAFC9936");
static_assert(sizeof(GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A3DAFC9936) == 0x00000C, "Wrong size on GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A3DAFC9936");
static_assert(offsetof(GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A3DAFC9936, Tag) == 0x000000, "Member 'GA_Role_Move_F_Net_C_Added_21071CB943CD992BF8EFD6A3DAFC9936::Tag' has a wrong offset!");

// Function GA_Role_Move_F_Net.GA_Role_Move_F_Net_C.K2_CanActivateAbility
// 0x00C8 (0x00C8 - 0x0000)
struct GA_Role_Move_F_Net_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0050(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A63[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_K2_CanActivateAbility_RelevantTags;       // 0x0078(0x0020)()
	bool                                          CallFunc_K2_CanActivateAbility_ReturnValue;        // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A64[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTagCount_ReturnValue;                  // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A65[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Role_Move_F_Net_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_Role_Move_F_Net_C_K2_CanActivateAbility");
static_assert(sizeof(GA_Role_Move_F_Net_C_K2_CanActivateAbility) == 0x0000C8, "Wrong size on GA_Role_Move_F_Net_C_K2_CanActivateAbility");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_Role_Move_F_Net_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GA_Role_Move_F_Net_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GA_Role_Move_F_Net_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_CanActivateAbility, CallFunc_K2_CanActivateAbility_RelevantTags) == 0x000078, "Member 'GA_Role_Move_F_Net_C_K2_CanActivateAbility::CallFunc_K2_CanActivateAbility_RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_CanActivateAbility, CallFunc_K2_CanActivateAbility_ReturnValue) == 0x000098, "Member 'GA_Role_Move_F_Net_C_K2_CanActivateAbility::CallFunc_K2_CanActivateAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_CanActivateAbility, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000A0, "Member 'GA_Role_Move_F_Net_C_K2_CanActivateAbility::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_CanActivateAbility, CallFunc_GetTagCount_ReturnValue) == 0x0000A8, "Member 'GA_Role_Move_F_Net_C_K2_CanActivateAbility::CallFunc_GetTagCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_CanActivateAbility, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x0000B0, "Member 'GA_Role_Move_F_Net_C_K2_CanActivateAbility::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_CanActivateAbility, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0000C0, "Member 'GA_Role_Move_F_Net_C_K2_CanActivateAbility::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_CanActivateAbility, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000C1, "Member 'GA_Role_Move_F_Net_C_K2_CanActivateAbility::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_CanActivateAbility, CallFunc_Not_PreBool_ReturnValue) == 0x0000C2, "Member 'GA_Role_Move_F_Net_C_K2_CanActivateAbility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Move_F_Net_C_K2_CanActivateAbility, CallFunc_BooleanAND_ReturnValue) == 0x0000C3, "Member 'GA_Role_Move_F_Net_C_K2_CanActivateAbility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

