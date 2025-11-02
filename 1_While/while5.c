#include <stdio.h>

//Prompts the user for a number, then proceeds to use this number to calculate the number's factorial

int main() {
	
	//define variable type
	int user_input, count, final;
	
	//prompt and obtain a number from the user
	printf("Provide a number to calculate its factorial:\n");
	scanf("%i",&user_input);

	//define values of variables prior to loop
	count = 2;
	final = 1;

	//while-loop that uses decrements and multiplication to get the factorial
	while ( user_input > 1 ) {
		
		count = user_input - 1;
		final = count * user_input * final;
		user_input = user_input - 2;
	}

	//output the final number
	printf("%i\n", final);

	return 0;
}
