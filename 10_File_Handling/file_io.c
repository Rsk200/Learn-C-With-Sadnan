#include <stdio.h>
#include <stdlib.h> // Needed for exit()

int main() {
    // 1. Writing to a File
    // Create a pointer of type FILE
    FILE *filePointer;

    // Open the file in "w" (write) mode. 
    // If the file doesn't exist, it will be created. If it does, its contents will be erased!
    filePointer = fopen("sample_text.txt", "w");

    // Always check if the file opened successfully
    if (filePointer == NULL) {
        printf("Error opening file for writing!\n");
        return 1; // Exit program with an error code
    }

    // Write data to the file using fprintf (works just like printf, but needs the file pointer)
    fprintf(filePointer, "Hello, File Handling in C!\n");
    fprintf(filePointer, "This is the second line.\n");
    
    // Close the file when done! This is crucial to save changes and free resources.
    fclose(filePointer);
    printf("Successfully wrote to 'sample_text.txt'.\n");


    // 2. Reading from a File
    char buffer[255]; // Array to hold the text we read

    // Open the file in "r" (read) mode.
    filePointer = fopen("sample_text.txt", "r");

    if (filePointer == NULL) {
        printf("Error opening file for reading! Does it exist?\n");
        return 1;
    }

    printf("\n--- Reading contents of 'sample_text.txt' ---\n");
    // fgets reads a line from the file into our buffer.
    // It returns NULL when it reaches the End of File (EOF).
    while (fgets(buffer, 255, filePointer) != NULL) {
        printf("%s", buffer);
    }

    // Close the file again
    fclose(filePointer);

    return 0;
}
