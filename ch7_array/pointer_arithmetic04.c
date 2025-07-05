#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    int *ptr1 = &arr[4];  // Points to the last element (50)
    int *ptr2 = &arr[0];  // Points to the first element (10)

    // Subtracting the two pointers
    int difference = ptr1 - ptr2;

    printf("Pointer 1 address: %p\n", (void*)ptr1);
    printf("Pointer 2 address: %p\n", (void*)ptr2);
    printf("Difference (number of elements): %d\n", difference);

    return 0;
}
