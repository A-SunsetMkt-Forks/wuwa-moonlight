#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BaseRole_Seq_V2

#include "Basic.hpp"

#include "ABP_BaseRole_Seq_V2_classes.hpp"
#include "ABP_BaseRole_Seq_V2_parameters.hpp"


namespace SDK
{

// Function ABP_BaseRole_Seq_V2.ABP_BaseRole_Seq_V2_C.ExecuteUbergraph_ABP_BaseRole_Seq_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BaseRole_Seq_V2_C::ExecuteUbergraph_ABP_BaseRole_Seq_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseRole_Seq_V2_C", "ExecuteUbergraph_ABP_BaseRole_Seq_V2");

	Params::ABP_BaseRole_Seq_V2_C_ExecuteUbergraph_ABP_BaseRole_Seq_V2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_BaseRole_Seq_V2.ABP_BaseRole_Seq_V2_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BaseRole_Seq_V2_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseRole_Seq_V2_C", "BlueprintUpdateAnimation");

	Params::ABP_BaseRole_Seq_V2_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_BaseRole_Seq_V2.ABP_BaseRole_Seq_V2_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_BaseRole_Seq_V2_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseRole_Seq_V2_C", "AnimGraph");

	Params::ABP_BaseRole_Seq_V2_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_BaseRole_Seq_V2.ABP_BaseRole_Seq_V2_C.��B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param___B                                              (Parm, OutParm, NoDestructor)

void UABP_BaseRole_Seq_V2_C::__B_0(const struct FPoseLink& InPose_0, struct FPoseLink* Param___B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseRole_Seq_V2_C", "��B");

	Params::ABP_BaseRole_Seq_V2_C___B Parms{};

	Parms.InPose_0 = std::move(InPose_0);

	UObject::ProcessEvent(Func, &Parms);

	if (Param___B != nullptr)
		*Param___B = std::move(Parms.Param___B);
}


// Function ABP_BaseRole_Seq_V2.ABP_BaseRole_Seq_V2_C.�SB
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param__SB                                              (Parm, OutParm, NoDestructor)

void UABP_BaseRole_Seq_V2_C::_SB(struct FPoseLink* Param__SB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseRole_Seq_V2_C", "�SB");

	Params::ABP_BaseRole_Seq_V2_C__SB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param__SB != nullptr)
		*Param__SB = std::move(Parms.Param__SB);
}


// Function ABP_BaseRole_Seq_V2.ABP_BaseRole_Seq_V2_C.b�B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_b_B                                              (Parm, OutParm, NoDestructor)

void UABP_BaseRole_Seq_V2_C::b_B(const struct FPoseLink& InPose, struct FPoseLink* Param_b_B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseRole_Seq_V2_C", "b�B");

	Params::ABP_BaseRole_Seq_V2_C_b_B Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_b_B != nullptr)
		*Param_b_B = std::move(Parms.Param_b_B);
}


// Function ABP_BaseRole_Seq_V2.ABP_BaseRole_Seq_V2_C.�B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param___B                                              (Parm, OutParm, NoDestructor)

void UABP_BaseRole_Seq_V2_C::__B(const struct FPoseLink& InPose_0, struct FPoseLink* Param___B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BaseRole_Seq_V2_C", "�B");

	Params::ABP_BaseRole_Seq_V2_C___B Parms{};

	Parms.InPose_0 = std::move(InPose_0);

	UObject::ProcessEvent(Func, &Parms);

	if (Param___B != nullptr)
		*Param___B = std::move(Parms.Param___B);
}

}

