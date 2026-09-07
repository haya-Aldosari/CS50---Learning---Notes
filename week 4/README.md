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
