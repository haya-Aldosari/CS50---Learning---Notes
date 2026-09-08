#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *original = "Haya";

    // +1 for the null character \0
    char *copy = malloc(strlen(original) + 1);

    // Check if memory allocation failed
    if (copy == NULL)
    {
        return 1;
    }

    strcpy(copy, original);

    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);

    // Release allocated memory
    free(copy);

    return 0;
}
