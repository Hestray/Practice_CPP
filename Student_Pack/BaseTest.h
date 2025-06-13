#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "BasicOp.h"

/// version: 1.1.0
/// date: 14-06-2025

class ITest {
public:
	virtual ~ITest() = default;
	virtual void RUN_TEST() = 0;
};

class BaseTest : ITest {
private: 
	std::vector<std::string> errors;

	// TODO: rewrite the functions using a template
	// https://isocpp.org/wiki/faq/templates#templates-defn-vs-decl
	// also make sure to have type try-catch error checking since it may be mixed types
public:
	virtual bool ASSERT_EQUAL(std::string testName, int actual, int expected);
	virtual bool ASSERT_EQUAL(std::string testName, float actual, float expected, int digits);
	virtual bool ASSERT_EQUAL(std::string testName, double actual, double expected, int digits);
	// the following are unused for now:
	//virtual bool ASSERT_EQUAL(std::string testName, long actual, long expected);
	//virtual bool ASSERT_EQUAL(std::string testName, long long actual, long long expected);
	//virtual bool ASSERT_EQUAL(std::string testName, unsigned int actual, unsigned int expected);
	//virtual bool ASSERT_EQUAL(std::string testName, unsigned long actual, unsigned long expected);
	//virtual bool ASSERT_EQUAL(std::string testName, unsigned long long actual, unsigned long long expected);
	virtual bool ASSERT_EQUAL(std::string testName, std::string actual, std::string expected);
	virtual bool ASSERT_EQUAL(std::string testName, char actual, char expected);
	virtual bool ASSERT_TRUE(std::string testName, bool expected);
	virtual bool ASSERT_FALSE(std::string testName, bool expected);

	void printErrors();
};