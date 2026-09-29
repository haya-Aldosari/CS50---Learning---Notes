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

## video 4: Python Exceptions

## Exceptions

An **exception** is an error that happens while the program is running.

For example, converting invalid input to an integer can cause an error.

```python
x = int(input("x: "))
```

If the user enters text instead of a number, Python raises an exception.

---

## `try`

Python allows us to test code that might cause an error using:

```python
try:
```

Example:

```python
try:
    x = int(input("x: "))
```

---

## `except`

If an error happens, we can handle it using:

```python
except:
```

Example:

```python
try:
    x = int(input("x: "))
except:
    print("Invalid input")
```

This prevents the program from stopping immediately when an error occurs.

---

## `ValueError`

One common exception is:

```text
ValueError
```

It can happen when a value has the wrong format for an operation.

Example:

```python
try:
    x = int(input("x: "))
except ValueError:
    print("Not an integer")
```

---

## Handling Errors

Instead of allowing the program to crash:

```text
Error
↓
Program stops
```

we can handle the exception:

```text
try
↓
Run code
↓
Error?
↓
except
↓
Handle the error
```

---


## video 5: – Functions in Python

A **function** is a reusable block of code that performs a specific task.

Python already provides built-in functions such as:

```python
print()
input()
int()
```

---

## Creating a Function

A function is created using:

```python
def
```

Example:

```python
def hello():
    print("Hello")
```

---

## Calling a Function

Defining a function does not run it automatically.

To execute it, we call the function by its name:

```python
hello()
```

---

## Passing Values

A function can receive values when it is called.

```python
def hello(name):
    print(f"Hello, {name}")
```

Then:

```python
hello("Haya")
```

The value is passed into the function and used inside it.

---

## Returning a Value

A function can send a result back using:

```python
return
```

Example:

```python
def square(n):
    return n * n
```

Then:

```python
x = square(5)
```

The returned value can be stored and used later.

---

## Video 10: Mario3 and Nested Loops

This lesson continues the Mario exercise in Python and introduces **nested loops**, where one loop runs inside another loop.

Nested loops are useful when a program needs to repeat something across multiple rows and columns, such as creating patterns, grids, or shapes.

## Nested Loops

A nested loop consists of:

- An **outer loop**, which controls the number of rows.
- An **inner loop**, which controls what happens inside each row.

Example:

```python
for i in range(3):
    for j in range(3):
        print("#", end="")
    print()
```

Output:

```text
###
###
###
```

The outer loop runs three times, creating three rows.

For every iteration of the outer loop, the inner loop also runs three times and prints three `#` characters.

## Using `end=""`

Normally, Python's `print()` function moves to a new line after printing.

```python
print("#")
```

However, using:

```python
print("#", end="")
```

keeps the next output on the same line.

After the inner loop finishes, a normal:

```python
print()
```

is used to move to the next line.

## Video 11: Average in Python

This lesson demonstrates how Python lists can be used to store multiple values and calculate their average.

It also shows how Python provides built-in functions that simplify operations that would require more manual work in languages such as C.

## Python Lists

A list can store multiple values inside one variable.

Example:

```python
scores = [72, 73, 33]
```

Unlike arrays in C, Python lists can grow dynamically, so their size does not need to be defined in advance.

An empty list can be created using:

```python
scores = []
```

## Adding Elements with `append()`

The `append()` method is used to add a new element to the end of a list.

Example:

```python
scores.append(72)
scores.append(73)
scores.append(33)
```

The list will become:

```python
[72, 73, 33]
```

This makes it easy to collect values dynamically from the user.

## Using a Loop to Collect Values

Instead of writing every value manually, a loop can be used.

```python
from cs50 import get_int

scores = []

for i in range(3):
    scores.append(get_int("Score: "))
```

The loop runs three times and adds every entered score to the `scores` list.

## `sum()` Function

Python provides the built-in `sum()` function to calculate the total of all numeric elements in a list.

```python
sum(scores)
```

For example:

```python
scores = [72, 73, 33]
print(sum(scores))
```

Output:

```text
178
```

## `len()` Function

The `len()` function returns the number of elements in a list.

```python
len(scores)
```

For:

```python
scores = [72, 73, 33]
```

the result is:

```text
3
```

## Calculating the Average

The average can be calculated by dividing the total of the values by the number of values.

```python
average = sum(scores) / len(scores)
```

Then the result can be displayed using an f-string:

```python
print(f"Average: {average}")
```

Complete example:

```python
from cs50 import get_int

scores = []

for i in range(3):
    scores.append(get_int("Score: "))

average = sum(scores) / len(scores)

print(f"Average: {average}")
```

## F-Strings

Python f-strings allow variables and expressions to be included directly inside strings.

Example:

```python
average = 85

print(f"Average: {average}")
```

They can also contain expressions directly:

```python
print(f"Average: {sum(scores) / len(scores)}")
```

However, storing the result in a variable can make the code easier to read.

## Video 12: Uppercase in Python

This lesson demonstrates how to work with strings in Python and convert text from lowercase to uppercase.

Python provides built-in string methods that make text manipulation much simpler compared to implementing the same logic manually.

## Getting Text from the User

A string can be received from the user using `input()`:

```python
text = input("Before: ")
```

The entered value is stored as a string and can then be processed character by character or using Python's built-in string methods.

## Iterating Through a String

Python allows us to loop directly through the characters of a string.

```python
for c in text:
    print(c)
```

If the user enters:

```text
hello
```

the loop processes each character separately:

```text
h
e
l
l
o
```

There is no need to manually access every character using its index.

## Converting Characters to Uppercase

Python strings provide the `.upper()` method.

```python
letter = "h"

print(letter.upper())
```

Output:

```text
H
```

## Using `.upper()` on the Entire String

Instead of converting one character at a time, Python can convert the entire string directly:

```python
text = input("Before: ")

print("After:", text.upper())
```

This produces the same result with much less code.

For example:

```text
Before: hello world
After: HELLO WORLD
```

