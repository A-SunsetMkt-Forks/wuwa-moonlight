#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BasePathLine_Edgewall

#include "Basic.hpp"

#include "BP_BasePathLine_Edgewall_classes.hpp"
#include "BP_BasePathLine_Edgewall_parameters.hpp"


namespace SDK
{

// Function BP_BasePathLine_Edgewall.BP_BasePathLine_Edgewall_C.ExecuteUbergraph_BP_BasePathLine_Edgewall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BasePathLine_Edgewall_C::ExecuteUbergraph_BP_BasePathLine_Edgewall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BasePathLine_Edgewall_C", "ExecuteUbergraph_BP_BasePathLine_Edgewall");

	Params::BP_BasePathLine_Edgewall_C_ExecuteUbergraph_BP_BasePathLine_Edgewall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BasePathLine_Edgewall.BP_BasePathLine_Edgewall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BasePathLine_Edgewall_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BasePathLine_Edgewall_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BasePathLine_Edgewall.BP_BasePathLine_Edgewall_C.40
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BasePathLine_Edgewall_C::Four0__()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BasePathLine_Edgewall_C", "40");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BasePathLine_Edgewall.BP_BasePathLine_Edgewall_C.Save
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BasePathLine_Edgewall_C::Save()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BasePathLine_Edgewall_C", "Save");

	UObject::ProcessEvent(Func, nullptr);
}

}

