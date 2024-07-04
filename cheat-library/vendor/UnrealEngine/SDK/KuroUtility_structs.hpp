#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroUtility

#include "Basic.hpp"


namespace SDK
{

// Enum KuroUtility.ECollectActorType
// NumValues: 0x0003
enum class ECollectActorType : uint8
{
	Default                                  = 0,
	UI                                       = 1,
	ECollectActorType_MAX                    = 2,
};

// Enum KuroUtility.ESendStage
// NumValues: 0x0006
enum class ESendStage : uint8
{
	ESS_None                                 = 0,
	ESS_Compressing                          = 1,
	ESS_Sending                              = 2,
	ESS_MultiPartReady                       = 3,
	ESS_MultiPartSeding                      = 4,
	ESS_MAX                                  = 5,
};

// ScriptStruct KuroUtility.PreloadObjectCollection
// 0x0010 (0x0010 - 0x0000)
struct FPreloadObjectCollection final
{
public:
	TArray<class UObject*>                        Assets;                                            // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPreloadObjectCollection) == 0x000008, "Wrong alignment on FPreloadObjectCollection");
static_assert(sizeof(FPreloadObjectCollection) == 0x000010, "Wrong size on FPreloadObjectCollection");
static_assert(offsetof(FPreloadObjectCollection, Assets) == 0x000000, "Member 'FPreloadObjectCollection::Assets' has a wrong offset!");

// ScriptStruct KuroUtility.PropertyPair
// 0x0010 (0x0010 - 0x0000)
struct FPropertyPair final
{
public:
	class FName                                   Name;                                              // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBelongsToActor;                                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19E2[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPropertyPair) == 0x000004, "Wrong alignment on FPropertyPair");
static_assert(sizeof(FPropertyPair) == 0x000010, "Wrong size on FPropertyPair");
static_assert(offsetof(FPropertyPair, Name) == 0x000000, "Member 'FPropertyPair::Name' has a wrong offset!");
static_assert(offsetof(FPropertyPair, bBelongsToActor) == 0x00000C, "Member 'FPropertyPair::bBelongsToActor' has a wrong offset!");

}

