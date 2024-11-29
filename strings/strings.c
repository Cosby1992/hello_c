#include "stdio.h"
#include "string.h"

/*
    This program illustrates a few functions to work with strings in c.
    It measures the length of a string, compares strings and concatinates strings
*/
int main()
{
    // Take user input strings
    printf("Enter the first string: ");
    char input_1[100];
    scanf("%s", input_1);

    printf("Enter the second string: ");
    char input_2[100];
    scanf("%s", input_2);

    printf("\n\n");

    // Measure the length of a string
    printf("Length of the first string %d\n", (int)strlen(input_1));
    printf("Length of the second string %d\n", (int)strlen(input_2));

    // Compare strings
    if(strcmp(input_1, input_2)) {
        printf("The strings are different\n");
    } else {
        printf("The strings are identical\n");
    }

    // Concatinate strings
    printf("Concatinated string: %s", strcat(input_1, input_2));

    return 0;
}