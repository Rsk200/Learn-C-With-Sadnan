#include <stdio.h>

int main() {
    int day = 3; // Let's assume 1 = Monday, 7 = Sunday

    printf("Day %d of the week is: ", day);

    // switch statement evaluates the variable 'day'
    switch (day) {
        case 1:
            printf("Monday\n");
            break; // The break statement is CRUCIAL. It stops execution from falling through to the next case.
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            // default runs if none of the cases match.
            printf("Invalid day! Please enter a number between 1 and 7.\n");
    }

    // Example of intentional fall-through (without break)
    char grade = 'B';
    printf("\nGrade %c feedback: ", grade);
    
    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
            // 'A', 'B', and 'C' will all print "Pass"
            printf("Pass\n");
            break;
        case 'D':
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;
}
