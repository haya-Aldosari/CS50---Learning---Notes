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

---
