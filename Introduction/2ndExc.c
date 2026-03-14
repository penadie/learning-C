#include <stdio.h>

// modify the temp conversion to print heading above the table
// and invert the formula so we can get fahrenheit from celsius
int main () {
	float celsius, fahr;
	float lower, upper, step;

	lower = 0;
	upper 	= 300;
	step	= 20;
	celsius = lower;
	printf("---------------\n");
	printf("|cels | fahr |\n");
	printf("---------------\n");
	while (celsius <= upper){
		fahr = (celsius*(9.0/5.0) + 32);
		printf("| %3.0f | %3.1f |\n", celsius, fahr);
		printf("---------------\n");
		celsius = celsius + step;
	}
	return 0;
}
