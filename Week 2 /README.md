## video 1: Compiling

Compiling is more than simply converting C code into machine code. It actually happens through **four main steps**:

### 1. Preprocessing

The preprocessor handles things such as `#include`.

For example:

```c
#include <stdio.h>
```

The preprocessor processes the included library code before the actual compilation happens.

---

### 2. Compiling

The C source code is translated into **assembly code**.

Assembly is a low-level language that is much closer to the machine than C.

Since I have studied **Computer Architecture**, this step connects to the assembly language and instruction-level concepts I have seen before.

```text
C code → Assembly
```

---

### 3. Assembling

The assembly code is translated into **machine code**, which consists of binary instructions that the processor can execute.

```text
Assembly → Machine Code
```

The result is typically an **object file**.

---

### 4. Linking

The linker combines the object file with other required object files and libraries to create the final **executable program**.

For example, if our program uses functions from a library, the linker connects our code with the required library code.

```text
Object files + Libraries → Executable
```

---

## Using `clang`

`clang` is a compiler that can compile C programs.

For example:

```bash
clang hello.c
```

This compiles `hello.c` and produces an executable with a default name.

We can specify the output file name using `-o`:

```bash
clang -o hello hello.c
```

Here, `-o hello` simply tells `clang`:

**"Name the output file `hello`."**

---

### Linking Libraries

When using libraries other than the standard ones handled automatically, we may need to tell the compiler which library to link.

We can use:

```bash
-l<library_name>
```

For example:

```bash
clang program.c -lm
```

The `-lm` tells the compiler to link the **math library**.

---

### Key Takeaway

The complete process is:

```text
C Source Code
      ↓
Preprocessing
      ↓
Assembly Code
      ↓
Assembling
      ↓
Machine Code / Object File
      ↓
Linking
      ↓
Executable
```

So, **"compiling" is often used as a general term for this whole process**, even though several separate stages happen underneath.

## video 2: Debugging

A **bug** is an error or unexpected behavior in a program.

### 1. Syntax Errors

A **syntax error** happens when the code does not follow the rules of the programming language.

For example:

```c
printf("Hello\n")
```

The semicolon `;` is missing.

The compiler will detect this kind of error and show an error message.

CS50 also provides:

```bash
help50
```

which can help make compiler error messages easier to understand.

---

### 2. Logical Errors

A **logical error** is different.

The program runs successfully, but it does **not produce the result we intended**.

For example, the code might calculate the wrong value because the logic or formula is incorrect.

These errors can be harder to find because the program itself does not necessarily crash.

---

### 3. `debug50`

CS50 provides `debug50` to help find logical errors.

It allows us to run a program step by step and inspect what is happening while the program executes.

We can:

* Set **breakpoints**.
* Execute the program one line at a time.
* Track how variables change.
* Follow the execution of functions.
* See where the program starts behaving differently from what we expected.

This makes it much easier to understand **what the program is actually doing**, rather than only looking at the code and guessing.


## video 3: Average

An **array** allows us to store multiple values of the same data type under one variable name.

Instead of creating separate variables:

```c
int score1;
int score2;
int score3;
```

We can use an array:

```c
int scores[3];
```

An array is useful when we have multiple related values that we want to store and process together.

---

## Creating an Array

The general structure is:

```c
type name[count] = {content};
```

For example:

```c
int scores[3] = {90, 85, 95};
```

The type of the array determines the type of all its elements.

For example:

```c
int numbers[3] = {10, 20, 30};

char letters[3] = {'A', 'B', 'C'};
```

All elements within the **same array must have the same data type**.

---

## Index

Each element in an array has an **index**, which identifies its position.

An important rule is that indexing starts at **0**, not 1.

For example:

```text
scores = {90, 85, 95}

index:    0   1   2
value:   90  85  95
```

To access an element:

```c
scores[0]
```

This gives us the first element:

```text
90
```

We can also modify an element:

```c
scores[1] = 100;
```

Now the array becomes:

```text
{90, 100, 95}
```

---

## Array Size

The number inside the brackets represents the **size** of the array.

```c
int scores[3];
```

This creates an array with **3 elements**.

The indexes are:

```text
0
1
2
```

Therefore:

```text
Size = 3
Last index = 2
```

In general:

```text
Last index = size - 1
```

Trying to access:

```c
scores[3]
```

would be outside the valid indexes of this array.

---

## Assigning Values Later

We can create an array without immediately assigning its values:

```c
int scores[3];

scores[0] = 90;
scores[1] = 85;
scores[2] = 95;
```

The size of the array is fixed when it is created.

---

## Arrays and Loops

Arrays and loops work very well together.

Instead of accessing every element manually:

```c
printf("%i\n", scores[0]);
printf("%i\n", scores[1]);
printf("%i\n", scores[2]);
```

We can use a loop:

```c
for (int i = 0; i < 3; i++)
{
    printf("%i\n", scores[i]);
}
```

The loop moves through the array **index by index**.

The values of `i` will be:

```text
i = 0 → scores[0]
i = 1 → scores[1]
i = 2 → scores[2]
```

When `i` becomes `3`, the condition:

```c
i < 3
```

becomes false, so the loop stops.

This prevents us from trying to access `scores[3]`, which is outside the array.

