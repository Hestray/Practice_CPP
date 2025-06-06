#pragma once
#include "BaseTest.h"
#include "BasicOp.h"

class OperationTest : BaseTest {
private:
	BasicOp op;
	
public:
	void RUN_TEST() override;	
};