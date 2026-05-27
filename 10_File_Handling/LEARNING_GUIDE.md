# 10 - File Handling

Up to this point, all the data in our programs has been temporary. When the program closes, variables in memory are destroyed. File Handling allows you to persist data by saving it to a hard drive and reading it back later.

## In this module

1. **`file_io.c`**: Demonstrates the complete lifecycle of file handling: Opening, Writing, Closing, Opening again, Reading, and Closing.

## The `FILE` Pointer

In C, you interact with files using a special pointer type called `FILE *`. This pointer holds all the information the operating system needs to keep track of your open file.

## The 3 Steps of File Handling

### Step 1: Open the file (`fopen`)
You use the `fopen()` function, providing the filename and a "mode".
```c
FILE *fp = fopen("data.txt", "r"); 
```
**Common Modes:**
- `"r"`: Read. Opens an existing file for reading. (Returns NULL if it doesn't exist).
- `"w"`: Write. Opens a file for writing. (Creates it if it doesn't exist, **overwrites/erases** it if it does).
- `"a"`: Append. Opens a file to write data at the very end. (Creates it if it doesn't exist).

> [!CAUTION]
> Always check if `fopen` returns `NULL`. If it does, something went wrong (e.g., file not found, permission denied). Trying to write to a `NULL` pointer will crash your program!

### Step 2: Read/Write
- To write text: Use `fprintf(fp, "Format", variables);`. It works exactly like `printf`, but takes the file pointer as its first argument.
- To read text: Use `fgets(buffer, size, fp);`. It reads one line at a time until it hits the `size` limit or a newline character.

### Step 3: Close the file (`fclose`)
When you are done with a file, you **must** close it using `fclose(fp);`. 
If you don't:
- Changes might not be saved to the disk immediately.
- The file remains "locked" by the OS.
- You create a "memory leak" of file descriptors.
