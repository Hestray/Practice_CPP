#include <iostream>
#include <string>
#include "OperationTest.h"

void OperationTest::RUN_TEST() {
	if (	ASSERT_EQUAL("[INTEGER SUM TEST, (int)BasicOp::sum]", op.sum(3, 4), 8)	&&
			ASSERT_EQUAL("[INTEGER SUM TEST, (int)BasicOp::pow]", op.pow(2, 4), 16)) {
		std::cout << "All tests passed." << std::endl;
	} else {
		std::cout << "Some tests have failed." << std::endl;
		std::cout << "Error list: " << std::endl;
		BaseTest::printErrors();
	}
}