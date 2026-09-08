#include <stdio.h>

int main(void)
{
    char *s = "HI!";

    printf("String: %s\n", s);

    // s points to the first character
    printf("First character: %c\n", *s);

    // Same address
    printf("s address: %p\n", (void *) s);
    printf("s[0] address: %p\n", (void *) &s[0]);

    return 0;
}
