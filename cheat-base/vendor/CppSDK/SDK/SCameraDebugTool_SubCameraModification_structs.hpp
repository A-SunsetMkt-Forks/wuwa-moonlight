#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCameraDebugTool_SubCameraModification

#include "Basic.hpp"

#include "SCameraDebugTool_CameraProperty_structs.hpp"


namespace SDK
{

// UserDefinedStruct SCameraDebugTool_SubCameraModification.SCameraDebugTool_SubCameraModification
// 0x0038 (0x0038 - 0x0000)
struct FSCameraDebugTool_SubCameraModification final
{
public:
	class FString                                 CameraTag_10_655DDDBD4D7D42B6756F688E4DE82D7B;     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CameraType_14_45FDB5FE4BA04DD4C2263E9D5D996D9D;    // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CameraPriority_11_E34E002F4A7829DA5F05EB8935B141AF; // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSCameraDebugTool_CameraProperty> ModifiedProperties_3_13DBE554430D3185883C8598EDD78DEA; // 0x0028(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSCameraDebugTool_SubCameraModification) == 0x000008, "Wrong alignment on FSCameraDebugTool_SubCameraModification");
static_assert(sizeof(FSCameraDebugTool_SubCameraModification) == 0x000038, "Wrong size on FSCameraDebugTool_SubCameraModification");
static_assert(offsetof(FSCameraDebugTool_SubCameraModification, CameraTag_10_655DDDBD4D7D42B6756F688E4DE82D7B) == 0x000000, "Member 'FSCameraDebugTool_SubCameraModification::CameraTag_10_655DDDBD4D7D42B6756F688E4DE82D7B' has a wrong offset!");
static_assert(offsetof(FSCameraDebugTool_SubCameraModification, CameraType_14_45FDB5FE4BA04DD4C2263E9D5D996D9D) == 0x000010, "Member 'FSCameraDebugTool_SubCameraModification::CameraType_14_45FDB5FE4BA04DD4C2263E9D5D996D9D' has a wrong offset!");
static_assert(offsetof(FSCameraDebugTool_SubCameraModification, CameraPriority_11_E34E002F4A7829DA5F05EB8935B141AF) == 0x000020, "Member 'FSCameraDebugTool_SubCameraModification::CameraPriority_11_E34E002F4A7829DA5F05EB8935B141AF' has a wrong offset!");
static_assert(offsetof(FSCameraDebugTool_SubCameraModification, ModifiedProperties_3_13DBE554430D3185883C8598EDD78DEA) == 0x000028, "Member 'FSCameraDebugTool_SubCameraModification::ModifiedProperties_3_13DBE554430D3185883C8598EDD78DEA' has a wrong offset!");

}
