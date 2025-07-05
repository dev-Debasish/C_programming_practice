#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[20];  // Defined Here
};

int main(){
    struct employee xyz = {101,45.236,"xyz"};
    struct employee abc = {102,48.286,"abc"};
    struct employee mno = {0};      // all element are set to 0 and the string set remain empty;


    printf("%d, %.2f, %s\n",xyz.code,xyz.salary,xyz.name);
    printf("%d, %.2f, %s\n",abc.code,abc.salary,abc.name);
    printf("%d, %.2f, %s\n",mno.code,mno.salary,mno.name);


    return 0;
}