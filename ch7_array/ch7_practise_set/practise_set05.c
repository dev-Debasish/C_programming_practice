#include<stdio.h>

void print_array(int arr[], int n);
void reverse_array(int arr[], int n);


void print_array(int arr[], int n){
    // n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void reverse_array(int arr[], int n){
    // n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;     // Initialize start pointer
    int end = (n-1);   // Initialize end pointer

    while (start < end)
    {
        // Swap the elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

         // Move the pointers towards the center
        start++;
        end--;
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);    // Calculate the size of the array

    print_array(arr,size);       // before reversing, print the array
    reverse_array(arr,size);     // reverse the array
    print_array(arr,size);       // after reversing, print the array

    return 0;
}



/*
WHY USE THE [int start = 0]; INSTEAD OF [int *start = 0];???
---->
     If we used int *start = 0;, start would be a pointer to an integer, but in this situation, we don't need a pointer. We're just tracking indices (positions) within the array, so simple integer variables are sufficient.

------>
    This declares a pointer to an integer. The variable start is a pointer that can hold the address of an integer variable.
    The pointer start is initialized to 0 (or NULL, which typically represents a null pointer in C). This means it currently doesn't point to any valid memory location.

*/

// ANOTHER WAY --->>

/*
void reverse_array(int arr[],int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
*/