---

## Why Arrays + Loops Are Useful

Arrays become especially useful when working with a large number of values.

For example, instead of writing:

```c
printf("%i\n", scores[0]);
printf("%i\n", scores[1]);
printf("%i\n", scores[2]);
```

we can process all elements using one loop:

```c
for (int i = 0; i < 3; i++)
{
    printf("%i\n", scores[i]);
}
```

The same idea can be used to:

* Read values
* Print values
* Modify values
* Calculate totals
* Search for values
* Process large amounts of data

---

## Key Takeaway

An array gives us:

**One variable → Multiple values → Same data type → Accessed using indexes**

And loops make it easy to:

**Read → Modify → Process → Iterate through every element**

The most important concepts to remember are:

1. **Arrays store multiple values.**
2. **All elements in one array have the same type.**
3. **Indexing starts at 0.**
4. **The size is fixed when the array is created.**
5. **The last valid index is `size - 1`.**
6. **Loops allow us to efficiently work through an array.**


## video 4: Strings

The concept of **strings** is especially interesting because, in C, a string is essentially an **array of characters**.

This connects several important concepts together:

**Characters → ASCII → Numbers → Binary**

At the lowest level, computers ultimately represent data using bits and binary.

---

## Characters Are Numbers

A character can be represented by a numeric value using **ASCII**.

For example:

```text
'A' → 65
'B' → 66
'a' → 97
```

Because characters are represented by numbers, we can print the same character using different format specifiers.

For example:

```c
char c = 'A';

printf("%c\n", c);
printf("%i\n", c);
```

Output:

```text
A
65
```

`%c` tells `printf` to interpret the value as a character.

`%i` tells `printf` to interpret the value as an integer.

We can also go in the other direction:

```c
int n = 65;

printf("%c\n", n);
```

Output:

```text
A
```

This demonstrates the relationship between characters and their numeric ASCII representations.

---

## Strings Are Arrays of Characters

A string is a sequence of characters.

For example:

```text
"HI"
```

can be thought of as:

```text
'H'  'I'
```

And because each character has a numeric representation, these characters are stored in memory as numeric values.

In C, a string is represented as an array of `char` values that ends with a special character called the **null character**:

```text
\0
```

For example:

```text
"HI"
```

is stored conceptually as:

```text
'H'  'I'  '\0'
```

So the `\0` tells the computer:

> The string ends here.

---

## Why Don't We Specify the Size?

Normally, when creating an array, we specify its size:

```c
int numbers[3];
```

But when working with a string, we can write:

```c
string name = "Haya";
```

without explicitly specifying the size.

The important idea is that the string has a terminating `\0`.

Conceptually:

```text
'H'  'a'  'y'  'a'  '\0'
```

The `\0` marks the end of the string.

Therefore, the computer can determine where the string ends by looking for the null character.

---

## Strings in the CS50 Library

CS50 provides a `string` type through its library:

```c
#include <cs50.h>
```

We can then write:

```c
string name = "Haya";
```

Although `string` makes working with text easier, it is important to understand what is happening underneath:

A string is essentially a sequence of `char` values stored in memory and terminated by `\0`.

---

## Accessing Characters Using Indexes

Because a string behaves like an array of characters, we can access individual characters using indexes.

For example:

```c
string name = "Haya";

printf("%c\n", name[0]);
printf("%c\n", name[1]);
printf("%c\n", name[2]);
printf("%c\n", name[3]);
```

Output:

```text
H
a
y
a
```

The indexes are:

```text
name = "Haya"

index:  0   1   2   3
value:  H   a   y   a
```

We can also use a loop:

```c
for (int i = 0; i < 4; i++)
{
    printf("%c\n", name[i]);
}
```

This is another example of how **arrays and loops work together**.

---

## Finding the Length of a String

The C library provides a function called:

```c
strlen()
```

from:

```c
#include <string.h>
```

`strlen()` returns the number of characters in a string **before the `\0`**.

For example:

```c
#include <stdio.h>
#include <string.h>

string name = "Haya";

printf("%lu\n", strlen(name));
```

The result is:

```text
4
```

Even though the string occupies space for:

```text
H  a  y  a  \0
```

`strlen()` returns:

```text
4
```

because `\0` is not counted as part of the string's length.

---


## Why Is This Useful?

Knowing the length of a string is useful when we need to apply conditions to user input.

For example:

```c
if (strlen(name) >= 5)
{
    printf("Valid\n");
}
```

This checks whether the user input contains at least 5 characters.

This same idea appears in many real applications, such as:

* Validating user input
* Checking minimum or maximum text length
* Processing usernames
* Checking passwords
* Processing natural language

For example, in a larger project, we might need to make sure that a user's input contains a minimum number of characters before accepting it.

---

## The Bigger Picture

Strings connect several concepts we have learned:

```text
String
   ↓
Array of characters
   ↓
Characters
   ↓
ASCII values
   ↓
Numbers
   ↓
Binary
```

So although we write:

```c
string name = "Haya";
```

the computer ultimately stores the information as numerical values in memory, represented at the hardware level using binary.

This is one of the important ideas behind learning C:

> High-level concepts such as strings are ultimately represented using lower-level data stored in memory.

---


