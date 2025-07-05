#include<stdio.h>

int main(){

// integer arithmetic

    int arr[4] = {4,5,6,7};
//we do that, only in the one dimentionl array ;
    int *ptr = arr;
// or.
    // int *ptr = &arr[0];

    for (int i = 0; i < 4; i++)
    {
        printf("%u\n",ptr);
        ptr++;
    }


// character arithmetic

    char c = 'A';
    char *ptr2 = &c;
    printf("%u\n",ptr2);
    ptr2++;
    printf("%u\n",ptr2);
    return 0;
}