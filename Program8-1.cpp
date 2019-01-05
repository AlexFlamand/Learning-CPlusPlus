#include <iostream>
#include <fstream>
#include <cstdlib>	// NEEDED FOR exit()
using namespace std;

int main()
{
	ifstream inFile;

	inFile.open("prices.txt");	// OPEN THE FILE WITH THE EXTERNAL NAME prices.dat
	if (inFile.fail())	// CHECK FOR SUCCESSFUL OPEN
	{
		cout << "\nThe file was not successfully opened."
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}

	cout << "\nThe file has been successfully opened for reading."
		 << endl;
	// STATEMENTS TO READ DATA FROM THE FILE WOULD BE PLACED HERE

	return 0;
}
