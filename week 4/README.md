## video 0: Hexadecimal

**Hexadecimal** is a number system that uses **base 16** instead of base 10.

Decimal uses 10 symbols:

```text
0 1 2 3 4 5 6 7 8 9
```

Hexadecimal uses 16 symbols:

```text
0 1 2 3 4 5 6 7 8 9 A B C D E F
```

Where:

```text
A = 10
B = 11
C = 12
D = 13
E = 14
F = 15
```

---

## Counting in Hexadecimal

Examples:

```text
Decimal    Hexadecimal

0          00
1          01
9          09
10         0A
15         0F
16         10
```

Unlike decimal, where each position represents a power of `10`, hexadecimal positions represent powers of `16`.

For example:

```text
FF
```

means:

```text
F × 16 + F
15 × 16 + 15
240 + 15
= 255
```

So:

```text
Decimal 255 = Hexadecimal FF
```

---

## Hexadecimal and Binary

One hexadecimal digit can represent exactly **4 bits**.

```text
Binary     Hex

0000       0
0001       1
0010       2
...
1111       F
```

Therefore, one byte:

```text
8 bits
```

can be represented using only:

```text
2 hexadecimal digits
```

Example:

```text
1111 1111
↓
F    F

= FF
```

This makes hexadecimal a shorter and easier way to represent binary values.

---

## Hexadecimal Prefix

In programming, hexadecimal values are usually written with:

```text
0x
```

For example:

```text
0x10
0xFF
0x2A
```

The `0x` tells us that the number is written in **hexadecimal**, not decimal.

So:

```text
10   → decimal 10

0x10 → hexadecimal 10
     → decimal 16
```

---

## Why Hexadecimal Matters

Hexadecimal is commonly used to represent:

* Memory addresses
* Binary data
* Colors
* Bytes

For example, RGB colors are often written as:

```text
#FF0000
```

where:

```text
FF → Red
00 → Green
00 → Blue
```

---

## Connection to Memory

Computer memory contains many locations, and each location has an **address**.

These addresses are commonly displayed using hexadecimal:

```text
0x7ffe...
```

This makes hexadecimal especially important when learning about:

```text
Memory
Pointers
Addresses
```

which are the main topics of Week 4.

---

## video 1: Pointers

Every variable we create is stored somewhere in **memory (RAM)**.

For example:

```c
int n = 50;
```

The value `50` is stored at a specific memory address.

Memory addresses are usually represented in **hexadecimal**:

```text
0x7ffe...
```

---

## The `&` Operator

In C, we can get the address of a variable using:

```c
&
```

Example:

```c
int n = 50;

printf("%p\n", &n);
```

`&n` means:

```text
Give me the memory address of n
```

`%p` is used to print a memory address.

---

## What Is a Pointer?

A **pointer** is a variable that stores a memory address.

Example:

```c
int n = 50;

int *p = &n;
```

Here:

```text
n → stores 50

p → stores the address of n
```

So `p` **points to** `n`.

---

## Pointer Type

When declaring a pointer:

```c
int *p;
```

`int *` means:

```text
Pointer to an integer
```

Other examples:

```c
char *p;
float *p;
```

The pointer type tells C what type of data exists at that memory address.

---

## Dereferencing

If `p` contains the address of `n`:

```c
int n = 50;
int *p = &n;
```

Then:

```c
*p
```

means:

```text
Go to the address stored in p
and get the value stored there
```

So:

```c
printf("%i\n", *p);
```

prints:

```text
50
```

This is called **Dereferencing**.

---

## `&` vs `*`

The two important operators are:

```text
& → Get the address

* → Go to that address and access its value
```

Example:

```c
int n = 50;
int *p = &n;
```

```text
n   → 50

&n  → address of n

p   → address of n

*p  → 50
```

This relationship is the most important part to understand.

---

## Changing a Value Through a Pointer

Because the pointer gives us access to the original memory location, we can modify the value through it.

```c
int n = 50;
int *p = &n;

*p = 100;
```

Now:

```text
n = 100
```

Even though we changed `*p`, the actual value of `n` changed because both refer to the same location in memory.

---

## video 2: String

A `string` is made of characters stored next to each other in memory.

For example:

```c
string s = "HI!";
```

can be visualized as:

```text
H   I   !   \0
```

Each character has its own memory address.

---

## String and Pointers

In CS50, `string` is essentially a pointer to a character.

Instead of:

```c
string s = "HI!";
```

we can write:

```c
char *s = "HI!";
```

`char *` means:

```text
pointer to a char
```

The pointer stores the address of the **first character** in the string.

```text
s
↓
H → I → ! → \0
```

So `s` points to the first character `H`.

---

## CS50 String

The `string` type comes from the CS50 library.

Conceptually, it is defined as:

```c
typedef char *string;
```

This allows us to use:

```c
string s;
```

instead of writing:

```c
char *s;
```

---

## Printing the Address

Since `s` contains an address, we can print it using:

```c
printf("%p\n", s);
```

We can also get the address of the first character:

```c
printf("%p\n", &s[0]);
```

