#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RoadNetRuntime

#include "Basic.hpp"

#include "RoadNetRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function RoadNetRuntime.RoadNetComponent.GetLeaveTangentAtNode
// 0x0014 (0x0014 - 0x0000)
struct RoadNetComponent_GetLeaveTangentAtNode final
{
public:
	int32                                         NodeID;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERoadNetCoordinateSpace                       CoordinateSpace;                                   // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B63[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RoadNetComponent_GetLeaveTangentAtNode) == 0x000004, "Wrong alignment on RoadNetComponent_GetLeaveTangentAtNode");
static_assert(sizeof(RoadNetComponent_GetLeaveTangentAtNode) == 0x000014, "Wrong size on RoadNetComponent_GetLeaveTangentAtNode");
static_assert(offsetof(RoadNetComponent_GetLeaveTangentAtNode, NodeID) == 0x000000, "Member 'RoadNetComponent_GetLeaveTangentAtNode::NodeID' has a wrong offset!");
static_assert(offsetof(RoadNetComponent_GetLeaveTangentAtNode, CoordinateSpace) == 0x000004, "Member 'RoadNetComponent_GetLeaveTangentAtNode::CoordinateSpace' has a wrong offset!");
static_assert(offsetof(RoadNetComponent_GetLeaveTangentAtNode, ReturnValue) == 0x000008, "Member 'RoadNetComponent_GetLeaveTangentAtNode::ReturnValue' has a wrong offset!");

// Function RoadNetRuntime.RoadNetComponent.GetLocationAtNode
// 0x0014 (0x0014 - 0x0000)
struct RoadNetComponent_GetLocationAtNode final
{
public:
	int32                                         NodeID;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERoadNetCoordinateSpace                       CoordinateSpace;                                   // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B64[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RoadNetComponent_GetLocationAtNode) == 0x000004, "Wrong alignment on RoadNetComponent_GetLocationAtNode");
static_assert(sizeof(RoadNetComponent_GetLocationAtNode) == 0x000014, "Wrong size on RoadNetComponent_GetLocationAtNode");
static_assert(offsetof(RoadNetComponent_GetLocationAtNode, NodeID) == 0x000000, "Member 'RoadNetComponent_GetLocationAtNode::NodeID' has a wrong offset!");
static_assert(offsetof(RoadNetComponent_GetLocationAtNode, CoordinateSpace) == 0x000004, "Member 'RoadNetComponent_GetLocationAtNode::CoordinateSpace' has a wrong offset!");
static_assert(offsetof(RoadNetComponent_GetLocationAtNode, ReturnValue) == 0x000008, "Member 'RoadNetComponent_GetLocationAtNode::ReturnValue' has a wrong offset!");

}

