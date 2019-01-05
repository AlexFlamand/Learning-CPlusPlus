// ALEX FLAMAND
// 03/01/2018
// #2

// The purpose of this program is to determine the deflection of a wooden beam of given dimensions supplied with an evenly distributed weight at half-foot increments. 
// This is done by generating a for loop which calculates the deflection at each point until the sum of the increments equals the total length of the beam.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double d, x, W, l, E, I, b, h;																	// INITIALIZE VARIABLES

	W = 200;																						// DEFINE VARIABLES
	l = 3;
	E = 187.2 * pow(10, 6);
	b = 0.2;
	h = 0.3;

	I = (b * pow(h, 3)) / 12.0;																		// CALCULATE AND DEFINE MOMENT OF INERTIA

	cout << " WOOD CANTILEVER BEAM CALCULATOR " << endl;											// FORMATTING OF TITLE AND PARAMETERS
	cout << "" << endl;
	cout << "For a beam of 3.0 x 0.2 x 0.3 ft. "
		 << "with a distributed wooden load " << endl;
	cout << "of 200 lbs. and an elastic modulus of 1.872 x 10^8 lbs/sqr(ft)." << endl;
	cout << "" << endl;
	cout << setw(7) << "  Length: "
		<< setw(11) << "      Deflection: " << endl;
	cout << "-----------    -------------" << endl;
	cout << setiosflags(ios::fixed)
		<< setiosflags(ios::showpoint)
		<< setprecision(5);

	for (x = 0.0; x <= l; x = x + 0.5)																// FOR LOOP USED FOR MAIN CALCULATION
	{
		d = ((W * pow(x, 2)) / (24 * I * E)) * ((pow(x,2)) + (6 * pow(l,2)) - (4 * l * x));
		cout << setw(7) << x << " ft.";
		cout << setw(11) << d << " ft." << endl;
		cout << "" << endl;
	}

	return 0;
}
