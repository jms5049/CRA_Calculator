#include "pch.h"
#include "../Calc/cal.cpp"


TEST(cal_test, GopTest) {
	int actual = getGop(3, 4);
	int expected = 12;
	EXPECT_EQ(actual, expected);
}

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