#pragma once
#include <string>
#include <vector>
#include <iostream>

///
/// version 1.1.0 
/// date: 16.06.2025
/// 

class ValueSanitizer {
public:
	enum numberData {
		INT,
		FLOAT,
		DOUBLE
	};
	
private:
	bool isNegative = 0;
	numberData numType;

public:
	/// <summary>
	/// Checks if the given value is a number. Also check if the number has float notation
	/// </summary>
	/// <param name="number"></param>
	/// <returns></returns>
	static bool isNumber(std::string number);

	/// <summary>
	/// Determines what type of number it is: int, float or double, positive or not
	/// </summary>
	/// <param name="number"></param>
	std::vector<std::string> numberType(std::string number, bool showMessage);


	numberData getNumberData() {
		return numType;
	}

private:
	void numberMessage(std::string number, numberData numType);

};