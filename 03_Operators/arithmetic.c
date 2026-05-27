#include <stdio.h>

int main() {
    int a = 15;
    int b = 4;
    
    printf("Variables: a = %d, b = %d\n\n", a, b);

    // 1. Addition (+)
    printf("Addition (a + b) = %d\n", a + b);

    // 2. Subtraction (-)
    printf("Subtraction (a - b) = %d\n", a - b);

    // 3. Multiplication (*)
    printf("Multiplication (a * b) = %d\n", a * b);

    // 4. Division (/)
    // Note: Integer division truncates the decimal part! 15 / 4 = 3 (not 3.75)
    printf("Division (a / b) = %d\n", a / b);
    
    // To get the decimal result, cast one variable to a float:
    printf("Division with float cast ((float)a / b) = %.2f\n", (float)a / b);

    // 5. Modulo (%)
    // Returns the remainder of division. 15 / 4 is 3 with a remainder of 3.
    printf("Modulo/Remainder (a %% b) = %d\n", a % b);

    // 6. Increment (++) and Decrement (--)
    // Note: a++ is post-increment (use value, then add 1). ++a is pre-increment (add 1, then use value).
    int c = 10;
    printf("\nOriginal c = %d\n", c);
    printf("c++ (Post-increment) = %d\n", c++); // Prints 10, then c becomes 11
    printf("After post-increment, c = %d\n", c); // Prints 11
    
    printf("++c (Pre-increment) = %d\n", ++c);  // c becomes 12, then prints 12

    return 0;
}
