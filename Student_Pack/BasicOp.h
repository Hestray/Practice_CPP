#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <math.h>
#include "NumericUtils.h"

///
/// version 1.1.0
/// date: 16-06-2025
/// 

class BasicOp
{
public:
	static int sum(std::vector<int> numbers);

	static float sum(std::vector<float> numbers);

	static double sum(std::vector<double> numbers);


	static int mul(std::vector<int> numbers);

	static float mul(std::vector<float> numbers);

	static double mul(std::vector<double> numbers);


	static int div(int num1, int num2);

	static float div(float num1, float num2);
	
	static double div(double num1, double num2);


	/// <summary>
	/// Own implementation. Fast version of pow for integers. Uses binary exponentiation.
	/// </summary>
	static int pow(int number, int exponent);
	static double pow(double number, double exponent);
	
	static double sqrt(double number);
	static double nsqrt(double number, double order);

};

