#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SSeqOptionJumpGroup

#include "Basic.hpp"

#include "SSeqJumpWithOption_structs.hpp"


namespace SDK
{

// UserDefinedStruct SSeqOptionJumpGroup.SSeqOptionJumpGroup
// 0x0020 (0x0020 - 0x0000)
struct FSSeqOptionJumpGroup final
{
public:
	class FName                                   SubtitleID_2_751D52924EC54591891BB597195B1594;     // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_346C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSSeqJumpWithOption>            JumpGroup_6_2AB561364A2FD040E3954193212D6E4A;      // 0x0010(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSSeqOptionJumpGroup) == 0x000008, "Wrong alignment on FSSeqOptionJumpGroup");
static_assert(sizeof(FSSeqOptionJumpGroup) == 0x000020, "Wrong size on FSSeqOptionJumpGroup");
static_assert(offsetof(FSSeqOptionJumpGroup, SubtitleID_2_751D52924EC54591891BB597195B1594) == 0x000000, "Member 'FSSeqOptionJumpGroup::SubtitleID_2_751D52924EC54591891BB597195B1594' has a wrong offset!");
static_assert(offsetof(FSSeqOptionJumpGroup, JumpGroup_6_2AB561364A2FD040E3954193212D6E4A) == 0x000010, "Member 'FSSeqOptionJumpGroup::JumpGroup_6_2AB561364A2FD040E3954193212D6E4A' has a wrong offset!");

}

