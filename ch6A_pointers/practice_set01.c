#include<stdio.h>

int main(){
    int a = 10;
    int* b = &a;
    printf("ADDRESS=%p\n",b);
    printf("ADDRESS=%u\n",b);
    printf("VALUE=%d\n",*b);
    return 0;
}