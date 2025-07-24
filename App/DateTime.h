#pragma once
#include <string>
#include <bitset>
#include <boost\algorithm\string.hpp>
#include "TextUtils.h"

///
///  version 1.0
///  date: 24.07.2025
/// 

class Date {
private:
	enum class DateFormat {
		DMY = 0,
		YMD,
		MDY
	};

public:
	DateFormat format;


public:
	auto formatToString(const DateFormat dateFormat);
	bool stringToFormat(std::string dateSample);

};



class Time {
private:
	enum class TimeFormat {
		HM = 0,
		HMS,
		H	
	};

public:
	TimeFormat format;
	
public:
	auto formatToString(const TimeFormat timeFormat);
	bool stringToFormat(std::string timeSample);
};



class DateTime {
public:
	Date	date;
	Time	time;

public:
	static void display();

};