#pragma once
#include <iostream>
#include <string>

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
};