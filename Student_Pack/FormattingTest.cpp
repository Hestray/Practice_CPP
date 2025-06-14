#include "FormattingTest.h"

void FormattingTest::RUN_TEST() {
	if (ASSERT_EQUAL("[DOUBLE ROUND TEST, (double)BasicOp::trim] (1)", NumericUtils::trim(2.52, 1), "2.5") &&
		ASSERT_EQUAL("[DOUBLE ROUND TEST, (double)BasicOp::trim] (2)", NumericUtils::trim(3.1441414141, 2), "3.14") &&
		ASSERT_EQUAL("[DOUBLE ROUND TEST, (double)BasicOp::trim] (3)", NumericUtils::trim(15.292930291, 0), "15") &&
		ASSERT_EQUAL("[DOUBLE ROUND TEST, (double)BasicOp::trim] (4)", NumericUtils::trim(3.4, 15), "3.400000000000000") &&
		ASSERT_EQUAL("[DOUBLE ROUND TEST, (double)BasicOp::trim] (5)", NumericUtils::trim(-3.619999, 5), "-3.61999")
		) {
		std::cout << "All tests passed for Formatting." << std::endl;
	}
	else {
		std::cout << "Some tests have failed." << std::endl;
		std::cout << "Error list: " << std::endl;
		BaseTest::printErrors();
	}
}



			