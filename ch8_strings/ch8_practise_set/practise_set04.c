#include<stdio.h>

char *slice(char str[], int m, int n);

char *slice(char str[], int m, int n){
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';

    return str;
}

int main(){
    char str[] = "hii, bittu! how are you";
    printf("%s",slice(str,2,9)); // here last index(9) is included
    return 0;
}