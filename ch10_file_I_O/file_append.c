#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("bittu3.txt","a");
    int num = 4587;
    // here we use only (fprintf); it is used for both write mode and printing the file.
    fprintf(ptr,"%d",num);
    fclose(ptr);

    return 0;
}