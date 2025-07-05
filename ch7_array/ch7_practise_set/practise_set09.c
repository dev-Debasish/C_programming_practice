#include <stdio.h>

int main() {
    int arr[2][3][2] = {
        {
            {1, 2}, 
            {3, 4}, 
            {5, 6}
        },
        {
            {7, 8}, 
            {9, 10}, 
            {11, 12}
        }
    };

    // Using a pointer to the first element
    int *ptr = &arr[0][0][0];

    // Print the elements using the pointer
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                // printf("%u\t",ptr);
                // ptr++;
                printf("%u\t",&arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    

    
    // for (int i = 0; i < 2 * 3 * 2; i++) {
    //     printf("%d ", *(ptr + i));
    // }

    return 0;
}
