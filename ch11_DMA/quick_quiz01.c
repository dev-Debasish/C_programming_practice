#include <stdio.h>
#include<stdlib.h> // must for DMA

int main()
{
    float n = 5.0;
    float *ptr;
    // float arr[n];  // not allowed in c for DMA.

/*  for DMA we use so many methods here malloc is one of them.
    all values are by default garbage values.
    it returns a null pofloater so, we need to typecast it.
*/
    ptr = (float *)malloc(n * sizeof(float));
    ptr[0] = 2.5252;
    ptr[1] = 12.025;
    ptr[2] = 26.1252;
    ptr[3] = 26562.1252;
    ptr[4] = 265285.1252;

    printf("%.2f %.2f %.2f %.2f %.2f\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);
    return 0;
}