#include "IEEE754Converter.h"

std::vector<float> fexprbin(float number) {
	// sign of the float
	bool signBit;
	number < 0 ? signBit = true : signBit = false;

	int valSign = (-1) * signBit; 

	// 
	constexpr std::bitset<8> exponent;

	
}