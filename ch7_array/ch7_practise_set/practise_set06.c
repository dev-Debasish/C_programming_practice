#include <stdio.h>

int count(int a[], int n);

int count(int a[], int n)
{
    int no_of_positive_integers = 0;
    for (int i = 0; i < n; i++) // for loop is most important 
    {
        if (a[i] > 0)
        {
            no_of_positive_integers++;
        }
        
    }
    return no_of_positive_integers;
}

int main()
{
    int arr[] = {1, 2, 3, -4, -5, -6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("the no of integer pointers are %d\n", count(arr, size));
    return 0;
}