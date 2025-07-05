#include<stdio.h>

int main(){

    // we can use (strlen) function instead of this
    char str[] = "bittu is a  good boy!";
    int size = sizeof(str)/sizeof(str[0]); // same as array size
    printf("%d\n",size);
    
    return 0;
}