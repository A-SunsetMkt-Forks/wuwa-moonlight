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
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPropertyPair) == 0x000004, "Wrong alignment on FPropertyPair");
static_assert(sizeof(FPropertyPair) == 0x000010, "Wrong size on FPropertyPair");
static_assert(offsetof(FPropertyPair, Name) == 0x000000, "Member 'FPropertyPair::Name' has a wrong offset!");
static_assert(offsetof(FPropertyPair, bBelongsToActor) == 0x00000C, "Member 'FPropertyPair::bBelongsToActor' has a wrong offset!");

// ScriptStruct KuroUtility.BlockUserData
// 0x0018 (0x0018 - 0x0000)
struct FBlockUserData final
{
public:
	int32                                         NextOffset;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PreviousOffset;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         blockUsers;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBlockUserData) == 0x000008, "Wrong alignment on FBlockUserData");
static_assert(sizeof(FBlockUserData) == 0x000018, "Wrong size on FBlockUserData");
static_assert(offsetof(FBlockUserData, NextOffset) == 0x000000, "Member 'FBlockUserData::NextOffset' has a wrong offset!");
static_assert(offsetof(FBlockUserData, PreviousOffset) == 0x000004, "Member 'FBlockUserData::PreviousOffset' has a wrong offset!");
static_assert(offsetof(FBlockUserData, blockUsers) == 0x000008, "Member 'FBlockUserData::blockUsers' has a wrong offset!");

// ScriptStruct KuroUtility.BasicPresenceData
// 0x0018 (0x0018 - 0x0000)
struct FBasicPresenceData final
{
public:
	class FString                                 AccountId;                                         // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OnlineState;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Context;                                           // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBasicPresenceData) == 0x000008, "Wrong alignment on FBasicPresenceData");
static_assert(sizeof(FBasicPresenceData) == 0x000018, "Wrong size on FBasicPresenceData");
static_assert(offsetof(FBasicPresenceData, AccountId) == 0x000000, "Member 'FBasicPresenceData::AccountId' has a wrong offset!");
static_assert(offsetof(FBasicPresenceData, OnlineState) == 0x000010, "Member 'FBasicPresenceData::OnlineState' has a wrong offset!");
static_assert(offsetof(FBasicPresenceData, Context) == 0x000014, "Member 'FBasicPresenceData::Context' has a wrong offset!");

// ScriptStruct KuroUtility.TrophyDetailData
// 0x0058 (0x0058 - 0x0000)
struct FTrophyDetailData final
{
public:
	int32                                         TrophyId;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TrophyGrade;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GroupId;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Hidden;                                            // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasReward;                                         // 0x000D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ProgressType;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Progress;                                          // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name;                                              // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Desc;                                              // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Reward;                                            // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTrophyDetailData) == 0x000008, "Wrong alignment on FTrophyDetailData");
static_assert(sizeof(FTrophyDetailData) == 0x000058, "Wrong size on FTrophyDetailData");
static_assert(offsetof(FTrophyDetailData, TrophyId) == 0x000000, "Member 'FTrophyDetailData::TrophyId' has a wrong offset!");
static_assert(offsetof(FTrophyDetailData, TrophyGrade) == 0x000004, "Member 'FTrophyDetailData::TrophyGrade' has a wrong offset!");
static_assert(offsetof(FTrophyDetailData, GroupId) == 0x000008, "Member 'FTrophyDetailData::GroupId' has a wrong offset!");
static_assert(offsetof(FTrophyDetailData, Hidden) == 0x00000C, "Member 'FTrophyDetailData::Hidden' has a wrong offset!");
static_assert(offsetof(FTrophyDetailData, HasReward) == 0x00000D, "Member 'FTrophyDetailData::HasReward' has a wrong offset!");
static_assert(offsetof(FTrophyDetailData, ProgressType) == 0x000010, "Member 'FTrophyDetailData::ProgressType' has a wrong offset!");
static_assert(offsetof(FTrophyDetailData, Progress) == 0x000018, "Member 'FTrophyDetailData::Progress' has a wrong offset!");
static_assert(offsetof(FTrophyDetailData, Name) == 0x000028, "Member 'FTrophyDetailData::Name' has a wrong offset!");
static_assert(offsetof(FTrophyDetailData, Desc) == 0x000038, "Member 'FTrophyDetailData::Desc' has a wrong offset!");
static_assert(offsetof(FTrophyDetailData, Reward) == 0x000048, "Member 'FTrophyDetailData::Reward' has a wrong offset!");

// ScriptStruct KuroUtility.TrophyData
// 0x0030 (0x0030 - 0x0000)
struct FTrophyData final
{
public:
	int32                                         TrophyId;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Unlocked;                                          // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ProgressType;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Progress;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Timestamp;                                         // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTrophyData) == 0x000008, "Wrong alignment on FTrophyData");
static_assert(sizeof(FTrophyData) == 0x000030, "Wrong size on FTrophyData");
static_assert(offsetof(FTrophyData, TrophyId) == 0x000000, "Member 'FTrophyData::TrophyId' has a wrong offset!");
static_assert(offsetof(FTrophyData, Unlocked) == 0x000004, "Member 'FTrophyData::Unlocked' has a wrong offset!");
static_assert(offsetof(FTrophyData, ProgressType) == 0x000008, "Member 'FTrophyData::ProgressType' has a wrong offset!");
static_assert(offsetof(FTrophyData, Progress) == 0x000010, "Member 'FTrophyData::Progress' has a wrong offset!");
static_assert(offsetof(FTrophyData, Timestamp) == 0x000020, "Member 'FTrophyData::Timestamp' has a wrong offset!");

// ScriptStruct KuroUtility.TrophyInfoData
// 0x0028 (0x0028 - 0x0000)
struct FTrophyInfoData final
{
public:
	int32                                         Offset;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Count;                                             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTrophyDetailData>              TrophyDetail;                                      // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTrophyData>                    TrophyData;                                        // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTrophyInfoData) == 0x000008, "Wrong alignment on FTrophyInfoData");
static_assert(sizeof(FTrophyInfoData) == 0x000028, "Wrong size on FTrophyInfoData");
static_assert(offsetof(FTrophyInfoData, Offset) == 0x000000, "Member 'FTrophyInfoData::Offset' has a wrong offset!");
static_assert(offsetof(FTrophyInfoData, Count) == 0x000004, "Member 'FTrophyInfoData::Count' has a wrong offset!");
static_assert(offsetof(FTrophyInfoData, TrophyDetail) == 0x000008, "Member 'FTrophyInfoData::TrophyDetail' has a wrong offset!");
static_assert(offsetof(FTrophyInfoData, TrophyData) == 0x000018, "Member 'FTrophyInfoData::TrophyData' has a wrong offset!");

}
