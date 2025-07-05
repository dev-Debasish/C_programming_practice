#include<stdio.h>

float force(int );

float force(int mass){
    float f = mass*9.8;
    return f;
}

int main(){
    int m = 45;
    printf("%0.2f",force(m));
    return 0;
}