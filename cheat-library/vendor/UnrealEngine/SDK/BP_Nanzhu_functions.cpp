#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Nanzhu

#include "Basic.hpp"

#include "BP_Nanzhu_classes.hpp"
#include "BP_Nanzhu_parameters.hpp"


namespace SDK
{

// Function BP_Nanzhu.BP_Nanzhu_C.ExecuteUbergraph_BP_Nanzhu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Nanzhu_C::ExecuteUbergraph_BP_Nanzhu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Nanzhu_C", "ExecuteUbergraph_BP_Nanzhu");

	Params::BP_Nanzhu_C_ExecuteUbergraph_BP_Nanzhu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Nanzhu.BP_Nanzhu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Nanzhu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Nanzhu_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Nanzhu.BP_Nanzhu_C.FightCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInAir                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Nanzhu_C::FightCommand(bool IsInAir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Nanzhu_C", "FightCommand");

	Params::BP_Nanzhu_C_FightCommand Parms{};

	Parms.IsInAir = IsInAir;

	UObject::ProcessEvent(Func, &Parms);
}

}

