#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskAnimalMoveTo

#include "Basic.hpp"

#include "TsTaskAnimalMoveTo_classes.hpp"
#include "TsTaskAnimalMoveTo_parameters.hpp"


namespace SDK
{

// Function TsTaskAnimalMoveTo.TsTaskAnimalMoveTo_C.ExecuteUbergraph_TsTaskAnimalMoveTo
// (Final, Native, UbergraphFunction, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsTaskAnimalMoveTo_C::ExecuteUbergraph_TsTaskAnimalMoveTo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsTaskAnimalMoveTo_C", "ExecuteUbergraph_TsTaskAnimalMoveTo");

	Params::TsTaskAnimalMoveTo_C_ExecuteUbergraph_TsTaskAnimalMoveTo Parms{};

	Parms.EntryPoint = EntryPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsTaskAnimalMoveTo.TsTaskAnimalMoveTo_C.ReceiveTickAI
// (Native, Event, Public, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsTaskAnimalMoveTo_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsTaskAnimalMoveTo_C", "ReceiveTickAI");

	Params::TsTaskAnimalMoveTo_C_ReceiveTickAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TsTaskAnimalMoveTo.TsTaskAnimalMoveTo_C.ReceiveExecuteAI
// (Native, Event, Public, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsTaskAnimalMoveTo_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsTaskAnimalMoveTo_C", "ReceiveExecuteAI");

	Params::TsTaskAnimalMoveTo_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

