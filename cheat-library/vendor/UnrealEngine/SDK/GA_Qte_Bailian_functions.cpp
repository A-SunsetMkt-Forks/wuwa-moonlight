#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Qte_Bailian

#include "Basic.hpp"

#include "GA_Qte_Bailian_classes.hpp"
#include "GA_Qte_Bailian_parameters.hpp"


namespace SDK
{

// Function GA_Qte_Bailian.GA_Qte_Bailian_C.ExecuteUbergraph_GA_Qte_Bailian
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Qte_Bailian_C::ExecuteUbergraph_GA_Qte_Bailian(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Qte_Bailian_C", "ExecuteUbergraph_GA_Qte_Bailian");

	Params::GA_Qte_Bailian_C_ExecuteUbergraph_GA_Qte_Bailian Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Qte_Bailian.GA_Qte_Bailian_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Qte_Bailian_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Qte_Bailian_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

