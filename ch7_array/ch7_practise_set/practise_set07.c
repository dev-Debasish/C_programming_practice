#include<stdio.h>

int main(){
    int arr[3][10];
    int mul[] = {2,7,9};   //use this
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j+1);    // better option 
        } 
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d X %d = %d\n",mul[i],(j+1),arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}