#pragma once
class BasicOp
{
public:
	/// <summary>
	/// Fast version of pow for integers. Uses binary exponentiation.
	/// </summary>
	static int pow(int number, int exponent);

	/// <summary>
	/// Fast version of pow for floats. Uses binary exponentiation.
	/// </summary>
	static float pow(float number, float exponent);

	/// <summary>
	/// Computes the sum of the given numbers
	/// </summary>
	static int sum(int num1, int num2);
};

