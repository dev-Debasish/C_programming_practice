#include<stdio.h>

int main(){
    FILE *ptr;
    // here in write mode if the file doesn't exist it creates the file first then write the content on it;
    // if there is any content in the file and then we call the write mode then it removes all the content from the file And add the new content in it.(content will be overwritten)
    // it is a problem to overcome this we use append(a) mode that add the value next to the previous one .( at the end of the file )
    ptr = fopen("bittu3.txt","w");
    int num = 459;

    // in write mode we use only the fprintf(). it is used for both write mode and printing the file.

    fprintf(ptr,"%d",num);

    fclose(ptr); // used to colse the file.
    return 0;
}