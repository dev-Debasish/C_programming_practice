#include <stdio.h>
#include <stdlib.h> // must for DMA

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    // int arr[n];  // not allowed in c for DMA.

    /*  for DMA we use so many methods here malloc is one of them.
        all values are by default garbage values.
        it returns a null pointer so, we need to typecast it.
    */
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 2;
    ptr[1] = 12;
    ptr[2] = 26;

    printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);

// it still prints the values instead of we use less number..
// to prevent this --->
    // if (n >= 3)
    // {
    //     ptr[0] = 2;
    //     ptr[1] = 12;
    //     ptr[2] = 26;
    //     printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);
    // }
    // else
    // {
    //     printf("Error: n must be at least 3 to store all values.\n");
    // }

    return 0;
}