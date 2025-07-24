#pragma once
#include "BaseTest.h"
#include "ValueSanitizer.h"

///
/// version 1.1.0
/// date: 23.07.2025
/// 

class ValueSanitizerTest : BaseTest {
private:
	ValueSanitizer valSan;

private:
	bool valueSanitizerTest();

public:
	void RUN_TEST() override;
};