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
