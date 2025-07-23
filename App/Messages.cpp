#include "Messages.h"

void IEEE765FloatDisplay(std::vector<std::string> args) {
	if (args.front() == "UNDEFINED") {
		std::cout << "Undefined behavior for display of the floating point value's binary representation." << std::endl;
	}
	else {
		std::cout	<< "Number: " << args.front()
					<< "\tsignificand: " << args[1]
					<< "\texponent:	" << args[2] << std::endl;
	}
}