#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigVM

#include "Basic.hpp"


namespace SDK
{

// Enum RigVM.ERigVMParameterType
// NumValues: 0x0004
enum class ERigVMParameterType : uint8
{
	Input                                    = 0,
	Output                                   = 1,
	Invalid                                  = 2,
	ERigVMParameterType_MAX                  = 3,
};

// Enum RigVM.ERigVMOpCode
// NumValues: 0x0055
enum class ERigVMOpCode : uint8
{
	Execute_0_Operands                       = 0,
	Execute_1_Operands                       = 1,
	Execute_2_Operands                       = 2,
	Execute_3_Operands                       = 3,
	Execute_4_Operands                       = 4,
	Execute_5_Operands                       = 5,
	Execute_6_Operands                       = 6,
	Execute_7_Operands                       = 7,
	Execute_8_Operands                       = 8,
	Execute_9_Operands                       = 9,
	Execute_10_Operands                      = 10,
	Execute_11_Operands                      = 11,
	Execute_12_Operands                      = 12,
	Execute_13_Operands                      = 13,
	Execute_14_Operands                      = 14,
	Execute_15_Operands                      = 15,
	Execute_16_Operands                      = 16,
	Execute_17_Operands                      = 17,
	Execute_18_Operands                      = 18,
	Execute_19_Operands                      = 19,
	Execute_20_Operands                      = 20,
	Execute_21_Operands                      = 21,
	Execute_22_Operands                      = 22,
	Execute_23_Operands                      = 23,
	Execute_24_Operands                      = 24,
	Execute_25_Operands                      = 25,
	Execute_26_Operands                      = 26,
	Execute_27_Operands                      = 27,
	Execute_28_Operands                      = 28,
	Execute_29_Operands                      = 29,
	Execute_30_Operands                      = 30,
	Execute_31_Operands                      = 31,
	Execute_32_Operands                      = 32,
	Execute_33_Operands                      = 33,
	Execute_34_Operands                      = 34,
	Execute_35_Operands                      = 35,
	Execute_36_Operands                      = 36,
	Execute_37_Operands                      = 37,
	Execute_38_Operands                      = 38,
	Execute_39_Operands                      = 39,
	Execute_40_Operands                      = 40,
	Execute_41_Operands                      = 41,
	Execute_42_Operands                      = 42,
	Execute_43_Operands                      = 43,
	Execute_44_Operands                      = 44,
	Execute_45_Operands                      = 45,
	Execute_46_Operands                      = 46,
	Execute_47_Operands                      = 47,
	Execute_48_Operands                      = 48,
	Execute_49_Operands                      = 49,
	Execute_50_Operands                      = 50,
	Execute_51_Operands                      = 51,
	Execute_52_Operands                      = 52,
	Execute_53_Operands                      = 53,
	Execute_54_Operands                      = 54,
	Execute_55_Operands                      = 55,
	Execute_56_Operands                      = 56,
	Execute_57_Operands                      = 57,
	Execute_58_Operands                      = 58,
	Execute_59_Operands                      = 59,
	Execute_60_Operands                      = 60,
	Execute_61_Operands                      = 61,
	Execute_62_Operands                      = 62,
	Execute_63_Operands                      = 63,
	Execute_64_Operands                      = 64,
	Zero                                     = 65,
	BoolFalse                                = 66,
	BoolTrue                                 = 67,
	Copy                                     = 68,
	Increment                                = 69,
	Decrement                                = 70,
	Equals                                   = 71,
	NotEquals                                = 72,
	JumpAbsolute                             = 73,
	JumpForward                              = 74,
	JumpBackward                             = 75,
	JumpAbsoluteIf                           = 76,
	JumpForwardIf                            = 77,
	JumpBackwardIf                           = 78,
	ChangeType                               = 79,
	Exit                                     = 80,
	BeginBlock                               = 81,
	EndBlock                                 = 82,
	Invalid                                  = 83,
	ERigVMOpCode_MAX                         = 84,
};

// Enum RigVM.ERigVMPinDirection
// NumValues: 0x0007
enum class ERigVMPinDirection : uint8
{
	Input                                    = 0,
	Output                                   = 1,
	IO                                       = 2,
	Visible                                  = 3,
	Hidden                                   = 4,
	Invalid                                  = 5,
	ERigVMPinDirection_MAX                   = 6,
};

// Enum RigVM.ERigVMRegisterType
// NumValues: 0x0006
enum class ERigVMRegisterType : uint8
{
	Plain                                    = 0,
	String                                   = 1,
	Name                                     = 2,
	Struct                                   = 3,
	Invalid                                  = 4,
	ERigVMRegisterType_MAX                   = 5,
};

// Enum RigVM.ERigVMMemoryType
// NumValues: 0x0005
enum class ERigVMMemoryType : uint8
{
	Work                                     = 0,
	Literal                                  = 1,
	External                                 = 2,
	Invalid                                  = 3,
	ERigVMMemoryType_MAX                     = 4,
};

// ScriptStruct RigVM.RigVMExecuteContext
// 0x0060 (0x0060 - 0x0000)
struct alignas(0x08) FRigVMExecuteContext
{
public:
	uint8                                         Pad_282C[0x60];                                    // 0x0000(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMExecuteContext) == 0x000008, "Wrong alignment on FRigVMExecuteContext");
static_assert(sizeof(FRigVMExecuteContext) == 0x000060, "Wrong size on FRigVMExecuteContext");

// ScriptStruct RigVM.RigVMByteCodeEntry
// 0x0010 (0x0010 - 0x0000)
struct FRigVMByteCodeEntry final
{
public:
	class FName                                   Name;                                              // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InstructionIndex;                                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigVMByteCodeEntry) == 0x000004, "Wrong alignment on FRigVMByteCodeEntry");
static_assert(sizeof(FRigVMByteCodeEntry) == 0x000010, "Wrong size on FRigVMByteCodeEntry");
static_assert(offsetof(FRigVMByteCodeEntry, Name) == 0x000000, "Member 'FRigVMByteCodeEntry::Name' has a wrong offset!");
static_assert(offsetof(FRigVMByteCodeEntry, InstructionIndex) == 0x00000C, "Member 'FRigVMByteCodeEntry::InstructionIndex' has a wrong offset!");

// ScriptStruct RigVM.RigVMStruct
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FRigVMStruct
{
public:
	uint8                                         Pad_282D[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMStruct) == 0x000008, "Wrong alignment on FRigVMStruct");
static_assert(sizeof(FRigVMStruct) == 0x000008, "Wrong size on FRigVMStruct");

// ScriptStruct RigVM.RigVMParameter
// 0x0040 (0x0040 - 0x0000)
struct FRigVMParameter final
{
public:
	ERigVMParameterType                           Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_282E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Name;                                              // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         RegisterIndex;                                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_282F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CPPType;                                           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScriptStruct*                          ScriptStruct;                                      // 0x0028(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   ScriptStructPath;                                  // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2830[0x4];                                     // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMParameter) == 0x000008, "Wrong alignment on FRigVMParameter");
static_assert(sizeof(FRigVMParameter) == 0x000040, "Wrong size on FRigVMParameter");
static_assert(offsetof(FRigVMParameter, Type) == 0x000000, "Member 'FRigVMParameter::Type' has a wrong offset!");
static_assert(offsetof(FRigVMParameter, Name) == 0x000004, "Member 'FRigVMParameter::Name' has a wrong offset!");
static_assert(offsetof(FRigVMParameter, RegisterIndex) == 0x000010, "Member 'FRigVMParameter::RegisterIndex' has a wrong offset!");
static_assert(offsetof(FRigVMParameter, CPPType) == 0x000018, "Member 'FRigVMParameter::CPPType' has a wrong offset!");
static_assert(offsetof(FRigVMParameter, ScriptStruct) == 0x000028, "Member 'FRigVMParameter::ScriptStruct' has a wrong offset!");
static_assert(offsetof(FRigVMParameter, ScriptStructPath) == 0x000030, "Member 'FRigVMParameter::ScriptStructPath' has a wrong offset!");

// ScriptStruct RigVM.RigVMByteCode
// 0x0030 (0x0030 - 0x0000)
struct FRigVMByteCode final
{
public:
	TArray<uint8>                                 ByteCode;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                         NumInstructions;                                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2831[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRigVMByteCodeEntry>            Entries;                                           // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2832[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMByteCode) == 0x000008, "Wrong alignment on FRigVMByteCode");
static_assert(sizeof(FRigVMByteCode) == 0x000030, "Wrong size on FRigVMByteCode");
static_assert(offsetof(FRigVMByteCode, ByteCode) == 0x000000, "Member 'FRigVMByteCode::ByteCode' has a wrong offset!");
static_assert(offsetof(FRigVMByteCode, NumInstructions) == 0x000010, "Member 'FRigVMByteCode::NumInstructions' has a wrong offset!");
static_assert(offsetof(FRigVMByteCode, Entries) == 0x000018, "Member 'FRigVMByteCode::Entries' has a wrong offset!");

// ScriptStruct RigVM.RigVMInstruction
// 0x0010 (0x0010 - 0x0000)
struct FRigVMInstruction final
{
public:
	uint64                                        ByteCodeIndex;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERigVMOpCode                                  OpCode;                                            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         OperandAlignment;                                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2833[0x6];                                     // 0x000A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMInstruction) == 0x000008, "Wrong alignment on FRigVMInstruction");
static_assert(sizeof(FRigVMInstruction) == 0x000010, "Wrong size on FRigVMInstruction");
static_assert(offsetof(FRigVMInstruction, ByteCodeIndex) == 0x000000, "Member 'FRigVMInstruction::ByteCodeIndex' has a wrong offset!");
static_assert(offsetof(FRigVMInstruction, OpCode) == 0x000008, "Member 'FRigVMInstruction::OpCode' has a wrong offset!");
static_assert(offsetof(FRigVMInstruction, OperandAlignment) == 0x000009, "Member 'FRigVMInstruction::OperandAlignment' has a wrong offset!");

// ScriptStruct RigVM.RigVMInstructionArray
// 0x0010 (0x0010 - 0x0000)
struct FRigVMInstructionArray final
{
public:
	TArray<struct FRigVMInstruction>              Instructions;                                      // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FRigVMInstructionArray) == 0x000008, "Wrong alignment on FRigVMInstructionArray");
static_assert(sizeof(FRigVMInstructionArray) == 0x000010, "Wrong size on FRigVMInstructionArray");
static_assert(offsetof(FRigVMInstructionArray, Instructions) == 0x000000, "Member 'FRigVMInstructionArray::Instructions' has a wrong offset!");

// ScriptStruct RigVM.RigVMBaseOp
// 0x0001 (0x0001 - 0x0000)
struct FRigVMBaseOp
{
public:
	uint8                                         Pad_2834[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMBaseOp) == 0x000001, "Wrong alignment on FRigVMBaseOp");
static_assert(sizeof(FRigVMBaseOp) == 0x000001, "Wrong size on FRigVMBaseOp");

// ScriptStruct RigVM.RigVMUnaryOp
// 0x0007 (0x0008 - 0x0001)
struct alignas(0x02) FRigVMUnaryOp : public FRigVMBaseOp
{
public:
	uint8                                         Pad_2835[0x7];                                     // 0x0001(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMUnaryOp) == 0x000002, "Wrong alignment on FRigVMUnaryOp");
static_assert(sizeof(FRigVMUnaryOp) == 0x000008, "Wrong size on FRigVMUnaryOp");

// ScriptStruct RigVM.RigVMChangeTypeOp
// 0x0008 (0x0010 - 0x0008)
struct FRigVMChangeTypeOp final : public FRigVMUnaryOp
{
public:
	uint8                                         Pad_2836[0x8];                                     // 0x0008(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMChangeTypeOp) == 0x000002, "Wrong alignment on FRigVMChangeTypeOp");
static_assert(sizeof(FRigVMChangeTypeOp) == 0x000010, "Wrong size on FRigVMChangeTypeOp");

// ScriptStruct RigVM.RigVMJumpIfOp
// 0x0008 (0x0010 - 0x0008)
struct alignas(0x04) FRigVMJumpIfOp final : public FRigVMUnaryOp
{
public:
	uint8                                         Pad_2837[0x8];                                     // 0x0008(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMJumpIfOp) == 0x000004, "Wrong alignment on FRigVMJumpIfOp");
static_assert(sizeof(FRigVMJumpIfOp) == 0x000010, "Wrong size on FRigVMJumpIfOp");

// ScriptStruct RigVM.RigVMJumpOp
// 0x0007 (0x0008 - 0x0001)
struct alignas(0x04) FRigVMJumpOp final : public FRigVMBaseOp
{
public:
	uint8                                         Pad_2838[0x7];                                     // 0x0001(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMJumpOp) == 0x000004, "Wrong alignment on FRigVMJumpOp");
static_assert(sizeof(FRigVMJumpOp) == 0x000008, "Wrong size on FRigVMJumpOp");

// ScriptStruct RigVM.RigVMComparisonOp
// 0x0013 (0x0014 - 0x0001)
struct alignas(0x02) FRigVMComparisonOp final : public FRigVMBaseOp
{
public:
	uint8                                         Pad_2839[0x13];                                    // 0x0001(0x0013)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMComparisonOp) == 0x000002, "Wrong alignment on FRigVMComparisonOp");
static_assert(sizeof(FRigVMComparisonOp) == 0x000014, "Wrong size on FRigVMComparisonOp");

// ScriptStruct RigVM.RigVMCopyOp
// 0x000D (0x000E - 0x0001)
struct alignas(0x02) FRigVMCopyOp final : public FRigVMBaseOp
{
public:
	uint8                                         Pad_283A[0xD];                                     // 0x0001(0x000D)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMCopyOp) == 0x000002, "Wrong alignment on FRigVMCopyOp");
static_assert(sizeof(FRigVMCopyOp) == 0x00000E, "Wrong size on FRigVMCopyOp");

// ScriptStruct RigVM.RigVMBinaryOp
// 0x000D (0x000E - 0x0001)
struct alignas(0x02) FRigVMBinaryOp final : public FRigVMBaseOp
{
public:
	uint8                                         Pad_283B[0xD];                                     // 0x0001(0x000D)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMBinaryOp) == 0x000002, "Wrong alignment on FRigVMBinaryOp");
static_assert(sizeof(FRigVMBinaryOp) == 0x00000E, "Wrong size on FRigVMBinaryOp");

// ScriptStruct RigVM.RigVMExecuteOp
// 0x0003 (0x0004 - 0x0001)
struct alignas(0x02) FRigVMExecuteOp final : public FRigVMBaseOp
{
public:
	uint8                                         Pad_283C[0x3];                                     // 0x0001(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMExecuteOp) == 0x000002, "Wrong alignment on FRigVMExecuteOp");
static_assert(sizeof(FRigVMExecuteOp) == 0x000004, "Wrong size on FRigVMExecuteOp");

// ScriptStruct RigVM.RigVMSlice
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FRigVMSlice final
{
public:
	uint8                                         Pad_283D[0xC];                                     // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMSlice) == 0x000004, "Wrong alignment on FRigVMSlice");
static_assert(sizeof(FRigVMSlice) == 0x00000C, "Wrong size on FRigVMSlice");

// ScriptStruct RigVM.RigVMRegister
// 0x0028 (0x0028 - 0x0000)
struct FRigVMRegister final
{
public:
	ERigVMRegisterType                            Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_283E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        ByteIndex;                                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        ElementSize;                                       // 0x0008(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        ElementCount;                                      // 0x000A(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        SliceCount;                                        // 0x000C(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         AlignmentBytes;                                    // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_283F[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	uint16                                        TrailingBytes;                                     // 0x0010(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2840[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Name;                                              // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ScriptStructIndex;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsArray;                                          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsDynamic;                                        // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2841[0x2];                                     // 0x0026(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMRegister) == 0x000004, "Wrong alignment on FRigVMRegister");
static_assert(sizeof(FRigVMRegister) == 0x000028, "Wrong size on FRigVMRegister");
static_assert(offsetof(FRigVMRegister, Type) == 0x000000, "Member 'FRigVMRegister::Type' has a wrong offset!");
static_assert(offsetof(FRigVMRegister, ByteIndex) == 0x000004, "Member 'FRigVMRegister::ByteIndex' has a wrong offset!");
static_assert(offsetof(FRigVMRegister, ElementSize) == 0x000008, "Member 'FRigVMRegister::ElementSize' has a wrong offset!");
static_assert(offsetof(FRigVMRegister, ElementCount) == 0x00000A, "Member 'FRigVMRegister::ElementCount' has a wrong offset!");
static_assert(offsetof(FRigVMRegister, SliceCount) == 0x00000C, "Member 'FRigVMRegister::SliceCount' has a wrong offset!");
static_assert(offsetof(FRigVMRegister, AlignmentBytes) == 0x00000E, "Member 'FRigVMRegister::AlignmentBytes' has a wrong offset!");
static_assert(offsetof(FRigVMRegister, TrailingBytes) == 0x000010, "Member 'FRigVMRegister::TrailingBytes' has a wrong offset!");
static_assert(offsetof(FRigVMRegister, Name) == 0x000014, "Member 'FRigVMRegister::Name' has a wrong offset!");
static_assert(offsetof(FRigVMRegister, ScriptStructIndex) == 0x000020, "Member 'FRigVMRegister::ScriptStructIndex' has a wrong offset!");
static_assert(offsetof(FRigVMRegister, bIsArray) == 0x000024, "Member 'FRigVMRegister::bIsArray' has a wrong offset!");
static_assert(offsetof(FRigVMRegister, bIsDynamic) == 0x000025, "Member 'FRigVMRegister::bIsDynamic' has a wrong offset!");

// ScriptStruct RigVM.RigVMRegisterOffset
// 0x0048 (0x0048 - 0x0000)
struct FRigVMRegisterOffset final
{
public:
	TArray<int32>                                 Segments;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	ERigVMRegisterType                            Type;                                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2842[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CPPType;                                           // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScriptStruct*                          ScriptStruct;                                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScriptStruct*                          ParentScriptStruct;                                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         ArrayIndex;                                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                        ElementSize;                                       // 0x0034(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2843[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CachedSegmentPath;                                 // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FRigVMRegisterOffset) == 0x000008, "Wrong alignment on FRigVMRegisterOffset");
static_assert(sizeof(FRigVMRegisterOffset) == 0x000048, "Wrong size on FRigVMRegisterOffset");
static_assert(offsetof(FRigVMRegisterOffset, Segments) == 0x000000, "Member 'FRigVMRegisterOffset::Segments' has a wrong offset!");
static_assert(offsetof(FRigVMRegisterOffset, Type) == 0x000010, "Member 'FRigVMRegisterOffset::Type' has a wrong offset!");
static_assert(offsetof(FRigVMRegisterOffset, CPPType) == 0x000014, "Member 'FRigVMRegisterOffset::CPPType' has a wrong offset!");
static_assert(offsetof(FRigVMRegisterOffset, ScriptStruct) == 0x000020, "Member 'FRigVMRegisterOffset::ScriptStruct' has a wrong offset!");
static_assert(offsetof(FRigVMRegisterOffset, ParentScriptStruct) == 0x000028, "Member 'FRigVMRegisterOffset::ParentScriptStruct' has a wrong offset!");
static_assert(offsetof(FRigVMRegisterOffset, ArrayIndex) == 0x000030, "Member 'FRigVMRegisterOffset::ArrayIndex' has a wrong offset!");
static_assert(offsetof(FRigVMRegisterOffset, ElementSize) == 0x000034, "Member 'FRigVMRegisterOffset::ElementSize' has a wrong offset!");
static_assert(offsetof(FRigVMRegisterOffset, CachedSegmentPath) == 0x000038, "Member 'FRigVMRegisterOffset::CachedSegmentPath' has a wrong offset!");

// ScriptStruct RigVM.RigVMMemoryContainer
// 0x00A0 (0x00A0 - 0x0000)
struct FRigVMMemoryContainer final
{
public:
	bool                                          bUseNameMap;                                       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ERigVMMemoryType                              MemoryType;                                        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2844[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRigVMRegister>                 Registers;                                         // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FRigVMRegisterOffset>           RegisterOffsets;                                   // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint8>                                 Data;                                              // 0x0028(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UScriptStruct*>                  ScriptStructs;                                     // 0x0038(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                      NameMap;                                           // 0x0048(0x0050)(Transient, NativeAccessSpecifierPrivate)
	bool                                          bEncounteredErrorDuringLoad;                       // 0x0098(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2845[0x7];                                     // 0x0099(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigVMMemoryContainer) == 0x000008, "Wrong alignment on FRigVMMemoryContainer");
static_assert(sizeof(FRigVMMemoryContainer) == 0x0000A0, "Wrong size on FRigVMMemoryContainer");
static_assert(offsetof(FRigVMMemoryContainer, bUseNameMap) == 0x000000, "Member 'FRigVMMemoryContainer::bUseNameMap' has a wrong offset!");
static_assert(offsetof(FRigVMMemoryContainer, MemoryType) == 0x000001, "Member 'FRigVMMemoryContainer::MemoryType' has a wrong offset!");
static_assert(offsetof(FRigVMMemoryContainer, Registers) == 0x000008, "Member 'FRigVMMemoryContainer::Registers' has a wrong offset!");
static_assert(offsetof(FRigVMMemoryContainer, RegisterOffsets) == 0x000018, "Member 'FRigVMMemoryContainer::RegisterOffsets' has a wrong offset!");
static_assert(offsetof(FRigVMMemoryContainer, Data) == 0x000028, "Member 'FRigVMMemoryContainer::Data' has a wrong offset!");
static_assert(offsetof(FRigVMMemoryContainer, ScriptStructs) == 0x000038, "Member 'FRigVMMemoryContainer::ScriptStructs' has a wrong offset!");
static_assert(offsetof(FRigVMMemoryContainer, NameMap) == 0x000048, "Member 'FRigVMMemoryContainer::NameMap' has a wrong offset!");
static_assert(offsetof(FRigVMMemoryContainer, bEncounteredErrorDuringLoad) == 0x000098, "Member 'FRigVMMemoryContainer::bEncounteredErrorDuringLoad' has a wrong offset!");

// ScriptStruct RigVM.RigVMOperand
// 0x0006 (0x0006 - 0x0000)
struct FRigVMOperand final
{
public:
	ERigVMMemoryType                              MemoryType;                                        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2846[0x1];                                     // 0x0001(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	uint16                                        RegisterIndex;                                     // 0x0002(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                        RegisterOffset;                                    // 0x0004(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FRigVMOperand) == 0x000002, "Wrong alignment on FRigVMOperand");
static_assert(sizeof(FRigVMOperand) == 0x000006, "Wrong size on FRigVMOperand");
static_assert(offsetof(FRigVMOperand, MemoryType) == 0x000000, "Member 'FRigVMOperand::MemoryType' has a wrong offset!");
static_assert(offsetof(FRigVMOperand, RegisterIndex) == 0x000002, "Member 'FRigVMOperand::RegisterIndex' has a wrong offset!");
static_assert(offsetof(FRigVMOperand, RegisterOffset) == 0x000004, "Member 'FRigVMOperand::RegisterOffset' has a wrong offset!");

// ScriptStruct RigVM.RigVMMemoryStatistics
// 0x000C (0x000C - 0x0000)
struct FRigVMMemoryStatistics final
{
public:
	uint32                                        RegisterCount;                                     // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        DataBytes;                                         // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        TotalBytes;                                        // 0x0008(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigVMMemoryStatistics) == 0x000004, "Wrong alignment on FRigVMMemoryStatistics");
static_assert(sizeof(FRigVMMemoryStatistics) == 0x00000C, "Wrong size on FRigVMMemoryStatistics");
static_assert(offsetof(FRigVMMemoryStatistics, RegisterCount) == 0x000000, "Member 'FRigVMMemoryStatistics::RegisterCount' has a wrong offset!");
static_assert(offsetof(FRigVMMemoryStatistics, DataBytes) == 0x000004, "Member 'FRigVMMemoryStatistics::DataBytes' has a wrong offset!");
static_assert(offsetof(FRigVMMemoryStatistics, TotalBytes) == 0x000008, "Member 'FRigVMMemoryStatistics::TotalBytes' has a wrong offset!");

// ScriptStruct RigVM.RigVMByteCodeStatistics
// 0x0008 (0x0008 - 0x0000)
struct FRigVMByteCodeStatistics final
{
public:
	uint32                                        InstructionCount;                                  // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        DataBytes;                                         // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigVMByteCodeStatistics) == 0x000004, "Wrong alignment on FRigVMByteCodeStatistics");
static_assert(sizeof(FRigVMByteCodeStatistics) == 0x000008, "Wrong size on FRigVMByteCodeStatistics");
static_assert(offsetof(FRigVMByteCodeStatistics, InstructionCount) == 0x000000, "Member 'FRigVMByteCodeStatistics::InstructionCount' has a wrong offset!");
static_assert(offsetof(FRigVMByteCodeStatistics, DataBytes) == 0x000004, "Member 'FRigVMByteCodeStatistics::DataBytes' has a wrong offset!");

// ScriptStruct RigVM.RigVMStatistics
// 0x002C (0x002C - 0x0000)
struct FRigVMStatistics final
{
public:
	uint32                                        BytesForCDO;                                       // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        BytesPerInstance;                                  // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigVMMemoryStatistics                 LiteralMemory;                                     // 0x0008(0x000C)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigVMMemoryStatistics                 WorkMemory;                                        // 0x0014(0x000C)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint32                                        BytesForCaching;                                   // 0x0020(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigVMByteCodeStatistics               ByteCode;                                          // 0x0024(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigVMStatistics) == 0x000004, "Wrong alignment on FRigVMStatistics");
static_assert(sizeof(FRigVMStatistics) == 0x00002C, "Wrong size on FRigVMStatistics");
static_assert(offsetof(FRigVMStatistics, BytesForCDO) == 0x000000, "Member 'FRigVMStatistics::BytesForCDO' has a wrong offset!");
static_assert(offsetof(FRigVMStatistics, BytesPerInstance) == 0x000004, "Member 'FRigVMStatistics::BytesPerInstance' has a wrong offset!");
static_assert(offsetof(FRigVMStatistics, LiteralMemory) == 0x000008, "Member 'FRigVMStatistics::LiteralMemory' has a wrong offset!");
static_assert(offsetof(FRigVMStatistics, WorkMemory) == 0x000014, "Member 'FRigVMStatistics::WorkMemory' has a wrong offset!");
static_assert(offsetof(FRigVMStatistics, BytesForCaching) == 0x000020, "Member 'FRigVMStatistics::BytesForCaching' has a wrong offset!");
static_assert(offsetof(FRigVMStatistics, ByteCode) == 0x000024, "Member 'FRigVMStatistics::ByteCode' has a wrong offset!");

}

