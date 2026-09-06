## video 0: Algorithms

An **algorithm** is a sequence of steps used to solve a problem.
Different algorithms can solve the same problem, but their **efficiency** can be very different.

The main goal is not only to make the program work, but also to choose a solution that performs well as the amount of data increases.

---

## Searching

A common algorithmic problem is searching for a specific value inside a collection of data.

Two common approaches are:

* **Linear Search:** checks elements one by one until the target is found.
* **Binary Search:** repeatedly divides the search area in half.

Binary search is much faster for large datasets, but it requires the data to be **sorted first**.

---

## Running Time

Algorithms can be compared based on how their running time grows when the input size `n` becomes larger.

Common complexities include:

```text
O(1)        Constant
O(log n)    Logarithmic
O(n)        Linear
O(n log n)
O(n²)       Quadratic
```

Generally:

```text
O(1) < O(log n) < O(n) < O(n log n) < O(n²)
```

The lower the growth rate, the better the algorithm usually scales with large amounts of data.

### Example

Linear Search:

```text
O(n)
```

In the worst case, we may need to check every element.

Binary Search:

```text
O(log n)
```

Each step removes half of the remaining search space.

---

## video 1: Linear Search

**Linear Search** is a searching algorithm that checks elements **one by one** until the target value is found.

The algorithm starts from the beginning of the array and moves through each element sequentially.

```text
For each element:
    If element == target:
        Found
If the loop ends:
    Not Found
```

---

## Linear Search in C

Example:

```c
int numbers[] = {20, 500, 10, 5, 100, 1, 50};

int n = 100

for (int i = 0; i < 7; i++)
{
    if (numbers[i] == n)
    {
        printf("Found\n");
        return 0;
    }
}

printf("Not found\n");
return 1;
```

The `for` loop goes through every element in the array and compares it with the value we are searching for.

---

## Efficiency

In the **worst case**, the target is the last element or does not exist, so we may need to check all `n` elements.

```text
O(n)
```

In the **best case**, the target is the first element:

```text
Ω(1)
```

So Linear Search is simple, but it becomes slower as the dataset grows.

---

## Searching Strings

Strings cannot be compared reliably using `==` in C.

Instead, we use:

```c
strcmp(string1, string2)
```

from:

```c
#include <string.h>
```

If both strings are equal:

```c
strcmp(string1, string2) == 0
```

---

## video 2: Phonebook

A phonebook is a simple example of using **Linear Search** with related data.

We can store names and phone numbers in two arrays:

```c
string names[] = {"Kelly", "David", "John"};
string numbers[] = {
    "+1-617-495-1000",
    "+1-617-495-1000",
    "+1-949-468-2750"
};
```

The index connects the data:

```text
names[0]   → Kelly
numbers[0] → Kelly's number
```

---

## Searching for a Name

We can ask the user for a name and search through the array:

```c
string name = get_string("Name: ");

for (int i = 0; i < 3; i++)
{
    if (strcmp(names[i], name) == 0)
    {
        printf("Found %s\n", numbers[i]);
        return 0;
    }
}
```

This is still **Linear Search** because the program checks the names one by one.

```text
Time Complexity: O(n)
```

---

## Problem with Separate Arrays

Using two separate arrays works, but it can become confusing.

```text
names[0] must always match numbers[0]
names[1] must always match numbers[1]
```

If the order changes incorrectly, the wrong phone number could become associated with a person.

A better solution is to store related information together.

---

## Struct

C allows us to create our own data type using a `struct`.

```c
typedef struct
{
    string name;
    string number;
}
person;
```

Now a `person` contains both:

```text
person
 ├── name
 └── number
```

Instead of maintaining two separate arrays, we can create one array of people:

```c
person people[3];
```

Then access the values using **dot notation**:

```c
people[0].name = "Kelly";
people[0].number = "+453000";
```

---

## Searching with Structs

```c
for (int i = 0; i < 3; i++)
{
    if (strcmp(people[i].name, name) == 0)
    {
        printf("Found %s\n", people[i].number);
        return 0;
    }
}
```

The searching algorithm is still Linear Search, but the data is now **better organized and easier to manage**.

---

## video 3: Selection Sort

**Sorting** means arranging data into a specific order, such as:

```text
Unsorted:
6 3 8 5 2 7 4 1

Sorted:
1 2 3 4 5 6 7 8
```

Sorting is important because some algorithms, such as **Binary Search**, require the data to already be sorted.

---

## Selection Sort

**Selection Sort** works by repeatedly finding the **smallest element** in the unsorted part of the array and moving it to its correct position.

The idea is:

```text
Find smallest value
Swap it with the first unsorted value
Repeat
```

Example:

```text
6 3 8 5 2 7 4 1
```

Find the smallest number:

```text
1
```

Swap it with the first element:

```text
1 3 8 5 2 7 4 6
```

Now the first element is sorted.

Then search the remaining part:

```text
3 8 5 2 7 4 6
```

The smallest value is `2`, so:

```text
1 2 8 5 3 7 4 6
```

This continues until the whole array is sorted.

---

## Pseudocode

```text
For i from 0 to n - 1
    Find smallest number from i to n - 1
    Swap smallest number with numbers[i]
```

