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

TEST(Calculator, GetDivide) {
	const int a = 10;
	const int b = 5;
	int expect = 2;
	int actual = getDivide(a, b);

	EXPECT_EQ(expect, actual);
}
