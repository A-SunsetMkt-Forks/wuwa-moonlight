#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SSkillBehaviorAction

#include "Basic.hpp"

#include "ESkillBehaviorActionType_structs.hpp"
#include "ESkillBehaviorLocationForwardType_structs.hpp"
#include "SSequenceCamera_Settings_structs.hpp"
#include "ECameraAnsEffectiveClientType_structs.hpp"
#include "SSkillBehaviorCue_structs.hpp"
#include "ESkillBehaviorLocationType_structs.hpp"
#include "ESkillBehaviorRotationType_structs.hpp"
#include "SSkillBehaviorBullet_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ESkillBehaviorRestrictType_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "SCameraModifier_Condition_structs.hpp"
#include "ESkillBehaviorBestSpotType_structs.hpp"
#include "SCameraModifier_Settings_structs.hpp"
#include "Engine_structs.hpp"
#include "ESkillBehaviorBuffTargetType_structs.hpp"


namespace SDK
{

// UserDefinedStruct SSkillBehaviorAction.SSkillBehaviorAction
// 0x0200 (0x0200 - 0x0000)
struct FSSkillBehaviorAction final
{
public:
	ESkillBehaviorActionType                      ActionType_19_928EDB4F42F86E100915608112580A79;    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillBehaviorLocationType                    LocationType_189_529AE283410C2E1005CB1F87D7127A4D; // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34FC[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 BlackboardKey_209_F7A2DF3E49A071728CEDCDAC40CC9A37; // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESkillBehaviorLocationForwardType             LocationForwardType_191_B83ADEED485C283B0510A68E10C7852F; // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34FD[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LocationOffset_108_BA50F7AA4075F430C69C30A161E79A59; // 0x001C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Restrict_95_C2990E2B43935300EFE0DF8F424BEFF3;      // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESkillBehaviorRestrictType                    RestrictType_98_D0DCBBB94CD417F01441E6B6C6FF581C;  // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34FE[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RestrictDistance_101_FFF667624EBD7B985E81BA99F7817192; // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BestSpot_104_D24BFD95459541F3CFCC6BBA59927536;     // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESkillBehaviorRotationType                    RotationType_196_62E567E44622E8EE1AA49397199ACA60; // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34FF[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DirectionOffset_111_523AE48A41BFB39B830684B870FF2CAE; // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSSkillBehaviorCue>             Cues_76_2D918BA24A0CA641D7BBF7BD13E08398;          // 0x0038(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSSkillBehaviorBullet>          Bullets_77_D4BBB46C47AE6F88D881F9ADA9156FFA;       // 0x0048(0x0010)(Edit, BlueprintVisible)
	struct FGameplayTag                           Tag_120_68C740484932F7D3DDAC2FAAFE60FCFC;          // 0x0058(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	float                                         Duration_123_E3B2684B40F4575A565A0A90837D76E2;     // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendInTime_125_8B2D7D7D4C3A11F601631E811D4639E3;  // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendOutTime_127_3F28F38D488982760674879A821AA054; // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BreakBlendOutTime_221_2497E8FB47E32B8788CC63BEC8061D3F; // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECameraAnsEffectiveClientType                 CameraEffectiveClientType_229_51C02ABD4110AE58BB4FC3AC2647F39E; // 0x0074(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3500[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSCameraModifier_Condition>     CameraModifierConditions_228_BA7966AF4EFF27AF382884AAA620E601; // 0x0078(0x0010)(Edit, BlueprintVisible)
	struct FSCameraModifier_Settings              CameraModifierSettings_131_24F3A807485EF77178D294A1DE455488; // 0x0088(0x00E8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSSequenceCamera_Settings              CameraSequenceSettings_184_B0C9DEF24C35C77F696B6D90D53C8554; // 0x0170(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          ResetLockOnCamera_138_047F77FB4E4D9FAB90A871861BFC5696; // 0x01A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3501[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               AdditiveRotation_141_55E8256C46827D1642FDCD9D14854589; // 0x01A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CameraAttachSocket_185_10D4FB3A459032757A89FD9BA96C1A83; // 0x01B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CameraDetectSocket_186_64C9856C4917F5C7D921E09772835BD3; // 0x01BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExtraDetectSphereRadius_149_160C5A3F4AD2C8B136350BADC5D3C9FB; // 0x01C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ExtraSphereLocation_152_6C303A16434283376C250A88F7B988AB; // 0x01CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowExtraSphere_155_50E2906841D692145464899F7C5EA736; // 0x01D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EMovementMode                                 BeginMovementMode_187_D1BF07234A6B80DB9D19BDA7C643891A; // 0x01D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 EndMovementMode_160_0FA7DBA048F42DB50D468EB52506E1DB; // 0x01DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionResponse                            CollisionResponse_163_0015C44A414FFD53174E3CB6A9D62D0F; // 0x01DB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionChannel                             CollisionChannel_166_2949B1CD400718236C2A858C6641A6F8; // 0x01DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CollisionRestore_169_E0018CC746C17607B0334EBC40C5EE00; // 0x01DD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3502[0x2];                                     // 0x01DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FollowIndex_174_4B2308594A0BC5860E4681B75D818114;  // 0x01E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SummonSkillId_181_1FA5575B40D0B30D536CF8BE1D3F4ED3; // 0x01E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StopSummonSkill_182_448527CA436CE3C791BBB0923C802CD7; // 0x01E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESkillBehaviorBestSpotType                    Strategy_206_364E8199461F866DA1E738B909AF9BA3;     // 0x01E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugTrace_198_772A39284872AB2CF44366AE8AD28728;   // 0x01EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3503[0x1];                                     // 0x01EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Navigation_201_3CAB915C492DDD5D14DC38A6527C52D1;   // 0x01EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         BuffId_215_FC5579E6440CA752BF0A20A3D0291FCF;       // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillBehaviorBuffTargetType                  BuffTarget_218_52829D6E4FDD50520D92D6BB2D3A0613;   // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_211_548FB33648C85E653FEA8A939D97D296;          // 0x01F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSSkillBehaviorAction) == 0x000008, "Wrong alignment on FSSkillBehaviorAction");
static_assert(sizeof(FSSkillBehaviorAction) == 0x000200, "Wrong size on FSSkillBehaviorAction");
static_assert(offsetof(FSSkillBehaviorAction, ActionType_19_928EDB4F42F86E100915608112580A79) == 0x000000, "Member 'FSSkillBehaviorAction::ActionType_19_928EDB4F42F86E100915608112580A79' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, LocationType_189_529AE283410C2E1005CB1F87D7127A4D) == 0x000001, "Member 'FSSkillBehaviorAction::LocationType_189_529AE283410C2E1005CB1F87D7127A4D' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, BlackboardKey_209_F7A2DF3E49A071728CEDCDAC40CC9A37) == 0x000008, "Member 'FSSkillBehaviorAction::BlackboardKey_209_F7A2DF3E49A071728CEDCDAC40CC9A37' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, LocationForwardType_191_B83ADEED485C283B0510A68E10C7852F) == 0x000018, "Member 'FSSkillBehaviorAction::LocationForwardType_191_B83ADEED485C283B0510A68E10C7852F' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, LocationOffset_108_BA50F7AA4075F430C69C30A161E79A59) == 0x00001C, "Member 'FSSkillBehaviorAction::LocationOffset_108_BA50F7AA4075F430C69C30A161E79A59' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, Restrict_95_C2990E2B43935300EFE0DF8F424BEFF3) == 0x000028, "Member 'FSSkillBehaviorAction::Restrict_95_C2990E2B43935300EFE0DF8F424BEFF3' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, RestrictType_98_D0DCBBB94CD417F01441E6B6C6FF581C) == 0x000029, "Member 'FSSkillBehaviorAction::RestrictType_98_D0DCBBB94CD417F01441E6B6C6FF581C' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, RestrictDistance_101_FFF667624EBD7B985E81BA99F7817192) == 0x00002C, "Member 'FSSkillBehaviorAction::RestrictDistance_101_FFF667624EBD7B985E81BA99F7817192' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, BestSpot_104_D24BFD95459541F3CFCC6BBA59927536) == 0x000030, "Member 'FSSkillBehaviorAction::BestSpot_104_D24BFD95459541F3CFCC6BBA59927536' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, RotationType_196_62E567E44622E8EE1AA49397199ACA60) == 0x000031, "Member 'FSSkillBehaviorAction::RotationType_196_62E567E44622E8EE1AA49397199ACA60' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, DirectionOffset_111_523AE48A41BFB39B830684B870FF2CAE) == 0x000034, "Member 'FSSkillBehaviorAction::DirectionOffset_111_523AE48A41BFB39B830684B870FF2CAE' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, Cues_76_2D918BA24A0CA641D7BBF7BD13E08398) == 0x000038, "Member 'FSSkillBehaviorAction::Cues_76_2D918BA24A0CA641D7BBF7BD13E08398' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, Bullets_77_D4BBB46C47AE6F88D881F9ADA9156FFA) == 0x000048, "Member 'FSSkillBehaviorAction::Bullets_77_D4BBB46C47AE6F88D881F9ADA9156FFA' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, Tag_120_68C740484932F7D3DDAC2FAAFE60FCFC) == 0x000058, "Member 'FSSkillBehaviorAction::Tag_120_68C740484932F7D3DDAC2FAAFE60FCFC' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, Duration_123_E3B2684B40F4575A565A0A90837D76E2) == 0x000064, "Member 'FSSkillBehaviorAction::Duration_123_E3B2684B40F4575A565A0A90837D76E2' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, BlendInTime_125_8B2D7D7D4C3A11F601631E811D4639E3) == 0x000068, "Member 'FSSkillBehaviorAction::BlendInTime_125_8B2D7D7D4C3A11F601631E811D4639E3' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, BlendOutTime_127_3F28F38D488982760674879A821AA054) == 0x00006C, "Member 'FSSkillBehaviorAction::BlendOutTime_127_3F28F38D488982760674879A821AA054' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, BreakBlendOutTime_221_2497E8FB47E32B8788CC63BEC8061D3F) == 0x000070, "Member 'FSSkillBehaviorAction::BreakBlendOutTime_221_2497E8FB47E32B8788CC63BEC8061D3F' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, CameraEffectiveClientType_229_51C02ABD4110AE58BB4FC3AC2647F39E) == 0x000074, "Member 'FSSkillBehaviorAction::CameraEffectiveClientType_229_51C02ABD4110AE58BB4FC3AC2647F39E' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, CameraModifierConditions_228_BA7966AF4EFF27AF382884AAA620E601) == 0x000078, "Member 'FSSkillBehaviorAction::CameraModifierConditions_228_BA7966AF4EFF27AF382884AAA620E601' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, CameraModifierSettings_131_24F3A807485EF77178D294A1DE455488) == 0x000088, "Member 'FSSkillBehaviorAction::CameraModifierSettings_131_24F3A807485EF77178D294A1DE455488' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, CameraSequenceSettings_184_B0C9DEF24C35C77F696B6D90D53C8554) == 0x000170, "Member 'FSSkillBehaviorAction::CameraSequenceSettings_184_B0C9DEF24C35C77F696B6D90D53C8554' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, ResetLockOnCamera_138_047F77FB4E4D9FAB90A871861BFC5696) == 0x0001A0, "Member 'FSSkillBehaviorAction::ResetLockOnCamera_138_047F77FB4E4D9FAB90A871861BFC5696' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, AdditiveRotation_141_55E8256C46827D1642FDCD9D14854589) == 0x0001A4, "Member 'FSSkillBehaviorAction::AdditiveRotation_141_55E8256C46827D1642FDCD9D14854589' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, CameraAttachSocket_185_10D4FB3A459032757A89FD9BA96C1A83) == 0x0001B0, "Member 'FSSkillBehaviorAction::CameraAttachSocket_185_10D4FB3A459032757A89FD9BA96C1A83' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, CameraDetectSocket_186_64C9856C4917F5C7D921E09772835BD3) == 0x0001BC, "Member 'FSSkillBehaviorAction::CameraDetectSocket_186_64C9856C4917F5C7D921E09772835BD3' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, ExtraDetectSphereRadius_149_160C5A3F4AD2C8B136350BADC5D3C9FB) == 0x0001C8, "Member 'FSSkillBehaviorAction::ExtraDetectSphereRadius_149_160C5A3F4AD2C8B136350BADC5D3C9FB' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, ExtraSphereLocation_152_6C303A16434283376C250A88F7B988AB) == 0x0001CC, "Member 'FSSkillBehaviorAction::ExtraSphereLocation_152_6C303A16434283376C250A88F7B988AB' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, IsShowExtraSphere_155_50E2906841D692145464899F7C5EA736) == 0x0001D8, "Member 'FSSkillBehaviorAction::IsShowExtraSphere_155_50E2906841D692145464899F7C5EA736' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, BeginMovementMode_187_D1BF07234A6B80DB9D19BDA7C643891A) == 0x0001D9, "Member 'FSSkillBehaviorAction::BeginMovementMode_187_D1BF07234A6B80DB9D19BDA7C643891A' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, EndMovementMode_160_0FA7DBA048F42DB50D468EB52506E1DB) == 0x0001DA, "Member 'FSSkillBehaviorAction::EndMovementMode_160_0FA7DBA048F42DB50D468EB52506E1DB' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, CollisionResponse_163_0015C44A414FFD53174E3CB6A9D62D0F) == 0x0001DB, "Member 'FSSkillBehaviorAction::CollisionResponse_163_0015C44A414FFD53174E3CB6A9D62D0F' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, CollisionChannel_166_2949B1CD400718236C2A858C6641A6F8) == 0x0001DC, "Member 'FSSkillBehaviorAction::CollisionChannel_166_2949B1CD400718236C2A858C6641A6F8' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, CollisionRestore_169_E0018CC746C17607B0334EBC40C5EE00) == 0x0001DD, "Member 'FSSkillBehaviorAction::CollisionRestore_169_E0018CC746C17607B0334EBC40C5EE00' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, FollowIndex_174_4B2308594A0BC5860E4681B75D818114) == 0x0001E0, "Member 'FSSkillBehaviorAction::FollowIndex_174_4B2308594A0BC5860E4681B75D818114' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, SummonSkillId_181_1FA5575B40D0B30D536CF8BE1D3F4ED3) == 0x0001E4, "Member 'FSSkillBehaviorAction::SummonSkillId_181_1FA5575B40D0B30D536CF8BE1D3F4ED3' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, StopSummonSkill_182_448527CA436CE3C791BBB0923C802CD7) == 0x0001E8, "Member 'FSSkillBehaviorAction::StopSummonSkill_182_448527CA436CE3C791BBB0923C802CD7' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, Strategy_206_364E8199461F866DA1E738B909AF9BA3) == 0x0001E9, "Member 'FSSkillBehaviorAction::Strategy_206_364E8199461F866DA1E738B909AF9BA3' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, DebugTrace_198_772A39284872AB2CF44366AE8AD28728) == 0x0001EA, "Member 'FSSkillBehaviorAction::DebugTrace_198_772A39284872AB2CF44366AE8AD28728' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, Navigation_201_3CAB915C492DDD5D14DC38A6527C52D1) == 0x0001EC, "Member 'FSSkillBehaviorAction::Navigation_201_3CAB915C492DDD5D14DC38A6527C52D1' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, BuffId_215_FC5579E6440CA752BF0A20A3D0291FCF) == 0x0001F0, "Member 'FSSkillBehaviorAction::BuffId_215_FC5579E6440CA752BF0A20A3D0291FCF' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, BuffTarget_218_52829D6E4FDD50520D92D6BB2D3A0613) == 0x0001F8, "Member 'FSSkillBehaviorAction::BuffTarget_218_52829D6E4FDD50520D92D6BB2D3A0613' has a wrong offset!");
static_assert(offsetof(FSSkillBehaviorAction, Add_211_548FB33648C85E653FEA8A939D97D296) == 0x0001F9, "Member 'FSSkillBehaviorAction::Add_211_548FB33648C85E653FEA8A939D97D296' has a wrong offset!");

}

