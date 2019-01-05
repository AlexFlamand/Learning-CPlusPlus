// ALEX FLAMAND
// 02/13/2018
// PG. 266 #5

// THE PURPOSE OF THIS PROGRAM IS TO CALCULATE THE RECTANGULAR MOMENT OF INERTIA FOR DIFFERENT FORMS OF STRUCTURAL SUPPORT BEAMS 
// IT FIRST TAKES A SELECTION USING THE switch COMMAND TO SELECT THE TYPE OF BEAM THE USER WISHES TO USE IN THE CALCULATION 
// IT THEN REDIRECTS THE FLOW TO THE SELECTION'S MATCHING CASE AND COMPLETES THE CALCULATION

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int opselect;
	double q, l, p, radius, pi, I, C, R, minert;
		pi = 3.14159;


	cout << "MOMENT OF INERTIA CALCULATOR FOR STRUCTURAL BEAMS" << endl														
		; cout << "----------------------------------------------------\n" << endl
		; cout << "                                                        " << endl
		; cout << "                                                        " << endl
		; cout << "SUPPORTED BEAM TYPES:" << endl
		; cout << "-----------------------\n" << endl
		; cout << "> 'I' beam (INPUT: 1)" << endl
		; cout << "> Circular beam (INPUT: 2)" << endl
		; cout << "> Rectangular beam (INPUT: 3)" << endl;
	cout << "Input the desired structural beam type: "
		; cin >> opselect;

	switch (opselect) {
	
		case 1:
			cout << "Input the height (from edge to edge), the height (of the column), and the width of the base: "	 
				; cin >> p >> q >> l
			; minert = ((l * pow(p, 3)) - ((l * .5) * pow(q, 3))) / (12)
				; cout << "The moment of inertia of the beam is " << minert << " in^4" << endl;

		case 2:
			cout << "Input the width of the base and the height: "
				; cin >> p >> l
			; minert = (l * pow(p, 3)) / (12)
				; cout << "The moment of inertia of the beam is " << minert << " in^4" << endl;
		
		case 3:
			cout << "Input the radius: "
				; cin >> radius;
			; minert = (pi * pow(radius, 4)) / (4)
				; cout << "The moment of inertia of the beam is " << minert << " in^4" << endl;

		}
			 
return 0;
}
