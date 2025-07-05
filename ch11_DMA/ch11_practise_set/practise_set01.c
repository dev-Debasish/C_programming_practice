#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=6;
    int *ptr;
    ptr = (int *) malloc(n * sizeof(int));
    ptr[0] = 20;
    ptr[1] = 21;
    ptr[2] = 22;
    ptr[3] = 23;
    ptr[4] = 24;
    ptr[5] = 25;

    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
    printf("%d\n",ptr[4]);
    printf("%d\n",ptr[5]);
    return 0;
}