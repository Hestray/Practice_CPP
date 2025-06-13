#pragma once
#include <vector>
#include <iostream>
#include <string>

/// version: 1.1.0
/// date: 14-06-2025

class BasicOp
{
public:
	/// <summary>
	/// Computes the sum of the given numbers
	/// </summary>
	static int sum(std::vector<int> numbers);

	/// <summary>
	/// Computes the sum of the given numbers
	/// </summary>
	static float sum(std::vector<float> numbers);

	/// <summary>
	/// Computes the sum of the given numbers
	/// </summary>
	static double sum(std::vector<double> numbers);



	/// <summary>
	/// Fast version of pow for integers. Uses binary exponentiation.
	/// </summary>
	static int pow(int number, int exponent);


	static std::string trim(double number, int digits);

	static std::string trim(float number, int digits);

	///// <summary>
	///// Fast version of pow for floats. Uses binary exponentiation.
	///// </summary>
	//static float pow(float number, float exponent);

};