Both refer to the beginning of the string.

---

## video 3: Pointer Arithmetic

Since a string is a pointer to its **first character**, we can use pointer arithmetic to access the rest of its characters.

For example:

```c
char *s = "HI!";
```

`s` points to the first character:

```text
s
↓
H   I   !   \0
```

---

## Moving Through Memory

The characters of a string are stored next to each other in memory.

So:

```c
s
```

points to the first character, while:

```c
s + 1
```

points to the next character.

And:

```c
s + 2
```

points to the character after that.

```text
s       → H
s + 1   → I
s + 2   → !
```

---

## Dereferencing

To access the actual character stored at these addresses, we use `*`.

```c
*s
```

gives:

```text
H
```

And:

```c
*(s + 1)
```

gives:

```text
I
```

While:

```c
*(s + 2)
```

gives:

```text
!
```

---

## Array Syntax vs Pointer Syntax

Accessing a string using indexes:

```c
s[0]
s[1]
s[2]
```

is equivalent to:

```c
*s
*(s + 1)
*(s + 2)
```

So:

```text
s[0] = *(s + 0)

s[1] = *(s + 1)

s[2] = *(s + 2)
```

This shows the connection between **arrays, strings, and pointers** in C.

---

## video 4: Compare

With normal variables such as integers, we can compare values directly:

```c
int x = 50;
int y = 50;

if (x == y)
{
    printf("Same\n");
}
```

Here, `==` compares the actual values.

---

## Comparing Strings

Strings work differently because a string is represented using a **pointer**.

For example:

```c
char *s = get_string("s: ");
char *t = get_string("t: ");
```

`s` and `t` contain memory addresses.

So using:

```c
if (s == t)
```

does not compare the characters inside the strings.

It compares:

```text
Address of s
vs
Address of t
```

Even if the user enters the same text twice, the two strings may exist in different locations in memory.

```text
s → H E L L O

t → H E L L O
```

The characters are the same, but the addresses are different.

---

## Comparing Characters

To know whether two strings are equal, their characters need to be compared.

Conceptually:

```text
s[0] == t[0]
s[1] == t[1]
s[2] == t[2]
...
```

until the end of the strings.

---

## `strcmp`

Instead of manually comparing every character, C provides:

```c
strcmp(s, t)
```

from:

```c
#include <string.h>
```

If the two strings are the same:

```c
strcmp(s, t) == 0
```

Example:

```c
if (strcmp(s, t) == 0)
{
    printf("Same\n");
}
else
{
    printf("Different\n");
}
```

---

## video 5: malloc, free & valgrind

In C, we can manually request space in memory using:

```c
malloc()
```

`malloc` stands for **memory allocation**.

It reserves a specific amount of memory and returns the **address** of that memory.

Example:

```c
char *t = malloc(4);
```

Here, `t` is a pointer that stores the address of the allocated memory.

---

## Checking `malloc`

Memory allocation may fail.

Therefore, after using `malloc`, we check whether the returned pointer is:

```c
NULL
```

Example:

```c
char *t = malloc(4 * sizeof(char));

if (t == NULL)
{
    return 1;
}
```

If `t` is `NULL`, the requested memory was not successfully allocated.

---

## Copying Data

After allocating memory, we can copy data into the new memory location.

The important idea is that the new pointer should have its **own allocated memory** instead of simply pointing to the same location as another pointer.

```text
s → original memory

t → newly allocated memory
```

Now changes made through one pointer do not necessarily affect the other.

---

## `free()`

Memory allocated using `malloc` should later be released using:

```c
free()
```

Example:

```c
free(t);
```

This tells the computer that the allocated memory is no longer needed.

---

## Memory Leak

If memory is allocated using:

```c
malloc()
```

but never released using:

```c
free()
```

the program can cause a **memory leak**.

```text
malloc
   ↓
Memory allocated
   ↓
Program finishes using it
   ↓
free
```

---

## Valgrind

**Valgrind** is a tool used to check problems related to memory.

It can help detect whether allocated memory was not properly freed.

A program can be checked using:

```bash
valgrind ./program
```

Valgrind reports information about memory usage and possible memory problems.

---

## Main Relationship

```text
malloc()
   ↓
Allocate memory

Pointer
   ↓
Access that memory

free()
   ↓
Release memory

Valgrind
   ↓
Check memory problems
```

---

## video 6: Swap

Suppose we have two variables:

```c
int x = 1;
int y = 2;
```

We want to swap their values so that:

```text
x = 2
y = 1
```

A temporary variable can be used:

```c
int tmp = x;
x = y;
y = tmp;
```

---

## Creating a `swap` Function

We might try:

```c
void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
```

And call it with:

```c
swap(x, y);
```

But the original values of `x` and `y` do not change.

---

## Why It Does Not Work

When we pass:

```c
swap(x, y);
```

the function receives **copies** of the values.

```text
x → 1
y → 2

a → copy of x
b → copy of y
```

The function swaps:

```text
a and b
```

but the original:

```text
x and y
```

remain unchanged.

---

## Using Pointers

