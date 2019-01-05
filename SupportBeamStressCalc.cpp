// ALEX FLAMAND
// 02/13/2018
// PG. 96 #8

// THE PURPOSE OF THIS PROGRAM IS TO CALCULATE THE STRESS EXERTED ON AN I-BEAM THAT IS AFFIXED AT AN END 
// THIS IS DONE BY PROMPTING THE USER TO INPUT FOUR KNOWN PARAMETERS AND USING THE PROVIDED EQUATION TO CALCULATE THE STRESS 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double s, l, i, d, h, c;

	cout << "Enter the weight of the load exerted on the beam (in lbs): ";				// PROMOPT TO ENTER WEIGHT OF LOAD
		; cin >> l;
	cout << "Enter the rectangular moment of inertia of the beam (in in^4): ";			// PROMPT TO ENTER RECTANGULAR MOMENT OF INERTIA OF THE BEAM
		; cin >> i;
	cout << "Enter the distance between the moment arm and the load (in inches): ";		// PROMPT TO ENTER DISTANCE BETWEEN LOAD AND MOMENT ARM
		; cin >> d;
	cout << "Enter the height of the beam (in inches): ";								// PROMPT TO ENTER HEIGHT OF BEAM
		; cin >> h;

	c = 0.5 * h;																		// CONVERTING GIVEN HEIGHT TO FORM USED IN EQUATION

	s = (l * d * c) / i;																// PRIMARY CALCULATION

	cout << "The stress exerted on the beam is " << s << " lbs/in^2 "					// OUTPUT
		; cout << "" << endl;

; return 0;
}
