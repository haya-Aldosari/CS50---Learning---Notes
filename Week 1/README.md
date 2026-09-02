## Video 0: Learning CS50

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

## Video 1: Get String

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


## Video 2: Basic Math in C

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

## video 6: Loops

Loops allow us to **repeat a block of code** without writing the same code multiple times.

---

### `while`

A `while` loop keeps executing the code **as long as the condition is true**.

```c
while (condition)
{
    // code to repeat
}
```

The condition is checked **before** each iteration.

We need to make sure the condition can eventually become false, otherwise we may create an **infinite loop**.

---

### `for`

A `for` loop is useful when we know the starting point, condition, and how the counter should change.

```c
for (start; condition; step)
{
    // code to repeat
}
```

For example:

```c
for (int i = 0; i < 5; i++)
{
    printf("%i\n", i);
}
```

The three parts are:

* **Start** → initializes the counter.
* **Condition** → determines whether the loop continues.
* **Step** → changes the counter after each iteration.

---

### `do while`

A `do while` loop is similar to `while`, but the code runs **at least once** before the condition is checked.

```c
do
{
    // code to repeat
}
while (condition);
```

The difference is:

**`while` → check first, then execute**

**`do while` → execute first, then check**

---

### Key Takeaway

```text
while    → repeat while condition is true
for      → repeat with initialization, condition, and step
do while → execute at least once, then repeat while true
```

## video 7: Functions

A **function** is a block of code designed to perform a specific task.

Functions help us:

* Break a large program into smaller parts.
* Reuse code.
* Make the code easier to understand.
* Make debugging easier by allowing us to focus on one function at a time.

---

### Function Structure

A function generally follows this structure:

```c
return_type function_name(parameters)
{
    // code
}
```

The **return type** tells us what value the function will return.

For example:

```c
int add(int a, int b)
{
    return a + b;
}
```

Here:

* `int` → the function returns an integer.
* `add` → the function's name.
* `int a, int b` → parameters the function receives.
* `return a + b` → the value returned by the function.

We can have more than one parameter, and each parameter has its own data type.

---

### Calling a Function

Writing a function does not automatically execute it.

We need to **call** the function:

```c
int result = add(5, 3);
```

Here, `5` and `3` are the **arguments** passed to the function.

The function returns `8`, which is stored in `result`.

---

### `return`

`return` sends a value back from the function to wherever the function was called.

```c
int square(int x)
{
    return x * x;
}
```

If we call:

```c
int result = square(4);
```

The function returns `16`.

---

### `void`

`void` means that the function **does not return a value**.

For example:

```c
void hello(void)
{
    printf("Hello!\n");
}
```

We can call it:

```c
hello();
```

But we cannot do:

```c
int result = hello();
```

because `hello()` does not return a value.

Compare:

```c
int add(int a, int b)
{
    return a + b;
}
```

This function **returns an integer**.

```c
void hello(void)
{
    printf("Hello!\n");
}
```

This function **does not return anything**.

---

### `main`

`main` is also a function. It is the main entry point of a C program.

```c
int main(void)
{
    // program code
}
```

The `int` means that `main` returns an integer.

By convention, reaching the end of `main` successfully is equivalent to returning `0`.

```c
return 0;
```

So:

```c
int main(void)
{
    printf("Hello!\n");
}
```

is effectively treated as successfully returning `0`.

---

### Function Position

A function can be written **before or after `main`**.

If we define it after `main`, we need to declare it before `main` using a **function prototype**:

```c
int add(int a, int b);

int main(void)
{
    int result = add(5, 3);
}

int add(int a, int b)
{
    return a + b;
}
```

The prototype tells the compiler about the function before it is used.

---

### Key Takeaway

A function can be thought of as:

**Input → Function → Output**

* **Parameters** → what the function receives.
* **Function body** → what it does.
* **Return value** → what it gives back.

And `void` simply means:

**"This function does something, but it doesn't give a value back."**


---

## video 10: Memory

### 1. Data Types and Memory

Different data types require different amounts of memory.

The common sizes discussed in CS50 are:

| Type     | Typical Size |
| -------- | -----------: |
| `bool`   |       1 byte |
| `char`   |       1 byte |
| `int`    |      4 bytes |
| `float`  |      4 bytes |
| `long`   |      8 bytes |
| `double` |      8 bytes |
| `string` |     Variable |

The size of a data type matters because it determines how much memory is used and what range of values can be stored.

This is why choosing the appropriate data type is important.

---

### 2. Type Casting

We can temporarily convert a value to another data type using **type casting**.

```c
float result = (float) x;
```

The `(float)` tells C to treat `x` as a `float` **for this expression**.

It does not permanently change the type of `x`.

---

### 3. Formatting Decimal Numbers

With `printf`, we can control how many decimal places are displayed.

```c
printf("%.2f\n", number);
```

The `.2` means that the number should be displayed with **2 digits after the decimal point**.

For example:

```text
6.14159 → 6.14
```

---

### 4. Strings in Memory

A `string` in C is essentially an **array of characters**.

It ends with a special character called the **null terminator**:

```text
\0
```

For example:

```text
"Hi"
```

is stored conceptually as:

```text
H → i → \0
```

Because strings can contain different numbers of characters, their memory usage is **not fixed** like an `int` or `double`.

The null terminator is important because it tells C where the string ends.

---


**Data type → Memory size → Range/precision → Appropriate use**


