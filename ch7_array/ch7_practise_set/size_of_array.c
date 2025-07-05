#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // An array of 5 integers

    // Calculate the size of the array
    int total_size = sizeof(arr);                // Total size in bytes
    int element_size = sizeof(arr[0]);           // Size of one element in bytes
    int num_elements = total_size / element_size; // Number of elements in the array

    // Print the sizes and number of elements
    printf("Total size of the array in bytes: %d\n", total_size);
    printf("Size of one element in bytes: %d\n", element_size);
    printf("Number of elements in the array: %d\n", num_elements);

    return 0;
}
