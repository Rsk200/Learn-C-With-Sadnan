#include <stdio.h>

int main() {
    printf("--- While Loop ---\n");
    // A while loop evaluates the condition BEFORE executing the block.
    // If it's false initially, the block may never run.
    int counter = 1;
    while (counter <= 3) {
        printf("While count: %d\n", counter);
        counter++; // Don't forget to update the variable, or you'll get an infinite loop!
    }

    printf("\n--- Do-While Loop ---\n");
    // A do-while loop evaluates the condition AFTER executing the block.
    // It is GUARANTEED to run at least once.
    int do_counter = 5;
    do {
        printf("Do-While count: %d\n", do_counter);
        do_counter++;
    } while (do_counter <= 3); // This condition is false, but it already ran once!

    // Practical Example: Input validation with while
    // Note: This is simulated here. In a real scenario, you'd use scanf to get user input.
    int simulated_input = 0;
    int attempt = 0;
    
    printf("\n--- Simulated Input Validation ---\n");
    while (simulated_input <= 0 && attempt < 3) {
        attempt++;
        printf("Attempt %d: Please enter a positive number: ", attempt);
        // Normally we would have scanf("%d", &simulated_input); here
        // We'll simulate getting valid input on the 3rd attempt
        if (attempt == 3) {
            simulated_input = 10;
        }
        printf("(User entered %d)\n", simulated_input);
    }
    
    printf("Successfully got positive number: %d\n", simulated_input);

    return 0;
}
