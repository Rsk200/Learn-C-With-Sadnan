#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 10;
    int y = 20;

    printf("x = %d, y = %d\n\n", x, y);

    // RELATIONAL OPERATORS (returns 1 for True, 0 for False)
    printf("--- Relational Operators ---\n");
    printf("x == y  (Equal to): %d\n", x == y);
    printf("x != y  (Not equal to): %d\n", x != y);
    printf("x > y   (Greater than): %d\n", x > y);
    printf("x < y   (Less than): %d\n", x < y);
    printf("x >= 10 (Greater than or equal to): %d\n", x >= 10);
    printf("y <= 20 (Less than or equal to): %d\n", y <= 20);

    // LOGICAL OPERATORS
    // Used to combine multiple relational expressions.
    bool condition1 = true;  // 1
    bool condition2 = false; // 0

    printf("\n--- Logical Operators ---\n");
    
    // AND (&&) - True ONLY if BOTH conditions are true
    printf("true && false: %d\n", condition1 && condition2);
    printf("(x < 15) && (y > 15): %d\n", (x < 15) && (y > 15)); 

    // OR (||) - True if AT LEAST ONE condition is true
    printf("true || false: %d\n", condition1 || condition2);
    printf("(x > 15) || (y > 15): %d\n", (x > 15) || (y > 15)); 

    // NOT (!) - Reverses the logical state
    printf("!true: %d\n", !condition1);
    printf("!(x == y): %d\n", !(x == y));

    return 0;
}
