#include <stdio.h>

int main() {
    int score = 85;

    printf("Your score is %d.\n", score);

    // 1. Simple if statement
    if (score >= 50) {
        printf("You passed the exam!\n");
    }

    // 2. if-else statement
    if (score % 2 == 0) {
        printf("Your score is an even number.\n");
    } else {
        printf("Your score is an odd number.\n");
    }

    // 3. if-else if-else ladder (Multiple conditions)
    printf("Grade: ");
    if (score >= 90) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else if (score >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    // 4. Ternary Operator (Shorthand if-else)
    // condition ? value_if_true : value_if_false;
    int age = 18;
    printf("\nAge: %d\n", age);
    printf("Voting status: %s\n", (age >= 18) ? "Eligible to vote" : "Not eligible");

    return 0;
}
