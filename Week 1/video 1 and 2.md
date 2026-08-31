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
