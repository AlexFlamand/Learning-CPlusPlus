// ALEX FLAMAND
// 04/20/2018
// FINAL PROJECT #1
// THE PURPOSE OF THIS PROGRAM IS TO CALCULATE THE PRESSURE DROP IN A 100 METER-LONG PIPE CONTAINING 4 DIFFERENT FLUIDS AT 3 DIFFERENT FLOW RATES. 
// IT FIRST READS A PLAINTEXT FILE CONTAINING THE BASIC DATA, IMPORTS THE VALUES, AND COMPUTES THE PRESSURE DROP. AFTER PROMPTING THE USER TO CONTINUE,
// IT PRINTS THE CALCULATED VALUES INTO A FORMATTED TABLE IN THE CONSOLE.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;

int loader()	// CHECKS FOR PLAINTEXT FILE, READS, AND THEN ECHO PRINTS THE DATA.
{
	string filename = "D:\\param.txt";
	string name;
	string rho;
	string mu;
	string h;
	string d;
	string Q_start;
	string Q_top;
	string Q_step;

	ifstream inFile;

	inFile.open(filename.c_str());

	if (inFile.fail())
	{
		cout << "Unable to open file. Please check D:/ for parameter file (param.txt)." << endl;
		exit(1);
	}

	inFile >> name >> rho >> mu >> h >> d >> Q_start >> Q_top >> Q_step;

	cout << " LIQUID  |";
	cout << "   p    | ";
	cout << "   u    | ";
	cout << "  h  | ";
	cout << "  D  |";
	cout << " Q_start | ";
	cout << " Q_top  | ";
	cout << " Q_step  |" << endl;
	cout << "--------------------------------------------------------------------------" << endl;

	while (inFile.good())
	{
		name.resize(8);
		cout << name << " | ";
		rho.resize(6);
		cout << rho << " | ";
		mu.resize(7);
		cout << mu << " | ";
		h.resize(4);
		cout << h << " | ";
		cout << d << " | ";
		cout << Q_start << " | ";
		cout << Q_top << " | ";
		cout << Q_step << " |\n";
		inFile >> name >> rho >> mu >> h >> d >> Q_start >> Q_top >> Q_step;
	}

	cout << "\n"
		 << "\n"
		 << "Calculations completed. Press any key to display results."
		 << "\n"
		 << "\n";
}

int solver()	// IMPORTS THE DATA FOR CALCULATION, CALCULATES THE RELEVANT VALUES, AND PRINTS IT INTO A FORMATTED LINE OF TEXT FOR THE OUTPUT TABLE. LOOPS FOR EACH Q VALUE FOR ALL FOR FLUIDS.
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
	double R1, R2, R3;
	double f1, f2, f3;
	double W1, W2, W3;
	double dP1, dP2, dP3;

	double pi;
	double g;

	ifstream inFile;

	inFile.open(filename.c_str());

	if (inFile.fail())
	{
		cout << "Unable to open file. Please check D:/ for parameter file (param.txt)." << endl;
		exit(1);
	}

	inFile >> name >> rho >> mu >> h >> d >> Q_start >> Q_top >> Q_step;

	while (inFile.good())
	{
		l = 100;
		pi = 3.14159;
		g = 9.81;

		v1 = (4 * Q_start) / (pi * pow(d, 2));
		v2 = (4 * Q_top) / (pi * pow(d, 2));
		v3 = (4 * Q_step) / (pi * pow(d, 2));

		R1 = (rho * v1 * d) / mu;
		R2 = (rho * v2 * d) / mu;
		R3 = (rho * v3 * d) / mu;

		if (R1 >= 2000)
		{
			f1 = (8 / R1);
		}
		else
		{
			f1 = (0.0395 / pow(R1, 0.25));
		}

		if (R2 >= 2000)
		{
			f2 = (8 / R2);
		}
		else
		{
			f2 = (0.0395 / pow(R2, 0.25));
		}

		if (R3 >= 2000)
		{
			f3 = (8 / R3);
		}
		else
		{
			f3 = (0.0395 / pow(R3, 0.25));
		}

		W1 = (4 * f1 * pow(v1, 2) * l) / d;
		W2 = (4 * f2 * pow(v2, 2) * l) / d;
		W3 = (4 * f3 * pow(v3, 2) * l) / d;

		dP1 = rho * ((g * h) + W1);
		dP2 = rho * ((g * h) + W2);
		dP3 = rho * ((g * h) + W3);

		name.resize(9);
		cout << name << " | ";
		cout << setiosflags(ios::fixed) << Q_start << " | ";
		cout << setiosflags(ios::fixed) << v1 << " | ";
		cout << setiosflags(ios::fixed) << R1 << " | ";
		cout << setiosflags(ios::fixed) << f1 << " | ";
		cout << setiosflags(ios::fixed) << W1 << " | ";
		cout << setiosflags(ios::fixed) << dP1 << "\n";

		name.resize(9);
		cout << name << " | ";
		cout << setiosflags(ios::fixed) << Q_top << " | ";
		cout << setiosflags(ios::fixed) << v2 << " | ";
		cout << setiosflags(ios::fixed) << R2 << " | ";
		cout << setiosflags(ios::fixed) << f2 << " | ";
		cout << setiosflags(ios::fixed) << W2 << " | ";
		cout << setiosflags(ios::fixed) << dP2 << "\n";

		name.resize(9);
		cout << name << " | ";
		cout << setiosflags(ios::fixed) << Q_step << " | ";
		cout << setiosflags(ios::fixed) << v3 << " | ";
		cout << setiosflags(ios::fixed) << R3 << " | ";
		cout << setiosflags(ios::fixed) << f3 << " | ";
		cout << setiosflags(ios::fixed) << W3 << " | ";
		cout << setiosflags(ios::fixed) << dP3 << "\n";

		inFile >> name >> rho >> mu >> h >> d >> Q_start >> Q_top >> Q_step;
	}

	inFile.close();

}

int main()	// MAIN METHOD.
{

	loader();
	getchar();
	
	cout << "  NAME   |   Q (kg/m^3)   |   v (m/sec)   |   R   |   f   |   W (J)  |   dP (Pa/m)   |   "
		 << "\n--------------------------------------------------------------------------------------"
		 << "\n " << endl;

	solver();

	cout << "\n"
		 << "Done!"
		 << "\n" << endl;


	return 0;
}
