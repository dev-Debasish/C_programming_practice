#include<stdio.h>

int main(){
    // WE CAN DECLEAR STRING USING POINTERS.
    // WHEN WE DEFINED USING char str[] = "bittu"; .WE CANN'T REINITIALISED IT ..
    char str[10] = "baita";
    puts(str);
    // char str[10] = "kusumda";  // it throws as it is not possible
    // puts(str);


    // BUT A STRING USING POINTERS CAN BE REINITALIZED;
    char *ptr = "bittu";
    puts(ptr);
    printf("%s\n",ptr);
    ptr = "abhi";
    puts(ptr);
    printf("%s",ptr);
    return 0;
}