#include "pch.h"
#include "../Calc/cal.cpp"

TEST(Calculator, getZegoptest) {
	int a = 3;
	int expect = a * a;
	int actual = getZegop(a);

	EXPECT_EQ(expect, actual);
}