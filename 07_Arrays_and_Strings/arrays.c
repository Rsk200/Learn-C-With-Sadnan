#include <stdio.h>

int main() {
    printf("--- 1D Arrays ---\n");
    // 1. Array Declaration and Initialization
    // An array of 5 integers. Arrays are ZERO-INDEXED (first element is index 0).
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing elements
    printf("The first element is: %d\n", numbers[0]);
    printf("The third element is: %d\n", numbers[2]);

    // Modifying elements
    numbers[1] = 99;
    printf("The second element is now: %d\n", numbers[1]);

    // Looping through an array
    printf("\nLooping through the 'numbers' array:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    printf("\n--- 2D Arrays (Matrices) ---\n");
    // 2. Multidimensional Arrays
    // Think of this as a grid with 2 rows and 3 columns
    int matrix[2][3] = {
        {1, 2, 3}, // Row 0
        {4, 5, 6}  // Row 1
    };

    // Accessing a 2D array element (Row 1, Column 2) -> should be 6
    printf("Element at matrix[1][2]: %d\n", matrix[1][2]);

    printf("\nPrinting the entire 2D array:\n");
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n"); // New line for each row
    }

    return 0;
}
