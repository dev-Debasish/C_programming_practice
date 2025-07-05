#include <stdio.h>

int main() {
    // Declare some integer variables
    int a = 5, b = 10;
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Declare pointers and initialize them
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &a;
    int *p4 = NULL;
    int *p5 = &arr[1];  // Points to the second element in arr
    int *p6 = &arr[3];  // Points to the fourth element in arr

    // Equality and Inequality comparisons
    if (p1 == p3) {
        printf("p1 and p3 point to the same location.\n");
    } else {
        printf("p1 and p3 point to different locations.\n");
    }

    if (p1 != p2) {
        printf("p1 and p2 point to different locations.\n");
    } else {
        printf("p1 and p2 point to the same location.\n");
    }

    // Comparison with NULL
    if (p4 == NULL) {
        printf("p4 is a null pointer.\n");
    } else {
        printf("p4 is not a null pointer.\n");
    }

    // Relational comparisons within an array
    if (p5 < p6) {
        printf("p5 points to an earlier element in the array than p6.\n");
    } else if (p5 > p6) {
        printf("p5 points to a later element in the array than p6.\n");
    } else {
        printf("p5 and p6 point to the same element in the array.\n");
    }

    // Comparing pointers to array elements
    int *p7 = &arr[0];
    int *p8 = &arr[4];

    if (p7 < p8) {
        printf("p7 points to an earlier element in the array than p8.\n");
    } else if (p7 > p8) {
        printf("p7 points to a later element in the array than p8.\n");
    } else {
        printf("p7 and p8 point to the same element in the array.\n");
    }

    return 0;
}
