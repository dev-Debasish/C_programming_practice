#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("salary.txt", "w");
    char name1[20],name2[20];
    int salary1,salary2;

    printf("Enter the name of the first Employee:");
    scanf("%s",&name1);
    printf("Enter the salary of the first Employee:");
    scanf("%d",&salary1);
    printf("Enter the name of the second Employee:");
    scanf("%s",&name2);
    printf("Enter the salary of the second Employee:");
    scanf("%d",&salary2);

    fprintf(ptr,"%s",name1);
    fprintf(ptr,"%s",", "); // here we use [%s] not [%c] for the comma(,);
    fprintf(ptr,"%d",salary1);
    fprintf(ptr,"%c",'\n');
    fprintf(ptr,"%s",name2);
    fprintf(ptr,"%s",", "); // here we use [%s] not [%c] for the comma(,);
    fprintf(ptr,"%d",salary2);

    fclose(ptr);
    return 0;
}