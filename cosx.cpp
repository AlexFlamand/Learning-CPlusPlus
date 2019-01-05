// ALEX FLAMAND
// 02/28/2018
// LAB

// The purpose of this program is to calculate the cosine of a given function f(x) when the variable x is defined by the user.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double i, r, o, s, ratio, x, n;															// INITIALIZE VARIABLES

	n = 0;																					// DEFINE VARIABLES
	s = 1;
	i = 1;

	cout << "Enter the value of the variable x for the function f(x) = cos(x): ";
	cin >> x;

	ratio = -((x * x) / ((4 * n * n) + (6 * n) + 2));										// DEFINE EQUATIONS TO BE USED IN while() LOOP
	r = i * ratio;
	o = i - r;

	while (abs(o) >= 0.001 || (abs(o) == 0));												// while() LOOP
	{
		s = (s + r);
		n++;
		o = (i - r);
		i = r;
		ratio = -((x * x) / ((4 * n * n) + (6 * n) + 2));
		r = (i * ratio);
	}

	cout << "cos(x) = " << s << endl;														// RESULT OUTPUT
	return 0;
}
