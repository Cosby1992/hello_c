#include "stdio.h"

/*
    This program provides an example of the use of arrays in c.
    It takes 5 user inputs and stores them in an array and echos
    them to standard output (console)
*/
int main()
{
    int user_inputs[5];
    int array_sum = 0; // initialized to avoid garbage value

    printf("Enter 5 integers:\n");

    // add each user input to array
    // and add value to array sum
    for (int i = 0; i < 5; i++)
    {
        int user_input;
        scanf("%d", &user_input);
        user_inputs[i] = user_input;
        array_sum += user_input;
    }

    printf("You entered: %d %d %d %d %d\n",
           user_inputs[0],
           user_inputs[1],
           user_inputs[2],
           user_inputs[3],
           user_inputs[4]);
    printf("Sum of the elements: %d", array_sum);
}