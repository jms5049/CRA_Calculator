#include "pch.h"
#include "../Calc/cal.cpp"


TEST(Calculator, getZegoptest) {
	int a = 3;
	int expect = a * a;
	int actual = getZegop(a);
  	EXPECT_EQ(actual, expected);
}

TEST(cal_test, GopTest) {
	int actual = getGop(3, 4);
	int expected = 12;
	EXPECT_EQ(actual, expected);
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

TEST(Calculator, GetSum) {
	const int a = 10;
	const int b = 20;
	int expect = a + b;
	int actual = getSum(a, b);

	EXPECT_EQ(expect, actual);
}