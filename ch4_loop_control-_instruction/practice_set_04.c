#include <stdio.h>

int main()
{
// q-1
    // int n = 5;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d X %d = %d\n",n,i+1,n*(i+1));
    // }

//---------------------------------------------------------------------------------------

// q-2
    // int n = 10;
    // for (int i = 10; i ; i--)
    // {
    //     printf("%d X %d = %d\n",n,i,n*i);
    // }

//---------------------------------------------------------------------------------------

// q-- 5 & 6

// using for loop
    // int sum = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d\t",i);
    //     sum = sum+i;
    // }
    // printf("\n%d",sum);

// using while loop

    // int i = 1;
    // int sum = 0;
    // while (i<=10)
    // {
    //     printf("%d\t",i);
    //     sum = sum+i;
    //     i++;
    // }
    // printf("\n%d",sum);

// using do-while loop

    // int i = 1;
    // int sum = 0;
    // do
    // {
    //     printf("%d\t",i);
    //     sum = sum+i;
    //     i++;
    // } while (i<=10);
    // printf("\n%d",sum);

//------------------------------------------------------------------------------------------

// q-7
    // int n = 8;
    // int sum = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d X %d = %d\n",n,i+1,n*(i+1));
    //     sum = sum+(n*(i+1));
    // }
    // printf("%d\n",sum);

//---------------------------------------------------------------------------------------

// q-8

// factorial:
// 3! = 3x2x1;
//0! = 1;
//1! = 1;
    // int product = 1;
    // int n = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     product *= i;
    // }
    // printf("%d",product);
    
//----------------------------------------------------------------------------------------

// q-9

// using while loop
    // int product = 1;
    // int n = 9;
    // int i = 1;
    // while (i<=n)
    // {
    //     product *= i;
    //     i++;
    // }
    // printf("%d",product);

// --------------------------------------------------------------------------------

// q- 10 & 11
    int n = 5;
    int not_prime = 0;

    if( n == 0 || n == 1){
        not_prime = 1;
    }
    else{
    // FOR LOOP

        // for (int i = 2; i < n; i++)
        // {
        //     if (n % i == 0 && n != 2)
        //     {
        //         not_prime = 1;
        //         break;
        //     }
        //     else{
        //         not_prime = 0;
        //     } 
        // }

    // WHILE LOOP 
        // int i = 2;
        // while (i < n)
        // {
        //     if (n % i ==0 && n!= 2)
        //     {
        //         not_prime = 1;
        //         break;
        //     }
        //     else{
        //         not_prime = 0;
        //     }
        //    i++; 
            
        // }
        
    // DO-WHILE LOOP
        int i = 2;
        do
        {
            if (n % i ==0 && n!= 2)
            {
                not_prime = 1;
                break;
            }
            else{
                not_prime = 0;
            }
           i++; 
        } while (i < 2);
        
    }
    if(not_prime){
        printf("%d is not a prime number\n",n);
    }
    else{
        printf("%d is a prime number\n",n);
    }

//--------------------------------------------------------------

    return 0;
}