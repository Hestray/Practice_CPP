#include "OperationTest.h"

void OperationTest::RUN_TEST() {
	std::vector<int> numbers		= {2, 3, 4};
	std::vector<int> subtraction	= {2, -3, 4};
	std::vector<float> flNumbers	= {2.0f, 3.0f, 4.5f};
	std::vector<float> flSubtr		= {2.33f, -3.21f, 4.5f};
	std::vector<double> dbNumbers	= {2.0, 3.0, 4.5};
	std::vector<double> dbSubtr		= {2.33, -3.21, 4.5};

	if (	ASSERT_EQUAL("[INTEGER SUM TEST, (int)BasicOp::sum]", BasicOp::sum(numbers), 9)				&&
			ASSERT_EQUAL("[INTEGER SUBTRACT TEST, (int)BasicOp::sum]", BasicOp::sum(subtraction), 3)		&&
			ASSERT_EQUAL("[FLOAT SUM TEST, (float)BasicOp::sum]", BasicOp::sum(flNumbers), 9.5f, 1)		&&
			ASSERT_EQUAL("[FLOAT SUBTRACT TEST, (float)BasicOp::sum]", BasicOp::sum(flSubtr), 3.62f, 2)	&&
			ASSERT_EQUAL("[DOUBLE SUM TEST, (double)BasicOp::sum]", BasicOp::sum(dbNumbers), 9.5, 1)		&&
			ASSERT_EQUAL("[DOUBLE SUBTRACT TEST, (double)BasicOp::sum]", BasicOp::sum(dbSubtr), 3.62, 2)	&&
			ASSERT_EQUAL("[INTEGER SUM TEST, (int)BasicOp::pow]", BasicOp::pow(2, 4), 16)
			) {
		std::cout << "All tests passed for Operations." << std::endl;
	} else {
		std::cout << "Some tests have failed." << std::endl;
		std::cout << "Error list: " << std::endl;
		BaseTest::printErrors();
	}
}