#include "pch.h"
#include "../Calc/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Calculator, GetMinus1) {
	const int a = 10;
	const int b = 20;
	int expect = a - b;
	int actual = getMinus(a, b);

	EXPECT_EQ(expect, actual);
}

TEST(Calculator, GetMinus2) {
	const int a = 100000;
	const int b = 20;
	int expect = a - b;
	int actual = getMinus(a, b);

	EXPECT_EQ(expect, actual);
}