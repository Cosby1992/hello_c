#include <stdio.h>

/*
    Takes input from standard input (keyboard) of different datatypes and prints the input values to
    the standard out (console);

    No type safety is provided for the inputs, so inputting other values than what is prompet will
    result in undefined behavior
*/
int main()
{

    // get integer inputs from user
    printf("Enter an integer: ");
    int int_user_input;
    scanf("%d", &int_user_input);

    // get float input from user
    printf("Enter a float: ");
    float float_user_input;
    scanf("%f", &float_user_input);

    // get char input from user
    printf("Enter a char: ");
    char char_user_input;
    scanf(" %c", &char_user_input);

    // get double input from user
    printf("Enter a double: ");
    double double_user_input;
    scanf("%lf", &double_user_input);

    // Output result
    printf(
        "\nYou entered:\nInteger: %d\nFloat: %f\nCharacter: %c\nDouble %lf\n", 
        int_user_input, 
        float_user_input, 
        char_user_input, 
        double_user_input
    );

    return 0;
}