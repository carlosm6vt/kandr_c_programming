#include <stdio.h>

//This program will generate a right-aligned triangle pattern of stars(*) with n rows
//Where the user will input the number number of rows and the program will output a triangle pattern

int main(){
	
	//define data type of variables
	int num_rows, row_count, space_count, star_count;
	
	//prompt the user for the numbers of rows
	printf("Generate a triangle pattern of *'s with n rows\nEnter the number of rows:\n");
	
	scanf("%d", &num_rows);
	
	//enter the for-loop to create the spaces and stars
	for ( row_count = 0; row_count <= num_rows; row_count++){
		
		for (space_count = num_rows - row_count; space_count > 0; space_count--){
			
			//print the space
			printf(" ");

		}
		
		for (star_count = num_rows - row_count; star_count < num_rows ; star_count++){
			
			//print the star
			printf("*");
		}
		
		//print a new line after a row has finished printing
		printf("\n");
	}

	return 0;
}
