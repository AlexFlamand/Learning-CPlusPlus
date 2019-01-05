// ALEX FLAMAND
// 04/28/2018
// FINAL PROJECT #2

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

double f1;
double f2;
double f10;
double f20;
double v1;
double v2;
double v1c;
double v2c;
double c;
double n;

int conversion()
{
	v1 = 55.00;
	v1c = (v1) * 0.44704;

	v2 = 55.01;
	v2c = (v2) * 0.44704;

	cout << "55.00 mph = " << v1c << " m/s" << endl;
	cout << "55.01 mph = " << v2c << " m/s" << endl;

	return 0;
}

int vel()
{
	c = 299792458;
	n = 1.00031;
	f10 = pow(2, 10);
	f20 = pow(2, 10); 

	f1 = -(((n * v1c * f10) + (c * f10)) / ((n * v1c) - c));
	f2 = -(((n * v2c * f20) + (c * f20)) / ((n * v2c) - c));

	cout << "Frequency (55.00 mph) = " << std::fixed << f1 << " Hz" << endl;
	cout << "Frequency (55.01 mph) = " << std::fixed << f2 << " Hz" << endl;

	return 0;
}

int main()
{
	conversion();
	vel();

	return 0;
}
