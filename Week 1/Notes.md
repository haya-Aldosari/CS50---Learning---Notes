## Video 1: Learning CS50

### 1. Writing Code

To program a computer, we write **source code** using a programming language such as **CS**.

The code is written using human-readable syntax, but computers ultimately execute **machine code**, which consists of binary instructions.

A **compiler** acts as a translator between the source code and machine code. It converts our C code into a form that the computer can execute.

---

### 2. Visual Studio Code

CS50 introduces **Visual Studio Code** as the environment used to write and run code.

The code editor is where we write our source code, while the **terminal** can be used to compile and execute the program.

A C source file uses the `.c` extension.

For example:

```text
hello.c
```

---

### 3. The `main` Function

Every C program needs an entry point. In CS50, we start with:

```c
int main(void)
{
    // code goes here
}
```

---

### 4. Libraries

C provides libraries containing useful functions that we can use in our programs.

We include a library using:

```c
#include <library_name.h>
```

For example, to use `printf`, we include the **stdio.h** library:

```c
#include <stdio.h>
```

---

### 5. Printing with `printf`

The `printf` function is used to print text to the terminal.

For example:

```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

The `\n` represents a **new line**, so anything printed after it starts on the next line.

---

### 6. Compiling and Running the Program

To compile the program using CS50's `make` command:

```bash
make hello
```

This creates a compiled executable from `hello.c`.

After making changes to the source code, we need to compile it again so that the executable reflects the updated code.

We can then run the program using:

```bash
./hello
```

Here:

* `make hello` → compiles the source code.
* `./hello` → runs the compiled program.

---


## Video 2: Get String

### 1. Getting User Input

CS50 provides functions that allow us to get input from the user.

The function follows this pattern:

```c
get_<type>()
```

For example:

```c
get_string()
get_int()
get_float()
```

These functions come from the **CS50 library**.

To use them, we include:

```c
#include <cs50.h>
```

---

### 2. Variables and Data Types

A variable stores a value, and every variable has a **data type**.

Some common data types in C are:

| Data Type | Example          | Purpose              |
| --------- | ---------------- | -------------------- |
| `string`  | `"Haya"`         | Text                 |
| `int`     | `25`             | Integer              |
| `float`   | `3.14`           | Decimal number       |
| `long`    | `1000000`        | Large integer        |
| `double`  | `3.141592`       | More precise decimal |
| `bool`    | `true` / `false` | Boolean value        |
| `char`    | `'A'`            | Single character     |

For example, to get a name from the user:

```c
string name = get_string("What's your name? ");
```

The general pattern is:

```c
type variable_name = get_type();
```

The type of the variable should match the type returned by the input function.

---

### 3. Printing Variables with `printf`

We can use `printf` to print variables.

Inside the string, we use a **format specifier** to tell `printf` what type of value we want to insert.

For example:

```c
printf("Hello, %s\n", name);
```

Here:

* `%s` → tells `printf` that the value is a string.
* `name` → is the variable whose value will be inserted.

Some common format specifiers are:

| Type     | Format Specifier |
| -------- | ---------------- |
| `string` | `%s`             |
| `int`    | `%i` or `%d`     |
| `float`  | `%f`             |
| `double` | `%f`             |
| `char`   | `%c`             |
| `long`   | `%li`            |

For example:

```c
int number = 20;
printf("The number is %i\n", number);
```

The variable is placed **after the comma**, outside the quotation marks.

---

### 4. Comments

We can add comments to our code using `//`.

Comments are ignored by the compiler and are used to explain the code or leave notes for ourselves.

```c
// Ask the user for their name
string name = get_string("What's your name? ");
```

---

### Example Program

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");

    printf("Hello, %s\n", name);
}
```


## Basic Math in C

As I mention before we can use `get_int` to get numbers from the user and store them in variables.

For example:

```c
int x = get_int("x: ");
int y = get_int("y: ");
```

We can then perform mathematical operations on these variables.


### Addition

```c
int sum = x + y;
printf("%d\n", sum);
```

We can also print multiple values using multiple format specifiers:

```c
printf("%d + %d = %d\n", x, y, x + y);
```

The `%d` tells `printf` that the value is an integer.

### Incrementing a Variable

To increase a variable by `1`:

```c
x = x + 1;
```

A shorter way is:

```c
x += 1;
```

we can also decrement it by `1` in the same way:

```c
x -= 1;
```

it could be also any other number.


## Video 3: Command Line

The **command line** allows us to interact with the computer and manage files and folders using commands.

### File Commands

| Command        | Purpose                                             |
| -------------- | --------------------------------------------------- |
| `ls`           | List the files and folders in the current directory |
| `rm file`      | Remove a file                                       |
| `mv old new`   | Rename a file                               |
| `mkdir folder` | Create a new folder                                 |
| `rmdir folder` | Remove an empty folder                              |

For example, to rename a file:

```bash
mv old_name.c new_name.c
```

---

### Navigating Directories

The `cd` command (**change directory**) is used to move between folders.

```bash
cd folder_name
```

To go back to the parent directory:

```bash
cd ../
```

The `..` represents the **parent directory**.

This becomes especially important when working with larger projects that contain many folders and files.

For example:

```text
project/
├── src/
│   └── main.c
└── data/
```

If we are inside `src/` and want to go back to `project/`:

```bash
cd ../
```


# video 4: get_int

`get_int` is a function from the **CS50 library** that allows us to get an integer from the user.

```c
int number = get_int("Number: ");
```

The returned value is stored in an `int` variable.

---

## `long`

An `int` can only store integers within a limited range.

When we need to work with **larger integers**, we can use `long`, which provides a larger range.

```c
long number = get_long("Number: ");
```

When working with very large numbers, using `long` prevents the value from exceeding the range supported by `int`.

### Key Idea

**Data type → determines the kind and range of values a variable can store.**

`int` → smaller range of integers
`long` → larger range of integers


## 5 Video: If

### Conditional Statements

`if` is used to execute code only when a specific condition is true.

Basic structure:

```c
if (condition)
{
    // code to execute
}
```

The condition can be any expression that evaluates to `true` or `false`.

For example:

```c
if (x > 0)
{
    printf("Positive\n");
}
```

---

### `else if`

`else if` allows us to check another condition if the previous `if` condition was false.

```c
if (x > 0)
{
    printf("Positive\n");
}
else if (x < 0)
{
    printf("Negative\n");
}
```

### `else`

`else` runs when none of the previous conditions are true.

```c
if (x > 0)
{
    printf("Positive\n");
}
else if (x < 0)
{
    printf("Negative\n");
}
else
{
    printf("Zero\n");
}
```

---

### Logical Operators

We can combine multiple conditions using logical operators.

#### OR — `||`

**At least one condition must be true.**

```c
if (x > 0 || y > 0)
{
    printf("At least one is positive\n");
}
```

#### AND — `&&`

**All conditions must be true.**

```c
if (x > 0 && y > 0)
{
    printf("Both are positive\n");
}
```


