#include "stdio.h"

int main() {

    int number = 42;

    int *ptr = &number;

    printf("Value of the variable using pointer: %d\n", *ptr);
    printf("Address of the variable: %p\n", &number);
    printf("Address of the pointer: %p\n", &ptr);
    printf("Pointer after increment: %p", ++ptr);

    return 0;
}