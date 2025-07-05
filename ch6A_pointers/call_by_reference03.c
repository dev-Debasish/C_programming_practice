#include<stdio.h>

int sum(int* ,int* );

int sum (int* a,int* b){
    *a = 10;
    *b = 12;
    return (*a + *b);
}

int main(){
    // in function call we all are doing function call all the time it is same as ordinary function defination that we are discuss before.
    int x = 4;
    int y = 5;
    printf("%d\n",sum(&x,&y));
    printf("X=%d,Y=%d",x,y);
    return 0;
}