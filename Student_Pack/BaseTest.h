#pragma once
#include <string>
#include <vector>
#include <iostream>

class ITest {
public:
	virtual ~ITest() = default;
	virtual void RUN_TEST() = 0;
};

class BaseTest : ITest {
private: 
	std::vector<std::string> errors;

public:
	virtual bool ASSERT_EQUAL(std::string testName, int expected, int actual);
	virtual bool ASSERT_EQUAL(std::string testName, float expected, float actual);
	virtual bool ASSERT_EQUAL(std::string testName, double expected, double actual);
	// the following are unused for now:
	//virtual bool ASSERT_EQUAL(std::string testName, long expected, long actual);
	//virtual bool ASSERT_EQUAL(std::string testName, long long expected, long long actual);
	//virtual bool ASSERT_EQUAL(std::string testName, unsigned int expected, unsigned int actual);
	//virtual bool ASSERT_EQUAL(std::string testName, unsigned long expected, unsigned long actual);
	//virtual bool ASSERT_EQUAL(std::string testName, unsigned long long expected, unsigned long long actual);
	virtual bool ASSERT_EQUAL(std::string testName, std::string expected, std::string actual);
	virtual bool ASSERT_EQUAL(std::string testName, char expected, char actual);
	virtual bool ASSERT_TRUE(std::string testName, bool actual);
	virtual bool ASSERT_FALSE(std::string testName, bool actual);

	void printErrors();
};