#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age: ");

    // scanf needs the address of age
    scanf("%i", &age);

    printf("Your age is: %i\n", age);

    return 0;
}
