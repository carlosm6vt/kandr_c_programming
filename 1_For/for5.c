#include <stdio.h>

//this program computes the sum of factorials of all numbers from 1 to n, where the user inputs the integer n and the output is
////the sum of factoriasl for 1! to n!

int main (){
	
	//define data type for variables
	int user_input, final_sum, count_sum, final_number;
	
	//prompt the user for defining the value of the integer to sum the factorials to
	printf("This program computes the sum of factorials of all numbers from 1 to n\nEnter the integer: ");
	
	scanf("%d",&user_input);
	
	//ensures the integer is positive
	for (;user_input <= 0;){

		printf("Invalid size! Please enter a positive integer.\n");

		scanf("%d",&user_input);

	}
	
	
	//compute the sum of all factorials
	for (count_sum = 1, final_sum = 1, final_number = 0; count_sum <= user_input; count_sum++){
	
		final_sum = final_sum * count_sum;

		final_number = final_number + final_sum;

	}
	
	printf("Sum of factorials = %d\n", final_number);	
	
	printf("Explanation: ");

	//outputs each successive number adding up to the user-inputted integer
	for (count_sum = 1, final_sum = 1; count_sum <= user_input; count_sum++){
		
		printf("%d! ", count_sum);

		if (count_sum < user_input){
			printf("+ ");

		}
	}

	printf("= ");
	
	//outputs the factorial of each successive number adding up to the user-inputted integer
	for (count_sum = 1, final_sum = 1; count_sum <= user_input; count_sum++){

		final_sum = final_sum * count_sum;

		printf("%d ", final_sum);
		
		if (count_sum < user_input){
			printf("+ ");

		}
	
	}
	
	printf("= %d\n",final_number);

	return 0;

}
