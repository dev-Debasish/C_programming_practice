#include<stdio.h>

 typedef struct employee {
    int code;
    float salary;
    char name[20];
}emp;

// if we don't use typedef in the structure then we have to initialize it in the main function--->

int main(){
/*
    typedef int bittu;
    bittu a = 25;
//or,.
    // int a = 25; // both are the same as we use typedef keyword;
    printf("%d\n",a);

*/

    emp e1;
    e1.code = 20;
    printf("%d\n",e1.code);


    // typedef struct employee emp;
    // emp e1;
    // e1.code = 20;
    // printf("%d\n",e1.code);

    return 0;
}