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

## video 2: Python Data Types

Python has different data types used to represent different kinds of values.

Common examples include:

```python
x = 10          # int
y = 3.5         # float
name = "Haya"   # str
active = True   # bool
```

---

## Integer

`int` represents whole numbers.

```python
x = 10
y = -5
```

```text
int → whole numbers
```

---

## Float

`float` represents numbers with decimal points.

```python
price = 10.5
```

```text
float → decimal numbers
```

---

## String

`str` represents text.

```python
name = "Haya"
```

Strings are written inside quotation marks.

```text
str → text
```

---

## Boolean

`bool` represents a value that can be:

```python
True
False
```

Example:

```python
is_student = True
```

---

## List

A `list` can store multiple values together.

```python
numbers = [1, 2, 3, 4]
```

Values are accessed using an index:

```python
numbers[0]
```

---

## Tuple

A `tuple` stores multiple values together, similar to a list.

```python
numbers = (1, 2, 3)
```

A tuple is **immutable**, meaning its values cannot be changed after it is created.

---

## Set

A `set` stores a collection of **unique values**.

```python
numbers = {1, 2, 3}
```

Duplicate values are removed automatically.

Example:

```python
numbers = {1, 2, 2, 3}

print(numbers)
```

Result:

```text
{1, 2, 3}
```

---

## Dictionary

A dictionary stores data using **keys and values**.

```python
person = {
    "name": "Haya",
    "age": 21
}
```

A value can be accessed using its key:

```python
person["name"]
```

---

## Checking the Type

Python can identify the data type of a value using:

```python
type()
```

Example:

```python
x = 10

print(type(x))
```

## video 3: Input

Python provides the built-in:

```python
input()
```

to receive input from the user.

Example:

```python
name = input("What's your name? ")
print(name)
```

---

## `input()` Returns a String

The value returned by `input()` is treated as a **string**, even when the user enters a number.

```python
age = input("Age: ")
```

So if we need an integer, we convert it using:

```python
age = int(input("Age: "))
```

---

## Type Conversion

Python can convert values between data types.

```python
int()
float()
str()
```

Example:

```python
x = int(input("x: "))
y = int(input("y: "))

print(x + y)
```

---

## CS50 Input Functions

Input can also be taken using functions from the CS50 library.

```python
from cs50 import get_string, get_int
```

Examples:

```python
name = get_string("Name: ")
age = get_int("Age: ")
```

---

