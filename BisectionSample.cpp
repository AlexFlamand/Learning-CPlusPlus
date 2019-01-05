#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double func(double x)
{
	return cos(x) - cos(3 * x);
}

double e = 0.01;
double c;

void bisection(double a, double b)
{
	if (func(a) * func(b) >= 0)
	{
		printf("Incorrect a and b");
		return;
	}

	c = a;

	while ((b - a) >= e)
	{
		c = (a + b) / 2;
		if (func(c) == 0.0) {
			printf("Root = %lf\n", c);
			break;
		}
		else if (func(c)*func(a) < 0) {
			printf("Root = %lf\n", c);
			b = c;
		}
		else {
			printf("Root = %lf\n", c);
			a = c;
		}
	}
}

int main()
{
	double a, b;
	a = -1;
	b = -2;

	printf("a = %lf\n", a);
	printf("b = %lf\n", b);
	bisection(a, b);
	printf("\n");
	printf("Accurate Root calculated is = %lf\n", c);

	return 0;
}
