#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Open file for writing
    FILE *file = fopen("phonebook.csv", "w");

    if (file == NULL)
    {
        return 1;
    }

    string name = get_string("Enter your name: ");
    string phone = get_string("Enter phone number: ");

    // Write data to the file
    fprintf(file, "%s,%s\n", name, phone);

    // Close the file
    fclose(file);

    return 0;
}
