#include <stdio.h>
#include <string.h> //for strcmp()

//this program requests a user input for a password, if the password is wrong, it asks again, if the password is right it prompts the user with a provision that access has been granted

int main() {
	
	//define variable type
	char user_input[50];

	//define variable values
	char password[] = "Dichotomy123";
	
	//prompt the user for input
	printf("Enter the password:\n");
	scanf("%s",user_input);
	
	//if the user input does not match the password, enter while-loop which will prompt the user to try again
	while (strcmp(user_input, password) != 0) {
		printf("Incorrect password. Try again\n");
		scanf("%s",user_input);
	}

	//prompt for user after getting the password correct
	printf("Access granted!\n");

return 0;
}
