# Learn C With Sadnan: The Ultimate C Programming Learning Guide

Welcome to **Learn-C-With-Sadnan**, a professional, step-by-step repository designed to teach you the fundamentals of the C programming language. Whether you are a complete beginner or looking for a quick syntax refresher, this repository provides clear, highly-commented code examples paired with easy-to-understand Markdown guides.

---

## 📚 Curriculum Structure

The repository is divided into 10 logical modules. It is highly recommended to follow them sequentially.

1. **`01_Introduction`**: Writing your first `hello_world.c` and understanding the basic structure of a C program.
2. **`02_Variables_and_DataTypes`**: How to store numbers, characters, and use `const` and `#define`.
3. **`03_Operators`**: Math, comparisons, and logical `AND`/`OR` operations.
4. **`04_Control_Flow`**: Making decisions using `if-else` and `switch-case` statements.
5. **`05_Loops`**: Repeating code blocks efficiently using `for`, `while`, and `do-while` loops.
6. **`06_Functions`**: Organizing your code into reusable blocks and understanding variable scope.
7. **`07_Arrays_and_Strings`**: Storing lists of data and manipulating text using `<string.h>`.
8. **`08_Pointers_Basics`**: The core of C memory management—understanding memory addresses and the `*` and `&` operators.
9. **`09_Structures`**: Creating custom data types to group related variables using `struct` and `typedef`.
10. **`10_File_Handling`**: Making data persistent by reading from and writing to text files on your hard drive.

---

## 🚀 How to Use This Repository

Inside every module folder, you will find:
1. **`LEARNING_GUIDE.md`**: Start here! This markdown file explains the theory, syntax, and "gotchas" for the specific topic.
2. **`.c` source files**: Read through the code. Every file is heavily commented to explain exactly what each line does.

### Compiling and Running the Code

To run these examples on your local machine, you need a C Compiler. The most common is **GCC** (GNU Compiler Collection).

**Step 1: Navigate to the module directory**
Open your terminal (or Command Prompt / PowerShell on Windows) and `cd` into the topic folder:
```bash
cd 01_Introduction
```

**Step 2: Compile the C file**
Use the `gcc` command followed by the filename. The `-o` flag allows you to name the output executable.
```bash
gcc hello_world.c -o hello
```

**Step 3: Run the executable**
- On **Windows**:
  ```cmd
  hello.exe
  ```
- On **macOS / Linux**:
  ```bash
  ./hello
  ```

---

## 🤝 Contributing

Contributions to improve explanations, add new beginner-friendly topics (e.g., dynamic memory allocation with `malloc`), or fix bugs in the examples are always welcome. Feel free to open an Issue or submit a Pull Request!

*Happy Coding!*
