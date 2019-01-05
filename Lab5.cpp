#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double v, pi, r, d;

	pi = 3.14159;

	cout << "Enter the radius of the tank (in feet): ";
	cin >> r;
	cout << "Enter the distance between the top of the tank and surface of oil contained (in feet): ";
	cin >> d;

	v = pi * (r * r) * (200 - d);

	cout << setw(7) << "RADS: " << r << endl
		<< setw(7) << "DIST: " << d << endl
		<< "-------------\n" << endl
		<< setw(7) << "VOLU: " << v << endl;
	
	return 0;
}
