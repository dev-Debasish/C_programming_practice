#include<stdio.h>

int main(){
    int arr[4] = {4,5,6,7};
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",arr[i]);
        printf("%u\n",&arr[i]);
    }

    return 0;
}