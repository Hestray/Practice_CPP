#include "BasicOp.h"

int BasicOp::sum(std::vector<int>numbers) {
	int sum = 0;
	for (int number : numbers) {
		sum += number;
	}
	return sum;
}

float BasicOp::sum(std::vector<float>numbers) {
	float sum = 0.0f;
	for (float number : numbers) {
		sum += number;
	}
	return sum;
}

double BasicOp::sum(std::vector<double>numbers) {
	double sum = 0.0;
	for (double number : numbers) {
		sum += number;
	}
	return sum;
}

int BasicOp::mul(std::vector<int> numbers) {
	int prod = 1;
	for (int number : numbers) {
		prod *= number;
	}

	return prod;
}


float BasicOp::mul(std::vector<float> numbers) {
	float prod = 1.0f;
	for (float number : numbers) {
		prod *= number;
	}

	return prod;
}


double BasicOp::mul(std::vector<double> numbers) {
	double prod = 1.0;
	for (double number : numbers) {
		prod *= number;
	}

	return prod;
}

int BasicOp::div(int num1, int num2) {
	{
		try {
			if (num2 == 0) {
				throw (num2);
			}
			else {
				int result = num1 / num2;
				return result;
			}
		}

		catch (int num2) {
			std::cout << "Division by 0 is not accepted." << std::endl;
		}

		return -1;
	}
}

float BasicOp::div(float num1, float num2) {
	{
		try {
			if (num2 == 0) {
				throw (num2);
			}
			else {
				float result = num1 / num2;
				return result;
			}
		}

		catch (float num2) {
			std::cout << "Division by 0 is not accepted." << std::endl;
		}

		return -1;
	}
}

double BasicOp::div(double num1, double num2) {
	{
		try {
			if (num2 == 0) {
				throw (num2);
			}
			else {
				double result = num1 / num2;
				return result;
			}
		}

		catch (double num2) {
			std::cout << "Division by 0 is not accepted." << std::endl;
		}

		return -1;
	}
}


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

//float BasicOp::pow(int number, float exponent) {
//	// separate float exponent into whole and fractional part
//	std::vector<std::string> parts = NumericUtils::parts(std::to_string(exponent));
//	if (parts[0] == "NOT A NUMBER") {
//		std::cout << "The exponent must be a number." << std::endl;
//	}
//
//	int whole = std::stoi(parts[0]);
//	float fractional = std::stof(parts[1]);
//
//	int intVal = BasicOp::pow(number, whole);
//
//	int order = 
//	int exp = 
//	float floatVal = BasicOp::sqrt(number, order, exp);
//
//	return (intVal + floatVal);
//}