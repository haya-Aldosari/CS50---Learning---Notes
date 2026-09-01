## video 2: Debugging

A **bug** is an error or unexpected behavior in a program.

### 1. Syntax Errors

A **syntax error** happens when the code does not follow the rules of the programming language.

For example:

```c
printf("Hello\n")
```

The semicolon `;` is missing.

The compiler will detect this kind of error and show an error message.

CS50 also provides:

```bash
help50
```

which can help make compiler error messages easier to understand.

---

### 2. Logical Errors

A **logical error** is different.

The program runs successfully, but it does **not produce the result we intended**.

For example, the code might calculate the wrong value because the logic or formula is incorrect.

These errors can be harder to find because the program itself does not necessarily crash.

---

### 3. `debug50`

CS50 provides `debug50` to help find logical errors.

It allows us to run a program step by step and inspect what is happening while the program executes.

We can:

* Set **breakpoints**.
* Execute the program one line at a time.
* Track how variables change.
* Follow the execution of functions.
* See where the program starts behaving differently from what we expected.

This makes it much easier to understand **what the program is actually doing**, rather than only looking at the code and guessing.


