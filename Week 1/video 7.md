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

