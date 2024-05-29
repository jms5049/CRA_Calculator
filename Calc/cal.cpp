int getSum(int a, int b) {
	return a + b;
}

int getDivide(int a, int b)
{
	if (b == 0) {
		cout << "You can't divide by 0\n";
		return 0;
	}

	return a / b;
}
