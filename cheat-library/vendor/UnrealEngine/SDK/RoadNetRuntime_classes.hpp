#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RoadNetRuntime

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "RoadNetRuntime_structs.hpp"


namespace SDK
{

// Class RoadNetRuntime.RoadNetActor
// 0x0008 (0x02B0 - 0x02A8)
class ARoadNetActor final : public AActor
{
public:
	class URoadNetComponent*                      RoadNetComponent;                                  // 0x02A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RoadNetActor">();
	}
	static class ARoadNetActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARoadNetActor>();
	}
};
static_assert(alignof(ARoadNetActor) == 0x000008, "Wrong alignment on ARoadNetActor");
static_assert(sizeof(ARoadNetActor) == 0x0002B0, "Wrong size on ARoadNetActor");
static_assert(offsetof(ARoadNetActor, RoadNetComponent) == 0x0002A8, "Member 'ARoadNetActor::RoadNetComponent' has a wrong offset!");

// Class RoadNetRuntime.RoadNetComponent
// 0x0080 (0x0560 - 0x04E0)
class URoadNetComponent final : public UPrimitiveComponent
{
public:
	bool                                          bDrawDebug;                                        // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasBeenEdited;                                    // 0x04E1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B62[0x2];                                     // 0x04E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TileSize;                                          // 0x04E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, struct FRoadNetNode>              RoadNetNodes;                                      // 0x04F0(0x0050)(Edit, EditConst, NativeAccessSpecifierPublic)
	uint32                                        RoadNetID;                                         // 0x0540(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                   DataBoundsBox;                                     // 0x0544(0x001C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

public:
	struct FVector GetLeaveTangentAtNode(int32 NodeID, ERoadNetCoordinateSpace CoordinateSpace) const;
	struct FVector GetLocationAtNode(int32 NodeID, ERoadNetCoordinateSpace CoordinateSpace) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RoadNetComponent">();
	}
	static class URoadNetComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<URoadNetComponent>();
	}
};
static_assert(alignof(URoadNetComponent) == 0x000010, "Wrong alignment on URoadNetComponent");
static_assert(sizeof(URoadNetComponent) == 0x000560, "Wrong size on URoadNetComponent");
static_assert(offsetof(URoadNetComponent, bDrawDebug) == 0x0004E0, "Member 'URoadNetComponent::bDrawDebug' has a wrong offset!");
static_assert(offsetof(URoadNetComponent, bHasBeenEdited) == 0x0004E1, "Member 'URoadNetComponent::bHasBeenEdited' has a wrong offset!");
static_assert(offsetof(URoadNetComponent, TileSize) == 0x0004E4, "Member 'URoadNetComponent::TileSize' has a wrong offset!");
static_assert(offsetof(URoadNetComponent, RoadNetNodes) == 0x0004F0, "Member 'URoadNetComponent::RoadNetNodes' has a wrong offset!");
static_assert(offsetof(URoadNetComponent, RoadNetID) == 0x000540, "Member 'URoadNetComponent::RoadNetID' has a wrong offset!");
static_assert(offsetof(URoadNetComponent, DataBoundsBox) == 0x000544, "Member 'URoadNetComponent::DataBoundsBox' has a wrong offset!");

// Class RoadNetRuntime.RoadNetSetting
// 0x0010 (0x0040 - 0x0030)
class URoadNetSetting final : public UObject
{
public:
	struct FVector                                NodePlaceOffset;                                   // 0x0030(0x000C)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B65[0x4];                                     // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RoadNetSetting">();
	}
	static class URoadNetSetting* GetDefaultObj()
	{
		return GetDefaultObjImpl<URoadNetSetting>();
	}
};
static_assert(alignof(URoadNetSetting) == 0x000008, "Wrong alignment on URoadNetSetting");
static_assert(sizeof(URoadNetSetting) == 0x000040, "Wrong size on URoadNetSetting");
static_assert(offsetof(URoadNetSetting, NodePlaceOffset) == 0x000030, "Member 'URoadNetSetting::NodePlaceOffset' has a wrong offset!");

}

