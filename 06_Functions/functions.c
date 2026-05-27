#include <stdio.h>

// 1. Function Declaration (Prototype)
// This tells the compiler that a function named 'addNumbers' exists,
// it takes two integers as parameters, and returns an integer.
int addNumbers(int a, int b);
void greetUser(); // void means it doesn't return anything

int main() {
    // 3. Function Calling
    greetUser(); // Calling a void function

    int result = addNumbers(10, 25); // Calling a function with arguments
    printf("The sum is: %d\n", result);

    printf("Another sum is: %d\n", addNumbers(5, 7));

    return 0;
}

// 2. Function Definition
// This is the actual implementation of the function.
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum; // The return value must match the declared return type (int)
}

void greetUser() {
    printf("Welcome to learning Functions in C!\n");
    // No return statement is needed for void functions
}
