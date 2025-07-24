#include "StringUtilsTest.h"

void TextUtilsTest::RUN_TEST() {
	if (textUtilsTest()) {
		std::cout << "All tests passed for TextSanitizer." << std::endl;
	}
	else {
		std::cout << "Some tests have failed." << std::endl;
		std::cout << "Error list: " << std::endl;
		BaseTest::printErrors();
	}
}


bool TextUtilsTest::textUtilsTest() {
	if (ASSERT_EQUAL("[INT COUNTCHAR (1), (int)TextUtils::countChar]", StringUtils::countChar("date/to/check", '/'), 2)	&&
		ASSERT_EQUAL("[INT COUNTCHAR (2), (int)TextUtils::countChar]", StringUtils::countChar("date///to///check", '/'), 6)
		)	return true;

	std::cout << "Text Sanitizer failed" << std::endl;
	return false;
}