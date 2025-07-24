#include "RunningTests.h"

void RunningTests::Operations() {
	OperationTest opTest;

	opTest.RUN_TEST();
}

void RunningTests::Formattings() {
	FormattingTest formatTest;

	formatTest.RUN_TEST();
}

void RunningTests::Sanitizers() {
	ValueSanitizerTest	valSan;
	TextUtilsTest		strUtil;

	valSan.RUN_TEST();
	strUtil.RUN_TEST();
}