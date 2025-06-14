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
