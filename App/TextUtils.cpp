#include "TextUtils.h"

int StringUtils::countChar(std::string textSample, char ch) {
	// make sure textSample is not empty
	int cnt  = 0;
	int _pos;
	while (textSample.contains(ch)) {
		_pos = textSample.find(ch);
		++cnt;
		textSample = textSample.substr(_pos+1);
		_pos = -1;
	}

	return cnt;
}
