#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Allocate an Array Using malloc
    int *list = malloc(3 * sizeof(int));

    if (list == NULL){
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    printf("befor resizing: \n");

    for(int i = 0; i < 3; i++){
        printf("%i\n", list[i]);
    }

    // Create a Larger Array
    int *tmp = malloc(4 * sizeof(int));

    if(tmp == NULL){
        free(list);
        return 1;
    }

    // Copy Old Values to the New Array
    for (int i = 0; i < 3; i++)
    {
           tmp[i] = list[i];
        }

    free(list);

    // Add a New Value
    tmp[3] = 4;

    // Make list Point to the New Array
    list = tmp;

    printf("after resizing: \n");

    for(int i = 0; i < 4; i++){
        printf("%i\n", list[i]);
    }

    // Resize Using realloc
    // int *tmp = realloc(list, 4 * sizeof(int));

    free(list);


}


