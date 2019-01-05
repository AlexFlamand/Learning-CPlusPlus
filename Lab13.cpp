#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	string filename = "D:\\info.txt";
	string initial;
	string name;
	string number;
	double rate;
	double hours;

	ifstream inFile;

	inFile.open(filename.c_str());

	if (inFile.fail())
	{
		cout << "The file was not successfully opened. Please check that it exists." << endl;
		exit(1);
	}
	inFile >> initial >> name >> number >> rate >> hours;

	while (inFile.good())
	{
		cout << number << " " << initial << " " << name << " $" << (rate * hours) << endl;
		inFile >> initial >> name >> number >> rate >> hours;
	}

	inFile.close();

	return 0;
}
