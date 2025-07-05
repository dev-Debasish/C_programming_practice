#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    printf("VALUE = %d\n",*ptr);
    printf("ADDRESS = %u\n",ptr);
    ptr = ptr+2;
    printf("VALUE = %d\n",*ptr);
    printf("ADDRESS = %u\n",ptr);
    return 0;
}