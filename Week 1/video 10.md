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

