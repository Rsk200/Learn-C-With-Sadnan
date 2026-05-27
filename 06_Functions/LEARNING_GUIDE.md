# 06 - Functions

Functions are reusable blocks of code designed to perform a single specific task. Using functions makes your code organized, readable, and easier to debug.

## In this module

1. **`functions.c`**: Demonstrates how to declare, define, and call custom functions. It also shows how to pass arguments and return values.
2. **`scope.c`**: Explains variable scope, demonstrating the difference between Global variables, Local variables, and Block-scoped variables.

## Anatomy of a Function

A standard C function consists of:

```c
return_type function_name(parameter_list) {
    // function body (statements)
    return value;
}
```

- **`return_type`**: What kind of data the function sends back to where it was called (e.g., `int`, `float`). If it returns nothing, use `void`.
- **`function_name`**: The identifier used to call the function.
- **`parameter_list`**: The input variables the function accepts (e.g., `int a, int b`).
- **`return`**: The keyword used to send the result back.

## Function Prototypes (Declarations)

In C, it is best practice to declare a function at the top of the file (before `main`), and define it at the bottom. This tells the compiler about the function's existence before it's actually used.

```c
// Prototype at the top
int multiply(int a, int b); 

int main() { ... }

// Definition at the bottom
int multiply(int a, int b) { return a * b; }
```

## Variable Scope

"Scope" refers to where in your code a variable can be seen or used.
- **Local Scope**: Variables declared inside a function or block `{}`. They only exist inside those braces.
- **Global Scope**: Variables declared outside of all functions. They can be accessed and modified by any function. 

> [!TIP]
> Avoid using Global variables unless absolutely necessary. Since any function can change a global variable, they make debugging very difficult in large programs.
