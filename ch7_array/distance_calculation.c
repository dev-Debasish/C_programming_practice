#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *start = &arr[0];
    int *end = &arr[4];

    // Calculate the number of elements between start and end
    int distance = end - start;

    printf("Number of elements between start and end: %d\n", distance);

    return 0;
}
