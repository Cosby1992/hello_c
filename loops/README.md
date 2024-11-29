### Assignment 4: Loops (`for`, `while`, `do-while`)

#### Objective:
Practice using loops in C to perform repetitive tasks efficiently.

#### Brief Introduction:
Loops allow you to repeat a block of code multiple times. 
- **`for` Loop**: Best for when the number of iterations is known.
  ```c
  for (initialization; condition; increment) {
      // Code to execute
  }
  ```
- **`while` Loop**: Best for when you want to loop while a condition is true.
  ```c
  while (condition) {
      // Code to execute
  }
  ```
- **`do-while` Loop**: Executes the block at least once, then checks the condition.
  ```c
  do {
      // Code to execute
  } while (condition);
  ```

#### Task:
Write a program that:
1. Uses a `for` loop to print numbers from 1 to 10.
2. Uses a `while` loop to print numbers from 10 to 1.
3. Uses a `do-while` loop to print "Hello, World!" exactly once.

#### Expected Output:
```
Using for loop:
1 2 3 4 5 6 7 8 9 10

Using while loop:
10 9 8 7 6 5 4 3 2 1

Using do-while loop:
Hello, World!
```