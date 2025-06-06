#pragma once
#include "OperationTest.h";

/// <summary>
/// This class exists solely to not bloat main.cpp with all of the tests. 
/// Just create an object of this type and call the function that will
/// test the functionalities you want to test.
/// </summary>
class RunningTests {
public:
	/// <summary>
	/// Tests the functionalities of the Calculator, which includes 
	/// Operations (BasicOp), Conversation between bases
	/// </summary>
	static void Operations();
};