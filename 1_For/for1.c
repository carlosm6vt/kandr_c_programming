#include <stdio.h>

//this program calculates and prints the sum of all even numbers between 1 and n (inclusive)

int main(){
	
	//define data types for variables
	int user_input, sum;

	//define values for variables
	sum = 0;

	//prompt the user to input and define an integer value for user_input
	printf("Enter an integer to obtain the sum of all even numbers between 1 and n:\n");
	scanf("%d",&user_input);

	//for loop that adds even numbers from 0 until reaching the value equal to the user_input value
	for (int initial = 2; initial <= user_input; initial += 2) {
	
		sum += initial;
	}
	
	//print the value
	printf("The sum of all even numbers between 1 and n is:\n%d\n",sum);

	return 0;

}
