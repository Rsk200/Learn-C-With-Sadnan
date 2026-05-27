# 01 - Introduction to C

Welcome to the world of C programming! C is a powerful general-purpose programming language. It is fast, portable, and available on all platforms.

## In this module

1. **`hello_world.c`**: The quintessential first program for any language. It demonstrates how to compile and run a basic C file to output text to the console.
2. **`basic_structure.c`**: Breaks down the anatomy of a C program, including preprocessor directives, the `main()` function, and variable declarations.

## How to Compile and Run

To run these examples, you will need a C compiler installed, such as `gcc` (GNU Compiler Collection).

1. **Compile**: Open your terminal or command prompt, navigate to this directory, and type:
   ```bash
   gcc hello_world.c -o hello
   ```
   This tells the compiler (`gcc`) to compile `hello_world.c` and output (`-o`) an executable named `hello` (or `hello.exe` on Windows).

2. **Run**: After successful compilation, run the program:
   - **On Windows**:
     ```cmd
     hello.exe
     ```
   - **On Linux/Mac**:
     ```bash
     ./hello
     ```

## Key Concepts

- **`#include <stdio.h>`**: This line is a preprocessor directive. It tells the compiler to include the Standard Input/Output library, which contains functions like `printf()` for printing text.
- **`int main()`**: The main function is the entry point of every C program. Execution always starts here.
- **`printf()`**: A built-in function used to print formatted text to the screen.
- **`return 0;`**: Indicates that the program has finished executing successfully.

Take your time to read the comments inside the `.c` files to understand what each line does!
