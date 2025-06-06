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

int BasicOp::sum(int a, int b) {
	return a + b;
}