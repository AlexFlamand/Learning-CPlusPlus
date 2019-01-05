// EXAMPLE PROGRAM 8.4
// THIS PROGRAM OUTPUTS A TABLE
#include <iostream>
#include <fstream>
#include <cstdlib>	// NEEDED FOR exit()
#include <string>
#include <iomanip>	// NEEDED FOR FORMATTING
using namespace std;

int main()
{
	string filename = "prices.dat"; // PUT THE FILENAME UP FRONT
	ofstream outFile;

	outFile.open(filename.c_str());

	if (outFile.fail())
	{
		cout << "The file was not succesfully opened." << endl;
	}

	// SET THE OUTPUT FILE TO STREAM FORMATS
	outFile << setiosflags(ios::fixed)
		<< setiosflags(ios::showpoint)
		<< setprecision(2);

	// SEND DATA TO THE FILE
	outFile << "Mats " << 39.95 << endl
			<< "Bulbs " << 3.22 << endl
			<< "Fuses " << 1.08 << endl;

	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;

	return 0;
}
