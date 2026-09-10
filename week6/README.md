## video 1: Python Syntax

## Python Syntax

Python has a simpler syntax compared with C.

A basic Python program can be written with much less code because we do not need things such as:

```text
#include
main()
;
{}
```

---

## Printing

In C:

```c
printf("Hello, world\n");
```

In Python:

```python
print("Hello, world")
```

Python uses the built-in:

```python
print()
```

function to display output.

---

## No Semicolon

In C, statements usually end with:

```c
;
```

In Python, we normally write:

```python
print("Hello")
```

without a semicolon.

---

## No Curly Braces

C uses curly braces to define blocks of code:

```c
{
    // code
}
```

Python does not use `{}` for this purpose.

Instead, Python uses **indentation**.

---

## Indentation

Indentation is an important part of Python syntax.

Example:

```python
if x > 0:
    print("Positive")
```

The indented line belongs to the `if` block.

---

## Variables

In C, we specify the variable type:

```c
int x = 10;
```

In Python:

```python
x = 10
```

We assign the value directly without writing the type before the variable name.

---

## Comments

Comments in Python use:

```python
# This is a comment
```

instead of:

```c
// This is a comment
```

---

## Python vs C Syntax

```text
C                         Python

printf()                  print()
;                         not required
{ }                       indentation
// comment                # comment
int x = 10;               x = 10
```

Python removes much of the extra syntax used in C, making the code shorter and easier to read.

---

```

