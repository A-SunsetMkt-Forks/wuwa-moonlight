#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_WorldUtility

#include "Basic.hpp"

#include "SAIConfig_structs.hpp"
#include "SEntityProperty_structs.hpp"
#include "SModelConfig_structs.hpp"
#include "SMapConfig_structs.hpp"
#include "SEntityConfig_structs.hpp"


namespace SDK::Params
{

// Function BPL_WorldUtility.BPL_WorldUtility_C.GetEntityTableByName
// 0x0568 (0x0568 - 0x0000)
struct BPL_WorldUtility_C_GetEntityTableByName final
{
public:
	class FName                                   RowName;                                           // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_330F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3310[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSEntityConfig                         Out_Row;                                           // 0x0020(0x02A0)(Parm, OutParm, HasGetValueTypeHash)
	struct FSEntityConfig                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x02C0(0x02A0)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0560(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_WorldUtility_C_GetEntityTableByName) == 0x000008, "Wrong alignment on BPL_WorldUtility_C_GetEntityTableByName");
static_assert(sizeof(BPL_WorldUtility_C_GetEntityTableByName) == 0x000568, "Wrong size on BPL_WorldUtility_C_GetEntityTableByName");
static_assert(offsetof(BPL_WorldUtility_C_GetEntityTableByName, RowName) == 0x000000, "Member 'BPL_WorldUtility_C_GetEntityTableByName::RowName' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetEntityTableByName, __WorldContext) == 0x000010, "Member 'BPL_WorldUtility_C_GetEntityTableByName::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetEntityTableByName, Exist) == 0x000018, "Member 'BPL_WorldUtility_C_GetEntityTableByName::Exist' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetEntityTableByName, Out_Row) == 0x000020, "Member 'BPL_WorldUtility_C_GetEntityTableByName::Out_Row' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetEntityTableByName, CallFunc_GetDataTableRowFromName_OutRow) == 0x0002C0, "Member 'BPL_WorldUtility_C_GetEntityTableByName::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetEntityTableByName, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000560, "Member 'BPL_WorldUtility_C_GetEntityTableByName::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function BPL_WorldUtility.BPL_WorldUtility_C.GetModelTableByName
// 0x0788 (0x0788 - 0x0000)
struct BPL_WorldUtility_C_GetModelTableByName final
{
public:
	class FName                                   RowName;                                           // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3311[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3312[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSModelConfig                          Out_Row;                                           // 0x0020(0x03B0)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FSModelConfig                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x03D0(0x03B0)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0780(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_WorldUtility_C_GetModelTableByName) == 0x000008, "Wrong alignment on BPL_WorldUtility_C_GetModelTableByName");
static_assert(sizeof(BPL_WorldUtility_C_GetModelTableByName) == 0x000788, "Wrong size on BPL_WorldUtility_C_GetModelTableByName");
static_assert(offsetof(BPL_WorldUtility_C_GetModelTableByName, RowName) == 0x000000, "Member 'BPL_WorldUtility_C_GetModelTableByName::RowName' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetModelTableByName, __WorldContext) == 0x000010, "Member 'BPL_WorldUtility_C_GetModelTableByName::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetModelTableByName, Exist) == 0x000018, "Member 'BPL_WorldUtility_C_GetModelTableByName::Exist' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetModelTableByName, Out_Row) == 0x000020, "Member 'BPL_WorldUtility_C_GetModelTableByName::Out_Row' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetModelTableByName, CallFunc_GetDataTableRowFromName_OutRow) == 0x0003D0, "Member 'BPL_WorldUtility_C_GetModelTableByName::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetModelTableByName, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000780, "Member 'BPL_WorldUtility_C_GetModelTableByName::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function BPL_WorldUtility.BPL_WorldUtility_C.GetMapTableByName
// 0x0040 (0x0040 - 0x0000)
struct BPL_WorldUtility_C_GetMapTableByName final
{
public:
	class FName                                   RowName;                                           // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3313[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3314[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSMapConfig                            Out_Row;                                           // 0x001C(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSMapConfig                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_WorldUtility_C_GetMapTableByName) == 0x000008, "Wrong alignment on BPL_WorldUtility_C_GetMapTableByName");
static_assert(sizeof(BPL_WorldUtility_C_GetMapTableByName) == 0x000040, "Wrong size on BPL_WorldUtility_C_GetMapTableByName");
static_assert(offsetof(BPL_WorldUtility_C_GetMapTableByName, RowName) == 0x000000, "Member 'BPL_WorldUtility_C_GetMapTableByName::RowName' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetMapTableByName, __WorldContext) == 0x000010, "Member 'BPL_WorldUtility_C_GetMapTableByName::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetMapTableByName, Exist) == 0x000018, "Member 'BPL_WorldUtility_C_GetMapTableByName::Exist' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetMapTableByName, Out_Row) == 0x00001C, "Member 'BPL_WorldUtility_C_GetMapTableByName::Out_Row' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetMapTableByName, CallFunc_GetDataTableRowFromName_OutRow) == 0x00002C, "Member 'BPL_WorldUtility_C_GetMapTableByName::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetMapTableByName, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x00003C, "Member 'BPL_WorldUtility_C_GetMapTableByName::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function BPL_WorldUtility.BPL_WorldUtility_C.GetEntityProperty
// 0x0078 (0x0078 - 0x0000)
struct BPL_WorldUtility_C_GetEntityProperty final
{
public:
	class FName                                   RoleName;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3315[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3316[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSEntityProperty                       Out_Row;                                           // 0x0020(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	struct FSEntityProperty                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_WorldUtility_C_GetEntityProperty) == 0x000008, "Wrong alignment on BPL_WorldUtility_C_GetEntityProperty");
static_assert(sizeof(BPL_WorldUtility_C_GetEntityProperty) == 0x000078, "Wrong size on BPL_WorldUtility_C_GetEntityProperty");
static_assert(offsetof(BPL_WorldUtility_C_GetEntityProperty, RoleName) == 0x000000, "Member 'BPL_WorldUtility_C_GetEntityProperty::RoleName' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetEntityProperty, __WorldContext) == 0x000010, "Member 'BPL_WorldUtility_C_GetEntityProperty::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetEntityProperty, Exist) == 0x000018, "Member 'BPL_WorldUtility_C_GetEntityProperty::Exist' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetEntityProperty, Out_Row) == 0x000020, "Member 'BPL_WorldUtility_C_GetEntityProperty::Out_Row' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetEntityProperty, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'BPL_WorldUtility_C_GetEntityProperty::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_GetEntityProperty, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000070, "Member 'BPL_WorldUtility_C_GetEntityProperty::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function BPL_WorldUtility.BPL_WorldUtility_C.LoadAiConfig
// 0x00C8 (0x00C8 - 0x0000)
struct BPL_WorldUtility_C_LoadAiConfig final
{
public:
	class FName                                   RoleName;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3317[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3318[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSAIConfig                             Out_Row;                                           // 0x0020(0x0050)(Parm, OutParm, HasGetValueTypeHash)
	struct FSAIConfig                             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0070(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_WorldUtility_C_LoadAiConfig) == 0x000008, "Wrong alignment on BPL_WorldUtility_C_LoadAiConfig");
static_assert(sizeof(BPL_WorldUtility_C_LoadAiConfig) == 0x0000C8, "Wrong size on BPL_WorldUtility_C_LoadAiConfig");
static_assert(offsetof(BPL_WorldUtility_C_LoadAiConfig, RoleName) == 0x000000, "Member 'BPL_WorldUtility_C_LoadAiConfig::RoleName' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_LoadAiConfig, __WorldContext) == 0x000010, "Member 'BPL_WorldUtility_C_LoadAiConfig::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_LoadAiConfig, Exist) == 0x000018, "Member 'BPL_WorldUtility_C_LoadAiConfig::Exist' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_LoadAiConfig, Out_Row) == 0x000020, "Member 'BPL_WorldUtility_C_LoadAiConfig::Out_Row' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_LoadAiConfig, CallFunc_GetDataTableRowFromName_OutRow) == 0x000070, "Member 'BPL_WorldUtility_C_LoadAiConfig::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_WorldUtility_C_LoadAiConfig, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C0, "Member 'BPL_WorldUtility_C_LoadAiConfig::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

}

