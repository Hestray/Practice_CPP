#pragma once
#include "BaseTest.h"
#include "NumericUtils.h"
#include "ValueSanitizer.h"

///
/// version 1.1.0
/// date: 16.06.2025
/// 

class FormattingTest : BaseTest {
private:
	bool numericUtilsTest();
public:
	void RUN_TEST() override;
};