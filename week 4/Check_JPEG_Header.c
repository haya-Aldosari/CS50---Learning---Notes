#include <stdio.h>

int main(int argc, char *argv[])
{
    // Check command-line argument
    if (argc != 2)
    {
        printf("Usage: ./jpeg filename\n");
        return 1;
    }

    // Open file in binary mode
    FILE *file = fopen(argv[1], "rb");

    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    unsigned char bytes[3];

    // Read first 3 bytes
    fread(bytes, 1, 3, file);

    // JPEG starts with FF D8 FF
    if (bytes[0] == 0xff &&
        bytes[1] == 0xd8 &&
        bytes[2] == 0xff)
    {
        printf("Yes, possibly a JPEG.\n");
    }
    else
    {
        printf("No.\n");
    }

    fclose(file);

    return 0;
}
