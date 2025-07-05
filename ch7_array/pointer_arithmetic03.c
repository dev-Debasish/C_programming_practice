#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = &arr[4];  // Point to the last element of the array

    printf("Original pointer address: %p\n", (void*)ptr);
    printf("Value at original pointer: %d\n", *ptr);

    ptr = ptr - 2;  // Move the pointer two elements back

    printf("New pointer address: %p\n", (void*)ptr);
    printf("Value at new pointer: %d\n", *ptr);

    return 0;
}
