#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SMaterialControllerColorParameter

#include "Basic.hpp"

#include "SMaterialControllerColorGroup_structs.hpp"


namespace SDK
{

// UserDefinedStruct SMaterialControllerColorParameter.SMaterialControllerColorParameter
// 0x0670 (0x0670 - 0x0000)
struct FSMaterialControllerColorParameter final
{
public:
	class FName                                   ParameterName_2_63DBF67741F1C36DF997F194BA36AA4F;  // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3512[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSMaterialControllerColorGroup         ParameterValue_6_CC60B0BF4272CF87B5FE94AFE3803E42; // 0x0010(0x0660)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FSMaterialControllerColorParameter) == 0x000008, "Wrong alignment on FSMaterialControllerColorParameter");
static_assert(sizeof(FSMaterialControllerColorParameter) == 0x000670, "Wrong size on FSMaterialControllerColorParameter");
static_assert(offsetof(FSMaterialControllerColorParameter, ParameterName_2_63DBF67741F1C36DF997F194BA36AA4F) == 0x000000, "Member 'FSMaterialControllerColorParameter::ParameterName_2_63DBF67741F1C36DF997F194BA36AA4F' has a wrong offset!");
static_assert(offsetof(FSMaterialControllerColorParameter, ParameterValue_6_CC60B0BF4272CF87B5FE94AFE3803E42) == 0x000010, "Member 'FSMaterialControllerColorParameter::ParameterValue_6_CC60B0BF4272CF87B5FE94AFE3803E42' has a wrong offset!");

}
