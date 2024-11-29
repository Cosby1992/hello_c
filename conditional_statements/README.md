### Assignment 3: Conditional Statements (`if`, `else if`, `else`)

#### Objective:
Learn to use conditional statements in C to control program flow based on user input.

#### Brief Introduction:
Conditional statements (`if`, `else if`, and `else`) allow you to execute specific code blocks based on conditions. 
- **Syntax**:
  ```c
  if (condition) {
      // Code executes if condition is true
  } else if (another_condition) {
      // Executes if the previous condition is false, and this is true
  } else {
      // Executes if none of the conditions are true
  }
  ```
- Conditions often use comparison operators (`==`, `!=`, `<`, `>`, `<=`, `>=`) and logical operators (`&&`, `||`, `!`).

#### Task:
Write a program that:
1. Prompts the user to input an integer.
2. Checks the number and prints:
   - "The number is positive" if the number is greater than 0.
   - "The number is zero" if the number is equal to 0.
   - "The number is negative" if the number is less than 0.

#### Usage Example:
Input:
```
Enter an integer: -5
```
Output:
```
The number is negative.
```