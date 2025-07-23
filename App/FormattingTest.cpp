#include "FormattingTest.h"

void FormattingTest::RUN_TEST() {
	if (	numericUtilsTest()		&&
			valueSanitizerTest()	) {
		std::cout << "All tests passed for Formatting." << std::endl;
	}
	else {
		std::cout << "Some tests have failed." << std::endl;
		std::cout << "Error list: " << std::endl;
		BaseTest::printErrors();
	}
}

bool FormattingTest::numericUtilsTest() {
	if (	ASSERT_EQUAL("[DOUBLE ROUND TEST (1), (double)NumericUtils::trim]", NumericUtils::trim(2.52, 1), "2.5")							&&
			ASSERT_EQUAL("[DOUBLE ROUND TEST (2), (double)NumericUtils::trim]", NumericUtils::trim(3.1441414141, 2), "3.14")				&&
			ASSERT_EQUAL("[DOUBLE ROUND TEST (3), (double)NumericUtils::trim]", NumericUtils::trim(15.292930291, 0), "15")					&&
			ASSERT_EQUAL("[DOUBLE ROUND TEST (4), (double)NumericUtils::trim]", NumericUtils::trim(3.4, 15), "3.400000000000000")			&&
			ASSERT_EQUAL("[DOUBLE ROUND TEST (5), (double)NumericUtils::trim]", NumericUtils::trim(-3.619999, 5), "-3.61999")				&&
			ASSERT_EQUAL("[VECTOR<STRING> PART TEST (1), (string)NumericUtils::parts]", NumericUtils::parts("-3.9929"), { "-3", "-0.9929"}) &&
			ASSERT_EQUAL("[VECTOR<STRING> PART TEST (2), (string)NumericUtils::parts]", NumericUtils::parts("1.abb3"), { "NOT A NUMBER" })	&&
			ASSERT_EQUAL("[VECTOR<STRING> PART TEST (3), (string)NumericUtils::parts]", NumericUtils::parts("0.03f"), {"0", "0.03"})		&&
			ASSERT_EQUAL("[VECTOR<STRING> PART TEST (4), (string)NumericUtils::parts]", NumericUtils::parts("75"), {"75", "0.0"})
		)	return true;
	
	std::cout << "Utils failed" << std::endl;
	return false;
}

bool FormattingTest::valueSanitizerTest() {
	if (	ASSERT_TRUE ("[BOOL ISNUMBER TEST (1), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("-3.4f"))		&&
			ASSERT_TRUE ("[BOOL ISNUMBER TEST (2), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("25.77"))		&&
			ASSERT_TRUE ("[BOOL ISNUMBER TEST (3), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("100"))		&&
			ASSERT_FALSE("[BOOL ISNUMBER TEST (4), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("-84.98."))	&&
			ASSERT_FALSE("[BOOL ISNUMBER TEST (5), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("90a.f"))		&&
			ASSERT_TRUE ("[BOOL ISNUMBER TEST (6), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("1.0"))		&&
			ASSERT_FALSE("[BOOL ISNUMBER TEST (7), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("-1.f"))		&&
			ASSERT_FALSE("[BOOL ISNUMBER TEST (8), (bool)ValueSanitizer::isNumber]", ValueSanitizer::isNumber("1 0001"))	&&
			ASSERT_EQUAL("[VECTOR<STRING> NUMBERTYPE TEST (1), (vector<string>)ValueSanitizer::numberType]", valSan.numberType("-3.4f", false), { "Negative", std::to_string(valSan.FLOAT) })	&&
			ASSERT_EQUAL("[VECTOR<STRING> NUMBERTYPE TEST (2), (vector<string>)ValueSanitizer::numberType]", valSan.numberType("3.4", false), { "Positive", std::to_string(valSan.DOUBLE) })	&&
			ASSERT_EQUAL("[VECTOR<STRING> NUMBERTYPE TEST (3), (vector<string>)ValueSanitizer::numberType]", valSan.numberType("-3", false), { "Negative", std::to_string(valSan.INT) })		&&
			ASSERT_EQUAL("[VECTOR<STRING> NUMBERTYPE TEST (4), (vector<string>)ValueSanitizer::numberType]", valSan.numberType("-3.4f.", false), { "NOT A NUMBER" })
		)	return true;
	
	std::cout << "Sanitizer failed" << std::endl;
	return false;
}