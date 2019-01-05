#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{

	string filename = "D:\\param.txt";
	string name;
	double rho;
	double mu;
	double h;
	double d;
	double Q_start;
	double Q_top;
	double Q_step;

	double l;
	double v1, v2, v3;
	double R;
	double f;
	double W;
	double dP;

	double pi;

	ifstream inFile;

	inFile.open(filename.c_str());

	if (inFile.fail())
	{
		cout << "Unable to open file. Please check D:/ for parameter file (param.txt)." << endl;
		exit(1);
	}

	inFile >> name >> rho >> mu >> h >> d >> Q_start >> Q_top >> Q_step;

	l = 100;
	pi = 3.14159;

	v1 = (4 * Q_start) / (pi * pow(d, 2));
	v2 = (4 * Q_top) / (pi * pow(d, 2));
	v3 = (4 * Q_step) / (pi * pow(d, 2));

	cout << v1 << endl;
	cout << v2 << endl;
	cout << v3 << endl;

	return 0;
}
