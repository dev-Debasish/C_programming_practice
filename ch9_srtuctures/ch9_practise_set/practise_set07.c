#include<stdio.h>

struct complexNumber{
    int real;
    int imaginary;
};

int main(){
    struct complexNumber num = {4,5};
    printf("COMPLEX NUMBER = %d + %di\n",num.real,num.imaginary);
    return 0;
}