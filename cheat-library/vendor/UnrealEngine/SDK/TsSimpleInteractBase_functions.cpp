#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsSimpleInteractBase

#include "Basic.hpp"

#include "TsSimpleInteractBase_classes.hpp"
#include "TsSimpleInteractBase_parameters.hpp"


namespace SDK
{

// Function TsSimpleInteractBase.TsSimpleInteractBase_C.ExecuteUbergraph_TsSimpleInteractBase
// (Final, UbergraphFunction, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsSimpleInteractBase_C::ExecuteUbergraph_TsSimpleInteractBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleInteractBase_C", "ExecuteUbergraph_TsSimpleInteractBase");

	Params::TsSimpleInteractBase_C_ExecuteUbergraph_TsSimpleInteractBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsSimpleInteractBase.TsSimpleInteractBase_C.EditorInit
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATsSimpleInteractBase_C::EditorInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleInteractBase_C", "EditorInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsSimpleInteractBase.TsSimpleInteractBase_C.EditorTick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsSimpleInteractBase_C::EditorTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleInteractBase_C", "EditorTick");

	Params::TsSimpleInteractBase_C_EditorTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsSimpleInteractBase.TsSimpleInteractBase_C.ReceiveEndPlay
// (Event, Public, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsSimpleInteractBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleInteractBase_C", "ReceiveEndPlay");

	Params::TsSimpleInteractBase_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsSimpleInteractBase.TsSimpleInteractBase_C.ReceiveBeginPlay
// (Event, Public, Protected, BlueprintCallable, BlueprintEvent)

void ATsSimpleInteractBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleInteractBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsSimpleInteractBase.TsSimpleInteractBase_C.Draw
// (Public, BlueprintCallable, BlueprintEvent)

void ATsSimpleInteractBase_C::Draw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleInteractBase_C", "Draw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsSimpleInteractBase.TsSimpleInteractBase_C.GetBestTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          MoveOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HalfHeight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSSimpleInteractResult           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FSSimpleInteractResult ATsSimpleInteractBase_C::GetBestTransform(class AActor* Actor, const struct FVector& MoveOffset, float HalfHeight, float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSimpleInteractBase_C", "GetBestTransform");

	Params::TsSimpleInteractBase_C_GetBestTransform Parms{};

	Parms.Actor = Actor;
	Parms.MoveOffset = std::move(MoveOffset);
	Parms.HalfHeight = HalfHeight;
	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

