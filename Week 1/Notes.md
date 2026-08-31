


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


