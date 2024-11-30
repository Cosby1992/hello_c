### Assignment 7: Functions

#### Objective:
Learn how to declare, define, and call functions in C.

#### Brief Introduction:
A **function** in C is a reusable block of code designed to perform a specific task. Functions allow for modular and organized code.

- **Function Syntax**:
  ```c
  return_type function_name(parameters) {
      // Function body
      return value; // Optional for `void` functions
  }
  ```

- **Calling a Function**:
  ```c
  function_name(arguments);
  ```

#### Task:
Write a program that:
1. Defines a function `int sum(int a, int b)` that returns the sum of two integers.
2. Defines a function `int factorial(int n)` that calculates and returns the factorial of a number.
   - **Factorial Formula**: `n! = n * (n-1) * ... * 1`, and `0! = 1`.
3. In `main`, prompts the user to:
   - Enter two numbers to calculate their sum using `sum`.
   - Enter a number to calculate its factorial using `factorial`.

#### Expected Output:
```
Enter two numbers to find their sum: 4 5
The sum is: 9

Enter a number to find its factorial: 5
The factorial of 5 is: 120
```

#### Constraints:
- Use a `for` loop to calculate the factorial inside the `factorial` function.
- Pass arguments to the functions and print the results from `main`.