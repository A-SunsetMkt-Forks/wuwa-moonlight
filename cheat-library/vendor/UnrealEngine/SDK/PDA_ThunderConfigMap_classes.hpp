#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_ThunderConfigMap

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_ThunderConfigMap.PDA_ThunderConfigMap_C
// 0x0050 (0x0088 - 0x0038)
class UPDA_ThunderConfigMap_C final : public UPrimaryDataAsset
{
public:
	TMap<EKuroThunderType, class UPDA_ThunderConfig_C*> Data;                                              // 0x0038(0x0050)(Edit, BlueprintVisible)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_ThunderConfigMap_C">();
	}
	static class UPDA_ThunderConfigMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_ThunderConfigMap_C>();
	}
};
static_assert(alignof(UPDA_ThunderConfigMap_C) == 0x000008, "Wrong alignment on UPDA_ThunderConfigMap_C");
static_assert(sizeof(UPDA_ThunderConfigMap_C) == 0x000088, "Wrong size on UPDA_ThunderConfigMap_C");
static_assert(offsetof(UPDA_ThunderConfigMap_C, Data) == 0x000038, "Member 'UPDA_ThunderConfigMap_C::Data' has a wrong offset!");

}
