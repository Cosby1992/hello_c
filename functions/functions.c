#include "stdio.h"

int sum(int a, int b) {
    return a + b;
}

int factorial(int n) {
    int factorial_sum = n;
    for(int i = n - 1; i > 0; i--) {
        factorial_sum *= i;
    }

    return factorial_sum;
}

/*
    This program illustrates the usage of functions in c.
    functions sum and factorial is defined outside main function
    and then used to print sum and factorial of user input numbers
*/
int main() {

    // Calculate sum
    printf("Enter two integers to find their sum: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("The sum is: %d\n", sum(a, b));
    
    // Calculates factorial
    printf("Enter a number to find its factorial: ");
    int n;
    scanf("%d", &n);
    printf("The factorial of %d is: %d", n, factorial(n));

    return 0;
}