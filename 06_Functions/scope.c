#include <stdio.h>

// 1. Global Variable
// Declared outside of all functions. It can be accessed by ANY function in this file.
int global_score = 100;

void printScore() {
    // This function can access the global variable
    printf("Score from inside printScore(): %d\n", global_score);
    
    // 2. Local Variable
    // Declared inside a function. It can ONLY be accessed inside this function.
    int local_bonus = 50;
    printf("Bonus (local to printScore): %d\n", local_bonus);
}

int main() {
    // This function can also access the global variable
    printf("Score from inside main(): %d\n", global_score);
    
    // Modifying the global variable
    global_score = 200;
    
    printScore();

    // Trying to access 'local_bonus' here would cause a compile error!
    // printf("%d", local_bonus); // ERROR: local_bonus undeclared in this scope

    // 3. Block Scope
    // Variables declared inside a block {} are only accessible in that block
    if (global_score == 200) {
        int block_variable = 99;
        printf("Block variable (inside if): %d\n", block_variable);
    }
    // Trying to access 'block_variable' here would also cause a compile error.

    return 0;
}
