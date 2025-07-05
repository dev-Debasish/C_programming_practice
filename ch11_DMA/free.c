#include <stdio.h>
#include<stdlib.h> // must for DMA

int main()
{
    int n = 2;
    int *ptr;

    ptr = (int *)malloc(n * sizeof(int));
    // ptr = (int *)calloc(n , sizeof(int));

    ptr[0] = 245;
    free(ptr);  // here we use free function that's why it returns the garbage value.
    printf("%d\n",ptr[0]);
    return 0;
}