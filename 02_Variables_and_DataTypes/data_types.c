#include <stdio.h>
#include <stdbool.h>

int main() {
    // 1. Integer (whole numbers)
    int age = 25;
    
    // 2. Float (floating-point numbers, single precision)
    float pi = 3.14159f;
    
    // 3. Double (floating-point numbers, double precision)
    double precise_pi = 3.14159265359;
    
    // 4. Character (single character)
    char grade = 'A';
    
    // 5. Boolean (true or false, requires <stdbool.h> in C99 and later)
    bool is_learning_c = true;

    // Printing variables using Format Specifiers:
    // %d for int
    // %f for float
    // %lf for double
    // %c for char
    
    printf("Age: %d\n", age);
    printf("Pi (float): %.2f\n", pi); // %.2f limits the output to 2 decimal places
    printf("Precise Pi (double): %lf\n", precise_pi);
    printf("Grade: %c\n", grade);
    
    // Booleans are printed as integers (1 for true, 0 for false)
    printf("Is learning C? %d\n", is_learning_c);

    // Finding the size of a data type in memory using the sizeof() operator
    printf("\nSize of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu byte\n", sizeof(char));

    return 0;
}
