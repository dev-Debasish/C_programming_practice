#include <stdio.h>

int main() {
    int arr[3][2] = {
        {1, 2},
        {4, 5},
        {7, 8}
    };

    int *ptr = &arr[0][0];  // Initialize the pointer to the first element

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%p ", (void*)ptr);  // Print the address pointed to by ptr
            ptr++;  // Move the pointer to the next element
        }
        printf("\n");
    }

    return 0;
}
