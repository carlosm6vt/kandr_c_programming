#include <stdio.h>

//This programm prints the multiplication table of a given number n

int main() {
	
	//define data type for variables
	int input_number, multiplier, mult_result;
	
	//prompt user to define the input_number variable
	printf("Multiplication Table from 1 to 10\nEnter a number:\n");
	
	scanf("%d",&input_number);
	
	printf("\nThe Multiplication Table for %d from 1 to 10:\n", input_number);

	//for loop that prints in ever iteration the multiplicaton of the input variable with an increasing count variable
	//all the way up to 10
	for (multiplier = 1;multiplier < 11; multiplier += 1) {
		
		mult_result = input_number * multiplier ;
		
		printf("%d x %d = %d\n",input_number, multiplier, mult_result);

	}
		
return 0;
}
