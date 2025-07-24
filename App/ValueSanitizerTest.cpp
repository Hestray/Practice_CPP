#include "ValueSanitizerTest.h"

void ValueSanitizerTest::RUN_TEST() {
	if (valueSanitizerTest()) {
		std::cout << "All tests passed for ValueSanitizer." << std::endl;
	}
	else {
		std::cout << "Some tests have failed." << std::endl;
		std::cout << "Error list: " << std::endl;
		BaseTest::printErrors();
	}
}


bool ValueSanitizerTest::valueSanitizerTest() {
	if (ASSERT_TRUE("[BOOL ISNUMBER TEST (1), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("-3.4f")) &&
		ASSERT_TRUE("[BOOL ISNUMBER TEST (2), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("25.77")) &&
		ASSERT_TRUE("[BOOL ISNUMBER TEST (3), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("100")) &&
		ASSERT_FALSE("[BOOL ISNUMBER TEST (4), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("-84.98.")) &&
		ASSERT_FALSE("[BOOL ISNUMBER TEST (5), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("90a.f")) &&
		ASSERT_TRUE("[BOOL ISNUMBER TEST (6), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("1.0")) &&
		ASSERT_FALSE("[BOOL ISNUMBER TEST (7), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("-1.f")) &&
		ASSERT_FALSE("[BOOL ISNUMBER TEST (8), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("1 0001")) &&
		ASSERT_EQUAL("[VECTOR<STRING> NUMBERTYPE TEST (1), (vector<string>)ValueSanitizer::numberType]", valSan.numberType("-3.4f", false), { "Negative", std::to_string(valSan.FLOAT) }) &&
		ASSERT_EQUAL("[VECTOR<STRING> NUMBERTYPE TEST (2), (vector<string>)ValueSanitizer::numberType]", valSan.numberType("3.4", false), { "Positive", std::to_string(valSan.DOUBLE) }) &&
		ASSERT_EQUAL("[VECTOR<STRING> NUMBERTYPE TEST (3), (vector<string>)ValueSanitizer::numberType]", valSan.numberType("-3", false), { "Negative", std::to_string(valSan.INT) }) &&
		ASSERT_EQUAL("[VECTOR<STRING> NUMBERTYPE TEST (4), (vector<string>)ValueSanitizer::numberType]", valSan.numberType("-3.4f.", false), { "NOT A NUMBER" })
		)	return true;

	std::cout << "Numeric Sanitizer failed" << std::endl;
	return false;
}