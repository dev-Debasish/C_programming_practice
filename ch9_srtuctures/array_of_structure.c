#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[20];  // Defined Here
};

int main(){
    struct employee facebook[3];
    
    // facebook[0].code = 100;
    // facebook[1].code = 101;
    // facebook[2].code = 102;
    // facebook[3].code = 103;
    // facebook[4].code = 104;
    // facebook[5].code = 105;
    // facebook[6].code = 106;

    for (int i = 0; i < 3; i++)
    {
        printf("facebook[%d].code = ",i);
        scanf("%d",&facebook[i].code);
        printf("facebook[%d].salary = ",i);
        scanf("%f",&facebook[i].salary);
        printf("facebook[%d].name = ",i);
        scanf("%s",&facebook[i].name);
    }
    
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",facebook[i].code);
        printf("%.2f\n",facebook[i].salary);
        printf("%s\n",facebook[i].name);
    }
    
    return 0;
}