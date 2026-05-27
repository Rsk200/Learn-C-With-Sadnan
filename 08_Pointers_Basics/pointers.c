#include <stdio.h>

int main() {
    // 1. A normal variable
    int age = 30;

    // 2. A Pointer variable
    // It stores the memory ADDRESS of another variable.
    // The asterisk (*) indicates that 'ptr' is a pointer.
    int *ptr;

    // 3. The Address-of Operator (&)
    // We assign the memory address of 'age' to 'ptr'.
    ptr = &age;

    printf("--- Pointer Basics ---\n");
    // Printing the value of the variable
    printf("Value of age: %d\n", age);
    
    // Printing the memory address of the variable using &
    // %p is the format specifier for memory addresses (prints in Hexadecimal)
    printf("Memory address of age (&age): %p\n", (void*)&age);

    // Printing the value stored IN the pointer (which is the address of 'age')
    printf("Value stored in ptr: %p\n", (void*)ptr);

    // 4. The Dereference Operator (*)
    // Used to access the VALUE at the memory address the pointer is pointing to.
    printf("Value pointed to by ptr (*ptr): %d\n", *ptr);

    // 5. Changing value using a pointer
    // We can change the original variable 'age' by dereferencing 'ptr'.
    *ptr = 35;
    printf("\n--- After changing value via pointer ---\n");
    printf("New value of age: %d\n", age);
    printf("Value pointed to by ptr (*ptr): %d\n", *ptr);

    return 0;
}
