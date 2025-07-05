#include<stdio.h>

typedef struct complexNumber{
    int real;
    int imaginary;
}complex;

int main(){
    complex num = {4,5};
    printf("COMPLEX NUMBER = %d + %di\n",num.real,num.imaginary);
    return 0;
}