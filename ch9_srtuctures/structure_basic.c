#include<stdio.h>
#include<string.h>
// we have to creat the structure in outside of the main();
struct employee
{
    int code;
    float salary;
    char name[20];  // Defined Here
};


int main(){
    struct employee e1,e2;
    e1.code = 1;
    e2.code = 2;
    e1.salary = 102.25;
    e2.salary = 100.25;
    // we have to do this as it is a string so, we can't go through like that e1.name = "Debasish"; e2.name = "Bittu";
    // otherwise we need to define in the struct variable.
    strcpy(e1.name,"Debasish");
    strcpy(e2.name,"Bittu");


    printf("%d , %.2f , %s\n",e1.code,e1.salary,e1.name);
    printf("%d , %.2f , %s\n",e2.code,e2.salary,e2.name);
    
    return 0;
}