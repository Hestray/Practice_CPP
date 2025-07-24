#pragma once
#include <string>
#include <ctype.h>

class StringUtils {
private:
	std::string lcLetters = "abcdefghijklmnopqrstuvwxyz";
	std::string ucLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string numbers   = "0123456789";

public:
	// utilities
	static int	countChar(std::string textSample, char ch);

	// sanitization
	/*static bool isDate(std::string dateSample);*/
};