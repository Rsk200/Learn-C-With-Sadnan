# 08 - Pointers Basics

Pointers are often considered the most difficult concept in C, but they are also what make C so powerful. A pointer allows you to directly interact with the computer's memory.

## In this module

1. **`pointers.c`**: Demonstrates how to create a pointer, get the memory address of a variable, and modify variables indirectly using pointers.

## What is a Pointer?

Every variable you create in C is stored at a specific location in your computer's RAM. That location has a unique identifier called a **Memory Address** (usually represented in Hexadecimal format, like `0x7ffee90b6a2c`).

A **Pointer** is simply a special variable that stores the memory address of *another* variable. 

## The Two Crucial Operators

To work with pointers, you need to understand two symbols: `&` and `*`.

### 1. The Address-of Operator: `&`
This operator gets the memory address of a regular variable.
```c
int myAge = 25;
printf("%p", &myAge); // Prints the address where '25' is stored
```

### 2. The Dereference Operator: `*`
This operator does two different things depending on context:
- **When Declaring**: It tells C that you are creating a pointer variable.
  ```c
  int *ptr; // "ptr is a pointer to an integer"
  ```
- **When Using (Dereferencing)**: It goes to the memory address stored in the pointer, and gets the actual value sitting there.
  ```c
  ptr = &myAge;
  printf("%d", *ptr); // Prints '25'
  ```

> [!TIP]
> **Summary**:
> `ptr` = The memory address (e.g., `0x1234abcd`).
> `*ptr` = The actual value stored at that address (e.g., `25`).
