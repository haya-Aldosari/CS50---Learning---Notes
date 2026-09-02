## video 1: Compiling

Compiling is more than simply converting C code into machine code. It actually happens through **four main steps**:

### 1. Preprocessing

The preprocessor handles things such as `#include`.

For example:

```c
#include <stdio.h>
```

The preprocessor processes the included library code before the actual compilation happens.

---

### 2. Compiling

The C source code is translated into **assembly code**.

Assembly is a low-level language that is much closer to the machine than C.

Since I have studied **Computer Architecture**, this step connects to the assembly language and instruction-level concepts I have seen before.

```text
C code → Assembly
```

---

### 3. Assembling

The assembly code is translated into **machine code**, which consists of binary instructions that the processor can execute.

```text
Assembly → Machine Code
```

The result is typically an **object file**.

---

### 4. Linking

The linker combines the object file with other required object files and libraries to create the final **executable program**.

For example, if our program uses functions from a library, the linker connects our code with the required library code.

```text
Object files + Libraries → Executable
```

---

## Using `clang`

`clang` is a compiler that can compile C programs.

For example:

```bash
clang hello.c
```

This compiles `hello.c` and produces an executable with a default name.

We can specify the output file name using `-o`:

```bash
clang -o hello hello.c
```

Here, `-o hello` simply tells `clang`:

**"Name the output file `hello`."**

---

### Linking Libraries

When using libraries other than the standard ones handled automatically, we may need to tell the compiler which library to link.

We can use:

```bash
-l<library_name>
```

For example:

```bash
clang program.c -lm
```

The `-lm` tells the compiler to link the **math library**.

---

### Key Takeaway

The complete process is:

```text
C Source Code
      ↓
Preprocessing
      ↓
Assembly Code
      ↓
Assembling
      ↓
Machine Code / Object File
      ↓
Linking
      ↓
Executable
```

So, **"compiling" is often used as a general term for this whole process**, even though several separate stages happen underneath.

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




