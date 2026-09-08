## video 0: What is Data Structure

A **Data Structure** is a way of organizing and storing data in memory.

The purpose is to make data easier to:

```text
Store
Access
Manage
```

Different ways of organizing data can affect how efficiently a program works.

---

## Why Data Structures?

Until now, we have used structures such as:

```text
Arrays
```

But arrays are not always the best solution for every problem.

Week 5 introduces different ways to organize data depending on what the program needs.

---

## Main Idea

```text
Data
↓
Organized in a specific structure
↓
Easier to access and manage
```

Choosing the appropriate **Data Structure** helps us work with data more efficiently.

---

## video 1: Resizing Array

Arrays Have a Fixed Size

In C, when we create an array, its size is fixed.

Example:

```c
int list[3];
```

This gives us space for only three integers.

```text
list
↓
[ 1 ][ 2 ][ 3 ]
```

If we later want to add another value, we cannot simply increase the size of the existing array.

---

## Allocating an Array with `malloc`

We can allocate memory dynamically:

```c
int *list = malloc(3 * sizeof(int));
```

Then store values:

```c
list[0] = 1;
list[1] = 2;
list[2] = 3;
```

---

## Resizing the Array

To make the array larger, we can allocate a new block of memory:

```c
int *tmp = malloc(4 * sizeof(int));
```

Now we have space for four integers.

```text
Old:
[ 1 ][ 2 ][ 3 ]

New:
[   ][   ][   ][   ]
```

---

## Copying the Values

The existing values are copied from the old array into the new one:

```c
for (int i = 0; i < 3; i++)
{
    tmp[i] = list[i];
}
```

Then the new value can be added:

```c
tmp[3] = 4;
```

Result:

```text
[ 1 ][ 2 ][ 3 ][ 4 ]
```

---

## Freeing the Old Memory

After copying the data, the old memory is no longer needed:

```c
free(list);
```

Then:

```c
list = tmp;
```

Now `list` points to the new, larger block of memory.

---

## `realloc`

Instead of manually creating another block and copying the elements, C provides:

```c
realloc()
```

Example:

```c
int *tmp = realloc(list, 4 * sizeof(int));
```

This is used to resize previously allocated memory.

---

