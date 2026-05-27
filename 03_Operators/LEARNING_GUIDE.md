# 03 - Operators

Operators are symbols that tell the compiler to perform specific mathematical or logical manipulations. C has a rich set of built-in operators.

## In this module

1. **`arithmetic.c`**: Demonstrates the basic math operators (`+`, `-`, `*`, `/`, `%`) and the increment/decrement operators (`++`, `--`).
2. **`relational_logical.c`**: Demonstrates how to compare values and combine multiple conditions.

## Types of Operators

### 1. Arithmetic Operators
Used for mathematical calculations.
- `+` Addition
- `-` Subtraction
- `*` Multiplication
- `/` Division (integer division truncates the decimal!)
- `%` Modulo (returns the remainder of division)

### 2. Relational Operators
Used to compare two values. They return `1` if the condition is True, and `0` if False.
- `==` Equal to
- `!=` Not equal to
- `>` Greater than
- `<` Less than
- `>=` Greater than or equal to
- `<=` Less than or equal to

### 3. Logical Operators
Used to combine multiple conditions.
- `&&` Logical AND (True if both are true)
- `||` Logical OR (True if at least one is true)
- `!` Logical NOT (Reverses the true/false state)

> [!TIP]
> A common mistake in C is using `=` (Assignment) instead of `==` (Comparison). 
> `if (x = 5)` will assign 5 to x and evaluate to true, which is usually a bug! Always use `if (x == 5)`.
