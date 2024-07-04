#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_WorldUtility

#include "Basic.hpp"

#include "BPL_WorldUtility_classes.hpp"
#include "BPL_WorldUtility_parameters.hpp"


namespace SDK
{

// Function BPL_WorldUtility.BPL_WorldUtility_C.GetEntityTableByName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSEntityConfig                   Out_Row                                                (Parm, OutParm, HasGetValueTypeHash)

void UBPL_WorldUtility_C::GetEntityTableByName(class FName RowName, class UObject* __WorldContext, bool* Exist, struct FSEntityConfig* Out_Row)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_WorldUtility_C", "GetEntityTableByName");

	Params::BPL_WorldUtility_C_GetEntityTableByName Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Exist != nullptr)
		*Exist = Parms.Exist;

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);
}


// Function BPL_WorldUtility.BPL_WorldUtility_C.GetModelTableByName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSModelConfig                    Out_Row                                                (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void UBPL_WorldUtility_C::GetModelTableByName(class FName RowName, class UObject* __WorldContext, bool* Exist, struct FSModelConfig* Out_Row)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_WorldUtility_C", "GetModelTableByName");

	Params::BPL_WorldUtility_C_GetModelTableByName Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Exist != nullptr)
		*Exist = Parms.Exist;

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);
}


// Function BPL_WorldUtility.BPL_WorldUtility_C.GetMapTableByName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSMapConfig                      Out_Row                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_WorldUtility_C::GetMapTableByName(class FName RowName, class UObject* __WorldContext, bool* Exist, struct FSMapConfig* Out_Row)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_WorldUtility_C", "GetMapTableByName");

	Params::BPL_WorldUtility_C_GetMapTableByName Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Exist != nullptr)
		*Exist = Parms.Exist;

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);
}


// Function BPL_WorldUtility.BPL_WorldUtility_C.GetEntityProperty
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RoleName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSEntityProperty                 Out_Row                                                (Parm, OutParm, HasGetValueTypeHash)

void UBPL_WorldUtility_C::GetEntityProperty(class FName RoleName, class UObject* __WorldContext, bool* Exist, struct FSEntityProperty* Out_Row)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_WorldUtility_C", "GetEntityProperty");

	Params::BPL_WorldUtility_C_GetEntityProperty Parms{};

	Parms.RoleName = RoleName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Exist != nullptr)
		*Exist = Parms.Exist;

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);
}


// Function BPL_WorldUtility.BPL_WorldUtility_C.LoadAiConfig
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RoleName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSAIConfig                       Out_Row                                                (Parm, OutParm, HasGetValueTypeHash)

void UBPL_WorldUtility_C::LoadAiConfig(class FName RoleName, class UObject* __WorldContext, bool* Exist, struct FSAIConfig* Out_Row)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_WorldUtility_C", "LoadAiConfig");

	Params::BPL_WorldUtility_C_LoadAiConfig Parms{};

	Parms.RoleName = RoleName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Exist != nullptr)
		*Exist = Parms.Exist;

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);
}

}

