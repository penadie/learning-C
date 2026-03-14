#include <stdio.h>

// print from upper to lower value

int main(){
	int celsius;
	printf("|---------------|\n");
	printf("|celsius| fahr  |\n");
	printf("|---------------|\n");
	for (celsius = 300; celsius >= 0; celsius = celsius - 20){
		printf("| %3d   |%6.1f |\n", celsius, (celsius*1.8)+32 );	
		printf("|-------|-------|\n");

	}
	return 0;
}
