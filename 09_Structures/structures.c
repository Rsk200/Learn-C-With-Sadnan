#include <stdio.h>
#include <string.h>

// 1. Defining a Structure
// This creates a blueprint for a 'Student' datatype, but doesn't allocate memory yet.
struct Student {
    char name[50];
    int rollNumber;
    float gpa;
};

// 3. Using typedef
// Typedef allows us to create an alias so we don't have to type 'struct Book' every time.
typedef struct {
    char title[100];
    char author[50];
    int pages;
} Book;

int main() {
    printf("--- Using Basic Structs ---\n");
    // 2. Creating variables of the structure type
    struct Student student1;
    
    // Assigning values using the dot (.) operator
    // Note: We use strcpy for strings!
    strcpy(student1.name, "Alice Smith");
    student1.rollNumber = 101;
    student1.gpa = 3.8f;

    printf("Student Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("GPA: %.2f\n", student1.gpa);

    printf("\n--- Using Typedef Structs ---\n");
    // Because we used typedef, we can just say 'Book' instead of 'struct Book'
    // We can also initialize values directly using curly braces!
    Book book1 = {"The C Programming Language", "Brian Kernighan & Dennis Ritchie", 274};

    printf("Book Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Pages: %d\n", book1.pages);

    printf("\n--- Array of Structs ---\n");
    // You can create arrays of structures to hold many records easily.
    Book library[2] = {
        {"1984", "George Orwell", 328},
        {"Dune", "Frank Herbert", 412}
    };

    for(int i = 0; i < 2; i++) {
        printf("Library Book %d: %s by %s\n", i+1, library[i].title, library[i].author);
    }

    return 0;
}
