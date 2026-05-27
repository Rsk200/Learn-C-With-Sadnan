#include <stdio.h>

// 1. Using #define (Preprocessor Directive)
// This is done before the program compiles. It literally replaces MAX_USERS with 100 in the code.
#define MAX_USERS 100
#define PI 3.14159

int main() {
    // 2. Using the const keyword
    // This creates a read-only variable. The compiler will check its type and scope.
    const int DAYS_IN_WEEK = 7;
    const float GRAVITY = 9.8f;

    printf("Constants in C:\n");
    printf("Max Users allowed: %d\n", MAX_USERS);
    printf("Value of Pi: %.5f\n", PI);
    
    printf("Days in a week: %d\n", DAYS_IN_WEEK);
    printf("Gravity: %.1f m/s^2\n", GRAVITY);

    // Uncommenting the next line will cause a compilation error because you cannot modify a const variable!
    // DAYS_IN_WEEK = 8; 

    return 0;
}
