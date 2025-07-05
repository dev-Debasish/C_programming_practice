#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("double.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    fclose(ptr); // we have to do this as we need this pointer to write mode as well

    ptr = fopen("double.txt","w");
    fprintf(ptr,"%d",2*num);
    fclose(ptr);
    return 0;
}