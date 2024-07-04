#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_CharacterUtility

#include "Basic.hpp"

#include "BPL_CharacterUtility_classes.hpp"
#include "BPL_CharacterUtility_parameters.hpp"


namespace SDK
{

// Function BPL_CharacterUtility.BPL_CharacterUtility_C.GetLocalWind
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LocalWind                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_CharacterUtility_C::GetLocalWind(class UAnimInstance* AnimInstance, class UObject* __WorldContext, struct FVector* LocalWind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "GetLocalWind");

	Params::BPL_CharacterUtility_C_GetLocalWind Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (LocalWind != nullptr)
		*LocalWind = std::move(Parms.LocalWind);
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetMovementSettings
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSMovementSetting_State          Data                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPL_CharacterUtility_C::DtGetMovementSettings(class UDataTable* DataTable, class FName RowName, class UObject* __WorldContext, struct FSMovementSetting_State* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetMovementSettings");

	Params::BPL_CharacterUtility_C_DtGetMovementSettings Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

	return Parms.ReturnValue;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetBulletData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBulletDataMain                 Data                                                   (Parm, OutParm, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPL_CharacterUtility_C::DtGetBulletData(class UDataTable* DataTable, class FName RowName, class UObject* __WorldContext, struct FSBulletDataMain* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetBulletData");

	Params::BPL_CharacterUtility_C_DtGetBulletData Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

	return Parms.ReturnValue;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetHitEffect
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSHitEffect                      backData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPL_CharacterUtility_C::DtGetHitEffect(class UDataTable* DataTable, class FName RowName, struct FSHitEffect& backData, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetHitEffect");

	Params::BPL_CharacterUtility_C_DtGetHitEffect Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.backData = std::move(backData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	backData = std::move(Parms.backData);

	return Parms.ReturnValue;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetSkillInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSSkillInfo                      Data                                                   (Parm, OutParm, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPL_CharacterUtility_C::DtGetSkillInfo(class UDataTable* DataTable, class FName RowName, class UObject* __WorldContext, struct FSSkillInfo* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetSkillInfo");

	Params::BPL_CharacterUtility_C_DtGetSkillInfo Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

	return Parms.ReturnValue;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetDamageData
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSDamageData                     Data                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPL_CharacterUtility_C::DtGetDamageData(class UDataTable* DataTable, class FName RowName, class UObject* __WorldContext, struct FSDamageData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetDamageData");

	Params::BPL_CharacterUtility_C_DtGetDamageData Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

	return Parms.ReturnValue;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetAttributeModifierData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSAttributeModifierData          Data                                                   (Parm, OutParm, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPL_CharacterUtility_C::DtGetAttributeModifierData(class UDataTable* DataTable, class FName RowName, class UObject* __WorldContext, struct FSAttributeModifierData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetAttributeModifierData");

	Params::BPL_CharacterUtility_C_DtGetAttributeModifierData Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

	return Parms.ReturnValue;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetEffectData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSEffectData                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPL_CharacterUtility_C::DtGetEffectData(class UDataTable* DataTable, class FName RowName, class UObject* __WorldContext, struct FSEffectData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetEffectData");

	Params::BPL_CharacterUtility_C_DtGetEffectData Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

	return Parms.ReturnValue;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetNewBulletData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSReBulletDataMain               Data                                                   (Parm, OutParm, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPL_CharacterUtility_C::DtGetNewBulletData(class UDataTable* DataTable, class FName RowName, class UObject* __WorldContext, struct FSReBulletDataMain* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetNewBulletData");

	Params::BPL_CharacterUtility_C_DtGetNewBulletData Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

	return Parms.ReturnValue;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetAllSkillInfos
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSSkillInfo>              NewParam                                               (Parm, OutParm)

void UBPL_CharacterUtility_C::DtGetAllSkillInfos(class UDataTable* DataTable, class UObject* __WorldContext, TArray<struct FSSkillInfo>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetAllSkillInfos");

	Params::BPL_CharacterUtility_C_DtGetAllSkillInfos Parms{};

	Parms.DataTable = DataTable;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetAllCharacterPartDatas
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSCharacterPart>          PartArrayRef                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_CharacterUtility_C::DtGetAllCharacterPartDatas(class UDataTable* DataTable, TArray<struct FSCharacterPart>& PartArrayRef, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetAllCharacterPartDatas");

	Params::BPL_CharacterUtility_C_DtGetAllCharacterPartDatas Parms{};

	Parms.DataTable = DataTable;
	Parms.PartArrayRef = std::move(PartArrayRef);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	PartArrayRef = std::move(Parms.PartArrayRef);
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.GetInputMovementDirection
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATsBaseCharacter_C*               BaseChar                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMovementDirection                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EMovementDirection UBPL_CharacterUtility_C::GetInputMovementDirection(class ATsBaseCharacter_C* BaseChar, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "GetInputMovementDirection");

	Params::BPL_CharacterUtility_C_GetInputMovementDirection Parms{};

	Parms.BaseChar = BaseChar;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetVisionInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSVisionData                     Data                                                   (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPL_CharacterUtility_C::DtGetVisionInfo(class UDataTable* DataTable, class FName RowName, class UObject* __WorldContext, struct FSVisionData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetVisionInfo");

	Params::BPL_CharacterUtility_C_DtGetVisionInfo Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

	return Parms.ReturnValue;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetCaughtInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSCaughtInfo                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPL_CharacterUtility_C::DtGetCaughtInfo(class UDataTable* DataTable, class FName RowName, class UObject* __WorldContext, struct FSCaughtInfo* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetCaughtInfo");

	Params::BPL_CharacterUtility_C_DtGetCaughtInfo Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

	return Parms.ReturnValue;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetAllBulletData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSReBulletDataMain>       NewParam                                               (Parm, OutParm)

void UBPL_CharacterUtility_C::DtGetAllBulletData(class UDataTable* DataTable, class UObject* __WorldContext, TArray<struct FSReBulletDataMain>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetAllBulletData");

	Params::BPL_CharacterUtility_C_DtGetAllBulletData Parms{};

	Parms.DataTable = DataTable;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.DtGetBlockObjectType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<EObjectTypeQuery>                Value                                                  (Parm, OutParm)

void UBPL_CharacterUtility_C::DtGetBlockObjectType(class UObject* __WorldContext, TArray<EObjectTypeQuery>* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "DtGetBlockObjectType");

	Params::BPL_CharacterUtility_C_DtGetBlockObjectType Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.UpdatePhysicsClothSimulateEnable
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SrcSimulateEnable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DstSimulateEnable                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_CharacterUtility_C::UpdatePhysicsClothSimulateEnable(class UAnimInstance* AnimInstance, bool SrcSimulateEnable, class UObject* __WorldContext, bool* DstSimulateEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "UpdatePhysicsClothSimulateEnable");

	Params::BPL_CharacterUtility_C_UpdatePhysicsClothSimulateEnable Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.SrcSimulateEnable = SrcSimulateEnable;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DstSimulateEnable != nullptr)
		*DstSimulateEnable = Parms.DstSimulateEnable;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.GetTypeQuery
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<EObjectTypeQuery>                NewParam                                               (Parm, OutParm)

void UBPL_CharacterUtility_C::GetTypeQuery(class UObject* __WorldContext, TArray<EObjectTypeQuery>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "GetTypeQuery");

	Params::BPL_CharacterUtility_C_GetTypeQuery Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.UpdateCachePoseEnable
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*                    Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CachePoseEnable                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_CharacterUtility_C::UpdateCachePoseEnable(class UAnimInstance* Target, class UObject* __WorldContext, bool* CachePoseEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "UpdateCachePoseEnable");

	Params::BPL_CharacterUtility_C_UpdateCachePoseEnable Parms{};

	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (CachePoseEnable != nullptr)
		*CachePoseEnable = Parms.CachePoseEnable;
}


// Function BPL_CharacterUtility.BPL_CharacterUtility_C.CheckSimpleNpc
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   ReturnValues                                           (Parm, OutParm)

void UBPL_CharacterUtility_C::CheckSimpleNpc(class UObject* __WorldContext, TArray<class AActor*>* ReturnValues)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CharacterUtility_C", "CheckSimpleNpc");

	Params::BPL_CharacterUtility_C_CheckSimpleNpc Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ReturnValues != nullptr)
		*ReturnValues = std::move(Parms.ReturnValues);
}

}

