#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsRecordGameplayCue

#include "Basic.hpp"

#include "TsRecordGameplayCue_classes.hpp"
#include "TsRecordGameplayCue_parameters.hpp"


namespace SDK
{

// Function TsRecordGameplayCue.TsRecordGameplayCue_C.ExecuteUbergraph_TsRecordGameplayCue
// (Final, UbergraphFunction, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsRecordGameplayCue_C::ExecuteUbergraph_TsRecordGameplayCue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsRecordGameplayCue_C", "ExecuteUbergraph_TsRecordGameplayCue");

	Params::TsRecordGameplayCue_C_ExecuteUbergraph_TsRecordGameplayCue Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsRecordGameplayCue.TsRecordGameplayCue_C.OnStop
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATsRecordGameplayCue_C::OnStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsRecordGameplayCue_C", "OnStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsRecordGameplayCue.TsRecordGameplayCue_C.OnPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATsRecordGameplayCue_C::OnPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsRecordGameplayCue_C", "OnPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

