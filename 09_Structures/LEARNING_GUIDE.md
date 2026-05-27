# 09 - Structures

Arrays are useful for grouping elements of the **same data type**. But what if you want to group data of **different data types**? For example, representing a "Student" requires a string (name), an integer (ID number), and a float (GPA). This is exactly what Structures are for.

## In this module

1. **`structures.c`**: Demonstrates how to define a structure, declare structure variables, access their members, and use `typedef` to simplify code.

## What is a Structure (struct)?

A `struct` is a user-defined data type in C that allows you to combine data items of different kinds under a single name. Think of it like creating your own custom object blueprint.

### 1. Defining a struct
```c
struct Car {
    char make[20];
    int year;
    float price;
};
```
This tells the compiler what a `Car` looks like, but it doesn't create one yet.

### 2. Creating variables
To actually create a Car variable in memory:
```c
struct Car myCar;
```

### 3. Accessing Members
To read or write data to the parts of the struct, use the **dot operator (`.`)**.
```c
myCar.year = 2022;
myCar.price = 25000.50;
```

## The `typedef` Keyword

Writing `struct Car` every time you want to declare a variable can get tedious. You can use the `typedef` keyword to create an alias (a nickname) for your struct.

```c
typedef struct {
    int x;
    int y;
} Point;

// Now you can just use 'Point' instead of 'struct Point'
Point p1;
p1.x = 10;
```
