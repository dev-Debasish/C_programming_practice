#include<stdio.h>

int factorial(int);

int factorial(int a){
    if(a == 0 || a == 1){   // Base condition
        return 1;
    }
    return a * factorial(a-1);
}

int main(){
    int x= 0;
    int y = factorial(x);
    printf("%d",y);
    return 0;
}