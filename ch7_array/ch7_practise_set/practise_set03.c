#include<stdio.h>

int main(){
    int arr[10];
    // Store the multiplication results in the array
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i+1);
    }

    // Print the multiplication table using the values stored in the array
    for (int i = 0; i < 10; i++) {
        printf("5 X %d = %d\n", (i + 1), arr[i]);
    }
    
    return 0;
}