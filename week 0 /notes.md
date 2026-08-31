## Video 1: Introduction to Computer Science

### 1. Programming and Problem Solving

The first video is mainly an introduction to **computer science and programming**.

Programming is not only about writing code. It is mainly about **problem solving**, you need to follow few steps to write a code, first you have to understanding the problem, finding a solution, and expressing that solution in a way that a computer can execute.

A basic way to think about computer science is:

**Input → Processing → Output**

* **Input:** The information given to the computer.
* **Processing:** The computer processes the input to solve a problem.
* **Output:** The result produced after processing.

---

### 2. How Computers Represent Information

Computers do not directly understand human languages. Computers work with **binary**, using only two values:

**0 and 1**

These two values can be represented electronically by different physical states, such as whether a signal is on or off.

The smallest unit of information is a **bit**, which can have a value of either `0` or `1`.

A group of **8 bits** is called a **byte**.

Bytes can be used to represent different types of information, including characters, numbers, images, audio, and video.

In other words, regardless of whether we are dealing with text, an image, a video, or another type of data, computers ultimately represent and process that information using binary data.

---

### 3. Binary Numbers

Computers use the **binary number system**, which has a base of **2**, instead of the decimal system that humans commonly use, which has a base of 10.

Each position in a binary number represents a power of 2:

| Position | 2⁰ | 2¹ | 2² | 2³ |
| -------- | -: | -: | -: | -: |
| Value    |  1 |  2 |  4 |  8 |

The values increase by powers of 2 as we move to the left.

For example, the decimal number **5** can be represented in binary as:

**101**

Because:

**(1 × 2²) + (0 × 2¹) + (1 × 2⁰) = 4 + 0 + 1 = 5**

The idea of using powers is similar to the decimal system. In decimal, we use powers of 10:

**10⁰, 10¹, 10², ...**

While in binary, we use powers of 2:

**2⁰, 2¹, 2², ...**






## Video 3: Algorithms

### 1. What is an Algorithm?

An **algorithm** is a clear, step-by-step procedure for solving a problem.

When we have a problem, we need to determine the steps required to reach the desired result. Different algorithms can solve the same problem, but some may be more **efficient** than others.

A good algorithm should be:

* **Clear**: each step should be understandable.
* **Complete**: it should account for possible situations and edge cases.
* **Efficient**: ideally, it should solve the problem using reasonable time and resources.

---

### 2. Algorithms and Programming

A computer cannot independently decide what steps to take to solve a problem. We need to provide it with explicit instructions.

An algorithm describes the **logic and steps** needed to solve the problem, while a programming language allows us to turn those steps into executable code.

Before writing actual code, we can describe an algorithm using **pseudocode**.

Pseudocode focuses on the logic rather than the syntax of a specific programming language.

For example:

```text
If the number is greater than 0:
    Print "Positive"
Else if the number is less than 0:
    Print "Negative"
Else:
    Print "Zero"
```

---

### 3. Conditions

Programs often need to make decisions based on different situations.

This is done using **conditional statements**, such as:

* `if`
* `else if`
* `else`

For example:

```text
If condition is true:
    do something
Else:
    do something else
```

This allows the program to follow different paths depending on the input.

---

### 4. Functions and Loops

Programming provides different structures for expressing algorithms.

**Functions** allow us to group instructions into reusable blocks of code.

**Loops** allow us to repeat instructions without writing the same code multiple times.

Together with conditions and other programming structures, these tools allow us to translate an algorithm into an actual program.

---

An algorithm is essentially the **plan for solving a problem**, while a program is the implementation of that plan in a programming language.

**Problem → Algorithm → Code → Output**
