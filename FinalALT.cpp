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

	ifstream inFile;

	inFile.open(filename.c_str());

	if (inFile.fail())
	{
		cout << "Unable to open file. Please check D:/ for parameter file (param.txt)." << endl;
		exit(1);
	}

	inFile >> name >> rho >> mu >> mu >> h >> d >> Q_start >> Q_top >> Q_step;

	while (inFile.good())
	{
		cout << "File opened! " << endl
			<< "\n "
			<< "\n		LIQUID		|	p	|	u	|	h	|	D	|	Q_start	  |  Q_top	|	Q_step	|	"
			<< "\n		---------------------------------------------------------------------------------   "
			<< "\n		" << name << " " << rho << " " << mu << " " << mu << " " << h << " " << d << " " << Q_start << " " << Q_top << " " << Q_step;
		inFile >> name >> rho >> mu >> h >> d >> Q_start >> Q_top >> Q_step;
	}

	inFile.close();

	return 0;
}
