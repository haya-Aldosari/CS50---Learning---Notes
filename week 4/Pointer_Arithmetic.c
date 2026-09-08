#include <stdio.h>

int main(void)
{
    char *s = "HI!";

    // Using array indexes
    printf("s[0] = %c\n", s[0]);
    printf("s[1] = %c\n", s[1]);
    printf("s[2] = %c\n", s[2]);

    printf("\n");

    // Using pointer arithmetic
    printf("*(s + 0) = %c\n", *(s + 0));
    printf("*(s + 1) = %c\n", *(s + 1));
    printf("*(s + 2) = %c\n", *(s + 2));

    return 0;
}
