#include "pch.h"
#include "../Calc/cal.cpp"

TEST(cal_test, GopTest) {
	int actual = getGop(3, 4);
	int expected = 12;
	EXPECT_EQ(actual, expected);
}