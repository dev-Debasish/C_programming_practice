#include<stdio.h>

int sum(int, int); // function prototype

int sum(int a ,int b) // function defination 
{
// if we do it here so, we don't need to print it on the main function.
    // printf("sum = %d",a+b); 

// if we return it ,, then we need to print it in the main function..
    // int c = a+b;
    // return c;
//or.
    return a+b;
} // if the return type of the sum function is <int> then we have to return it.
int main(){
    int x = 5;
    int y = 65;
    int c;
    c = sum(x,y); // function call
    printf("%d",c);
    // we directly call them not gonna hardcoded the value just like that----> sum(5,65)== it also gave the same answer as (70);

    return 0;
}