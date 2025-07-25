#pragma once
#include "OperationTest.h"
#include "FormattingTest.h"
#include "ValueSanitizerTest.h"
#include "StringUtilsTest.h"

/// <summary>
/// This class exists solely to not bloat main.cpp with all of the tests. 
/// Just create an object of this type and call the function that will
/// test the functionalities you want to test.
/// </summary>
class RunningTests {
public:
	/// <summary>
	/// Tests the functionalities of the Calculator, which includes 
	/// Operations (BasicOp), (...)
	/// </summary>
	static void Operations();

	/// <summary>
	/// Tests the functionalities of the Formattings from Calculators. Includes:
	/// 1. Numeric formattings (trimming)
	/// </summary>
	static void Formattings();

	/// <summary>
	/// Tests the functionalities of any of the Sanitizers from UtilsCore. Includes:
	/// 1. ValueSanitizer
	/// 2. StringUtils
	/// </summary>
	static void Sanitizers();
};