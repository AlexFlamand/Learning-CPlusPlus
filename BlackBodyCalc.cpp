// ALEX FLAMAND
// 02/13/2018
// PG. 166 #7

// THE PURPOSE OF THIS PROGRAM IS TO CALCULATE THE BLACK BODY RADIATION EMITTED BY NEARBY CELESTIAL OBJECTS BASED ON THEIR AVERAGE SURFACE TEMPERATURE
// IT FIRST TAKES THE INPUT (IN CELSIUS) AND CONVERTS IT TO KELVIN
// THAT TEMPERATURE IS THEN CALCULATED USING THE STEFAN-BOLTZMANN EQUATION
// NOTE: COMMENTS ARE IN ALL CAPS BECAUSE IT REMINDS ME OF VINTAGE COMPUTER TERMINALS AND LOOKS COOL

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double e, o, t, q;

	o = 0.000000056697;																									// STEFAN-BOLTZMANN CONSTANT; MEASURED IN W/(M^2)(K^4)

	cout << "STEFAN-BLOTZMANN BLACK BODY RADIATION CALCULATOR" << endl;														// THE TITLE OF THE PROGRAM	
	cout << "--------------------------------------------------\n" << endl
		; cout << "Please enter the surface temperature of the desired planet / celestial object (in Celsius): ";			// PROMPT FOR USER TO ENTER SURFACE TEMPERATURE OF OBJECT IN CELSIUS 
	cin >> q;
		
	t = q + 273;																											// CONVERSION FROM CELSIUS TO KELVIN
	e = o * (pow(t, 4));																									// MAIN CALCULATION USING THE STEFAN-BOLTZMANN EQUATION

	cout << "The black body radiation emitted by is: " << e << " watts/m^2" << endl;										// DISPLAY OUTPUT MESSAGE

	return 0;
}
