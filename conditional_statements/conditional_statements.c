#include "stdio.h"

/*
    Takes integer input from standard input (keyboard) and prints whether number
    is positive, negative or 0
*/
int main()
{

    // Get input from user
    printf("Enter an integer: ");
    int user_input;
    scanf("%d", &user_input);

    // evaluate user input
    if (user_input < 0)
    {
        printf("Number is negative!");
    }
    else if (user_input == 0)
    {
        printf("Number is 0");
    }
    else
    {
        printf("Number is positive!");
    }

    return 0;
}