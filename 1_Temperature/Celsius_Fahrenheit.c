#include <stdio.h>

//Prints Celsius-Fahrenheit Table

int main () {
	
	//prints heading
	printf("Celsius-Fahrenheit Table\n");
	
	//define data type
	float fahr, cels, lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;

	cels = lower;

	while (cels <= upper) {
		fahr = (9.0/5.0) * cels + 32.0;
		printf("%3.0f %6.1f\n", cels,fahr);
		cels = cels + step;
	}

	return 0;

}
