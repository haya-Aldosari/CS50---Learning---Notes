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

