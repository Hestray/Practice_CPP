#include "BasicOp.h"

int BasicOp::pow(int number, int power) {
	int result = 1;
	while (power != 0) {
		if (power & 1)
			result *= number;
		number *= number;
		power >>= 1;
	}
	return result;
}

int BasicOp::sum(std::vector<int>numbers) {
	int sum = 0;
	for (int number : numbers) {
		sum += number;
	}
	return sum;
}

float BasicOp::sum(std::vector<float>numbers) {
	float sum = 0;
	for (float number : numbers) {
		sum += number;
	}
	return sum;
}

double BasicOp::sum(std::vector<double>numbers) {
	double sum = 0;
	for (float number : numbers) {
		sum += number;
	}
	return sum;
}


std::string BasicOp::trim(double number, int digits) {
	if (digits >= 16) {
		std::cout << "Double values will be rounded to maximum 15 digits." << std::endl;
		digits = 15;
	}

	std::string nrStr;
	std::string roundStr;
	bool		ok			= false;

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

std::string BasicOp::trim(float number, int digits) {
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
