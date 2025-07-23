//import std;

#pragma once
/// version: 1.0.0
/// date: 21-03-2025
/// 
/// <summary>
/// Class to handle conversions between different common bases.
/// </summary>
/// 
//class RadixUtils
//{
//public: 
//	enum Bases	{ DECIMAL = 10, HEXADECIMAL = 16, OCTAL = 8, BINARY = 2 };
//	enum Limits { MIN_BASE = 1, MAX_BASE = 36 };
//	enum Errors { INVALID_BASE_NEGATIVE = -1, INVALID_BASE_LIMIT = -2 };
//	// the main algorithm involves bS -> 10 -> bT
//public: 
//	RadixUtils();
//	int convertBase(int value, int baseSource, int baseTarget, bool via10 = true);
//	void toString(int value);
//private:
//	// general code:
//	int convertBaseTo10(unsigned int value, int baseSource);
//	int convert10ToBase(unsigned int value, int baseTarget);
//
//
//	int twosCompl(int value);
//	
//	/// <summary>
//	///  General algorithm for converting negative numbers between bases. Requires the number of bits to represent the number on.
//	/// </summary>
//	/// <param name="value"></param>
//	/// <param name="baseSource"></param>
//	/// <param name="baseTarget"></param>
//	/// <param name="n">Number of bits to represent the number on</param>
//	/// <returns></returns>
//	int radixCompl(int value, int baseSource, int baseTarget, int n);
//
//
//
//	/// <summary>
//	/// Creates the multiplication table for a given base.
//	/// </summary>
//	/// <param name="base"></param>
//	/// <returns></returns>
//	int createBaseTable(int base);
//	
//	/// <summary>
//	/// Creates the 'alphabet' for each base. For base 10: digits 0 to 9. For base 16: digits 0 to 9 and A to F. 
//	/// </summary>
//	/// <param name="base"></param>
//	/// <returns></returns>
//	int createBaseDigit(int base);
//	
//	/// <summary>
//	/// Used in the general algorithm for converting negative numbers between bases.
//	/// </summary>
//	/// <param name="base"></param>
//	/// <param name="digitTable"></param>
//	/// <returns></returns>
//	int createComplTable(int base, std::string digitTable);
//
//};