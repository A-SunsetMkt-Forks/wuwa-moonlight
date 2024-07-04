#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SVisionData

#include "Basic.hpp"

#include "EVisionType_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// UserDefinedStruct SVisionData.SVisionData
// 0x0098 (0x0098 - 0x0000)
struct FSVisionData final
{
public:
	int32                                         Id_2_065E27A14AA24E0A7C8F5CA445947325;             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_354D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ___13_F8AD46694EF68CB46331C68E35DD0ED9;            // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         _SMnhId_10_E80D86D5464C71760985F1B786B736EE;       // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVisionType                                   ___8_84EBEE6844743DB98B95909B87A6ED02;             // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_354E[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         __ID_46_9D18806E4FEB66562F323AA15AD05179;          // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ZMinus_____47_B975475146540BD15A4534B1573C46B4;    // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          _____99_F1599FDF4E016D699537B3816FC5091B;          // 0x0025(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_354F[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K_h_P9_113_3C2227DD492757E36C8B489C485053A4;       // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ________74_924A0A1E4C487E999C6F5388BCBF1B6C;       // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3550[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTagContainer>          __MinusTag_65_813425D34B9E9CD3C01D6BBCE1C03559;    // 0x0040(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 __Buff_61_91DFAA3E41813A64A2BA97A05F04C1FC;        // 0x0050(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 _______Buff_69_BBFB5994429F722CE115B18CF79BFCFD;   // 0x0060(0x0010)(Edit, BlueprintVisible)
	class FName                                   _________95_60A55F35422FD02D44B76D8FC9603985;      // 0x0070(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3551[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   _eTags_93_4ABD4A5C426AA7FB5CEFF0895B3B776C;        // 0x0080(0x0010)(Edit, BlueprintVisible)
	bool                                          _l__115_6A7365934B51B20CCD4DD78379278C7A;          // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSVisionData) == 0x000008, "Wrong alignment on FSVisionData");
static_assert(sizeof(FSVisionData) == 0x000098, "Wrong size on FSVisionData");
static_assert(offsetof(FSVisionData, Id_2_065E27A14AA24E0A7C8F5CA445947325) == 0x000000, "Member 'FSVisionData::Id_2_065E27A14AA24E0A7C8F5CA445947325' has a wrong offset!");
static_assert(offsetof(FSVisionData, ___13_F8AD46694EF68CB46331C68E35DD0ED9) == 0x000008, "Member 'FSVisionData::___13_F8AD46694EF68CB46331C68E35DD0ED9' has a wrong offset!");
static_assert(offsetof(FSVisionData, _SMnhId_10_E80D86D5464C71760985F1B786B736EE) == 0x000018, "Member 'FSVisionData::_SMnhId_10_E80D86D5464C71760985F1B786B736EE' has a wrong offset!");
static_assert(offsetof(FSVisionData, ___8_84EBEE6844743DB98B95909B87A6ED02) == 0x00001C, "Member 'FSVisionData::___8_84EBEE6844743DB98B95909B87A6ED02' has a wrong offset!");
static_assert(offsetof(FSVisionData, __ID_46_9D18806E4FEB66562F323AA15AD05179) == 0x000020, "Member 'FSVisionData::__ID_46_9D18806E4FEB66562F323AA15AD05179' has a wrong offset!");
static_assert(offsetof(FSVisionData, ZMinus_____47_B975475146540BD15A4534B1573C46B4) == 0x000024, "Member 'FSVisionData::ZMinus_____47_B975475146540BD15A4534B1573C46B4' has a wrong offset!");
static_assert(offsetof(FSVisionData, _____99_F1599FDF4E016D699537B3816FC5091B) == 0x000025, "Member 'FSVisionData::_____99_F1599FDF4E016D699537B3816FC5091B' has a wrong offset!");
static_assert(offsetof(FSVisionData, K_h_P9_113_3C2227DD492757E36C8B489C485053A4) == 0x000028, "Member 'FSVisionData::K_h_P9_113_3C2227DD492757E36C8B489C485053A4' has a wrong offset!");
static_assert(offsetof(FSVisionData, ________74_924A0A1E4C487E999C6F5388BCBF1B6C) == 0x000038, "Member 'FSVisionData::________74_924A0A1E4C487E999C6F5388BCBF1B6C' has a wrong offset!");
static_assert(offsetof(FSVisionData, __MinusTag_65_813425D34B9E9CD3C01D6BBCE1C03559) == 0x000040, "Member 'FSVisionData::__MinusTag_65_813425D34B9E9CD3C01D6BBCE1C03559' has a wrong offset!");
static_assert(offsetof(FSVisionData, __Buff_61_91DFAA3E41813A64A2BA97A05F04C1FC) == 0x000050, "Member 'FSVisionData::__Buff_61_91DFAA3E41813A64A2BA97A05F04C1FC' has a wrong offset!");
static_assert(offsetof(FSVisionData, _______Buff_69_BBFB5994429F722CE115B18CF79BFCFD) == 0x000060, "Member 'FSVisionData::_______Buff_69_BBFB5994429F722CE115B18CF79BFCFD' has a wrong offset!");
static_assert(offsetof(FSVisionData, _________95_60A55F35422FD02D44B76D8FC9603985) == 0x000070, "Member 'FSVisionData::_________95_60A55F35422FD02D44B76D8FC9603985' has a wrong offset!");
static_assert(offsetof(FSVisionData, _eTags_93_4ABD4A5C426AA7FB5CEFF0895B3B776C) == 0x000080, "Member 'FSVisionData::_eTags_93_4ABD4A5C426AA7FB5CEFF0895B3B776C' has a wrong offset!");
static_assert(offsetof(FSVisionData, _l__115_6A7365934B51B20CCD4DD78379278C7A) == 0x000090, "Member 'FSVisionData::_l__115_6A7365934B51B20CCD4DD78379278C7A' has a wrong offset!");

}

