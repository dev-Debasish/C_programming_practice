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
    struct employee e1,e2,e3;

    printf("Enter the code of the employee:");
    scanf("%d",&e1.code);
    printf("Enter the salary of the employee:");
    scanf("%f",&e1.salary);
    printf("Enter the name of the employee:");
    scanf("%s",&e1.name);

    printf("%d , %.2f , %s\n",e1.code,e1.salary,e1.name);

    printf("Enter the code of the employee:");
    scanf("%d",&e2.code);
    printf("Enter the salary of the employee:");
    scanf("%f",&e2.salary);
    printf("Enter the name of the employee:");
    scanf("%s",&e2.name);

    printf("%d , %.2f , %s\n",e2.code,e2.salary,e2.name);

    printf("Enter the code of the employee:");
    scanf("%d",&e3.code);
    printf("Enter the salary of the employee:");
    scanf("%f",&e3.salary);
    printf("Enter the name of the employee:");
    scanf("%s",&e3.name);

    printf("%d , %.2f , %s\n",e3.code,e3.salary,e3.name);
    
    return 0;
}