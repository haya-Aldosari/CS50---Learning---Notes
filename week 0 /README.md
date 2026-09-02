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

## Video 2: Binary

### 1. Representing Different Types of Data

The binary system allows computers to represent different types of information using only **0s and 1s**.

To a computer, text, numbers, images, audio, and video are ultimately represented as binary data.

---

### 2. ASCII

**ASCII (American Standard Code for Information Interchange)** is a character encoding system that represents characters using binary.

ASCII uses **7 bits**, allowing it to represent **128 different values**, from `0` to `127`.

This includes uppercase and lowercase letters, numbers, punctuation marks, and other basic characters.

However, ASCII had a limitation: it could not represent the huge number of characters and symbols used across different languages.

This led to **Unicode**, which provides a much larger space for representing characters from different writing systems and symbols.

---

### 3. Colors and RGB

Colors can be represented using the **RGB color model**, which combines three primary color channels:

* **Red**
* **Green**
* **Blue**

Each channel can have a value from **0 to 255**, represented using one byte.

For example:

**RGB(255, 0, 0) = Red**

* Red = 255
* Green = 0
* Blue = 0

By changing these three values, we can represent different colors.

---

### 4. Images and Pixels

A digital image is made up of tiny units called **pixels**.

Each pixel represents a color, and that color can be represented using RGB values.

So, we can think of an image as:

**Image → Pixels → RGB values → Binary**

---

### 5. Video

A digital video is essentially a sequence of **frames (images)** displayed rapidly one after another.

Therefore:

**Video → Frames → Pixels → Colors → RGB → Binary**

---

### 6. Audio

Digital audio can also be represented using numbers.

Sound waves have properties, and when sound is digitally recorded, it is sampled and converted into numerical values that a computer can store and process as binary data.

---

### Connection to AI

One thing I found interesting is that this is essentially the foundation of how AI deals with information.

Humans see **images, text, and sound as meaningful information**, while computers need these things to be converted into numerical representations before they can process them.

This idea appears again in AI:

**Real-world information → Numerical representation → Processing → Output**

This reminded me of **Natural Language Processing (NLP).**

Humans understand text as words and meaning, but computers need text to be converted into a numerical representation before they can process it.

For example:

**Text → Characters → Numerical representation → Processing → Output**

This is the same fundamental idea behind NLP models: transforming human language into a form that computers can work with.



