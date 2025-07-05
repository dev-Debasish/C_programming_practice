#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];  
};

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    e1.code = 101;
    e1.salary = 101.025;
    strcpy(e1.name,"debasish");

    printf("%d\n",(*ptr).code);
    printf("%.2f\n",(*ptr).salary);
    printf("%s\n",(*ptr).name);

// OR....
    printf("%d\n",ptr->code);
    printf("%.2f\n",ptr->salary);
    printf("%s\n",ptr->name);



    return 0;
}