#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double grade1 = 85.5;
	double grade2 = 97.0;
	double total, average;

	total = grade1 + grade2;
	average = total / 2.0; // Divides the total by 2.0
	cout << "The average grade is " << average << endl;

	return 0;
}
