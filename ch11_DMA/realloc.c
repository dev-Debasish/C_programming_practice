#include <stdio.h>
#include <stdlib.h> // must for DMA

int main()
{
    int n = 5;
    int *ptr;

    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 2;
    ptr[1] = 12;
    ptr[2] = 26;

    printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);

    n = 10;
    ptr = (int *) realloc(ptr, n * sizeof(int));

/*
    first we can store 5 integers now using realloc() function we are able to allocate the  10 integers.
    watch the practise sets for full understandings............
 */

    return 0;
}