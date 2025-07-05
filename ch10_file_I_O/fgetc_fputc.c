#include<stdio.h>

int main(){

/*
    // we use fgetc() & fputc() to read and write (a) character from the file

    // in read mode we use only fgetc() & rest is same as the read mode in fscanf()

    // in write mode and append mode we use fputc() & rest is same as the read mode in fprintf()

*/
    FILE *ptr;

    // ptr = fopen("bittu4.txt","r");
    // char c = fgetc(ptr); // used to read a character from the file.
    // printf("%c",c);

    // ptr = fopen("bittu4.txt","w");
    ptr = fopen("bittu4.txt","a");
    fputc('a',ptr);

    fclose(ptr);
    return 0;
}