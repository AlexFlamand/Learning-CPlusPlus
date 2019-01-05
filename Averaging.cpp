// ALEX FLAMAND
// 02/28/2018
// #5

// The purpose of this program is to calculate the positive and negative averages of five integers input by the user.

#include <iostream>
using namespace std;

int main()
{
	const int MAXNUMS = 5;
	int i;
	double usenum, positiveSum, negativeSum, avpnum, avnnum;		// CREATE TWO NEW VARIABLES, ONE FOR THE RESULT OF THE CALCULATION FOR THE AVERAGE OF THE TWO POSITIVE INTEGERS, AND
	positiveSum = 0;												// ANOTHER FOR THE RESULT OF THE CALCULATION FOR THE TWO NEGATIVE INTEGERS
	negativeSum = 0;
	for (i = 1; i <= MAXNUMS; i++)
	{
		cout << "Enter a number (positive or negative) : ";
		cin >> usenum;
		if (usenum >= 0)
			positiveSum = (positiveSum + usenum);
		else
			negativeSum = (negativeSum + usenum);
	}
	
	avpnum = positiveSum / 2;										// DIVIDE BY TWO TO AVERAGE THE TWO POSITIVE INTEGERS (ZERO NOT INCLUDED IN CALCULATION)
	avnnum = negativeSum / 2;										// DIVIDE BY TWO TO AVERAGE THE TWO NEGATICE INTEGERS (ZERO NOT INCLUDED IN CALCULATION)


	cout << "The positive average is " << avpnum << endl;			// DISPLAY POSITIVE AVERAGE
	cout << "The negative average is " << avnnum << endl;			// DISPLAY NEGATIVE AVERAGE

	return 0;
}
