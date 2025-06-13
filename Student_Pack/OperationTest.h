#pragma once
#include "BaseTest.h"
#include "BasicOp.h"

/// version: 1.0.0
/// date: 06-06-2025

class OperationTest : BaseTest {
private:
	BasicOp op;
	
public:
	void RUN_TEST() override;	
};