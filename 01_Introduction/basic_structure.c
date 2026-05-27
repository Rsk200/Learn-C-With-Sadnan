/*
 * This file demonstrates the basic structure of a C program.
 * It includes documentation comments and simple statements.
 */

// 1. Preprocessor Directives: These are processed before compilation begins.
// #include brings in the standard input/output library.
#include <stdio.h>

// 2. Main Function: Every C program must have a main function. This is where execution begins.
int main() {
    // 3. Variable Declaration: Best practice is to declare variables at the start of a block.
    int a = 10;
    int b = 20;
    int sum;

    // 4. Statements & Expressions: Operations to be performed.
    sum = a + b;

    // 5. Output: Printing results using format specifiers (%d for integers).
    printf("The sum of %d and %d is %d.\n", a, b, sum);

    // 6. Return Statement: Returning an integer value back to the operating system.
    return 0;
}
