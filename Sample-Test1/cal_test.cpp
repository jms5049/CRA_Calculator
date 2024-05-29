#include "pch.h"
#include "../Calc/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Calculator, GetSum) {
	const int a = 10;
	const int b = 20;
	int expect = a + b;
	int actual = getSum(a, b);

	EXPECT_EQ(expect, actual);
}