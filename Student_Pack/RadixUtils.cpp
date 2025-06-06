#include "RadixUtils.h"
#include "BasicOp.h"

///// CONVERSION ALGORITHMS FOR UNSIGNED INTEGERS
//int RadixUtils::convertBaseTo10(unsigned int value, int baseSource) {
//	if (baseSource < 0) {
//		std::cout << "Error: base cannot be negative." << std::endl;
//		return INVALID_BASE_NEGATIVE;
//	}
//	int power = 0,
//		rep   = 0;
//	while (value > 0) {
//		power++;
//		rep += (value % 10) * BasicOp::pow(baseSource, power);
//		value /= 10;
//	}
//	return rep;
//}
//
//int RadixUtils::convert10ToBase(unsigned int value, int baseTarget) {
//	
//	// divide base to number
//	std::string remainder;
//	if (value > 0) {
//		while (value > 0)
//		{
//			remainder += std::to_string(value % baseTarget);
//			value /= baseTarget;
//		}
//		// reverse remainder when quotient = 0
//		reverse(remainder.begin(), remainder.end());
//	}
//	else {
//		
//	}
//	return std::stoi(remainder);
//}
//
//int RadixUtils::convertBase(int value, int baseSource, int baseTarget, bool via10) {
//	if (baseSource < MIN_BASE || baseTarget < MIN_BASE 
//		|| baseSource > MAX_BASE || baseTarget > MAX_BASE) return INVALID_BASE_LIMIT;
//
//	if (baseSource == baseTarget) return value;
//	if (baseSource == 10) return convert10ToBase(value, baseTarget);
//	if (baseTarget == 10) return convertBaseTo10(value, baseSource);
//	if (via10) {
//		// conversion is done bS -> 10 -> bT
//		value = convertBaseTo10(value, baseSource);
//		return convert10ToBase(value, baseTarget);
//	}
//	else {
//		// conversion is done by creating a table for both bases and then converting
//		// determine bS > bT ?
//		// create the base tables (multiplication)
//		// convert
//		return 0;
//	}
//}
//
//
///// CONVERSION ALGORITHMS FOR SIGNED INTEGERS
//int RadixUtils::radixCompl(int value, int baseSource, int baseTarget, int n) {
//	return 0;
//}
//
//int RadixUtils::createBaseTable(int base) {
//	return 0;
//}


