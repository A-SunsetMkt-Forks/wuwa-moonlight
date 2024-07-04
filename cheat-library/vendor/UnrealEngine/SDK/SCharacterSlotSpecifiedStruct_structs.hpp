#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCharacterSlotSpecifiedStruct

#include "Basic.hpp"

#include "ECharacterSlotSpecifiedType_structs.hpp"
#include "ECharacterSlotType_structs.hpp"


namespace SDK
{

// UserDefinedStruct SCharacterSlotSpecifiedStruct.SCharacterSlotSpecifiedStruct
// 0x0018 (0x0018 - 0x0000)
struct FSCharacterSlotSpecifiedStruct final
{
public:
	ECharacterSlotSpecifiedType                   SlotSpecifiedType_2_BB34682E42A1EB05767F8DB31E8BFD68; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BAF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharacterSlotType>                    SlotTypes_8_FE953FC141D8687F1C54728FEC4EA9FD;      // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSCharacterSlotSpecifiedStruct) == 0x000008, "Wrong alignment on FSCharacterSlotSpecifiedStruct");
static_assert(sizeof(FSCharacterSlotSpecifiedStruct) == 0x000018, "Wrong size on FSCharacterSlotSpecifiedStruct");
static_assert(offsetof(FSCharacterSlotSpecifiedStruct, SlotSpecifiedType_2_BB34682E42A1EB05767F8DB31E8BFD68) == 0x000000, "Member 'FSCharacterSlotSpecifiedStruct::SlotSpecifiedType_2_BB34682E42A1EB05767F8DB31E8BFD68' has a wrong offset!");
static_assert(offsetof(FSCharacterSlotSpecifiedStruct, SlotTypes_8_FE953FC141D8687F1C54728FEC4EA9FD) == 0x000008, "Member 'FSCharacterSlotSpecifiedStruct::SlotTypes_8_FE953FC141D8687F1C54728FEC4EA9FD' has a wrong offset!");

}

