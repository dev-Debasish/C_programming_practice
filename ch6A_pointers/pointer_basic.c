#include<stdio.h>

int main(){
    int i = 54;
//this is wrong as we need to type cast it from integer to pointer..
//it gives us same answer but it throws a warning ..,

    // int j = &i;

/*
    pointer_basic.c:5:13: warning: initialization of 'int' from 'int *' makes integer from pointer without a cast [-Wint-conversion]
    5 |     int j = &i;
      |             ^
    the address of i is 000000F1755FFB08
    the address of i is 00000000755FFB08
*/
 
    int* j = &i; //int *j = &i;  both are the same.
//here j is an integer pointer that pointing to i;

    printf("the address of i is %p\n",&i);  // address of operator(&)
    printf("the address of i is %p\n",j);
    printf("the address of i is %u\n",&i);
    printf("the address of i is %u\n",j);
//--------------------------------------------------------------------
    printf("the Address if J is %p\n",&j);
    printf("the Address if J is %u\n",&j);
//------------------------------------------------------------------------
// %p is the perfect formate spaceifier for the pointer ....but we are also use the %u(unsigned int) for that...

//------------------------------------------------------------------------------------
    // value at address operator(*)-->
    // for this we have to specifies the (%d) formate specifier 
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);  
    printf("the value of i is %d\n",*(&i));
//------------------------------------------------------------------------------

    // declearing pointers

    int x = 10;
    int* in_pointer = &x;

    char a = 'A';
    char* ch_pointer = &a;
    
    float f = 10.45;
    float* fl_pointer = &f;
    


    return 0;
}