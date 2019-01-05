#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double  x, p, root;
double tol = 0.001;


void bisection(double a, double b)
{
	int N = 100;
	int i = 1;

	p = a;

	for (i = 1; i <= N; i++)
	{
		double p = (a + b) / 2;
		double pa = cos(x) - 3 * cos(x);
		pa = x;

		if ((cos(p) - cos(3 * p)) == 0)
		{
			break;
		}
		
		else if ((cos(p) - cos(3 * p)) * (cos(a) - cos(3 * a)) < 0)
		{
			b = p;
		}

		else
		{
			a = p;
		}
	}
	cout << "Root of function = " << p << endl;

}

int main()
{
	double a, b;
	a = -1.1;
	b = -2.34;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	bisection(a, b);

	return 0;
}
