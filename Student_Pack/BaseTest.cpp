#include "BaseTest.h"


void BaseTest::printErrors() {
	std::cout << "--------------------------------------------------" << std::endl;
	for (std::string error : errors) {
		std::cout << "[FAIL]:\t" << error << std::endl;
	}
	std::cout << "--------------------------------------------------" << std::endl;
}

bool BaseTest::ASSERT_EQUAL(std::string testName, int actual, int expected) {
	if (actual == expected) {
		return true;
	}
	else {
		errors.push_back("Test " + testName + " failed. Expected " + std::to_string(expected) + ", but got " + std::to_string(actual));
		return false;
	}
}

bool BaseTest::ASSERT_EQUAL(std::string testName, float actual, float expected, int digits) {
	if (BasicOp::trim(actual, digits) == BasicOp::trim(expected, digits)) {
		return true;
	}
	else {
		std::ostringstream oss;
		oss << std::fixed << std::setprecision(digits >= 8 ? 7 : digits);

		oss << "Test " << testName << " failed. Expected " << expected << ", but got " << actual;

		errors.push_back(oss.str());
		return false;
	}
}

bool BaseTest::ASSERT_EQUAL(std::string testName, double actual, double expected, int digits) {
	if (BasicOp::trim(actual, digits) == BasicOp::trim(expected, digits)) {
		return true;
	}
	else {
		std::ostringstream oss;
		oss << std::fixed << std::setprecision(digits >= 16 ? 15 : digits);

		oss << "Test " << testName << " failed. Expected " << expected << ", but got " << actual;

		errors.push_back(oss.str());
		return false;
	}
}


bool BaseTest::ASSERT_EQUAL(std::string testName, char actual, char expected) {
	if (actual == expected) {
		return true;
	}
	else {
		errors.push_back("Test " + testName + " failed. Expected " + std::to_string(expected) + ", but got " + std::to_string(actual));
		return false;
	}
}


bool BaseTest::ASSERT_EQUAL(std::string testName, std::string actual, std::string expected) {
	if (actual == expected) {
		return true;
	}
	else {
		errors.push_back("Test " + testName + " failed. Expected " + expected + ", but got " + actual);
		return false;
	}
}

bool BaseTest::ASSERT_TRUE(std::string testName, bool expected) {
	if (expected != true) {
		errors.push_back("Test " + testName + " resulted in false. Expected true.");
	}
	return expected;
}

bool BaseTest::ASSERT_FALSE(std::string testName, bool expected) {
	if (expected != false) {
		errors.push_back("Test " + testName + " resulted in true. Expected false.");
	}
	return expected;
}