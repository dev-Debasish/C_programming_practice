#include<stdio.h>

int sum(int ,int );

int sum (int a,int b){
    int c = a+b;
    return c;
}

int main(){
    // in function call we all are doing function call all the time it is same as ordinary function defination that we are discuss before.
    int x = 4;
    int y = 5;
    printf("%d\n",sum(x,y));
    return 0;
}