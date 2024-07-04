#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PD_HaloPointLightConfig

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PD_HaloPointLightConfig.PD_HaloPointLightConfig_C
// 0x0088 (0x00C0 - 0x0038)
class UPD_HaloPointLightConfig_C final : public UPrimaryDataAsset
{
public:
	uint8                                         Pad_2C12[0x8];                                     // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               PC_Halo_Type1;                                     // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               PC_Halo_Type2;                                     // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               PC_Halo_Type3;                                     // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               PC_Halo_Type4;                                     // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Mobile_Halo_Type1;                                 // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Mobile_Halo_Type2;                                 // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Mobile_Halo_Type3;                                 // 0x00A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Mobile_Halo_Type4;                                 // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PD_HaloPointLightConfig_C">();
	}
	static class UPD_HaloPointLightConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPD_HaloPointLightConfig_C>();
	}
};
static_assert(alignof(UPD_HaloPointLightConfig_C) == 0x000010, "Wrong alignment on UPD_HaloPointLightConfig_C");
static_assert(sizeof(UPD_HaloPointLightConfig_C) == 0x0000C0, "Wrong size on UPD_HaloPointLightConfig_C");
static_assert(offsetof(UPD_HaloPointLightConfig_C, PC_Halo_Type1) == 0x000040, "Member 'UPD_HaloPointLightConfig_C::PC_Halo_Type1' has a wrong offset!");
static_assert(offsetof(UPD_HaloPointLightConfig_C, PC_Halo_Type2) == 0x000050, "Member 'UPD_HaloPointLightConfig_C::PC_Halo_Type2' has a wrong offset!");
static_assert(offsetof(UPD_HaloPointLightConfig_C, PC_Halo_Type3) == 0x000060, "Member 'UPD_HaloPointLightConfig_C::PC_Halo_Type3' has a wrong offset!");
static_assert(offsetof(UPD_HaloPointLightConfig_C, PC_Halo_Type4) == 0x000070, "Member 'UPD_HaloPointLightConfig_C::PC_Halo_Type4' has a wrong offset!");
static_assert(offsetof(UPD_HaloPointLightConfig_C, Mobile_Halo_Type1) == 0x000080, "Member 'UPD_HaloPointLightConfig_C::Mobile_Halo_Type1' has a wrong offset!");
static_assert(offsetof(UPD_HaloPointLightConfig_C, Mobile_Halo_Type2) == 0x000090, "Member 'UPD_HaloPointLightConfig_C::Mobile_Halo_Type2' has a wrong offset!");
static_assert(offsetof(UPD_HaloPointLightConfig_C, Mobile_Halo_Type3) == 0x0000A0, "Member 'UPD_HaloPointLightConfig_C::Mobile_Halo_Type3' has a wrong offset!");
static_assert(offsetof(UPD_HaloPointLightConfig_C, Mobile_Halo_Type4) == 0x0000B0, "Member 'UPD_HaloPointLightConfig_C::Mobile_Halo_Type4' has a wrong offset!");

}

