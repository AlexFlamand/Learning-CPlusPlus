// ALEX FLAMAND
// 03/08/2018
// NEWTON'S METHOD

// THE PURPOSE OF THIS PROGRAM IS TO DETERMINE THE LOCAL ROOT OF A GIVEN FUNCTION [cos(x) - cos(3*x)] WHEN AN APPROXIMATE VALUE IS INPUT BY THE USER
// IT DOES THIS BY TAKING THE COMPARING THE DERIVATIVE OF A LOCAL INTERVAL OF THE FUNCTION AND COMPARING IT TO THE APPROXIMATE VALUE UNTIL THE DIFFERENCE
// IS OF AN ACCEPTABLE VALUE.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x_0;
	double tol = 0.001;	// DEFINE TOLERANCE

	cout << "Input a root approximation: ";		// PROMPT USER FOR APPROXIMATE VALUE
	cin >> x_0;

	int i;										
	int iMAXIMUM = 10000;

	for (i = 1; i <= iMAXIMUM; i++)		// SET PARAMETERS FOR LOOP
	{
		double (fx_0) = cos(x_0) - cos(3 * x_0);			// ORIGINAL FUNCTION
		double (d_fx_0) = -sin(x_0) + 3 * sin(3 * x_0);		// DERIVATIVE OF FUNCTION 
		double (x) = x_0 - (fx_0 / d_fx_0);					// COMPARISON
		double (diff) = abs(x - x_0);						// TOLERANCE CALCULATION

		(fx_0) = cos(x) - cos(3 * x);						// EQUATION EQUIVALENT
		(d_fx_0) = -sin(x) + 3 * sin(3 * x);
		(x_0) = x;

		if (diff <= tol || diff == 0)						// LOOP
		{
			cout << "Success! The nearest root has been located at: " << x_0 << endl;	// OUTPUT FOR SUCCESSFUL LOOP
			return 0;
		}

	}

	return 0;
}
