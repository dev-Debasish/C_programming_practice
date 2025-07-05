#include <stdio.h>

int main()
{
    // WHILE LOOP
    // this block keeps executing as long as the condition is true
    int i = 0;
    while (i < 10)
    {
        printf("the value of i is %d\n", i);
        i++; // this is must otherwise it goes into the infinite loop
    }
    // quick quiz-01 ---->
    int i1 = 0;
    while (i1 <= 20)
    {
        if (i1 >= 10)
        {
            printf("%d\n", i1);
        }
        i1++;
    }
    //-------------------------------------------------------------------------------
    // DO-WHILE LOOP
    // quick quiz 02
    int j = 1, n;
    printf("INPUT : ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", j);
        j++;
    } while (j <= n);
    //----------------------------------------------------------------------------------
    // FOR LOOP
    int k, n1;
    printf("Enter n1:");
    scanf("%d", &n1);
    for (int k = 0; k < n1; k++)
    {
        printf("%d\n", k + 1); // here k++ is not used..
    }
    // decrementing FOR LOOP
    for (int m = 5; m; m--)
    {
        printf("---------");
        printf("%d", m);
        printf("\n");
    }
    return 0;
}