#include<stdio.h>

int print_strlen(char str[]);

int print_strlen(char str[]){
    int i = 0;
    char c = str[0];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    int count = i-1;
    return count;
}


int main(){
    char str[] = "debasish is a good boy";
    printf("the length of the string is %d\n",print_strlen(str));
    
    return 0;
}