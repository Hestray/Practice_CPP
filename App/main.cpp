#include "RunningTests.h"
// in case the above doesn't work, use C++23 preview
//import std;

void print(auto num, std::string additionalMessage = "") {
	std::cout << "My number is " << num << additionalMessage << std::endl;
}


int main() {
	std::cout << "Minimal tests:" << std::endl;
	
	
	RunningTests::Operations();
	RunningTests::Formattings();
	RunningTests::Sanitizers();
	return 0;
}
