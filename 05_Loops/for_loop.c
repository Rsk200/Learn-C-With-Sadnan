#include <stdio.h>

int main() {
    printf("--- Basic For Loop ---\n");
    // Syntax: for (initialization; condition; increment/decrement)
    // Counts from 1 to 5
    for (int i = 1; i <= 5; i++) {
        printf("Iteration %d\n", i);
    }

    printf("\n--- Decrementing For Loop ---\n");
    // Counts down from 5 to 1
    for (int i = 5; i > 0; i--) {
        printf("Countdown: %d\n", i);
    }

    printf("\n--- Nested For Loop ---\n");
    // A loop inside a loop! Great for generating grids or patterns.
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 4; col++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    printf("\n--- Using Break and Continue ---\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            printf("Skipping 3 (continue)\n");
            continue; // Skips the rest of the loop body and goes to the next iteration
        }
        if (i == 6) {
            printf("Stopping at 6 (break)\n");
            break; // Exits the loop entirely
        }
        printf("Value: %d\n", i);
    }

    return 0;
}
