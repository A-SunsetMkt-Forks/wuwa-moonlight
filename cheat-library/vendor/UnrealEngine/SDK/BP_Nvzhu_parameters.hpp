#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Nvzhu

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Nvzhu.BP_Nvzhu_C.FightCommand
// 0x0020 (0x0020 - 0x0000)
struct BP_Nvzhu_C_FightCommand final
{
public:
	bool                                          IsInAir;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_317D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetSkillTarget_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetSkillTarget_ReturnValue_1;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BeginSkill_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BeginSkill_ReturnValue_1;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsTag_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Nvzhu_C_FightCommand) == 0x000008, "Wrong alignment on BP_Nvzhu_C_FightCommand");
static_assert(sizeof(BP_Nvzhu_C_FightCommand) == 0x000020, "Wrong size on BP_Nvzhu_C_FightCommand");
static_assert(offsetof(BP_Nvzhu_C_FightCommand, IsInAir) == 0x000000, "Member 'BP_Nvzhu_C_FightCommand::IsInAir' has a wrong offset!");
static_assert(offsetof(BP_Nvzhu_C_FightCommand, CallFunc_GetSkillTarget_ReturnValue) == 0x000008, "Member 'BP_Nvzhu_C_FightCommand::CallFunc_GetSkillTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Nvzhu_C_FightCommand, CallFunc_GetSkillTarget_ReturnValue_1) == 0x000010, "Member 'BP_Nvzhu_C_FightCommand::CallFunc_GetSkillTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Nvzhu_C_FightCommand, CallFunc_BeginSkill_ReturnValue) == 0x000018, "Member 'BP_Nvzhu_C_FightCommand::CallFunc_BeginSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Nvzhu_C_FightCommand, CallFunc_BeginSkill_ReturnValue_1) == 0x000019, "Member 'BP_Nvzhu_C_FightCommand::CallFunc_BeginSkill_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Nvzhu_C_FightCommand, CallFunc_ContainsTag_ReturnValue) == 0x00001A, "Member 'BP_Nvzhu_C_FightCommand::CallFunc_ContainsTag_ReturnValue' has a wrong offset!");

}

