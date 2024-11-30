### Assignment 9: Dynamic Memory Allocation

#### Objective:
Learn how to allocate and free memory dynamically in C using the `malloc`, `calloc`, `realloc`, and `free` functions.

#### Brief Introduction:
Dynamic memory allocation allows you to allocate memory during runtime, as opposed to static allocation (e.g., arrays). The key functions for this are:
- `malloc`: Allocates uninitialized memory.
- `calloc`: Allocates memory and initializes all bytes to zero.
- `realloc`: Resizes previously allocated memory.
- `free`: Releases allocated memory to prevent memory leaks.

#### Task:
Write a program that:
1. Dynamically allocates memory for an array of integers using `malloc`.
2. Prompts the user to input the size of the array and its elements.
3. Calculates the sum of the elements in the array.
4. Uses `realloc` to increase the size of the array and adds more elements.
5. Frees the memory using `free` after all operations.

#### Expected Output:
```
Enter the number of elements: 3
Enter 3 integers: 1 2 3
Sum of the elements: 6

Increasing the array size...
Enter 2 more integers: 4 5
Updated sum of the elements: 15
```

#### Constraints:
- Use `malloc` for the initial allocation.
- Use `realloc` to expand the array.
- Handle potential null pointers (check if `malloc` or `realloc` fails).
- Use `free` to release memory at the end of the program.