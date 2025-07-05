#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Original pointer address: %p\n", (void*)ptr);
    printf("Value at original pointer: %d\n", *ptr);

    ptr = ptr + 2; // Move the pointer two elements ahead

    printf("New pointer address: %p\n", (void*)ptr);
    printf("Value at new pointer: %d\n", *ptr);

    return 0;
}
