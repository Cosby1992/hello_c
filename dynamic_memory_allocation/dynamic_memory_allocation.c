#include "stdio.h"
#include <stdlib.h>

int sum_array(int *array, int array_size);

int main()
{

    printf("Enter the number of elements: ");
    int array_size;
    scanf("%d", &array_size);

    if (array_size <= 0)
    {
        printf("Invalid size!");
        return 1;
    }

    // Dynamic memory allocation
    int *int_array = malloc(array_size * sizeof(int));

    if (int_array == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d elements: ", array_size);

    for (int i = 0; i < array_size; i++)
    {
        scanf("%d", &int_array[i]);
    }

    int sum = sum_array(int_array, array_size);

    printf("Sum of the elements: %d\n\n", sum);
    
    // Increase allocated array size by 2
    int increased_size = 2;
    int new_array_size = array_size + increased_size;
    printf("Increasing array size...\n");
    realloc((void *)int_array, (new_array_size) * sizeof(int));

    if (int_array == NULL)
    {
        printf("Memory reallocation failed!");
        return 1;
    }

    printf("Enter %d more integers: ", increased_size);

    for (int i = array_size; i < new_array_size; i++)
    {
        scanf("%d", &int_array[i]);
    }

    int updated_sum = sum_array(int_array, new_array_size);

    printf("Updated sum of the elements: %d", updated_sum);

    free((void *)int_array);

    return 0;
}

int sum_array(int *array, int array_size) {
    int sum = 0;
    for(int i = 0; i < array_size; i++) {
        sum += array[i];
    }
    return sum;
}