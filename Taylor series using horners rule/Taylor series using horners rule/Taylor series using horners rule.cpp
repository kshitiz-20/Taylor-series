#include <stdio.h>
#include <iostream>

using namespace std;

double e(int x, int n)
{
	static double s = 1;
	if (n == 0)
		return s;
	s = 1 + x * s / n;
	return e(x, n - 1);
}

int main()
{
	int i=0;
	printf("Enter the power of e");
	cin >> i;
	printf("\nTaylor series for e^%d :", i);
	printf("%lf \n", e(i, 15));

	return 0;
}