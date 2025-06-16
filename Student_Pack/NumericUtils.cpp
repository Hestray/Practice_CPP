#include "NumericUtils.h"

std::string NumericUtils::trim(double number, int digits) {
	if (digits >= 16) {
		std::cout << "Double values will be rounded to maximum 15 digits." << std::endl;
		digits = 15;
	}

	std::string nrStr;
	std::string roundStr;
	bool		ok = false;

	nrStr = std::to_string(number);

	for (int i = 0; i < nrStr.size() && (digits != 0 || !ok); i++) {
		if (ok) {
			digits--;
		}
		else {
			if (nrStr[i] == '.') {
				ok = true;
			}
		}

		roundStr.push_back(nrStr[i]);
	}

	while (digits != 0) {
		roundStr.push_back('0');
		digits--;
	}

	if (!roundStr.empty() && roundStr.back() == '.') {
		roundStr.pop_back();
	}

	return roundStr;
}


std::string NumericUtils::trim(float number, int digits) {
	if (digits >= 8) {
		std::cout << "Double values will be rounded to maximum 7 digits." << std::endl;
		digits = 7;
	}

	std::string nrStr;
	std::string roundStr;
	bool		ok = false;

	nrStr = std::to_string(number);

	for (int i = 0; i < nrStr.size() && (digits != 0 || !ok); i++) {
		if (ok) {
			digits--;
		}
		else {
			if (nrStr[i] == '.') {
				ok = true;
			}
		}

		roundStr.push_back(nrStr[i]);
	}

	while (digits != 0) {
		roundStr.push_back('0');
		digits--;
	}

	if (!roundStr.empty() && roundStr.back() == '.') {
		roundStr.pop_back();
	}

	return roundStr;
}


std::vector<std::string> NumericUtils::parts(std::string number) {
	if (!ValueSanitizer::isNumber(number)) return { "NOT A NUMBER" };
	
	// following is for float/double
	std::vector<std::string> result = { "", "" }; // structure: { WHOLE, FRACTIONAL }
	int ok = false;
	if (number[0] == '-') {
		result[1].push_back('-');
	}
	result[1].push_back('0');

	for (int i = 0; i < number.size(); i++) {
		if (ok) {								// modify fractional part
			result[1].push_back(number[i]);
		}
		else {
			if (number[i] == '.') {				// modify whole part
				ok = true;
				result[1].push_back(number[i]);
			}
			else {
				result[0].push_back(number[i]);	// add . to fractional part
			}
		}
	}

	if (!ok) {
		result[1].push_back('.');
		result[1].push_back('0');
	}
	
	if (result[1].back() == 'f')
		result[1].pop_back();

	return result;
}
