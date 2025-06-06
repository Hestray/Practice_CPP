#include "BaseTest.h"

void BaseTest::printErrors() {
	std::cout << "-------------------------------------------------------------------" << std::endl;
	for (std::string error : errors) {
		std::cout << "[FAIL]:\t" << error << std::endl;
	}
	std::cout << "-------------------------------------------------------------------" << std::endl;
}

bool BaseTest::ASSERT_EQUAL(std::string testName, int expected, int actual) {
	if (expected == actual) {
		return true;
	}
	else {
		errors.push_back("Test " + testName + " failed. Expected " + std::to_string(expected) + ", but got " + std::to_string(actual));
		return false;
	}
}

bool BaseTest::ASSERT_EQUAL(std::string testName, float expected, float actual) {
	if (expected == actual) {
		return true;
	}
	else {
		errors.push_back("Test " + testName + " failed. Expected " + std::to_string(expected) + ", but got " + std::to_string(actual));
		return false;
	}
}

bool BaseTest::ASSERT_EQUAL(std::string testName, double expected, double actual) {
	if (expected == actual) {
		return true;
	}
	else {
		errors.push_back("Test " + testName + " failed. Expected " + std::to_string(expected) + ", but got " + std::to_string(actual));
		return false;
	}
}


bool BaseTest::ASSERT_EQUAL(std::string testName, char expected, char actual) {
	if (expected == actual) {
		return true;
	}
	else {
		errors.push_back("Test " + testName + " failed. Expected " + std::to_string(expected) + ", but got " + std::to_string(actual));
		return false;
	}
}


bool BaseTest::ASSERT_EQUAL(std::string testName, std::string expected, std::string actual) {
	if (expected == actual) {
		return true;
	}
	else {
		errors.push_back("Test " + testName + " failed. Expected " + expected + ", but got " + actual);
		return false;
	}
}

bool BaseTest::ASSERT_TRUE(std::string testName, bool actual) {
	if (actual != true) {
		errors.push_back("Test " + testName + " resulted in false. Expected true.");
	}
	return actual;
}

bool BaseTest::ASSERT_FALSE(std::string testName, bool actual) {
	if (actual != false) {
		errors.push_back("Test " + testName + " resulted in true. Expected false.");
	}
	return actual;
}