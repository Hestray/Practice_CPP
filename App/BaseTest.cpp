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
	if (NumericUtils::trim(actual, digits) == NumericUtils::trim(expected, digits)) {
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
	if (NumericUtils::trim(actual, digits) == NumericUtils::trim(expected, digits)) {
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

bool BaseTest::ASSERT_EQUAL(std::string testName, std::vector<std::string> actual, std::vector<std::string> expected) {
	bool errorExist = 0;
	if (actual.size() != expected.size()) {
		errors.push_back("Test " + testName + " failed. Size of actual (" 
			+ std::to_string(actual.size()) + ") and expected (" 
			+ std::to_string(expected.size()) + ") incompatible.");
		return false;
	}

	for (int i = 0; i < actual.size(); i++) {
		if (actual[i] != expected[i]) {
			errorExist = 1;
			errors.push_back("Test " + testName + " failed. Expected " + expected[i] + ", but got " + actual[i] + " at index = " + std::to_string(i));
		}
	}
	
	if (errorExist) return false;
	return true;
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
	return !expected;
}