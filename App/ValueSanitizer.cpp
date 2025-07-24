#include "ValueSanitizer.h"

bool ValueSanitizer::isNumber(std::string number) {
	// floating-point period
	int point	= 0;
	int i		= 0;

	if (number[0] == '-') i++;

	for (i; i < number.size()-1 && point <= 1; i++) {
		if (!std::isdigit(number[i])) {
			if (number[i] == '.') {
				if (point == 0)	point++;
				else			return false;
			}
			else return false;
		}
	}

	if ((number.back() != 'f' && !std::isdigit(number.back())) ||
		(number.back() == 'f' && number[i-1] == '.'))
		return false;

	return true;
}

std::vector<std::string> ValueSanitizer::numberType(std::string number, bool showMessage) {
	int point	= 0;
	int i		= 0;
	bool isFloat = 0;
	std::string negMsg = "Positive";

	if (number[0] == '-') {
		i++;
		isNegative = 1;
		negMsg = "Negative";
	}

	for (i; i < number.size()-1 && point <= 1; i++) {
		if (!std::isdigit(number[i])) {
			if (number[i] == '.') {
				if (point == 0) point++;
				else			return	{ "NOT A NUMBER" };

				//if (i == (number.size() - 2)) return { "NOT A NUMBER" };
			}
			else {
				return			{ "NOT A NUMBER" };
			}
		}
	}

	if (number.back() == 'f') isFloat = 1;
	else if (!std::isdigit(number.back())) return { "NOT A NUMBER" };

	if (point == 1 && isFloat == 1) 
		numType = FLOAT;
	else 
		numType = DOUBLE;
	if (point == 0)
		numType = INT;

	if (showMessage) numberMessage(number, numType);

	return { negMsg, std::to_string(numType) };
}

void ValueSanitizer::numberMessage(std::string number, numberData numType) {
	std::string message;

	switch (numType) {
		case 0:
			message = "of type int";
			break;
		case 1:
			message = "of type float";
			break;
		case 2:
			message = "of type double";
			break;
	}

	isNegative ?
		std::cout << "The number " << number << " is negative, " + message << std::endl:
		std::cout << "The number " << number << " is positive, " + message << std::endl;
}