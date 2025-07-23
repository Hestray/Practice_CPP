#pragma once
#include <string>

///
///
/// 
/// 

class Date {
public:


private:
	enum class DateFormat {
		DMY = 0,
		YMD,
		MDY
	};

public:
	static auto formatToString(const DateFormat dateFormat);
	static bool stringToFormat(const std::string dateExample);

};