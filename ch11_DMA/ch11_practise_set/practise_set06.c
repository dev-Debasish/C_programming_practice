#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;

    printf("..............before using realloc...........\n");

    ptr = (int *)calloc(n , sizeof(int));

    printf("INPUT =\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("OUTPUT =\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    printf("..............After using realloc...........\n");
    n = 10;
    ptr = (int *)realloc(ptr, n * sizeof(int));

    printf("INPUT =\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("OUTPUT =\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}