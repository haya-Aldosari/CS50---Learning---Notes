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

## video 2: Linked List
 
A **Linked List** is a data structure made of separate elements called **nodes**.

Unlike an array, the nodes do not need to be stored next to each other in memory.

Each node contains:

```text
Data
+
Pointer to the next node
```

Example:

```text
[1 | •] → [2 | •] → [3 | NULL]
```

---

## Node

A node can be created using a `struct`:

```c
typedef struct node
{
    int number;
    struct node *next;
}
node;
```

Each node contains:

```c
int number;
```

to store the value, and:

```c
struct node *next;
```

to store the address of the next node.

---

## `next`

The `next` pointer connects one node to another.

```text
Node 1
number = 1
next ──────► Node 2
             number = 2
             next ──────► Node 3
                          number = 3
                          next = NULL
```

The last node points to:

```c
NULL
```

because there is no node after it.

---

## Creating a Node

Memory for a new node can be allocated using:

```c
node *n = malloc(sizeof(node));
```

Then we can store data inside it:

```c
n->number = 1;
n->next = NULL;
```

The `->` operator is used to access values inside a structure through a pointer.

---

## The List Pointer

A pointer can be used to keep track of the beginning of the linked list:

```c
node *list = NULL;
```

At first:

```text
list → NULL
```

because the list is empty.

After adding a node:

```text
list
 ↓
[1 | NULL]
```

---

## Connecting Nodes

Suppose we create another node:

```text
[2 | NULL]
```

The nodes can be connected using their pointers:

```text
list
 ↓
[1 | •] → [2 | NULL]
```

Each node knows where the next node is stored because of:

```c
next
```

---

## Traversing a Linked List

To access the elements, we follow the pointers from one node to the next.

Conceptually:

```text
Start at first node
        ↓
Read value
        ↓
Follow next
        ↓
Read next value
        ↓
Continue until NULL
```

Example:

```c
for (node *tmp = list; tmp != NULL; tmp = tmp->next)
{
    printf("%i\n", tmp->number);
}
```

---

## Array vs Linked List

An array stores its elements together:

```text
[1][2][3][4]
```

A linked list connects separate locations using pointers:

```text
[1|•] → [2|•] → [3|•] → [4|NULL]
```

This means the linked list can grow by allocating new nodes instead of creating a completely new array.

---

## video 3: Tree

A **Tree** is a data structure where data is organized in a hierarchical form.

Instead of elements being connected in one straight line:

```text
1 → 2 → 3 → 4
```

they can branch into multiple directions:

```text
        4
       / \
      2   6
     / \ / \
    1  3 5  7
```

---

## Nodes

A Tree is made of **nodes**.

Each node stores:

```text
A value
+
Pointers to other nodes
```

The node at the top is called the:

```text
Root
```

---

## Binary Tree

In a **Binary Tree**, each node can have up to two children:

```text
Left child
Right child
```

Example:

```text
      4
     / \
    2   6
```

---

## Binary Search Tree

The values can be organized so that:

```text
Smaller values → Left

Larger values  → Right
```

Example:

```text
        4
       / \
      2   6
     / \ / \
    1  3 5  7
```

For the node `4`:

```text
2 < 4
6 > 4
```

The same idea continues for the other nodes.

---

## Searching

Because the values are organized, we do not need to check every value one by one.

For example, searching for `7`:

```text
4
↓
7 > 4
↓
Go right

6
↓
7 > 6
↓
Go right

7
↓
Found
```

---

## Tree vs Linked List

A Linked List connects each node mainly to the next node:

```text
[1] → [2] → [3]
```

A Tree allows nodes to branch:

```text
       [4]
      /   \
    [2]   [6]
```

