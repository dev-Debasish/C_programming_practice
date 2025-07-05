#include<stdio.h>

int main(){

    // char st[7] = {'b','i','t','t','u','\0'}; // [\0] is must use here.
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%c\n",st[i]);   // we used loop for printing the full string using %c
    // }
    
    char st[] = "bittu";  // in this C adds a null character automatically
    printf("%c",st[0]);  // it prints only one character
    printf("%s",st);    // it prints the fulll string using %s


    return 0;
}