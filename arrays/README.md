### Assignment 5: Arrays

#### Objective:
Learn to declare, initialize, and use arrays in C to store and manipulate a collection of elements.

#### Brief Introduction:
An **array** is a collection of elements of the same type stored in contiguous memory locations. Arrays are zero-indexed, meaning the first element is at index `0`.

- **Syntax** for declaring an array:
  ```c
  type arrayName[size];
  ```
- **Accessing Elements**:
  - Use `arrayName[index]` to access or modify an element.

#### Task:
Write a program that:
1. Declares an array of integers with a size of 5.
2. Prompts the user to input 5 integers and stores them in the array.
3. Calculates the sum of the elements in the array.
4. Prints the sum and the elements of the array.

#### Expected Output:
```
Enter 5 integers:
1
2
3
4
5

You entered: 1 2 3 4 5
Sum of the elements: 15
```

#### Constraints:
- Use a `for` loop to take input and calculate the sum.
- Display the array elements using another `for` loop.