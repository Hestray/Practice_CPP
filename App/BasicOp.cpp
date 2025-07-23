#include "BasicOp.h"

//template<typename T>
//T BasicOp::sum(const std::vector<T>& numbers) {
//	T s = T{};
//	for (const T& number : numbers) s += number;
//	return s;
//}
//
//template int BasicOp::sum<int>(const std::vector<int>& numbers);
//template float BasicOp::sum<float>(const std::vector<float>& numbers);
//template double BasicOp::sum<double>(const std::vector<double>& numbers);

int BasicOp::sum(std::vector<int>numbers) {
	int sum = 0.0f;
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

double BasicOp::pow(double number, double exponent) {
	return std::pow(number, exponent);
}

double BasicOp::sqrt(double number) {
	return std::sqrt(number);
}

double BasicOp::nsqrt(double number, double order) {
	double sum = std::log(number);
	return exp(sum / order);
}

