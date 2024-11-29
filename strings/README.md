### Assignment 6: Strings

#### Objective:
Understand and manipulate strings in C using character arrays.

#### Brief Introduction:
A **string** in C is a sequence of characters stored in a character array, terminated by a special character `\0` (null character).
- **Declaring a string**:
  ```c
  char str[50]; // Can hold up to 49 characters + null terminator
  ```
- **Common string functions** (from `<string.h>`):
  - `strlen()`: Returns the length of the string.
  - `strcpy()`: Copies one string into another.
  - `strcmp()`: Compares two strings.
  - `strcat()`: Concatenates (joins) two strings.

#### Task:
Write a program that:
1. Prompts the user to enter two strings.
2. Calculates and prints the lengths of both strings using `strlen`.
3. Compares the two strings using `strcmp` and prints whether they are the same or different.
4. Concatenates the two strings using `strcat` and prints the resulting string.

#### Expected Output:
```
Enter the first string: hello
Enter the second string: world

Length of the first string: 5
Length of the second string: 5
The strings are different.
Concatenated string: helloworld
```

#### Constraints:
- Use a character array of size 100 for each string.
- Include the `<string.h>` library for string functions.