#include<stdio.h>

int main(){
    // == >= <= > < !=
    int i = 5;
    if (i == 5)
    {
       printf(" i returns to five(5)\n");
    }
    
    // in C non zero value is consider to be true ....
    if(4){
        printf("it returns 4\n");
    }
    if(15){
        printf("it returns 15\n");
    }
//------------------------------------------------------------
    // here in the if statement the value is zero(0) so, it returns false..that's why it is not executed..
    if(0){
        printf("it does not return anything \n");
    }
//------------------------------------------------------------
    if(45){
        printf("it returns 45\n");
    }
    
    return 0;
}