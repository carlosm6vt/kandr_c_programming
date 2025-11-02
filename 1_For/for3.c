#include <stdio.h>

//this program finds the largest number in an array of integers, where the user inputs the size of the array and its elements
//the output being the largest number in the array

int main() {
	
	//define the data-type of variables
	int array_size, count, array_value;
	
	//prompt the user for the size of the array
	printf("Find the largest number of an array\nEnter the size of the array\n");
	
	scanf("%d", &array_size);
	
	int array[array_size];
	
	//prompt the user for the elements of the array
	printf("Enter the array's %d elements:\n",array_size);

	for (count = 0; count < array_size; count++) {

		scanf("%d", &array[count]);
	
	}
	
	//print out the elements of the array to ensure that everything went well
	printf("You entered: \n");
	
	for (count = 0; count < array_size; count++) {

		printf("%d ",array[count]);
	
	}
	
	printf("\n");
	
	//go through each element and sort through the largest number
	
	array_value = array[0];

	for (count = 0; count < array_size; count++) {
	
		if (array_value < array[count]) {
			
			array_value = array[count];
			
		}
	}
	
	printf("The largest number in the array is: %d\n",array_value);

	return 0;
}
