#include "stdio.h"
/*
    This program illustrates usage of different loops in c
*/
int main() 
{   
    // for loop
    printf("Using for loop:\n");
    for(int i = 1; i < 11; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // using while loop
    printf("Using while loop:\n");
    int counter = 10;
    while (counter > 0)
    {
        printf("%d ", counter);
        counter--;
    }
    printf("\n\n");

    // using do-while loop
    printf("Using do-while loop:\n");
    char letters[] = {'H','e','l','l','o',',',' ','W','o','r','l','d','!'};
    int length = sizeof(letters) / sizeof(letters[0]);
    int index = 0;
    do {
        printf("%c", letters[index]);
        index++;
    } while(index < length);
    


    return 0;
}