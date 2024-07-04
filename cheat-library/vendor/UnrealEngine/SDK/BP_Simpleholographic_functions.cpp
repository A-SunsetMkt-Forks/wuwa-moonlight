#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Simpleholographic

#include "Basic.hpp"

#include "BP_Simpleholographic_classes.hpp"
#include "BP_Simpleholographic_parameters.hpp"


namespace SDK
{

// Function BP_Simpleholographic.BP_SimpleHolographic_C.ExecuteUbergraph_BP_SimpleHolographic
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimpleHolographic_C::ExecuteUbergraph_BP_SimpleHolographic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleHolographic_C", "ExecuteUbergraph_BP_SimpleHolographic");

	Params::BP_SimpleHolographic_C_ExecuteUbergraph_BP_SimpleHolographic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Simpleholographic.BP_SimpleHolographic_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimpleHolographic_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleHolographic_C", "ReceiveTick");

	Params::BP_SimpleHolographic_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Simpleholographic.BP_SimpleHolographic_C.StartEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SimpleHolographic_C::StartEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleHolographic_C", "StartEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Simpleholographic.BP_SimpleHolographic_C.EndEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SimpleHolographic_C::EndEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleHolographic_C", "EndEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Simpleholographic.BP_SimpleHolographic_C.UpdateMaterialsWithDa
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> Materials                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSHolographicData                SHolographicData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ABP_SimpleHolographic_C::UpdateMaterialsWithDa(TArray<class UMaterialInstanceDynamic*>& Materials, const struct FSHolographicData& SHolographicData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleHolographic_C", "UpdateMaterialsWithDa");

	Params::BP_SimpleHolographic_C_UpdateMaterialsWithDa Parms{};

	Parms.Materials = std::move(Materials);
	Parms.SHolographicData = std::move(SHolographicData);

	UObject::ProcessEvent(Func, &Parms);

	Materials = std::move(Parms.Materials);
}


// Function BP_Simpleholographic.BP_SimpleHolographic_C.RemoveNpcEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SimpleHolographic_C::RemoveNpcEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleHolographic_C", "RemoveNpcEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Simpleholographic.BP_SimpleHolographic_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SimpleHolographic_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleHolographic_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Simpleholographic.BP_SimpleHolographic_C.CacheMaterialParameters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSMaterialControllerFloatParameter>Floats                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FSMaterialControllerColorParameter>Colors                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UMaterialInstanceDynamic*         Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bReplaceMaterial                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSMaterialParamCache             Result                                                 (Parm, OutParm, HasGetValueTypeHash)

void ABP_SimpleHolographic_C::CacheMaterialParameters(TArray<struct FSMaterialControllerFloatParameter>& Floats, TArray<struct FSMaterialControllerColorParameter>& Colors, class UMaterialInstanceDynamic* Material, bool bReplaceMaterial, int32 Param_Index, struct FSMaterialParamCache* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleHolographic_C", "CacheMaterialParameters");

	Params::BP_SimpleHolographic_C_CacheMaterialParameters Parms{};

	Parms.Floats = std::move(Floats);
	Parms.Colors = std::move(Colors);
	Parms.Material = Material;
	Parms.bReplaceMaterial = bReplaceMaterial;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	Floats = std::move(Parms.Floats);
	Colors = std::move(Parms.Colors);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function BP_Simpleholographic.BP_SimpleHolographic_C.CacheAndReplace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSHolographicData                SHolographicData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UPrimitiveComponent*              Self2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                                   ElementIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSMaterialParamCache             CacheResult                                            (Parm, OutParm, HasGetValueTypeHash)

class UMaterialInstanceDynamic* ABP_SimpleHolographic_C::CacheAndReplace(const struct FSHolographicData& SHolographicData, class UPrimitiveComponent* Self2, int32 ElementIndex, class UMaterialInstanceDynamic* Material, struct FSMaterialParamCache* CacheResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleHolographic_C", "CacheAndReplace");

	Params::BP_SimpleHolographic_C_CacheAndReplace Parms{};

	Parms.SHolographicData = std::move(SHolographicData);
	Parms.Self2 = Self2;
	Parms.ElementIndex = ElementIndex;
	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);

	if (CacheResult != nullptr)
		*CacheResult = std::move(Parms.CacheResult);

	return Parms.ReturnValue;
}


// Function BP_Simpleholographic.BP_SimpleHolographic_C.RevertMaterialParamters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSMaterialParamCache             MaterialCache                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimpleHolographic_C::RevertMaterialParamters(const struct FSMaterialParamCache& MaterialCache, class UMaterialInstanceDynamic** Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleHolographic_C", "RevertMaterialParamters");

	Params::BP_SimpleHolographic_C_RevertMaterialParamters Parms{};

	Parms.MaterialCache = std::move(MaterialCache);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

