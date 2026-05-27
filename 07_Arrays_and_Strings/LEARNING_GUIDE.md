# 07 - Arrays and Strings

Variables are great for storing single values, but what if you need to store 100 test scores? Or a whole paragraph of text? This is where Arrays and Strings come in.

## In this module

1. **`arrays.c`**: Demonstrates how to create and manipulate 1D lists of data and 2D matrices.
2. **`strings.c`**: Explains how C handles text data, along with essential functions from `<string.h>`.

## Arrays

An array is a collection of variables of the **same data type**, stored in contiguous memory locations.

### Key Rules for Arrays:
- **Zero-Indexed**: The first element is always at index `0`. The last element is at `size - 1`.
- **Fixed Size**: Once an array is declared, its size cannot be changed.
- **Out of Bounds**: C does NOT stop you from accessing `array[100]` even if the array only has 5 elements. This will result in accessing random memory (garbage values) and often causes the program to crash (Segmentation Fault). Be careful!

## Strings

In C, there is no built-in "string" data type like in Python or Java. Instead, a string is simply **an array of characters** that ends with a special Null Terminator character: `\0`.

```c
// These two are effectively the same:
char word1[] = "Hi";
char word2[] = {'H', 'i', '\0'};
```

### The `<string.h>` Library
Because strings are just arrays, you cannot compare them with `==` or copy them with `=`. You must include the `<string.h>` library and use its built-in functions:
- `strlen(str)`: Gets the length of the string.
- `strcpy(dest, src)`: Copies `src` string into `dest`.
- `strcat(dest, src)`: Appends `src` to the end of `dest`.
- `strcmp(str1, str2)`: Compares two strings. Returns `0` if they are identical.
