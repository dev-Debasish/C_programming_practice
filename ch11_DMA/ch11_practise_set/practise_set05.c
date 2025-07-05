#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;

    printf("..............before using realloc...........\n");

    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    printf("OUTPUT =\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    printf("..............After using realloc...........\n");
    n = 15;
    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    printf("OUTPUT =\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}