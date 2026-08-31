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

