#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VolumetricSphereLightSuperFar

#include "Basic.hpp"

#include "BP_VolumetricSphereLightSuperFar_classes.hpp"
#include "BP_VolumetricSphereLightSuperFar_parameters.hpp"


namespace SDK
{

// Function BP_VolumetricSphereLightSuperFar.BP_VolumetricSphereLightSuperFar_C.ExecuteUbergraph_BP_VolumetricSphereLightSuperFar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VolumetricSphereLightSuperFar_C::ExecuteUbergraph_BP_VolumetricSphereLightSuperFar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolumetricSphereLightSuperFar_C", "ExecuteUbergraph_BP_VolumetricSphereLightSuperFar");

	Params::BP_VolumetricSphereLightSuperFar_C_ExecuteUbergraph_BP_VolumetricSphereLightSuperFar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VolumetricSphereLightSuperFar.BP_VolumetricSphereLightSuperFar_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VolumetricSphereLightSuperFar_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolumetricSphereLightSuperFar_C", "ReceiveTick");

	Params::BP_VolumetricSphereLightSuperFar_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VolumetricSphereLightSuperFar.BP_VolumetricSphereLightSuperFar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VolumetricSphereLightSuperFar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolumetricSphereLightSuperFar_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VolumetricSphereLightSuperFar.BP_VolumetricSphereLightSuperFar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VolumetricSphereLightSuperFar_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolumetricSphereLightSuperFar_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VolumetricSphereLightSuperFar.BP_VolumetricSphereLightSuperFar_C.UpdateVolumetricSphereLight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VolumetricSphereLightSuperFar_C::UpdateVolumetricSphereLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolumetricSphereLightSuperFar_C", "UpdateVolumetricSphereLight");

	UObject::ProcessEvent(Func, nullptr);
}

}

