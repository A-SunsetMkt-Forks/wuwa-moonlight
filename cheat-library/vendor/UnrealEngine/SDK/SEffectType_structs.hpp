#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SEffectType

#include "Basic.hpp"

#include "EAttributeEffectType_structs.hpp"


namespace SDK
{

// UserDefinedStruct SEffectType.SEffectType
// 0x0008 (0x0008 - 0x0000)
struct FSEffectType final
{
public:
	EAttributeEffectType                          ___2_E61509C54CB06843D284E6BB84540982;             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C13[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Id_5_0D2332CC4BFE7A8FEE6343B77956876E;             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSEffectType) == 0x000004, "Wrong alignment on FSEffectType");
static_assert(sizeof(FSEffectType) == 0x000008, "Wrong size on FSEffectType");
static_assert(offsetof(FSEffectType, ___2_E61509C54CB06843D284E6BB84540982) == 0x000000, "Member 'FSEffectType::___2_E61509C54CB06843D284E6BB84540982' has a wrong offset!");
static_assert(offsetof(FSEffectType, Id_5_0D2332CC4BFE7A8FEE6343B77956876E) == 0x000004, "Member 'FSEffectType::Id_5_0D2332CC4BFE7A8FEE6343B77956876E' has a wrong offset!");

}

