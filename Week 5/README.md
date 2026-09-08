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

## video 4: Create Tree in C

A tree can be created in C using a `struct`.

Each node contains:

```text
Value
Left pointer
Right pointer
```

---

## Node Structure

```c
typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;
```

Here:

```c
int number;
```

stores the value.

And:

```c
struct node *left;
struct node *right;
```

store the addresses of the left and right children.

---

## Starting the Tree

At first, the tree is empty:

```c
node *tree = NULL;
```

So:

```text
tree
 ↓
NULL
```

---

## Creating a Node

Memory for a node is allocated using:

```c
node *n = malloc(sizeof(node));
```

Then its values can be initialized:

```c
n->number = 2;
n->left = NULL;
n->right = NULL;
```

The new node can become the root:

```c
tree = n;
```

Now:

```text
tree
 ↓
[ 2 ]
```

---

## Adding a Left Child

Another node can be created:

```c
n = malloc(sizeof(node));
```

Then:

```c
n->number = 1;
n->left = NULL;
n->right = NULL;
```

It can be connected to the left side:

```c
tree->left = n;
```

Now:

```text
    2
   /
  1
```

---

## Adding a Right Child

Another node can be created:

```c
n = malloc(sizeof(node));
```

Then:

```c
n->number = 3;
n->left = NULL;
n->right = NULL;
```

And connected using:

```c
tree->right = n;
```

The tree becomes:

```text
    2
   / \
  1   3
```

---

## Accessing Nodes

The root value can be accessed using:

```c
tree->number
```

The left child:

```c
tree->left->number
```

The right child:

```c
tree->right->number
```

So:

```text
tree->left->number   → 1

tree->number         → 2

tree->right->number  → 3
```

---

## video 5: Search in Binary Tree

In a **Binary Search Tree**, values are organized so that:

```text
Smaller values → Left

Larger values → Right
```

Example:

```text
        4
       / \
      2   6
     / \ / \
    1  3 5  7
```

This structure allows us to choose which direction to search.

---

## Search Logic

Suppose we want to search for:

```text
7
```

Start at the root:

```text
4
```

Since:

```text
7 > 4
```

move to the right.

Now:

```text
6
```

Since:

```text
7 > 6
```

move to the right again.

Then:

```text
7
```

The value is found.

---

## Recursive Search

The search can be implemented recursively.

```c
bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    else
    {
        return true;
    }
}
```

---

## Base Case

If:

```c
tree == NULL
```

then the number does not exist in the tree:

```c
return false;
```

---

## Search Left

If the number we want is smaller than the current node:

```c
number < tree->number
```

search the left side:

```c
return search(tree->left, number);
```

---

## Search Right

If the number is larger:

```c
number > tree->number
```

search the right side:

```c
return search(tree->right, number);
```

---

## Value Found

If the number is neither smaller nor larger:

```text
number == tree->number
```

then the value was found:

```c
return true;
```

---

## video 6: Hash Tables

A **Hash Table** is a data structure used to store data in a way that makes searching faster.

It combines ideas from:

```text
Arrays
+
Linked Lists
```

---

## Hash Function

A **Hash Function** takes a value and determines where it should be stored inside the table.

For example, names can be organized based on their first letter:

```text
A → ...
B → ...
C → ...
D → ...
```

Instead of searching through every value, the program first determines the correct location.

---

## Buckets

A Hash Table contains multiple locations or **buckets**.

Conceptually:

```text
[0] → data
[1] → data
[2] → data
[3] → data
```

The hash function decides which bucket should contain each value.

---

## Collision

Sometimes two values are assigned to the same location.

This is called a:

```text
Collision
```

Instead of storing only one value in that location, a **Linked List** can be used:

```text
[0] → node → node → NULL
[1] → node → NULL
[2] → NULL
```

So multiple values can exist in the same bucket.

---

## Searching

Searching follows two main steps:

```text
Value
  ↓
Hash Function
  ↓
Find the correct bucket
  ↓
Search inside that bucket
```

This avoids searching through the entire collection from beginning to end.

---

## Structure

A Hash Table can be visualized as:

```text
Array
  ↓
[0] → Linked List
[1] → Linked List
[2] → Linked List
[3] → Linked List
```

So it uses an **array** to organize the data and **linked lists** when multiple values belong to the same location.

---

