### Assignment 8: Pointers

#### Objective:
Understand the basics of pointers in C, including declaration, dereferencing, and pointer arithmetic.

#### Brief Introduction:
A **pointer** is a variable that stores the memory address of another variable. Pointers allow direct access and manipulation of memory.

- **Declaring a Pointer**:
  ```c
  int *ptr; // A pointer to an integer
  ```

- **Assigning an Address**:
  ```c
  int x = 5;
  int *ptr = &x; // ptr now holds the address of x
  ```

- **Dereferencing**:
  ```c
  int y = *ptr; // Dereference to get the value of x (5)
  ```

#### Task:
Write a program that:
1. Declares an integer variable and assigns it a value.
2. Declares a pointer to the integer and initializes it with the variable's address.
3. Prints the following:
   - The value of the variable using the pointer.
   - The memory address of the variable.
   - The memory address of the pointer itself.
4. Demonstrates pointer arithmetic by incrementing the pointer and printing its new value.

#### Expected Output:
```
Value of the variable using pointer: 42
Address of the variable: 0x7ffee4bfeabc
Address of the pointer: 0x7ffee4bfeab8
Pointer after increment: 0x7ffee4bfebc0
```

(Note: The actual memory addresses will differ each time the program runs.)

#### Constraints:
- Use `printf` with `%p` to print addresses.
- Include clear comments in your code explaining each pointer operation.