#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    int *ptr1 = &arr[0];  // Points to the first element
    int *ptr2 = &arr[4];  // Points to the last element

    // Subtracting ptr1 from ptr2
    int difference = ptr1 - ptr2;

    printf("Difference (number of elements): %d\n", difference);  // Will be negative

    return 0;
}
