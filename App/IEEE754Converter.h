#pragma once
#include <vector>
#include <bitset>

class IEEE754Converter {
public:
	/// <summary>
	/// Returns the expression of the float in binary, under the format:
	/// significand * 2 ^ exponent
	/// </summary>
	/// <param name="number"></param>
	/// <returns>vector containing [significand, exponent]</returns>
	static std::vector<float> fexprbin(float number);

	static float binexprf(int exponent, int significand, bool signBit);

};