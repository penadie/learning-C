#include <stdio.h>
// print table from 0 to 300 jumping by 20
// fahrenheit-celsius table

int main() {
	float fahr, celsius;		// defining temp variables
    float lower, upper, step;	// vars for the values of the table
	// adding initial values
	lower = 0;		// lower limit of temperature scale
	upper = 300;	// upper limit
	step  = 20;		// step size
	
	printf("|fahr | celsius|\n");
	fahr = lower; 								  // setting the fahr values
	while (fahr <= upper){						  // while loop till reach the upper value
		celsius = (5.0/9.0)*(fahr-32.0);          // how to change from fahr to celsius
		printf("|%3.0f  | %6.1f |\n", fahr, celsius);	  // print the table 
		fahr 	= fahr + step;					  // adding steps to the first value
	}
	return 0;
}
