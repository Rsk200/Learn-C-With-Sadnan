# 05 - Loops

Loops allow you to execute a block of code multiple times, saving you from writing repetitive code. C provides three main types of loops: `for`, `while`, and `do-while`.

## In this module

1. **`for_loop.c`**: Demonstrates the `for` loop, nested loops, and how to use `break` and `continue` to alter loop execution.
2. **`while_do_while.c`**: Compares the `while` loop (pre-test) with the `do-while` loop (post-test).

## When to use which?

### 1. The `for` loop
Use a `for` loop when you know **exactly how many times** you want to loop. It contains initialization, condition, and increment/decrement all in one line.
```c
for (int i = 0; i < 10; i++) {
    // runs 10 times
}
```

### 2. The `while` loop
Use a `while` loop when you want to loop **until a specific condition becomes false**, and you don't necessarily know how many iterations that will take (e.g., reading a file until the end, or waiting for valid user input).
```c
while (condition) {
    // runs as long as condition is true
}
```

### 3. The `do-while` loop
Similar to a `while` loop, but the condition is checked at the *end* of the loop. This means the code inside **will always execute at least once**.
```c
do {
    // runs at least once, then repeats if condition is true
} while (condition);
```

> [!WARNING]
> Beware of **Infinite Loops**! If your loop's condition never becomes false (e.g., you forget to increment your counter inside a `while` loop), your program will run forever until you manually kill it (using `Ctrl+C` in the terminal).
