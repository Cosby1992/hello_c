#include "stdio.h"

/*
   Prints different datatypes to the standard out (console) formatted
*/
int main() {
    // declare variables
    int format_int = 42;
    float format_float = 3.14;
    char format_char = 'A';
    double format_double = 2.71;

    // Print formatted
    printf("Integer: %10d\nFloat: %.2f\nCharacter: %c\nDouble: %.2lf", format_int, format_float, format_char, format_double);

    return 0;
}