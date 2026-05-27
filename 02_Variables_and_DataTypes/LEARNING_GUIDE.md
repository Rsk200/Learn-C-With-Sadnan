# 02 - Variables and Data Types

In C, a variable is a named storage location in the computer's memory. Before using a variable, you must declare it by specifying what **type** of data it will hold. This is because C is a **statically typed** language.

## In this module

1. **`data_types.c`**: Demonstrates the primary data types (`int`, `float`, `double`, `char`), booleans, and how to format them for printing.
2. **`constants.c`**: Explains how to define values that should never change during the program's execution using `#define` and the `const` keyword.

## Basic Data Types

| Type     | Size (typical) | Format Specifier | Description |
|----------|----------------|------------------|-------------|
| `int`    | 4 bytes        | `%d` or `%i`     | Stores whole numbers (e.g., 10, -5). |
| `float`  | 4 bytes        | `%f`             | Stores fractional numbers with single precision. |
| `double` | 8 bytes        | `%lf`            | Stores fractional numbers with double precision. |
| `char`   | 1 byte         | `%c`             | Stores a single character/letter (e.g., 'a', 'Z'). |

## Format Specifiers

When using `printf()` or reading input, you use format specifiers to tell C what kind of data to expect:

```c
int age = 20;
printf("I am %d years old.", age); 
```

## Constants

Constants are variables whose value cannot be modified once defined. There are two main ways to define them in C:
1. **`#define`**: A preprocessor directive used globally.
2. **`const`**: A keyword used like a normal variable declaration, but it makes the variable read-only.
