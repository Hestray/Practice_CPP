#pragma once
#include <vector>
#include <iostream>
#include <string>

/// version: 1.1.1
/// date: 14-06-2025

class BasicOp
{
public:
	static int sum(std::vector<int> numbers);

	static float sum(std::vector<float> numbers);

	static double sum(std::vector<double> numbers);



	/// <summary>
	/// Fast version of pow for integers. Uses binary exponentiation.
	/// </summary>
	static int pow(int number, int exponent);


	static int mul(std::vector<int> numbers);

	static float mul(std::vector<float> numbers);

	static double mul(std::vector<double> numbers);


	///// <summary>
	///// Fast version of pow for floats. Uses binary exponentiation.
	///// </summary>
	//static float pow(float number, float exponent);

};

