// #include <stdio.h>

// int main()
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = (n + 1); j > i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include<stdio.h>

int main(){
    // space print
    for (int i = 0; i < 4; i++){
        for (int j = 0;  j < i; j++){
            printf(" ");
        }
    }
    // first star print
    for (int i = 0; i < 4; i++){
        for (int j = 0;  j < i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}