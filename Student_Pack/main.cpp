#include "RunningTests.h"
// in case the above doesn't work, use C++23 preview
//import std;

void print(auto num, std::string additionalMessage = "") {
	std::cout << "My number is " << num << additionalMessage << std::endl;
}

int main() {
	std::cout << "Hello world" << std::endl;
	RunningTests::Operations();
	RunningTests::Formattings();

	return 0;
}

// this method is only for testing, but the test inside fails
//static void failedTests() {
//	RadixUtils obj;
//	std::cout << "Decimal: -13\tBinary: " << obj.convertBase(-13, 10, 2) << std::endl;
//	std::cout << "Now back to decimal: " << obj.convertBase(101, 2, 10) << std::endl;
//
//	int number = 13;
//	while (number > 0) {
//		std::cout << number << "\tbinary: " << obj.convertBase(number, 10, 2) << std::endl;
//		number >>= 1;
//	}
//	//// all of these below will print "My number is 42"
//	//int arr[4] = { 42, 0b00101010, 0x2A, 052 };
//	//for (int i = 0; i < 4; i++) {
//	//	print(arr[i]);
//	//}
//}