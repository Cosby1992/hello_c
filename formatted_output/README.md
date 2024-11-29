### Assignment 2: Using `printf` for Formatted Output

#### Objective:
Learn to format and display data of different types using the `printf` function.

#### Brief Introduction:
The `printf` function is used to display formatted output in C. It supports various format specifiers to control how data is presented. For example:
- `%d`: Integer
- `%f`: Float
- `%c`: Character
- `%s`: String
- `%lf`: Double

You can also control the precision and alignment of output using format modifiers (e.g., `%.2f` for 2 decimal places, `%10d` for right-aligned integers).

#### Usage Example:
```c
int x = 42;
float y = 3.14159;
printf("Integer: %d, Float: %.2f\n", x, y);
```

#### Task:
Write a program that:
1. Declares variables of types `int`, `float`, `char`, and `double`.
2. Assigns values to these variables.
3. Uses `printf` to display the variables with:
   - At least 2 decimal places for `float` and `double`.
   - Fixed width of 10 characters for the `int`, right-aligned.
   - Character displayed within single quotes.

#### Expected Output:
```
Integer:         42
Float: 3.14
Character: 'A'
Double: 2.71
```