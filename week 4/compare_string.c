#include <stdio.h>
#include <string.h>

int main(void)
{
    char *word1 = "hello";
    char *word2 = "hello";

    // strcmp returns 0 if strings are equal
    if (strcmp(word1, word2) == 0)
    {
        printf("Strings are the same\n");
    }
    else
    {
        printf("Strings are different\n");
    }

    return 0;
}
