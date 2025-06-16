#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "ValueSanitizer.h"

/// 
/// version 1.1.0
/// date: 16.06.2025
/// 

class NumericUtils {
public:
	/// <summary>
	/// Shows only the number of digits of a given floating point number.
	/// </summary>
	/// <param name="number"></param>
	/// <param name="digits"></param>
	/// <returns></returns>
	static std::string trim(double number, int digits);

	static std::string trim(float number, int digits);

	/// <summary>
	/// Takes a string and return the whole part and the fractional part of the number given.
	/// </summary>
	/// <param name="number"></param>
	/// <returns></returns>
	static std::vector<std::string> parts(std::string number);
};