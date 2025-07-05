#include<stdio.h>

int main(){
    char str[] = "baita";
    char *ptr  = str; // &str[0];

    for (int i = 0; i < 6; i++)
    {
        // printf("%u\t",&str[i]);
        printf("%u\t",ptr);         // same as array [character pointer]
        ptr++;
    }
    
    return 0;
}