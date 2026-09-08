#include <stdio.h>

int main(void)
{
    int n = 50;

    // p stores the address of n
    int *p = &n;

    printf("Value of n: %d\n", n);
    printf("Address of n: %p\n", (void *) &n);
    printf("Address stored in p: %p\n", (void *) p);
    printf("Value using *p: %d\n", *p);

    // Change n using the pointer
    *p = 100;

    printf("New value of n: %d\n", n);

    return 0;
}

