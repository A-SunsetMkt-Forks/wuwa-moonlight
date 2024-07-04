#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SBulletDataMain

#include "Basic.hpp"

#include "SBulletDataTime_structs.hpp"
#include "SBulletDataBase_structs.hpp"
#include "SBulletDataMove_structs.hpp"
#include "SBulletDataChild_structs.hpp"
#include "SBulletDataExe_structs.hpp"
#include "SBulletDataEffect_structs.hpp"
#include "SBulletDataCollision_structs.hpp"
#include "SBulletDataScale_structs.hpp"


namespace SDK
{

// UserDefinedStruct SBulletDataMain.SBulletDataMain
// 0x02C0 (0x02C0 - 0x0000)
struct FSBulletDataMain final
{
public:
	class FName                                   P9___24_A1A7201B4ADF90E01822548A0A9AC171;          // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3575[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBulletDataBase                       ___n_2_8BCB10694CE745643619B883EF6A23AA;           // 0x0010(0x00D8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSBulletDataMove                       ___n_5_413344AA4ECA4F55169EDEB190C18458;           // 0x00E8(0x0090)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBulletDataEffect                     H__n_11_0C7DD99C4AA72FDAD83EC58E139456E2;          // 0x0178(0x0048)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSBulletDataTime                       _____15_5A29465D4D74BF5AA3EB2DAFF81557B2;          // 0x01C0(0x0038)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBulletDataCollision                  ___n_27_38DDFCB5499FBA71CD5166AA0CBBB1D6;          // 0x01F8(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBulletDataExe                        GL___18_B4D398D24FAA4A7B01E9A98F7F6AD0B8;          // 0x0208(0x0090)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSBulletDataScale                      ___n_8_CCC4E74E4B73C0919F5D7199EC68CDE9;           // 0x0298(0x0018)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBulletDataChild>              PP9_28_CDA2EA0842E35A54B3CC4480FB1B3962;           // 0x02B0(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSBulletDataMain) == 0x000008, "Wrong alignment on FSBulletDataMain");
static_assert(sizeof(FSBulletDataMain) == 0x0002C0, "Wrong size on FSBulletDataMain");
static_assert(offsetof(FSBulletDataMain, P9___24_A1A7201B4ADF90E01822548A0A9AC171) == 0x000000, "Member 'FSBulletDataMain::P9___24_A1A7201B4ADF90E01822548A0A9AC171' has a wrong offset!");
static_assert(offsetof(FSBulletDataMain, ___n_2_8BCB10694CE745643619B883EF6A23AA) == 0x000010, "Member 'FSBulletDataMain::___n_2_8BCB10694CE745643619B883EF6A23AA' has a wrong offset!");
static_assert(offsetof(FSBulletDataMain, ___n_5_413344AA4ECA4F55169EDEB190C18458) == 0x0000E8, "Member 'FSBulletDataMain::___n_5_413344AA4ECA4F55169EDEB190C18458' has a wrong offset!");
static_assert(offsetof(FSBulletDataMain, H__n_11_0C7DD99C4AA72FDAD83EC58E139456E2) == 0x000178, "Member 'FSBulletDataMain::H__n_11_0C7DD99C4AA72FDAD83EC58E139456E2' has a wrong offset!");
static_assert(offsetof(FSBulletDataMain, _____15_5A29465D4D74BF5AA3EB2DAFF81557B2) == 0x0001C0, "Member 'FSBulletDataMain::_____15_5A29465D4D74BF5AA3EB2DAFF81557B2' has a wrong offset!");
static_assert(offsetof(FSBulletDataMain, ___n_27_38DDFCB5499FBA71CD5166AA0CBBB1D6) == 0x0001F8, "Member 'FSBulletDataMain::___n_27_38DDFCB5499FBA71CD5166AA0CBBB1D6' has a wrong offset!");
static_assert(offsetof(FSBulletDataMain, GL___18_B4D398D24FAA4A7B01E9A98F7F6AD0B8) == 0x000208, "Member 'FSBulletDataMain::GL___18_B4D398D24FAA4A7B01E9A98F7F6AD0B8' has a wrong offset!");
static_assert(offsetof(FSBulletDataMain, ___n_8_CCC4E74E4B73C0919F5D7199EC68CDE9) == 0x000298, "Member 'FSBulletDataMain::___n_8_CCC4E74E4B73C0919F5D7199EC68CDE9' has a wrong offset!");
static_assert(offsetof(FSBulletDataMain, PP9_28_CDA2EA0842E35A54B3CC4480FB1B3962) == 0x0002B0, "Member 'FSBulletDataMain::PP9_28_CDA2EA0842E35A54B3CC4480FB1B3962' has a wrong offset!");

}

