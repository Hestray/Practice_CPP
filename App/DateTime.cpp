#include "DateTime.h"

auto Date::formatToString(const DateFormat dateFormat) {
	switch (dateFormat) {
		case DateFormat::DMY:
			return "DD/MM/YYYY";
			break;
		case DateFormat::YMD:
			return "YYYY/MM/DD";
			break;
		case DateFormat::MDY:
			return "MM/DD/YYYY";
			break;
	}
}

bool Date::stringToFormat(std::string dateSample) {
	if (dateSample.empty()) return 0;
	if (dateSample.size() < 10 || dateSample.size() > 12) return 0;

	// check for sanity
	boost::trim(dateSample);
	if (StringUtils::countChar(dateSample, '/') != 2) return 0;

	int numCnt = 0;
	// flag to see if we reached the groups; Y, M, D
	std::bitset<3> digitFlags { 000 };
	// flag to check if we reached 2nd group of 2 digits
	bool mdCheck = false;
	DateFormat format{};


	for (char& ch : dateSample) {
		if (ch != '/') {
			if (isdigit(ch)) ++numCnt;	
			else {	// branch if != '/' and not a digit either
				if (numCnt != 2 || (ch != 'm' && ch != 'd')) return 0;	// 'm' or 'd' require only 2 digits
				
				if (!mdCheck) {
					mdCheck = true;
					if (ch == 'm') digitFlags[1] = 1;
					else 
						if (ch == 'd') digitFlags[2] = 1;

					if (digitFlags == 001)		format = DateFormat::DMY;
					else if (digitFlags == 010) format = DateFormat::MDY;
				}
				else {
					if (ch == 'm') {
						if (digitFlags[1] == 1)	return 0;
						else {
							if (digitFlags == 001) format = DateFormat::DMY;
							digitFlags[1] = 1;
						}
					}

					if (ch == 'd') {
						if (digitFlags[2] == 1) return 0;
						else {
							if (digitFlags == 010) format = DateFormat::MDY;
							digitFlags[2] = 1;
						}
					}
				}
			}

			if (numCnt == 4)			digitFlags[0] = 1;

			if (digitFlags == 100)		format = DateFormat::YMD;
		}
		else numCnt = 0;	// if it is /, reset the digit counter
	}

	// if date is of type xx/xx/xxxx, without m or d
	if (digitFlags == 100 && mdCheck && format != DateFormat::YMD) {
		digitFlags = 111;
		format = DateFormat::DMY;
	}
	
	// string argument is not following any of the formats
	if (digitFlags != 111) return 0;

	this->format = format;
	return 1;
}

auto Time::formatToString(const TimeFormat timeFormat) {
	switch (timeFormat) {
		case TimeFormat::H:		return "HH";
								break;
		case TimeFormat::HM:	return "HH:MM";
								break;
		case TimeFormat::HMS:	return "HH:MM:SS";
								break;
	}
}

bool Time::stringToFormat(std::string timeSample) {
	TimeFormat format{};

	this->format = format;
	return 1;
}