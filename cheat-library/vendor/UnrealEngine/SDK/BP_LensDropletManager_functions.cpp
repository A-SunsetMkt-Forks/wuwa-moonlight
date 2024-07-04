#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LensDropletManager

#include "Basic.hpp"

#include "BP_LensDropletManager_classes.hpp"
#include "BP_LensDropletManager_parameters.hpp"


namespace SDK
{

// Function BP_LensDropletManager.BP_LensDropletManager_C.GenerateOneDroplets
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LensDropletManager_C::GenerateOneDroplets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "GenerateOneDroplets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.Timer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_InOut                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LensDropletManager_C::Timer(float Param_Time, bool Param_InOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "Timer");

	Params::BP_LensDropletManager_C_Timer Parms{};

	Parms.Param_Time = Param_Time;
	Parms.Param_InOut = Param_InOut;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.UpdateParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LensDropletManager_C::UpdateParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "UpdateParameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LensDropletManager_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.ConstructPolyMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DropletAmount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LensDropletManager_C::ConstructPolyMesh(int32 DropletAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "ConstructPolyMesh");

	Params::BP_LensDropletManager_C_ConstructPolyMesh Parms{};

	Parms.DropletAmount = DropletAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.SetBasicDropletParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   RainIntensity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Gravity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LensDropletManager_C::SetBasicDropletParameters(float RainIntensity, float Param_Gravity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "SetBasicDropletParameters");

	Params::BP_LensDropletManager_C_SetBasicDropletParameters Parms{};

	Parms.RainIntensity = RainIntensity;
	Parms.Param_Gravity = Param_Gravity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LensDropletManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.DropletGenerate__FinishedFunc
// (BlueprintEvent)

void ABP_LensDropletManager_C::DropletGenerate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "DropletGenerate__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.DropletGenerate__UpdateFunc
// (BlueprintEvent)

void ABP_LensDropletManager_C::DropletGenerate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "DropletGenerate__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_LensDropletManager_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "CustomEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.DropletEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_LensDropletManager_C::DropletEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "DropletEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.DropletStart
// (BlueprintCallable, BlueprintEvent)

void ABP_LensDropletManager_C::DropletStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "DropletStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.CleanMesh
// (BlueprintCallable, BlueprintEvent)

void ABP_LensDropletManager_C::CleanMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "CleanMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.DisableDroplets
// (BlueprintCallable, BlueprintEvent)

void ABP_LensDropletManager_C::DisableDroplets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "DisableDroplets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.EditorTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LensDropletManager_C::EditorTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "EditorTick");

	Params::BP_LensDropletManager_C_EditorTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.EnableDroplets
// (BlueprintCallable, BlueprintEvent)

void ABP_LensDropletManager_C::EnableDroplets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "EnableDroplets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LensDropletManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "ReceiveTick");

	Params::BP_LensDropletManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LensDropletManager.BP_LensDropletManager_C.ExecuteUbergraph_BP_LensDropletManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LensDropletManager_C::ExecuteUbergraph_BP_LensDropletManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensDropletManager_C", "ExecuteUbergraph_BP_LensDropletManager");

	Params::BP_LensDropletManager_C_ExecuteUbergraph_BP_LensDropletManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

