#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fptr;



    char readMe[255];

    printf("File: readMe.txt \n");

    fptr = fopen("readMe.txt", "r");

    if (fptr != NULL)
    {

        while(fgets(readMe,255,fptr) != NULL)
            printf("%s", readMe);

    }
    else
    {
        printf("Error opening file!/n");
    }

    printf("\n");

    fclose(fptr);
    return 0;
}
