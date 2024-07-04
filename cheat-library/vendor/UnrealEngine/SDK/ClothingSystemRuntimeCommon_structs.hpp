#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntimeCommon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ClothingSystemRuntimeInterface_structs.hpp"


namespace SDK
{

// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
// NumValues: 0x0003
enum class EClothingWindMethod_Legacy : uint8
{
	Legacy                                   = 0,
	Accurate                                 = 1,
	EClothingWindMethod_MAX                  = 2,
};

// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
// NumValues: 0x0006
enum class EWeightMapTargetCommon : uint8
{
	None                                     = 0,
	MaxDistance                              = 1,
	BackstopDistance                         = 2,
	BackstopRadius                           = 3,
	AnimDriveMultiplier                      = 4,
	EWeightMapTargetCommon_MAX               = 5,
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
// 0x0010 (0x0010 - 0x0000)
struct FClothConstraintSetup_Legacy final
{
public:
	float                                         Stiffness;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StiffnessMultiplier;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StretchLimit;                                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CompressionLimit;                                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothConstraintSetup_Legacy) == 0x000004, "Wrong alignment on FClothConstraintSetup_Legacy");
static_assert(sizeof(FClothConstraintSetup_Legacy) == 0x000010, "Wrong size on FClothConstraintSetup_Legacy");
static_assert(offsetof(FClothConstraintSetup_Legacy, Stiffness) == 0x000000, "Member 'FClothConstraintSetup_Legacy::Stiffness' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetup_Legacy, StiffnessMultiplier) == 0x000004, "Member 'FClothConstraintSetup_Legacy::StiffnessMultiplier' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetup_Legacy, StretchLimit) == 0x000008, "Member 'FClothConstraintSetup_Legacy::StretchLimit' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetup_Legacy, CompressionLimit) == 0x00000C, "Member 'FClothConstraintSetup_Legacy::CompressionLimit' has a wrong offset!");

// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
// 0x00D4 (0x00D4 - 0x0000)
struct FClothConfig_Legacy final
{
public:
	EClothingWindMethod_Legacy                    WindMethod;                                        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2213[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FClothConstraintSetup_Legacy           VerticalConstraintConfig;                          // 0x0004(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy           HorizontalConstraintConfig;                        // 0x0014(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy           BendConstraintConfig;                              // 0x0024(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy           ShearConstraintConfig;                             // 0x0034(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	float                                         SelfCollisionRadius;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SelfCollisionStiffness;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SelfCollisionCullScale;                            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Damping;                                           // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Friction;                                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindDragCoefficient;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindLiftCoefficient;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LinearDrag;                                        // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularDrag;                                       // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LinearInertiaScale;                                // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularInertiaScale;                               // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CentrifugalInertiaScale;                           // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SolverFrequency;                                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StiffnessFrequency;                                // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GravityScale;                                      // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                GravityOverride;                                   // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseGravityOverride;                               // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2214[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TetherStiffness;                                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TetherLimit;                                       // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionThickness;                                // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimDriveSpringStiffness;                          // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimDriveDamperStiffness;                          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothConfig_Legacy) == 0x000004, "Wrong alignment on FClothConfig_Legacy");
static_assert(sizeof(FClothConfig_Legacy) == 0x0000D4, "Wrong size on FClothConfig_Legacy");
static_assert(offsetof(FClothConfig_Legacy, WindMethod) == 0x000000, "Member 'FClothConfig_Legacy::WindMethod' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, VerticalConstraintConfig) == 0x000004, "Member 'FClothConfig_Legacy::VerticalConstraintConfig' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, HorizontalConstraintConfig) == 0x000014, "Member 'FClothConfig_Legacy::HorizontalConstraintConfig' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, BendConstraintConfig) == 0x000024, "Member 'FClothConfig_Legacy::BendConstraintConfig' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, ShearConstraintConfig) == 0x000034, "Member 'FClothConfig_Legacy::ShearConstraintConfig' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, SelfCollisionRadius) == 0x000044, "Member 'FClothConfig_Legacy::SelfCollisionRadius' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, SelfCollisionStiffness) == 0x000048, "Member 'FClothConfig_Legacy::SelfCollisionStiffness' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, SelfCollisionCullScale) == 0x00004C, "Member 'FClothConfig_Legacy::SelfCollisionCullScale' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, Damping) == 0x000050, "Member 'FClothConfig_Legacy::Damping' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, Friction) == 0x00005C, "Member 'FClothConfig_Legacy::Friction' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, WindDragCoefficient) == 0x000060, "Member 'FClothConfig_Legacy::WindDragCoefficient' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, WindLiftCoefficient) == 0x000064, "Member 'FClothConfig_Legacy::WindLiftCoefficient' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, LinearDrag) == 0x000068, "Member 'FClothConfig_Legacy::LinearDrag' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, AngularDrag) == 0x000074, "Member 'FClothConfig_Legacy::AngularDrag' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, LinearInertiaScale) == 0x000080, "Member 'FClothConfig_Legacy::LinearInertiaScale' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, AngularInertiaScale) == 0x00008C, "Member 'FClothConfig_Legacy::AngularInertiaScale' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, CentrifugalInertiaScale) == 0x000098, "Member 'FClothConfig_Legacy::CentrifugalInertiaScale' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, SolverFrequency) == 0x0000A4, "Member 'FClothConfig_Legacy::SolverFrequency' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, StiffnessFrequency) == 0x0000A8, "Member 'FClothConfig_Legacy::StiffnessFrequency' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, GravityScale) == 0x0000AC, "Member 'FClothConfig_Legacy::GravityScale' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, GravityOverride) == 0x0000B0, "Member 'FClothConfig_Legacy::GravityOverride' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, bUseGravityOverride) == 0x0000BC, "Member 'FClothConfig_Legacy::bUseGravityOverride' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, TetherStiffness) == 0x0000C0, "Member 'FClothConfig_Legacy::TetherStiffness' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, TetherLimit) == 0x0000C4, "Member 'FClothConfig_Legacy::TetherLimit' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, CollisionThickness) == 0x0000C8, "Member 'FClothConfig_Legacy::CollisionThickness' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, AnimDriveSpringStiffness) == 0x0000CC, "Member 'FClothConfig_Legacy::AnimDriveSpringStiffness' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, AnimDriveDamperStiffness) == 0x0000D0, "Member 'FClothConfig_Legacy::AnimDriveDamperStiffness' has a wrong offset!");

// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
// 0x0010 (0x0010 - 0x0000)
struct FPointWeightMap final
{
public:
	TArray<float>                                 Values;                                            // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPointWeightMap) == 0x000008, "Wrong alignment on FPointWeightMap");
static_assert(sizeof(FPointWeightMap) == 0x000010, "Wrong size on FPointWeightMap");
static_assert(offsetof(FPointWeightMap, Values) == 0x000000, "Member 'FPointWeightMap::Values' has a wrong offset!");

// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// 0x00F8 (0x00F8 - 0x0000)
struct FClothPhysicalMeshData final
{
public:
	TArray<struct FVector>                        Vertices;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        Normals;                                           // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                                Indices;                                           // 0x0020(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<uint32, struct FPointWeightMap>          WeightMaps;                                        // 0x0030(0x0050)(Edit, NativeAccessSpecifierPublic)
	TArray<float>                                 InverseMasses;                                     // 0x0080(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothVertBoneData>             BoneData;                                          // 0x0090(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         MaxBoneWeights;                                    // 0x00A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumFixedVerts;                                     // 0x00A4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                                SelfCollisionIndices;                              // 0x00A8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 MaxDistances;                                      // 0x00B8(0x0010)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<float>                                 BackstopDistances;                                 // 0x00C8(0x0010)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<float>                                 BackstopRadiuses;                                  // 0x00D8(0x0010)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<float>                                 AnimDriveMultipliers;                              // 0x00E8(0x0010)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothPhysicalMeshData) == 0x000008, "Wrong alignment on FClothPhysicalMeshData");
static_assert(sizeof(FClothPhysicalMeshData) == 0x0000F8, "Wrong size on FClothPhysicalMeshData");
static_assert(offsetof(FClothPhysicalMeshData, Vertices) == 0x000000, "Member 'FClothPhysicalMeshData::Vertices' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, Normals) == 0x000010, "Member 'FClothPhysicalMeshData::Normals' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, Indices) == 0x000020, "Member 'FClothPhysicalMeshData::Indices' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, WeightMaps) == 0x000030, "Member 'FClothPhysicalMeshData::WeightMaps' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, InverseMasses) == 0x000080, "Member 'FClothPhysicalMeshData::InverseMasses' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, BoneData) == 0x000090, "Member 'FClothPhysicalMeshData::BoneData' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, MaxBoneWeights) == 0x0000A0, "Member 'FClothPhysicalMeshData::MaxBoneWeights' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, NumFixedVerts) == 0x0000A4, "Member 'FClothPhysicalMeshData::NumFixedVerts' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, SelfCollisionIndices) == 0x0000A8, "Member 'FClothPhysicalMeshData::SelfCollisionIndices' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, MaxDistances) == 0x0000B8, "Member 'FClothPhysicalMeshData::MaxDistances' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, BackstopDistances) == 0x0000C8, "Member 'FClothPhysicalMeshData::BackstopDistances' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, BackstopRadiuses) == 0x0000D8, "Member 'FClothPhysicalMeshData::BackstopRadiuses' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, AnimDriveMultipliers) == 0x0000E8, "Member 'FClothPhysicalMeshData::AnimDriveMultipliers' has a wrong offset!");

// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
// 0x0160 (0x0160 - 0x0000)
struct FClothLODDataCommon final
{
public:
	struct FClothPhysicalMeshData                 PhysicalMeshData;                                  // 0x0000(0x00F8)(Edit, NativeAccessSpecifierPublic)
	struct FClothCollisionData                    CollisionData;                                     // 0x00F8(0x0040)(Edit, NativeAccessSpecifierPublic)
	bool                                          bUseMultipleInfluences;                            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2215[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SkinningKernelRadius;                              // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2216[0x20];                                    // 0x0140(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FClothLODDataCommon) == 0x000008, "Wrong alignment on FClothLODDataCommon");
static_assert(sizeof(FClothLODDataCommon) == 0x000160, "Wrong size on FClothLODDataCommon");
static_assert(offsetof(FClothLODDataCommon, PhysicalMeshData) == 0x000000, "Member 'FClothLODDataCommon::PhysicalMeshData' has a wrong offset!");
static_assert(offsetof(FClothLODDataCommon, CollisionData) == 0x0000F8, "Member 'FClothLODDataCommon::CollisionData' has a wrong offset!");
static_assert(offsetof(FClothLODDataCommon, bUseMultipleInfluences) == 0x000138, "Member 'FClothLODDataCommon::bUseMultipleInfluences' has a wrong offset!");
static_assert(offsetof(FClothLODDataCommon, SkinningKernelRadius) == 0x00013C, "Member 'FClothLODDataCommon::SkinningKernelRadius' has a wrong offset!");

// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// 0x0030 (0x0030 - 0x0000)
struct FClothParameterMask_Legacy final
{
public:
	class FName                                   MaskName;                                          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWeightMapTargetCommon                        CurrentTarget;                                     // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2217[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxValue;                                          // 0x0010(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinValue;                                          // 0x0014(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 Values;                                            // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2218[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FClothParameterMask_Legacy) == 0x000008, "Wrong alignment on FClothParameterMask_Legacy");
static_assert(sizeof(FClothParameterMask_Legacy) == 0x000030, "Wrong size on FClothParameterMask_Legacy");
static_assert(offsetof(FClothParameterMask_Legacy, MaskName) == 0x000000, "Member 'FClothParameterMask_Legacy::MaskName' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_Legacy, CurrentTarget) == 0x00000C, "Member 'FClothParameterMask_Legacy::CurrentTarget' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_Legacy, MaxValue) == 0x000010, "Member 'FClothParameterMask_Legacy::MaxValue' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_Legacy, MinValue) == 0x000014, "Member 'FClothParameterMask_Legacy::MinValue' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_Legacy, Values) == 0x000018, "Member 'FClothParameterMask_Legacy::Values' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_Legacy, bEnabled) == 0x000028, "Member 'FClothParameterMask_Legacy::bEnabled' has a wrong offset!");

}