To change the original variables, we can pass their **memory addresses** instead.

The function becomes:

```c
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
```

And we call it using:

```c
swap(&x, &y);
```

---

## Understanding the Code

When calling:

```c
swap(&x, &y);
```

we send:

```text
&x → address of x
&y → address of y
```

Inside the function:

```c
*a
```

means the value stored at the address of `x`.

And:

```c
*b
```

means the value stored at the address of `y`.

So:

```c
int tmp = *a;
*a = *b;
*b = tmp;
```

changes the **original values**.

---

## Before and After

Before:

```text
x = 1
y = 2
```

Call:

```c
swap(&x, &y);
```

After:

```text
x = 2
y = 1
```

## video 7: scanf

`scanf()` is a C function used to take input from the user.

Example:

```c
int x;

scanf("%i", &x);
```

---

## Why We Use `&`

`scanf()` needs the **memory address** where it should store the user's input.

```c
&x
```

means:

```text
Address of x
```

So:

```c
scanf("%i", &x);
```

means:

```text
Read an integer
↓
Store it at the address of x
```

---

## Format Specifiers

The format specifier tells `scanf()` what type of input to expect.

```c
%i
```

is used for an integer.

Example:

```c
int x;

printf("x: ");
scanf("%i", &x);

printf("%i\n", x);
```

---

## scanf and Pointers

This connects directly to pointers.

```text
x   → value

&x  → address of x
```

By giving `scanf()` the address:

```c
scanf("%i", &x);
```

the function can store the input directly inside `x`.

---

## Strings

A string is represented using a pointer:

```c
char *s;
```

Since a pointer should point to valid memory before storing characters in it, memory can be allocated first.

```c
char *s = malloc(4);
```

Then:

```c
scanf("%s", s);
```

Here we do not write:

```c
&s
```

because `s` already contains a memory address.

---

## Integer vs String

For an integer:

```c
int x;
scanf("%i", &x);
```

We use:

```text
&x
```

because we need the address of `x`.

For a string pointer:

```c
char *s = malloc(4);
scanf("%s", s);
```

`s` itself already represents an address.

---

## video 8: File in C

Until now, most data created by a program disappears when the program ends.

In C, we can work with **files** to save data permanently.

---

## Opening a File

To work with a file, we use:

```c
fopen()
```

Example:

```c
FILE *file = fopen("phonebook.csv", "a");
```

Here:

```text
FILE *file
```

stores a pointer to the opened file.

And:

```text
"phonebook.csv"
```

is the file we want to open.

---

## File Modes

The second argument tells `fopen()` what we want to do with the file.

In the example:

```c
"a"
```

means **append**.

This allows us to add new data to the end of the file.

```c
FILE *file = fopen("phonebook.csv", "a");
```

---

## Checking the File

After opening the file, we should make sure it was opened successfully.

```c
if (file == NULL)
{
    return 1;
}
```

If `file` is `NULL`, the file could not be opened.

---

## Getting Data

For example, we can ask the user for a name and phone number:

```c
string name = get_string("Name: ");
string number = get_string("Number: ");
```

---

## Writing to a File

Instead of using:

```c
printf()
```

to print to the screen, we can use:

```c
fprintf()
```

to write into a file.

Example:

```c
fprintf(file, "%s,%s\n", name, number);
```

This writes the name and number into:

```text
phonebook.csv
```

in a format like:

```text
Haya,0551234567
Ahmed,0501234567
```

---

## Closing the File

After finishing with the file, we close it using:

```c
fclose(file);
```

So the complete process is:

```text
fopen()
   ↓
Open the file

fprintf()
   ↓
Write data

fclose()
   ↓
Close the file
```

---

## Example

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");

    if (file == NULL)
    {
        return 1;
    }

    string name = get_string("Name: ");
    string number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}
```

---

## video 9: JPEG

A JPEG image is ultimately stored as a sequence of **bytes**.

Different file types can be recognized by specific patterns of bytes at the beginning of the file.

For JPEG files, the beginning contains:

```text
FF D8 FF
```

These values are written in **hexadecimal**.

---

## JPEG 

A JPEG starts with:

```text
0xff 0xd8 0xff
```

---

## Reading Bytes

Files can be read using:

```c
fread()
```

For example, bytes can be stored inside a buffer:

```c
unsigned char c[3];
```

Then read from a file:

```c
fread(c, 1, 3, file);
```

The values can then be checked individually:

```c
c[0]
c[1]
c[2]
```

---

## Detecting a JPEG

The beginning of a JPEG can be checked using conditions:

```c
if (c[0] == 0xff &&
    c[1] == 0xd8 &&
    c[2] == 0xff)
{
    // JPEG
}
```

---

## Recovering Images

Because JPEG files have a recognizable beginning, we can examine raw bytes and detect where a new JPEG image starts.

The general idea is:

```text
Read bytes
   ↓
Check JPEG header
   ↓
Find beginning of image
   ↓
Write image data into a JPEG file
```

This allows deleted JPEG images to potentially be recovered when their raw data still exists.

---


