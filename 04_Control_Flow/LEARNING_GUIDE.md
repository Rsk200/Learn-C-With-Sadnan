# 04 - Control Flow

By default, C executes code sequentially from top to bottom. Control flow statements allow you to change this path by making decisions based on conditions.

## In this module

1. **`if_else.c`**: Demonstrates conditional branching using `if`, `else if`, `else`, and the concise ternary operator (`? :`).
2. **`switch_case.c`**: Demonstrates the `switch` statement, which is an elegant alternative to long `if-else if` ladders when comparing a single variable against multiple exact values.

## Key Concepts

### If-Else
Use `if-else` when you have complex conditions involving inequalities (e.g., `>`, `<`) or multiple logical operators.

```c
if (condition) {
    // runs if condition is true (non-zero)
} else if (another_condition) {
    // runs if first condition was false and this one is true
} else {
    // runs if all above are false
}
```

### Ternary Operator
A shorthand for a simple if-else statement that returns a value.
`condition ? value_if_true : value_if_false`

### Switch-Case
Use `switch` when checking a single integer or character against a list of specific, constant values (like a menu system).

> [!WARNING]
> Don't forget the `break;` keyword in your `switch` cases! If you omit it, C will continue executing the code in the next `case` block even if the condition doesn't match. This is known as "fall-through". Sometimes this is useful (as shown in the `switch_case.c` example), but usually, it's a bug!
