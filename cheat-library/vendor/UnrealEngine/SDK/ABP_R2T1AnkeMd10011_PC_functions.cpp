#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_R2T1AnkeMd10011_PC

#include "Basic.hpp"

#include "ABP_R2T1AnkeMd10011_PC_classes.hpp"
#include "ABP_R2T1AnkeMd10011_PC_parameters.hpp"


namespace SDK
{

// Function ABP_R2T1AnkeMd10011_PC.ABP_R2T1AnkeMd10011_PC_C.ExecuteUbergraph_ABP_R2T1AnkeMd10011_PC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_R2T1AnkeMd10011_PC_C::ExecuteUbergraph_ABP_R2T1AnkeMd10011_PC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_R2T1AnkeMd10011_PC_C", "ExecuteUbergraph_ABP_R2T1AnkeMd10011_PC");

	Params::ABP_R2T1AnkeMd10011_PC_C_ExecuteUbergraph_ABP_R2T1AnkeMd10011_PC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_R2T1AnkeMd10011_PC.ABP_R2T1AnkeMd10011_PC_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_R2T1AnkeMd10011_PC_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_R2T1AnkeMd10011_PC_C", "BlueprintUpdateAnimation");

	Params::ABP_R2T1AnkeMd10011_PC_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_R2T1AnkeMd10011_PC.ABP_R2T1AnkeMd10011_PC_C.UpdatePhysicsClothSimulateEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTIme                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_R2T1AnkeMd10011_PC_C::UpdatePhysicsClothSimulateEnable(float DeltaTIme)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_R2T1AnkeMd10011_PC_C", "UpdatePhysicsClothSimulateEnable");

	Params::ABP_R2T1AnkeMd10011_PC_C_UpdatePhysicsClothSimulateEnable Parms{};

	Parms.DeltaTIme = DeltaTIme;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_R2T1AnkeMd10011_PC.ABP_R2T1AnkeMd10011_PC_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_R2T1AnkeMd10011_PC_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_R2T1AnkeMd10011_PC_C", "AnimGraph");

	Params::ABP_R2T1AnkeMd10011_PC_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_R2T1AnkeMd10011_PC.ABP_R2T1AnkeMd10011_PC_C.PhyCloth
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_PhyCloth                                         (Parm, OutParm, NoDestructor)

void UABP_R2T1AnkeMd10011_PC_C::PhyCloth(const struct FPoseLink& InPose, struct FPoseLink* Param_PhyCloth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_R2T1AnkeMd10011_PC_C", "PhyCloth");

	Params::ABP_R2T1AnkeMd10011_PC_C_PhyCloth Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_PhyCloth != nullptr)
		*Param_PhyCloth = std::move(Parms.Param_PhyCloth);
}

}

