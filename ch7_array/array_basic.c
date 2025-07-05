#include<stdio.h>

int main(){
// SYNTAX------>
    int marks[5]; // integer array
    char name[10]; // character array or. string
    float percentile[12];  // float array

    // marks[0] = 12;
    // marks[1] = 15;
    // marks[2] = 10;
    // marks[3] = 8;
    // marks[4] = 78;

    // printf("%d\n",marks[0]);
    // printf("%d\n",marks[1]);
    // printf("%d\n",marks[2]);
    // printf("%d\n",marks[3]);
    // printf("%d\n",marks[4]);

// --------------------------------------------------------------

    // starting index = 0;
    // ending index = n-1 // here (n) is the size of the array

    // printf("INPUT=\n");
    // scanf("%d",&marks[0]);
    // scanf("%d",&marks[1]);
    // scanf("%d",&marks[2]);
    // scanf("%d",&marks[3]);
    // scanf("%d",&marks[4]);

    // printf("OUTPUT=\n");
    // printf("%d\n",marks[0]);
    // printf("%d\n",marks[1]);
    // printf("%d\n",marks[2]);
    // printf("%d\n",marks[3]);
    // printf("%d\n",marks[4]);

//------------------------------------------------------------------

    // initialization of an array
    // int cgpa[]= {1,2,3,4};
    int cgpa[4];
    
    for (int  i = 0; i < 4; i++)
    {
        printf("input:");
        scanf("%d",&cgpa[i]);
    }

    for (int  i = 0; i < 4; i++)
    {
        printf("output=");
        printf("%d\t",cgpa[i]);
    }
    

    return 0;
}