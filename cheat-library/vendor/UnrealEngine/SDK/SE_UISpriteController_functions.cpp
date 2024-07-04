#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_UISpriteController

#include "Basic.hpp"

#include "SE_UISpriteController_classes.hpp"
#include "SE_UISpriteController_parameters.hpp"


namespace SDK
{

// Function SE_UISpriteController.SE_UISpriteController_C.ExecuteUbergraph_SE_UISpriteController
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_UISpriteController_C::ExecuteUbergraph_SE_UISpriteController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteController_C", "ExecuteUbergraph_SE_UISpriteController");

	Params::SE_UISpriteController_C_ExecuteUbergraph_SE_UISpriteController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_UISpriteController.SE_UISpriteController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_UISpriteController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteController_C", "ReceiveEndPlay");

	Params::SE_UISpriteController_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_UISpriteController.SE_UISpriteController_C.ApplyAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_UISpriteController_C::ApplyAlpha(float Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteController_C", "ApplyAlpha");

	Params::SE_UISpriteController_C_ApplyAlpha Parms{};

	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_UISpriteController.SE_UISpriteController_C.Loop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_UISpriteController_C::Loop(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteController_C", "Loop");

	Params::SE_UISpriteController_C_Loop Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_UISpriteController.SE_UISpriteController_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_UISpriteController_C::End(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteController_C", "End");

	Params::SE_UISpriteController_C_End Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_UISpriteController.SE_UISpriteController_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_UISpriteController_C::Start(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteController_C", "Start");

	Params::SE_UISpriteController_C_Start Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_UISpriteController.SE_UISpriteController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_UISpriteController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteController_C", "ReceiveTick");

	Params::SE_UISpriteController_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_UISpriteController.SE_UISpriteController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void USE_UISpriteController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SE_UISpriteController.SE_UISpriteController_C.UpdateComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SE_PlayState                          State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_UISpriteController_C::UpdateComponent(E_SE_PlayState State, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteController_C", "UpdateComponent");

	Params::SE_UISpriteController_C_UpdateComponent Parms{};

	Parms.State = State;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_UISpriteController.SE_UISpriteController_C.UpdateComponentAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_UISpriteController_C::UpdateComponentAlpha(float Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_UISpriteController_C", "UpdateComponentAlpha");

	Params::SE_UISpriteController_C_UpdateComponentAlpha Parms{};

	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);
}

}

