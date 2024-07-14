#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BailianSoul_Listen_Rogue

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_BailianSoul_Listen_Rogue.GA_BailianSoul_Listen_Rogue_C.ExecuteUbergraph_GA_BailianSoul_Listen_Rogue
// 0x0648 (0x0648 - 0x0000)
struct GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34EE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0008(0x00B8)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_34EF[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     ___struct_Variable;                                // 0x00D8(0x00B8)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34F0[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34F1[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput;      // 0x01B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer;        // 0x01C8(0x0020)()
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput_1;    // 0x01F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer_1;      // 0x0208(0x0020)()
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput_2;    // 0x0228(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer_2;      // 0x0238(0x0020)()
	class AActor*                                 CallFunc____________;                              // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_____________1;                            // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0268(0x00B8)()
	class ATsBaseCharacter_C*                     CallFunc___________3;                              // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character_1;          // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34F2[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________4;                              // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput_3;    // 0x0348(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer_3;      // 0x0358(0x0020)()
	class AActor*                                 CallFunc_____________2;                            // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput_4;    // 0x0380(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer_4;      // 0x0390(0x0020)()
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_____________3;                            // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput_5;    // 0x03C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer_5;      // 0x03D0(0x0020)()
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_1;             // 0x03F0(0x00B8)()
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_2;             // 0x04A8(0x00B8)()
	class ATsBaseCharacter_C*                     CallFunc___________7;                              // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_3;             // 0x0568(0x00B8)()
	class ATsBaseCharacter_C*                     CallFunc___________8;                              // 0x0620(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_____ID___ID;                              // 0x0628(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSummonerEntityId_ReturnValue;          // 0x062C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc_____ID_______;                            // 0x0630(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_____ID___________;                        // 0x0638(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34F3[0x3];                                     // 0x0639(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc___Current_______;                         // 0x063C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0640(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue) == 0x000008, "Wrong alignment on GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue");
static_assert(sizeof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue) == 0x000648, "Wrong size on GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, EntryPoint) == 0x000000, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, K2Node_CustomEvent_Payload) == 0x000008, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, ___struct_Variable) == 0x0000D8, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000190, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, K2Node_DynamicCast_AsTs_Base_Character) == 0x0001A0, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, K2Node_DynamicCast_bSuccess) == 0x0001A8, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc__________) == 0x0001B0, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetOwnedGameplayTags_self_CastInput) == 0x0001B8, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetOwnedGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetOwnedGameplayTags_TagContainer) == 0x0001C8, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetOwnedGameplayTags_TagContainer' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc___________1) == 0x0001E8, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc___________2) == 0x0001F0, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetOwnedGameplayTags_self_CastInput_1) == 0x0001F8, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetOwnedGameplayTags_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetOwnedGameplayTags_TagContainer_1) == 0x000208, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetOwnedGameplayTags_TagContainer_1' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetOwnedGameplayTags_self_CastInput_2) == 0x000228, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetOwnedGameplayTags_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetOwnedGameplayTags_TagContainer_2) == 0x000238, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetOwnedGameplayTags_TagContainer_2' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc____________) == 0x000258, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc____________' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_____________1) == 0x000260, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_____________1' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, K2Node_MakeStruct_GameplayEventData) == 0x000268, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc___________3) == 0x000320, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, K2Node_DynamicCast_AsTs_Base_Character_1) == 0x000328, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::K2Node_DynamicCast_AsTs_Base_Character_1' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, K2Node_DynamicCast_bSuccess_1) == 0x000330, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc___________4) == 0x000338, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc___________5) == 0x000340, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetOwnedGameplayTags_self_CastInput_3) == 0x000348, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetOwnedGameplayTags_self_CastInput_3' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetOwnedGameplayTags_TagContainer_3) == 0x000358, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetOwnedGameplayTags_TagContainer_3' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_____________2) == 0x000378, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_____________2' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetOwnedGameplayTags_self_CastInput_4) == 0x000380, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetOwnedGameplayTags_self_CastInput_4' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetOwnedGameplayTags_TagContainer_4) == 0x000390, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetOwnedGameplayTags_TagContainer_4' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc___________6) == 0x0003B0, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc___________6' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_____________3) == 0x0003B8, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_____________3' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetOwnedGameplayTags_self_CastInput_5) == 0x0003C0, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetOwnedGameplayTags_self_CastInput_5' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetOwnedGameplayTags_TagContainer_5) == 0x0003D0, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetOwnedGameplayTags_TagContainer_5' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, K2Node_MakeStruct_GameplayEventData_1) == 0x0003F0, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::K2Node_MakeStruct_GameplayEventData_1' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, K2Node_MakeStruct_GameplayEventData_2) == 0x0004A8, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::K2Node_MakeStruct_GameplayEventData_2' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc___________7) == 0x000560, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc___________7' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, K2Node_MakeStruct_GameplayEventData_3) == 0x000568, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::K2Node_MakeStruct_GameplayEventData_3' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc___________8) == 0x000620, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc___________8' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_____ID___ID) == 0x000628, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_____ID___ID' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_GetSummonerEntityId_ReturnValue) == 0x00062C, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_GetSummonerEntityId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_____ID_______) == 0x000630, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_____ID_______' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_____ID___________) == 0x000638, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_____ID___________' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc___Current_______) == 0x00063C, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc___Current_______' has a wrong offset!");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000640, "Member 'GA_BailianSoul_Listen_Rogue_C_ExecuteUbergraph_GA_BailianSoul_Listen_Rogue::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function GA_BailianSoul_Listen_Rogue.GA_BailianSoul_Listen_Rogue_C.EventReceived_18B59F5945020DB23C42FD88CF02AFAA
// 0x00B8 (0x00B8 - 0x0000)
struct GA_BailianSoul_Listen_Rogue_C_EventReceived_18B59F5945020DB23C42FD88CF02AFAA final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_BailianSoul_Listen_Rogue_C_EventReceived_18B59F5945020DB23C42FD88CF02AFAA) == 0x000008, "Wrong alignment on GA_BailianSoul_Listen_Rogue_C_EventReceived_18B59F5945020DB23C42FD88CF02AFAA");
static_assert(sizeof(GA_BailianSoul_Listen_Rogue_C_EventReceived_18B59F5945020DB23C42FD88CF02AFAA) == 0x0000B8, "Wrong size on GA_BailianSoul_Listen_Rogue_C_EventReceived_18B59F5945020DB23C42FD88CF02AFAA");
static_assert(offsetof(GA_BailianSoul_Listen_Rogue_C_EventReceived_18B59F5945020DB23C42FD88CF02AFAA, Payload) == 0x000000, "Member 'GA_BailianSoul_Listen_Rogue_C_EventReceived_18B59F5945020DB23C42FD88CF02AFAA::Payload' has a wrong offset!");

}
