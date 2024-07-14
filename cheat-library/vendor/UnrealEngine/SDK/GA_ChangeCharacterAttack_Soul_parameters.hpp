#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ChangeCharacterAttack_Soul

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_ChangeCharacterAttack_Soul.GA_ChangeCharacterAttack_Soul_C.ExecuteUbergraph_GA_ChangeCharacterAttack_Soul
// 0x0370 (0x0370 - 0x0000)
struct GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_361B[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_361C[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_361D[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x005C(0x0014)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361E[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________2;                              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0090(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_361F[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3620[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_____GA______________;                     // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x00C8(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3621[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3622[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     ___struct_Variable;                                // 0x0100(0x00B8)()
	class UAnimMontage*                           CallFunc___________3;                              // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3623[0x3];                                     // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x01C4(0x0014)(ZeroConstructor, NoDestructor)
	float                                         CallFunc__________SpeedRatio;                      // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3624[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3625[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________4;                              // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________1;                          // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3626[0x6];                                     // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0200(0x00B8)()
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________7;                              // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________8;                              // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________9;                              // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x02F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________10;                             // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_____ID___ID;                              // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSummonerEntityId_ReturnValue;          // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_____String_String;                        // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc_____ID_______;                            // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_____ID___________;                        // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0329(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3627[0x6];                                     // 0x032A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________11;                             // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_____ID___ID_1;                            // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSummonerEntityId_ReturnValue_1;        // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc_____ID________1;                          // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_____ID____________1;                      // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3628[0x3];                                     // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x034C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc____________;                              // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0360(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul) == 0x000008, "Wrong alignment on GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul");
static_assert(sizeof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul) == 0x000370, "Wrong size on GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, EntryPoint) == 0x000000, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc__________) == 0x000030, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc___________1) == 0x000038, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc______________) == 0x000040, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000048, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, K2Node_DynamicCast_AsTs_Base_Character) == 0x000050, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, K2Node_CreateDelegate_OutputDelegate_2) == 0x00005C, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000070, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc___________2) == 0x000078, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_GetDisplayName_ReturnValue) == 0x000080, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, K2Node_CreateDelegate_OutputDelegate_3) == 0x000090, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_GetObjectClass_ReturnValue) == 0x0000A8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x0000B0, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_____GA______________) == 0x0000B8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000C8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0000E0, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_Conv_NameToString_ReturnValue) == 0x0000E8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_IsValid_ReturnValue) == 0x0000F8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, ___struct_Variable) == 0x000100, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc___________3) == 0x0001B8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_IsValid_ReturnValue_1) == 0x0001C0, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, K2Node_CreateDelegate_OutputDelegate_5) == 0x0001C4, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc__________SpeedRatio) == 0x0001D8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0001E0, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_IsValid_ReturnValue_2) == 0x0001E8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc___________4) == 0x0001F0, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_______________1) == 0x0001F8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, K2Node_Event_bWasCancelled) == 0x0001F9, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, K2Node_CustomEvent_Payload) == 0x000200, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc___________5) == 0x0002B8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc___________6) == 0x0002C0, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc___________6' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc___________7) == 0x0002C8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc___________7' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc___________8) == 0x0002D0, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc___________8' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_GetDisplayName_ReturnValue_1) == 0x0002D8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc___________9) == 0x0002E8, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc___________9' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_Conv_IntToString_ReturnValue) == 0x0002F0, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc___________10) == 0x000300, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc___________10' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_____ID___ID) == 0x000308, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_____ID___ID' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_GetSummonerEntityId_ReturnValue) == 0x00030C, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_GetSummonerEntityId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_____String_String) == 0x000310, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_____String_String' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_____ID_______) == 0x000320, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_____ID_______' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_____ID___________) == 0x000328, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_____ID___________' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000329, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc___________11) == 0x000330, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc___________11' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_____ID___ID_1) == 0x000338, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_____ID___ID_1' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_GetSummonerEntityId_ReturnValue_1) == 0x00033C, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_GetSummonerEntityId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_____ID________1) == 0x000340, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_____ID________1' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_____ID____________1) == 0x000348, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_____ID____________1' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00034C, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc____________) == 0x000358, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc____________' has a wrong offset!");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000360, "Member 'GA_ChangeCharacterAttack_Soul_C_ExecuteUbergraph_GA_ChangeCharacterAttack_Soul::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");

// Function GA_ChangeCharacterAttack_Soul.GA_ChangeCharacterAttack_Soul_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_ChangeCharacterAttack_Soul_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_ChangeCharacterAttack_Soul_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_ChangeCharacterAttack_Soul_C_K2_OnEndAbility");
static_assert(sizeof(GA_ChangeCharacterAttack_Soul_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_ChangeCharacterAttack_Soul_C_K2_OnEndAbility");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_ChangeCharacterAttack_Soul_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_ChangeCharacterAttack_Soul.GA_ChangeCharacterAttack_Soul_C.EventReceived_18B59F5945020DB23C42FD88DC1AEEBC
// 0x00B8 (0x00B8 - 0x0000)
struct GA_ChangeCharacterAttack_Soul_C_EventReceived_18B59F5945020DB23C42FD88DC1AEEBC final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_ChangeCharacterAttack_Soul_C_EventReceived_18B59F5945020DB23C42FD88DC1AEEBC) == 0x000008, "Wrong alignment on GA_ChangeCharacterAttack_Soul_C_EventReceived_18B59F5945020DB23C42FD88DC1AEEBC");
static_assert(sizeof(GA_ChangeCharacterAttack_Soul_C_EventReceived_18B59F5945020DB23C42FD88DC1AEEBC) == 0x0000B8, "Wrong size on GA_ChangeCharacterAttack_Soul_C_EventReceived_18B59F5945020DB23C42FD88DC1AEEBC");
static_assert(offsetof(GA_ChangeCharacterAttack_Soul_C_EventReceived_18B59F5945020DB23C42FD88DC1AEEBC, Payload) == 0x000000, "Member 'GA_ChangeCharacterAttack_Soul_C_EventReceived_18B59F5945020DB23C42FD88DC1AEEBC::Payload' has a wrong offset!");

}
