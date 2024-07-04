#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraScalabilitySetting

#include "Basic.hpp"

#include "ENiagaraScalabilityType_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass NiagaraScalabilitySetting.NiagaraScalabilitySetting_C
// 0x0050 (0x0088 - 0x0038)
class UNiagaraScalabilitySetting_C final : public UPrimaryDataAsset
{
public:
	TMap<ENiagaraScalabilityType, class UNiagaraEffectType*> NiagaraEffectTypes;                                // 0x0038(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NiagaraScalabilitySetting_C">();
	}
	static class UNiagaraScalabilitySetting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraScalabilitySetting_C>();
	}
};
static_assert(alignof(UNiagaraScalabilitySetting_C) == 0x000008, "Wrong alignment on UNiagaraScalabilitySetting_C");
static_assert(sizeof(UNiagaraScalabilitySetting_C) == 0x000088, "Wrong size on UNiagaraScalabilitySetting_C");
static_assert(offsetof(UNiagaraScalabilitySetting_C, NiagaraEffectTypes) == 0x000038, "Member 'UNiagaraScalabilitySetting_C::NiagaraEffectTypes' has a wrong offset!");

}

