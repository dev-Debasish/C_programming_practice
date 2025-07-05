#include <stdio.h>

int main()
{
//---------------------------------------------------------------------------------
    // if-else statement

    // int a = 15;
    // if (a > 18){
    //     printf("you can drive!");
    // }
    // else{
    //     printf("You cannot drive! as you are too young to do that.");
    // }

// --------------------------------------------------------------------------------
     // if else-if statement

    // int age =65;
    // if (age>60){
    //     printf("you can drive but you are a senior citizen!");
    // }
    // else if (age > 45){
    //     printf("you are an Adult & you also can drive!");
    // }
    // else if (age>18)
    // {
    //     printf("you can Drive!");
    // }
    // else{
    //     printf("you can not drive as you are too young for that!");
    // }
    // return 0;

//----------------------------------------------------------------------------------
    // switch statement 

    int a;
    printf("Enetr a: ");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("Returns 1!");
            break;
        
        case 2:
            printf("Returns 2!");
            break;
        
        case 3:
            printf("Returns 3!");
            break;
        
        case 4:
            printf("Returns 4!");
            break;
        
        default:
            printf("Nothing Matched!");

    return 0;
    }

}