#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Anke

#include "Basic.hpp"

#include "BP_Anke_classes.hpp"
#include "BP_Anke_parameters.hpp"


namespace SDK
{

// Function BP_Anke.BP_Anke_C.ExecuteUbergraph_BP_Anke
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Anke_C::ExecuteUbergraph_BP_Anke(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Anke_C", "ExecuteUbergraph_BP_Anke");

	Params::BP_Anke_C_ExecuteUbergraph_BP_Anke Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Anke.BP_Anke_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Anke_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Anke_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Anke.BP_Anke_C.FightCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInAir                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Anke_C::FightCommand(bool IsInAir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Anke_C", "FightCommand");

	Params::BP_Anke_C_FightCommand Parms{};

	Parms.IsInAir = IsInAir;

	UObject::ProcessEvent(Func, &Parms);
}

}

