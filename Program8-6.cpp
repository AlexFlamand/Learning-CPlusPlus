// PROGRAM EXAMPLE 8.6
// READS A .dat FILE
#include <iostream>
#include <fstream>
#include <cstdlib>	// NEEDED FOR exit()
#include <string>
using namespace std;

int main()
{
	string filename = "C:\\Users\\PC_USER\\Desktop\\prices.txt"; // PUT THE FILENAME UP FRONT
	string line;
	ifstream inFile;

	inFile.open(filename.c_str());
	if (inFile.fail())	// CHECK FOR SUCCESSFUL OPEN
	{
		cout << "\nThe file was not successfully opened."
			 << "\n Please check that the file currently exists."
			 << endl;
		exit(1);
	}

	// READ AND DISPLAY THE FILE'S CONTENTS
	while (getline(inFile, line))
		cout << line << endl;

	inFile.close();

	return 0;
}
