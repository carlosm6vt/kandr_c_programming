#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//this program is a game where the user will provide an integer as a guess for a random number between 0 - 50
//if the guess is either lower or higher than the random number, the program will inform the user

int main() {

        //define variables type
        int min, max, user_input, random_number;

        //define variable values
        min = 0;
        max = 50;

        //the following lines create a random number based on the time
        //it then obtains the remainder of the division of the random number by the difference of the max and min plus one
        //and adds it to the min, the result being a random number within the min-max range
        srand(time(NULL));

        random_number = min + rand() % (max - min + 1);

        //query the user, user provides a guess
        printf("Provide your guess (0-50)\n");
        scanf("%i", &user_input);

        //validate the initial user input
        while (user_input < min || user_input > max) {
                printf("Invalid input! Please enter a number between 0 and 50: ");
                scanf("%i", &user_input);
        }

        //enter while loop as long as the guess was wrong
        while (user_input != random_number) {
                if (user_input > random_number) {
                        printf("Too high!\nTry again: ");
                } else {
                        printf("Too low!\nTry again: ");
                }
                scanf("%i", &user_input);

                //validate input again within the loop
                while (user_input < min || user_input > max) {
                        printf("Invalid input! Please enter a number between 0 and 50: ");
                        scanf("%i", &user_input);
                }
        }

        //once guess is right, you get the congratulatory message
        printf("Congratulations! You guessed the correct number!\n");

        return 0;
}
