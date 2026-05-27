#include <stdio.h>
#include <string.h> // Required for string manipulation functions!

int main() {
    printf("--- Strings in C ---\n");
    
    // 1. Defining Strings
    // A string in C is just an array of characters ending with a null terminator ('\0').
    // The compiler adds the '\0' automatically when you use double quotes.
    char greeting[] = "Hello"; 
    
    // Equivalent to: char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("Greeting: %s\n", greeting); // %s is the format specifier for strings

    // 2. String length
    // strlen() returns the length of the string (excluding the null terminator)
    printf("Length of greeting: %lu\n", strlen(greeting));

    // 3. String copying
    char copy[20];
    // We cannot do copy = greeting; in C! We must use strcpy()
    strcpy(copy, greeting);
    printf("Copied string: %s\n", copy);

    // 4. String concatenation (joining)
    char name[] = " World!";
    // strcat(destination, source) adds 'source' to the end of 'destination'
    // Make sure destination has enough space!
    strcat(copy, name);
    printf("Concatenated string: %s\n", copy);

    // 5. String comparison
    // strcmp() returns 0 if the strings are exactly identical
    char str1[] = "Apple";
    char str2[] = "Apple";
    char str3[] = "Banana";

    printf("\nComparing '%s' and '%s': %d\n", str1, str2, strcmp(str1, str2));
    printf("Comparing '%s' and '%s': %d\n", str1, str3, strcmp(str1, str3));

    return 0;
}
