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

bool Date::stringToFormat(const std::string dateExample) {
	if (dateExample.empty()) return 0;

	// check for sanity
	if (!dateExample.contains('/')) return 0;
	//if (!dateExample.)
	// determine format
	
}