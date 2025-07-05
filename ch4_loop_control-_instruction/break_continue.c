#include<stdio.h>

int main(){
    // BREAK STATEMENT
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",i);
        if(i==5){
            break;
        }
    }
    printf("-----------------\n");

/*

for (int j = 0; j < 10; j++)
    {
        printf("%d\n",j);
        if(j==5){
            continue;
        }
        // here the problem occure as the (print) statement is before the (continue) instruction
    }

Why continue Has No Effect Here:
Since there's no additional code after the printf statement and before the loop increments j, the continue statement doesn't alter the loop's behavior. The loop would behave the same way even without continue.

*/
    //CONTINUE STATEMENT
    // after this the solution should be---->
    int j;
    for ( j = 0; j < 10; j++)
    {
        if (j == 5)
        {
            continue;
        }
        printf("%d\n",j);
    }
    


    
    
    return 0;
}