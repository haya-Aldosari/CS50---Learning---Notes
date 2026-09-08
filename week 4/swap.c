#include <stdio.h>

// Swap two values using their addresses
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 1;
    int y = 2;

    printf("Before swap:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Send addresses
    swap(&x, &y);

    printf("\nAfter swap:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