The array can be thought of as two sections:

```text
[ Sorted | Unsorted ]
```

After every iteration, the **sorted section becomes larger**.

---

## Running Time

During the first iteration, we inspect roughly:

```text
n - 1
```

elements.

Then:

```text
n - 2
```

then:

```text
n - 3
```

and so on:

```text
(n - 1) + (n - 2) + ... + 1
```

This is approximately:

```text
O(n²)
```

---

## Best and Worst Case

Selection Sort still needs to search through the remaining elements even if the array is already sorted.

Therefore:

```text
Worst Case: O(n²)

Best Case: Ω(n²)
```

So Selection Sort is not very efficient for large datasets.

---

## video 4: Bubble Sort

**Bubble Sort** is a sorting algorithm that repeatedly compares **adjacent elements** and swaps them if they are in the wrong order.

The larger values gradually move toward the end of the array.

Example:

```text
6 3 8 5 2
```

Compare `6` and `3`:

```text
3 6 8 5 2
```

Then compare `6` and `8`:

```text
3 6 8 5 2
```

No swap is needed.

Then compare `8` and `5`:

```text
3 6 5 8 2
```

Then:

```text
3 6 5 2 8
```

After one full pass, the largest number has moved to the end.

---

## Main Idea

Bubble Sort repeatedly performs:

```text
Compare two adjacent elements

If left > right:
    Swap them
```

After every pass, another large value reaches its correct position.

The array can be viewed as:

```text
[ Unsorted | Sorted ]
```

The sorted section grows from the **right side**.

---

## Pseudocode

```text
Repeat n - 1 times

    For each adjacent pair

        If numbers are out of order
            Swap them
```

An improved version can also check whether any swap happened:

```text
If no swaps happened
    Stop
```

Because if no elements needed to be swapped, the array is already sorted.

---

## Running Time

The **worst case** is:

```text
O(n²)
```

---

## Best Case

Unlike Selection Sort, Bubble Sort can stop early if the array is already sorted.

Example:

```text
1 2 3 4 5
```

The algorithm makes one pass, detects that no swaps were needed, and stops.

Therefore:

```text
Best Case: Ω(n)
```

---

## Bubble Sort vs Selection Sort

```text
Selection Sort
Worst Case: O(n²)
Best Case:  Ω(n²)

Bubble Sort
Worst Case: O(n²)
Best Case:  Ω(n)
```

Bubble Sort can therefore perform better when the data is already sorted or nearly sorted.

---

## video 5: Recursion

**Recursion** is a programming technique where a function **calls itself** to solve a smaller version of the same problem.

---

## Two Important Parts

Every recursive function usually needs:

### 1. Base Case

The **Base Case** is the condition that stops the recursion.

Without it, the function could continue calling itself forever.

```c
if (n <= 0)
{
    return;
}
```

### 2. Recursive Case

The **Recursive Case** is where the function calls itself with a smaller or modified input.

```c
draw(n - 1);
```

The input should gradually move toward the Base Case.

---

## Example

Using iteration, we could build a pyramid with loops.

```text
#
##
###
####
```

But the same problem can be solved recursively:

```c
void draw(int n)
{
    if (n <= 0)
    {
        return;
    }

    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    printf("\n");
}
```

For:

```c
draw(4);
```

the function calls:

```text
draw(4)
 ↓
draw(3)
 ↓
draw(2)
 ↓
draw(1)
 ↓
draw(0)
```

`draw(0)` reaches the **Base Case** and returns.

Then the previous function calls continue:

```text
#
##
###
####
```

---


## video 6: Merge Sort

**Merge Sort** is a sorting algorithm based on the **Divide and Conquer** idea.

Instead of sorting the entire array directly, we:

```text
Divide
↓
Sort smaller parts
↓
Merge
```

---

## How It Works

Suppose we have:

```text
6 3 8 5 2 7 4 1
```

First, divide the array into two halves:

```text
6 3 8 5    |    2 7 4 1
```

Then divide again:

```text
6 3 | 8 5 | 2 7 | 4 1
```

Continue until every part contains only one element:

```text
6 | 3 | 8 | 5 | 2 | 7 | 4 | 1
```

A single element is already considered sorted.

---

## Merge

Now we start combining the elements in sorted order.

```text
6 + 3
↓
3 6
```

```text
8 + 5
↓
5 8
```

Then:

```text
3 6 + 5 8
↓
3 5 6 8
```

The same process happens on the other half.

Finally:

```text
3 5 6 8
+
1 2 4 7

↓

1 2 3 4 5 6 7 8
```

## Running Time

Each level processes approximately `n` elements.

Therefore:

```text
O(n log n)
```

Merge Sort has:

```text
Worst Case: O(n log n)
Best Case:  Ω(n log n)
```

This is significantly better than:

```text
Selection Sort → O(n²)
Bubble Sort    → O(n²)
```

for large datasets.

---

## Sorting Comparison

```text
Selection Sort
O(n²)

Bubble Sort
O(n²)

Merge Sort
O(n log n)
```

As `n` becomes large, the difference between:

```text
n²
```

and:

```text
n log n
```

becomes significant.

---
