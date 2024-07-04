#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SSequenceCamera_Settings

#include "Basic.hpp"

#include "EBattleUIChild_structs.hpp"


namespace SDK
{

// UserDefinedStruct SSequenceCamera_Settings.SSequenceCamera_Settings
// 0x0030 (0x0030 - 0x0000)
struct FSSequenceCamera_Settings final
{
public:
	float                                         BlendInTime_2_50F2599845E2A9F7984AB6BD60A09C9C;    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendOutTime_4_B229F83544CCA82D68E7B9867CC519D0;   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                         CameraSequence_11_EA0F02DF4948AFF0A951AB8E0F790CEC; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHideHud_13_3FD8AC824B783C3AC1386394935251D1;     // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3571[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EBattleUIChild>                        VisibleChild_26_E1BC75D64F4C322DD3D258A5F6B6F888;  // 0x0018(0x0010)(Edit, BlueprintVisible)
	float                                         HideHudTime_28_D37870A24D62DBDE4DBCD593374C8C9B;   // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSSequenceCamera_Settings) == 0x000008, "Wrong alignment on FSSequenceCamera_Settings");
static_assert(sizeof(FSSequenceCamera_Settings) == 0x000030, "Wrong size on FSSequenceCamera_Settings");
static_assert(offsetof(FSSequenceCamera_Settings, BlendInTime_2_50F2599845E2A9F7984AB6BD60A09C9C) == 0x000000, "Member 'FSSequenceCamera_Settings::BlendInTime_2_50F2599845E2A9F7984AB6BD60A09C9C' has a wrong offset!");
static_assert(offsetof(FSSequenceCamera_Settings, BlendOutTime_4_B229F83544CCA82D68E7B9867CC519D0) == 0x000004, "Member 'FSSequenceCamera_Settings::BlendOutTime_4_B229F83544CCA82D68E7B9867CC519D0' has a wrong offset!");
static_assert(offsetof(FSSequenceCamera_Settings, CameraSequence_11_EA0F02DF4948AFF0A951AB8E0F790CEC) == 0x000008, "Member 'FSSequenceCamera_Settings::CameraSequence_11_EA0F02DF4948AFF0A951AB8E0F790CEC' has a wrong offset!");
static_assert(offsetof(FSSequenceCamera_Settings, IsHideHud_13_3FD8AC824B783C3AC1386394935251D1) == 0x000010, "Member 'FSSequenceCamera_Settings::IsHideHud_13_3FD8AC824B783C3AC1386394935251D1' has a wrong offset!");
static_assert(offsetof(FSSequenceCamera_Settings, VisibleChild_26_E1BC75D64F4C322DD3D258A5F6B6F888) == 0x000018, "Member 'FSSequenceCamera_Settings::VisibleChild_26_E1BC75D64F4C322DD3D258A5F6B6F888' has a wrong offset!");
static_assert(offsetof(FSSequenceCamera_Settings, HideHudTime_28_D37870A24D62DBDE4DBCD593374C8C9B) == 0x000028, "Member 'FSSequenceCamera_Settings::HideHudTime_28_D37870A24D62DBDE4DBCD593374C8C9B' has a wrong offset!");

}

