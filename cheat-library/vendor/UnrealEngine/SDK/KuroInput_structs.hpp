#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroInput

#include "Basic.hpp"


namespace SDK
{

// Enum KuroInput.EKuroForceFeedbackType
// NumValues: 0x0003
enum class EKuroForceFeedbackType : uint8
{
	Always                                   = 0,
	Limit                                    = 1,
	EKuroForceFeedbackType_MAX               = 2,
};

// Enum KuroInput.EGlobalKuroForceFeedbackType
// NumValues: 0x0004
enum class EGlobalKuroForceFeedbackType : uint8
{
	Always                                   = 0,
	Sometimes                                = 1,
	Never                                    = 2,
	EGlobalKuroForceFeedbackType_MAX         = 3,
};

}

