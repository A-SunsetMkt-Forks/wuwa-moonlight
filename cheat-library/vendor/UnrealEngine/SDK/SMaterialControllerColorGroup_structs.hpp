#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SMaterialControllerColorGroup

#include "Basic.hpp"

#include "KuroCurve_structs.hpp"


namespace SDK
{

// UserDefinedStruct SMaterialControllerColorGroup.SMaterialControllerColorGroup
// 0x0660 (0x0660 - 0x0000)
struct FSMaterialControllerColorGroup final
{
public:
	struct FKuroCurveLinearColor                  Start_22_BA8F63454A2DEDC93ED9DEA8D3925117;         // 0x0000(0x0220)(Edit, BlueprintVisible)
	struct FKuroCurveLinearColor                  Loop_23_895EE8EE499792729D0174B5E037A717;          // 0x0220(0x0220)(Edit, BlueprintVisible)
	struct FKuroCurveLinearColor                  End_24_466C50DC43B03432A8CC1D82264EAFB5;           // 0x0440(0x0220)(Edit, BlueprintVisible)
};
static_assert(alignof(FSMaterialControllerColorGroup) == 0x000008, "Wrong alignment on FSMaterialControllerColorGroup");
static_assert(sizeof(FSMaterialControllerColorGroup) == 0x000660, "Wrong size on FSMaterialControllerColorGroup");
static_assert(offsetof(FSMaterialControllerColorGroup, Start_22_BA8F63454A2DEDC93ED9DEA8D3925117) == 0x000000, "Member 'FSMaterialControllerColorGroup::Start_22_BA8F63454A2DEDC93ED9DEA8D3925117' has a wrong offset!");
static_assert(offsetof(FSMaterialControllerColorGroup, Loop_23_895EE8EE499792729D0174B5E037A717) == 0x000220, "Member 'FSMaterialControllerColorGroup::Loop_23_895EE8EE499792729D0174B5E037A717' has a wrong offset!");
static_assert(offsetof(FSMaterialControllerColorGroup, End_24_466C50DC43B03432A8CC1D82264EAFB5) == 0x000440, "Member 'FSMaterialControllerColorGroup::End_24_466C50DC43B03432A8CC1D82264EAFB5' has a wrong offset!");

}

